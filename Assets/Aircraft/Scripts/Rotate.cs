using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;


namespace Aircraft
{
    public class Rotate : MonoBehaviour
    {
        [Tooltip("The apeed at which to rotate the checkpoint")]
        public Vector3 rotateSpeed;

        [Tooltip("Whether to randomize the start postion")]
        public bool randomize = false;

        void Start()
        {
            //randomizing the start position here
            if (randomize) transform.Rotate(rotateSpeed.normalized * UnityEngine.Random.Range(0f, 360f));
        }

        void Update()
        {
            transform.Rotate(rotateSpeed * Time.deltaTime, Space.Self);
        }
    }
}