using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Heart : MonoBehaviour {
    public int heartValue = 25;
    public int scoreValue = 10;
    public GameObject sonido;

    public void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Player")) {
            ScoreManager.instance.ChangeScore(scoreValue);
            Stats.instance.setHealth(heartValue);
            Instantiate(sonido);
        }

        if (collision.gameObject.CompareTag("Water")) {
            Destroy(gameObject);
        }
    }
}
