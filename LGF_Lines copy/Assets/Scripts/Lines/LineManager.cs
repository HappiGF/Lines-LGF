using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LineManager : MonoBehaviour {

	public float lineHeight;
	private float speed;
    private int score;

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

		gameObject.transform.localScale = new Vector3 (0.1f, lineHeight, 1f);
	}

	void Update() {
        speed = GameObject.Find("SpawnManager").GetComponent<Spawner>().speed;
        gameObject.transform.Translate (Vector3.down * Time.deltaTime * speed);

		if (transform.position.y < -7) {
			Destroy (gameObject);
		}
	}

	void OnTriggerEnter(Collider player) {
		Destroy (player.gameObject);
		EndGame ();
        
	}

	IEnumerator EndGame() {
		score = GameObject.Find("Player").GetComponent<PlayerManager>().score;
		PlayerPrefs.SetInt("Score", score);
		GameObject.Find ("SpawnManager").GetComponent<Spawner>().FadeOut();
		yield return new WaitForSeconds (1);
		SceneManager.LoadScene("Retry");
	}
}
