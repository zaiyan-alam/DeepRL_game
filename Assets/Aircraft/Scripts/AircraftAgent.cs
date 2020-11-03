using System.Collections;
using System.Collections.Generic;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using UnityEngine;
  
namespace Aircraft
{
    public class AircraftAgent : Agent
    {

        [Header("Movement Parameters")]
        public float thrust = 100000f; // power that the aircraft has
        public float pitchSpeed = 100f; // these are regarding the movements i.e up n down, rotation etc.
        public float yawSpeed = 100f;
        public float rollSpeed = 100f;
        public float boostMultiplier = 2f;

        [Header("Explosion Stuff")]
        [Tooltip("The aircraft mesh that will disappear on explosion")]
        public GameObject meshObject; // we will direct which GameObject to disappers

        [Tooltip("The game object of the explosion particle effect")]
        public GameObject explosionEffect;

        [Header("Training")]
        [Tooltip("Number of steps to time out after in training")]
        public int stepTimeout = 300;
        /// to reset the agents if they don't reach from one checkpoint to another
        /// checkpoint within 300 timesteps

        public int NextCheckpointIndex { get; set; }

        // Components to keep track of
        private AircraftArea area; // each agent will know which area it belongs to
        new private Rigidbody rigidbody; // for any body to obey physics we use rigidbody
        private TrailRenderer trail;

        // When the next step timeout will be during training
        private float nextStepTimeout;

        // Whether the aircraft is frozen (intentionally not flying)
        private bool frozen = false;

        // Controls related to movements
        private float pitchChange = 0f; //related to turning the agent, which could be manual or given by neural network
        private float smoothPitchChange = 0f; //to make the turns smooth i.e no sudden turns
        private float maxPitchAngle = 45f;
        private float yawChange = 0f; // yaw is unlocked i.e 360 degrees
        private float smoothYawChange = 0f;
        private float rollChange = 0f;  //roll is locked
        private float smoothRollChange = 0f;
        private float maxRollAngle = 45f; // locked at this max angle of 45
        private bool boost;

        /// <summary>
        /// Called when the agent is first initialized
        /// </summary>
        public override void Initialize()
        {
            area = GetComponentInParent<AircraftArea>(); //agent is child of area in which the object exists
            rigidbody = GetComponent<Rigidbody>();
            trail = GetComponent<TrailRenderer>();

            // Override the max step set in the inspector
            // Max 5000 steps if training, infinite steps if racing
            MaxStep = area.trainingMode ? 5000 : 0;
        }

        /// <summary>
        /// Called when a new episode/training session begins
        /// </summary>
        public override void OnEpisodeBegin()
        {
            // Reset the velocity, position, and orientation
            rigidbody.velocity = Vector3.zero;
            rigidbody.angularVelocity = Vector3.zero;
            trail.emitting = false;
            area.ResetAgentPosition(agent: this, randomize: area.trainingMode);

            // Update the step timeout if training
            if (area.trainingMode) nextStepTimeout = StepCount + stepTimeout;
        }

        /// <summary>
        /// Read action inputs from vectorAction
        /// </summary>
        /// <param name="vectorAction">The chosen actions</param>, an array of floats

        // Academy calls the default agent action function continously at each time step
        // It makes the decisions regarding the agent's movement and then packs them in an array as floats and send them
        // thus below function converts the above sent Vector actions into agent's movement in the environment
        public override void OnActionReceived(float[] vectorAction) //overriding the agent's action which is called as part of the ML agents loop
        {
            if (frozen) return; //we won't process the following inputs if the plane is frozen

            // Read values for pitch (tilting up or down) and yaw (turning/rotating left or right)
            // roll is done about it's axis
            pitchChange = vectorAction[0]; // up or none
            if (pitchChange == 2) pitchChange = -1f; // down
            yawChange = vectorAction[1]; // turn right or none
            if (yawChange == 2) yawChange = -1f; // turn left


            // Read value for boost and enable/disable trail renderer
            boost = vectorAction[2] == 1;  //
            if (boost && !trail.emitting) trail.Clear(); //clear trhe existing trail behind  
            trail.emitting = boost;

            ProcessMovement();


            if (area.trainingMode) //this is executed only in training mode
            {
                // Small negative reward every step
                AddReward(-1f / MaxStep);

                // Make sure we haven't run out of time if training
                if (StepCount > nextStepTimeout)
                {
                    AddReward(-.5f);
                    EndEpisode();
                }


                //to ensure that we have reached next checkpoint
                Vector3 localCheckpointDir = VectorToNextCheckpoint();

                //helps in curriculum learning
                //ensures that the ml agent is passing through a checkpoint in a radius limit
                if (localCheckpointDir.magnitude < Academy.Instance.EnvironmentParameters.GetWithDefault("checkpoint_radius", 0f))
                {
                    GotCheckpoint();
                }
            }

        }


        /// <summary>
        /// Collects observations used by agent to make decisions
        /// </summary>
        /// <param name="sensor">The vector sensor</param>
        /// for Non-raycast observations
        public override void CollectObservations(VectorSensor sensor)
        {
            // Observe aircraft velocity (1 Vector3 = 3 values) i.e X,Y,Z
            sensor.AddObservation(transform.InverseTransformDirection(rigidbody.velocity));

            // Where is the next checkpoint? (1 Vector3 = 3 values)
            sensor.AddObservation(VectorToNextCheckpoint());

            // Orientation of the next checkpoint (1 Vector3 = 3 values)
            Vector3 nextCheckpointForward = area.Checkpoints[NextCheckpointIndex].transform.forward;
            sensor.AddObservation(transform.InverseTransformDirection(nextCheckpointForward));

            // Total Observations = 3 + 3 + 3 = 9
        }

