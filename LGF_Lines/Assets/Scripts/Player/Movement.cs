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
		if (Input.GetKey ("space")) {
			RotateClockwise ();
		}
		if (Input.touchCount > 0) {
			if (Input.GetTouch (Input.touches.Length - 1).position.x > 750) {
				RotateClockwise ();
			} else {
				RotateCClockwise ();
			}
		}
	}

	void RotateClockwise () {
		angle += speed * Time.deltaTime;

		Vector2 offset = new Vector2 (Mathf.Sin(angle), Mathf.Cos(angle)) * radius;
		transform.position = center + offset;
		print ("RotatingClockwise " + angle);
	}

	void RotateCClockwise() {
		angle += speed * Time.deltaTime * -1;

		Vector2 offset = new Vector2 (Mathf.Sin(angle), Mathf.Cos(angle)) * radius;
		transform.position = center + offset;
		print ("RotatingClockwise " + angle);
	}
}
