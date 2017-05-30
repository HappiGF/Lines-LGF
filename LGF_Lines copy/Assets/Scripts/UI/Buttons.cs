using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Buttons : MonoBehaviour {

    private bool paused;

    void Start()
    {
        paused = false;
    }

    public void PlayOnClick()
    {
        SceneManager.LoadScene("Lines_01");
        print("play game");
    }

    public void MainMenuOnClick()
    {
        SceneManager.LoadScene("Menu");
        print("menu");
    }

    public void PauseUnpauseOnClick()
    {
        if (paused)
        {
            print("play");
            GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "||";
            paused = false;
            Time.timeScale = 1f;
        }
        else
        {
            print("paused");
            GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "►";
            paused = true;
            Time.timeScale = 0f;
        }
    }

    
}
