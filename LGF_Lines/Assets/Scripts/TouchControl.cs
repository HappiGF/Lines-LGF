using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchControl : MonoBehaviour {

	private Vector2 touchOrigin = -Vector2.one;
	public object player;

	void Update () {
		if (Input.touchCount > 0)
		{
			Touch myTouch = Input.touches[0];

			if (myTouch.phase == TouchPhase.Began) {
				touchOrigin = myTouch.position;
			}

			if (touchOrigin.x > 0) {

			} else if (touchOrigin.x < 0) {

			}
				
		}
	}
}
