using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Spawner : MonoBehaviour {

    public GameObject line;
    public float speed;
    public float spawnRate;
    public float lastPos;
    public bool start;
    public float score;
	public Animator fade;

    void Start() {
        start = false;
        speed = 3.5f;
        spawnRate = 0.5f;
        lastPos = 0;
		fade.enabled = false;
    }

    void Update()
    {
        if (start == false && (Input.touchCount > 0 || SceneManager.GetActiveScene().name == "Menu"))
        {
            start = true;
            InvokeRepeating("Spawn", 1, spawnRate);
        }
    }

    void IncreaseSpeed()
    {
        if (speed < 6.5)
        {
            speed += 0.2f;
        }
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
        Instantiate(line, new Vector3(x, 10, 0.5f), transform.rotation);
        lastPos = x;
    }

    public void ScoreUpdate(float s)
    {
        score = s;
        if (s % 10 == 0)
        {
            IncreaseSpeed();
        }
        if (s % 20 == 0)
        {
            IncreaseRepeatRate();
        }
    }

	public void FadeOut() {
		fade.enabled = true;
	}
}
