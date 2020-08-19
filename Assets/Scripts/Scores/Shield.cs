using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shield : MonoBehaviour {
    public int shieldValue = 10;
    public GameObject sonido;

    public void OnTriggerEnter2D(Collider2D collision) {
        if (collision.gameObject.CompareTag("Player")) {
            Stats.instance.addDefense(shieldValue);
            Instantiate(sonido);
        }

        if (collision.gameObject.CompareTag("Water")) {
            Destroy(gameObject);
        }
    }
}
