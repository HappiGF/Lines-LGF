using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineFormer : MonoBehaviour {

	public float lineHeight;
	private float speed;

	void Start() {
		speed = GameObject.Find ("SpawnManager").GetComponent<Spawner>().speed;
	}

	void Awake() {
		int chance = Random.Range (1, 100);
		lineHeight = 0;

		if (chance >= 90) {
			lineHeight = Random.Range (3f, 5f);
		} else if (chance >= 45) {
			lineHeight = Random.Range (2f, 3f);
		} else {
			lineHeight = Random.Range (0.5f, 1.9f);
		}

		this.gameObject.transform.localScale = new Vector3 (0.1f, lineHeight, 1f);
	}

	void Update() {
		this.gameObject.transform.Translate (Vector3.down * Time.deltaTime * speed);

		if (this.transform.position.y < -7) {
			Destroy (this.gameObject);
		}
	}
}
