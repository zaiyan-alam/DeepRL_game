using Cinemachine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Diagnostics;
using System.Linq;
using UnityEngine;
using Debug = UnityEngine.Debug;
using Random = UnityEngine.Random;

namespace Aircraft
{
    public class AircraftArea : MonoBehaviour
    {
        [Tooltip("The path the race will take")]
        public CinemachineSmoothPath racePath;

        [Tooltip("The prefab to use for checkpoints")]
        public GameObject checkpointPrefab;

        [Tooltip("The prefab to use for the start/end checkpoint")]
        public GameObject finishCheckpointPrefab;

        [Tooltip("If True, Training mode enabled")]
        public bool trainingMode;

        public List<AircraftAgent> AircraftAgents { get; private set; } // list of aircraft agents set in this particular aircraft area
        public List<GameObject> Checkpoints { get; private set; }  // public read-only access but write access to this class only


        /// <summary>
        /// Actions to perform when the script starts or the game starts, called before the Start function
        /// </summary>

        private void Awake()
        {
            if (AircraftAgents == null) FindAircraftAgents();   // we create this fucntion because in some cases 
        }

        private void FindAircraftAgents()
        {
            // Find all the aircraft agents in the area, which are childrens of the Aircraft Area
            AircraftAgents = transform.GetComponentsInChildren<AircraftAgent>().ToList();
            Debug.Assert(AircraftAgents.Count > 0, "No Aircraft Agents found!");
        }

        
        private void Start()
        {
            if (Checkpoints == null) CreateCheckpoints();
        }
        
        
        // Creates the check 
        // Set up the area, but we want some stuff to happen a little bit later.
        private void CreateCheckpoints()
        {
            // Create checkpoints along the race path
            Debug.Assert(racePath != null, "Race path was not set"); //if the statement is false then print the warning
            Checkpoints = new List<GameObject>(); //initializing empty list of checkpoints again, we will use Cinemachine path to get them
            
            // checks out the race path and figures out how many checkpoints are there in it
            int numCheckpoints = (int)racePath.MaxUnit(CinemachinePathBase.PositionUnits.PathUnits);

            for (int i = 0; i < numCheckpoints; i++)
            {
                // Instantiate either a checkpoint or finishline 
                GameObject checkpoint;  //new placeholder for this respective checkpoint
                if (i == numCheckpoints - 1) checkpoint = Instantiate<GameObject>(finishCheckpointPrefab);
                else checkpoint = Instantiate<GameObject>(checkpointPrefab);

                // after creating a certain checkpoint we want to set the parent, position, and rotation
                checkpoint.transform.SetParent(racePath.transform);
                checkpoint.transform.localPosition = racePath.m_Waypoints[i].position;
                checkpoint.transform.rotation = racePath.EvaluateOrientationAtUnit(i, CinemachinePathBase.PositionUnits.PathUnits); // gives the rotation at a specfic checkpoint

                // add checkpoint to the list
                Checkpoints.Add(checkpoint);
            }
        }

        // Resets the postion of an agent using it's current NextCheckpointIndex, unless randomize is True, then will pick a random checkpoint
        // the idea is that agent needs to be reset after crashing during training to a random position or to the start point
        // example if agent crashed at checkpoint 3 and crashed there, it will need to respawn there and continue the race
        // agent = the agent to reset
        // randomize = if true, will pick a new NextCheckpointIndex before reset
        public void ResetAgentPosition(AircraftAgent agent, bool randomize = false)
        {
            if (AircraftAgents == null) FindAircraftAgents();
            if (Checkpoints == null) CreateCheckpoints();

            if (randomize)
            {
                //pick a new next checkpoint at random
                agent.NextCheckpointIndex = Random.Range(0, Checkpoints.Count);
            }

            //set start position to previous checkpoint
            int previousCheckpointIndex = agent.NextCheckpointIndex - 1;
            if (previousCheckpointIndex == -1) previousCheckpointIndex = Checkpoints.Count - 1; // setting to last checkpoint index

            //we need a start position, where the agent will be reset at
            float startPosition = racePath.FromPathNativeUnits(previousCheckpointIndex, CinemachinePathBase.PositionUnits.PathUnits);

            // Convert the postion on the race path to a postion in the 3d space, returns an actual point in space
            Vector3 basePosition = racePath.EvaluatePosition(startPosition);

            //get the orientation at that position on the race path i.e the rotation we want
            Quaternion orientation = racePath.EvaluateOrientation(startPosition);

            //calculate a horizontal offset so that agents are spread out, to avoid overlapping of multiple agents
            Vector3 positionOffset = Vector3.right * (AircraftAgents.IndexOf(agent) - AircraftAgents.Count / 2f)
                * Random.Range(9f, 10f);

            //set the aircraft position and rotation
            agent.transform.position = basePosition + orientation * positionOffset;
            agent.transform.rotation = orientation;
        }
    }
}