        /// <summary>
        /// In this project, we only expect Heuristic to be used on AircraftPlayer
        /// </summary>
        /// <param name="actionsOut">Empty array</param>
        public override void Heuristic(float[] actionsOut)
        {
            Debug.LogError("Heuristic() was called on " + gameObject.name +
                " Make sure only the AircraftPlayer is set to Behavior Type: Heuristic Only.");
        }

        /// <summary>
        /// Prevent the agent from moving and taking actions
        /// </summary>
        public void FreezeAgent()
        {
            Debug.Assert(area.trainingMode == false, "Freeze/Thaw not supported in training");
            frozen = true;
            rigidbody.Sleep();
            trail.emitting = false;
        }

        /// <summary>
        /// Resume agent movement and actions
        /// </summary>
        public void ThawAgent()
        {
            Debug.Assert(area.trainingMode == false, "Freeze/Thaw not supported in training");
            frozen = false;
            rigidbody.WakeUp();
        }

        /// <summary>
        /// Gets a vector to the next checkpoint the agent needs to fly through
        /// </summary>
        /// <returns>A local-space vector</returns>
        private Vector3 VectorToNextCheckpoint()
        {
            Vector3 nextCheckpointDir = area.Checkpoints[NextCheckpointIndex].transform.position - transform.position;
            Vector3 localCheckpointDir = transform.InverseTransformDirection(nextCheckpointDir);
            return localCheckpointDir;
        }

        /// <summary>
        /// Called when the agent flies through the correct checkpoint
        /// </summary>
        private void GotCheckpoint()
        {
            // Next checkpoint reached, update
            NextCheckpointIndex = (NextCheckpointIndex + 1) % area.Checkpoints.Count;

            if (area.trainingMode)
            {
                AddReward(.5f);
                nextStepTimeout = StepCount + stepTimeout;
            }
        }


        // calculate and apply movement
        private void ProcessMovement()
        {
            // Calculate boost
            float boostModifier = boost ? boostMultiplier : 1f;

            // Apply forward thrust
            rigidbody.AddForce(transform.forward * thrust * boostModifier, ForceMode.Force);

            // Get the current rotation
            Vector3 curRot = transform.rotation.eulerAngles;

            // Calculate the roll angle (between -180 and 180)
            float rollAngle = curRot.z > 180f ? curRot.z - 360f : curRot.z;
            if (yawChange == 0f)
            {
                // Not turning; smoothly roll toward center
                rollChange = -rollAngle / maxRollAngle;
            }
            else
            {
                // Turning; roll in opposite direction of turn
                rollChange = -yawChange;
            }

            // Calculate smooth deltas for movement transitions
            smoothPitchChange = Mathf.MoveTowards(smoothPitchChange, pitchChange, 2f * Time.fixedDeltaTime);
            smoothYawChange = Mathf.MoveTowards(smoothYawChange, yawChange, 2f * Time.fixedDeltaTime);
            smoothRollChange = Mathf.MoveTowards(smoothRollChange, rollChange, 2f * Time.fixedDeltaTime);

            // Calculate new pitch, yaw, and roll. Clamp pitch and roll. To limit the degree of rotation or pitch i.e makes flyin
            float pitch = curRot.x + smoothPitchChange * Time.fixedDeltaTime * pitchSpeed;
            if (pitch > 180f) pitch -= 360f;
            pitch = Mathf.Clamp(pitch, -maxPitchAngle, maxPitchAngle); //this part is different than the 1.0 lecture-76

            float yaw = curRot.y + smoothYawChange * Time.fixedDeltaTime * yawSpeed;

            float roll = curRot.z + smoothRollChange * Time.fixedDeltaTime * rollSpeed;
            if (roll > 180f) roll -= 360f;
            roll = Mathf.Clamp(roll, -maxRollAngle, maxRollAngle);

            // Set the new rotation 
            transform.rotation = Quaternion.Euler(pitch, yaw, roll);
        }

        /// <summary>
        /// React to entering a trigger
        /// </summary>
        /// <param name="other">The collider entered</param>
        private void OnTriggerEnter(Collider other)
        {
            if (other.transform.CompareTag("checkpoint") &&
                other.gameObject == area.Checkpoints[NextCheckpointIndex])
            {
                GotCheckpoint();
            }
        }

        /// <summary>
        /// React to collisions
        /// </summary>
        /// <param name="collision">Collision info</param>
        private void OnCollisionEnter(Collision collision)
        {
            if (!collision.transform.CompareTag("agent"))
            {
                // We hit something that wasn't another agent
                if (area.trainingMode)
                {
                    AddReward(-1f);
                    EndEpisode();
                }
                else
                {
                    StartCoroutine(ExplosionReset()); //explosion
                }
            }
        }

        /// <summary>
        /// Resets the aircraft to the most recent complete checkpoint
        /// </summary>
        /// <returns>yield return</returns>
        private IEnumerator ExplosionReset()
        {
            FreezeAgent();

            // Disable aircraft mesh object, enable explosion
            meshObject.SetActive(false);
            explosionEffect.SetActive(true);
            yield return new WaitForSeconds(2f);

            // Disable explosion, re-enable aircraft mesh
            meshObject.SetActive(true);
            explosionEffect.SetActive(false);

            // Reset position
            area.ResetAgentPosition(agent: this);
            yield return new WaitForSeconds(1f);

            ThawAgent();
        }
    }
}