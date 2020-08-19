using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gem : MonoBehaviour {
    public int gemValue = 1;
    public int scoreValue = 15;
    public GameObject sonido;

    public void OnTriggerEnter2D(Collider2D collision) {
        if (collision.gameObject.CompareTag("Player")) {
            ScoreManager.instance.ChangeScore(scoreValue);
            ScoreManager.instance.ChangeScoreGem(gemValue);
            Instantiate(sonido);
        }

        if (collision.gameObject.CompareTag("Water")) {
            Destroy(gameObject);
        }
    }
}
