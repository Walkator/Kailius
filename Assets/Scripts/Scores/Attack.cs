using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attack : MonoBehaviour {
    public int attackValue = 10;
    public GameObject sonido;

    public void OnTriggerEnter2D(Collider2D collision) {
        if (collision.gameObject.CompareTag("Player")) {
            Stats.instance.addAttackDamage(attackValue);
            Instantiate(sonido);
        }

        if (collision.gameObject.CompareTag("Water")) {
            Destroy(gameObject);
        }
    }
}
