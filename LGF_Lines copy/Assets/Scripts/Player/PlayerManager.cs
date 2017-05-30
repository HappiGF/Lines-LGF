using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour {

    public float speed;
    public int radius;
    private Vector2 center;
    private float angle;
    public float distance;
    public int score;

    void Start()
    {
        center = transform.position;
        RotateCClockwise();
        distance = 0;
        score = 0;
    }

    void Update()
    {
        if (Input.GetKey("d") )
        {
            RotateClockwise();
        }
        else if (Input.GetKey("a"))
        {
            RotateCClockwise();
        }

        if (Input.touchCount > 0)
        { 
            if (Input.GetTouch(Input.touches.Length - 1).position.x > Screen.width/2)
            {
                RotateClockwise();
            }
            else
            {
                RotateCClockwise();
            }
        }

        if (distance >= 3.1f)
        {
            distance = -0.04f;
            score += 1;
            GameObject.Find("SpawnManager").GetComponent<Spawner>().ScoreUpdate(score);
        }
        else if (distance <= -3.1f)
        {
            distance = 0.04f;
            score += 1;
            GameObject.Find("SpawnManager").GetComponent<Spawner>().ScoreUpdate(score);
        }
    }

    void RotateClockwise()
    {
        angle += speed * Time.deltaTime;
        Vector2 offset = new Vector2(Mathf.Sin(angle), Mathf.Cos(angle)) * radius;
        transform.position = center + offset;
        distance += Time.deltaTime;
    }

    void RotateCClockwise()
    {
        angle += speed * Time.deltaTime * -1;
        Vector2 offset = new Vector2(Mathf.Sin(angle), Mathf.Cos(angle)) * radius;
        transform.position = center + offset;
        distance -= Time.deltaTime;
    }
}
