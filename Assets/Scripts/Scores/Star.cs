using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Star : MonoBehaviour {
    public int starValue = 1;
    public int scoreValue = 50;
    public GameObject sonido;

    public void OnTriggerEnter2D(Collider2D collision) {
        if (collision.gameObject.CompareTag("Player")) {
            ScoreManager.instance.ChangeScore(scoreValue);
            ScoreManager.instance.ChangeScoreStar(starValue);
            Instantiate(sonido);
        }
    }
}
