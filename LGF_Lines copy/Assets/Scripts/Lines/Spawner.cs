using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {

	public GameObject line;
	public float speed;
    public float spawnRate;
    public float lastPos;

	void Start() {
		speed = 3.5f;
        spawnRate = 0.5f;
        lastPos = 0;
		InvokeRepeating ("Spawn", 1, spawnRate);
        InvokeRepeating("IncreaseRepeatRate", 30, 30);
        InvokeRepeating("IncreaseSpeed", 10, 10);
	}
	
    void IncreaseSpeed()
    {
        speed += 0.2f;
    }

    void IncreaseRepeatRate()
    {
        spawnRate -= 0.025f;
        CancelInvoke("Spawn");
        InvokeRepeating("Spawn", 0, spawnRate);
    }

	void Spawn() {
		float x = Random.Range(-2.4f, 2.3f);
        while (x >= lastPos - 0.4 && x <= lastPos + 0.4)
        {
            x = Random.Range(-2.4f, 2.3f);
        }
		Instantiate (line, new Vector3(x, 10, 0.5f), transform.rotation);
        lastPos = x;
    }
}
