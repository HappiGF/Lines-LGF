using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class RetryManager : MonoBehaviour {

    private int score;
    private int highScore;
    public Text ScoreText;
    public Text HighScoreText;

    void Start()
    {
        highScore = PlayerPrefs.GetInt("HighScore");
        score = PlayerPrefs.GetInt("Score");
        ScoreText.text = score + "";

        if (score > highScore)
        {
            highScore = score;
        }
        HighScoreText.text = "High Score: " + highScore;
        PlayerPrefs.SetInt("HighScore", highScore);
    }

    public void ReplayOnClick()
    {
        SceneManager.LoadScene("Lines_01");
    }
}
