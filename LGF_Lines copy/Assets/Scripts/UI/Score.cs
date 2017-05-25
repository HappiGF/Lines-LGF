using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour {

    private GameObject player;
    public int score;
    private Text scoreText;

    void Start()
    {
        player = GameObject.Find("Player");
        scoreText = GetComponent<Text>();
    }

    void Update()
    {
        score = player.GetComponent<PlayerManager>().score;
        scoreText.text = score + "";
    }
}
