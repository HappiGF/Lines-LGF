using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {

    void Start()
    {
        PlayerPrefs.SetInt("HighScore", 0);
    }

    public void PlayOnClick()
    {
        SceneManager.LoadScene("Lines_01");
    }
}
