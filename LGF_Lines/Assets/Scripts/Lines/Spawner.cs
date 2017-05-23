using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {

	public GameObject line;
	public float speed;

	void Start() {
		speed = 3.5f;
		InvokeRepeating ("Spawn", 1, 0.5f);
	}
		
	void Spawn() {
		float x = Random.Range(-2.4f, 2.3f);
		Instantiate (line, new Vector3(x, 10, 0.5f), transform.rotation);
	}
}
