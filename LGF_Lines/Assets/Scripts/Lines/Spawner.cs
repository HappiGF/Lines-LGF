using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {

	public GameObject line;

	void Spawn() {
		int chance = Random.Range (1, 100);
		int lineHeight = 0;

		if (chance >= 90) {
			lineHeight = Random.Range (3, 5);
		} else if (chance >= 45) {
			lineHeight = Random.Range (2, 3);
		} else {
			lineHeight = Random.Range (0, 2);
		}

		float x = (float)(Random.Range(-2.4f, 2.3f));

		line.transform.localScale = Vector3 (0.1, lineHeight, 1);
		Instantiate (line, new Vector3(x, 10, 0.5f), transform.rotation);
	}
}
