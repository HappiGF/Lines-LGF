using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class Movement : MonoBehaviour {

	float circleX = 0;
	float circleY = -0.5;
	int radius = 45;
	double speedScale;
	public float speed;

	void Start() {
		speed = 5;
		speedScale = (0.001*2*Math.PI)/speed;
	}

	void ResetPosition() {
		transform.position (0, 0, 40);
	}

	void RotateClockwise() {
		var angle = getTimer()*speedScale;
		double x = circleX + Math.sin(angle)*radius;
		double y = circleY + Math.cos(angle)*radius;
		transform.position (x, 0, y);
	}

	void RotateCounterClockwise() {

	}
}
