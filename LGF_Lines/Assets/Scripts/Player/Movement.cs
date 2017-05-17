using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour {

	public float speed;
	public int radius;
	private Vector2 center;
	private float angle;

	void Start() {
		center = transform.position;
	}

	void Update() {
		foreach (Touch touch in Input.touches) {
			print (touch.position);
			if (touch.phase != TouchPhase.Ended) {
				if (touch.position.x > 800) {
					RotateClockwise ();
				} else if (touch.position.x < 800) {
					RotateCClockwise ();
				}
			}
		}

	}

	void RotateClockwise () {
		angle += speed * Time.deltaTime;

		Vector2 offset = new Vector2 (Mathf.Sin(angle), Mathf.Cos(angle)) * radius;
		transform.position = center + offset;
	}

	void RotateCClockwise() {
		angle += speed * Time.deltaTime;

		Vector2 offset = new Vector2 (Mathf.Sin(angle), Mathf.Cos(angle)) * radius;
		transform.position = center + offset;
	}
}
