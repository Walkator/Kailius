using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Traps : MonoBehaviour {

    public int damage = 100;

    private void OnCollisionEnter2D(Collision2D collision) {
        if(collision.gameObject.name == "Player") {
            collision.gameObject.GetComponentInParent<Stats>().takeTrueDamage(damage);

            if(collision.gameObject.GetComponentInParent<Stats>().health > 0) {
                collision.gameObject.GetComponentInParent<PlayerController>().reSpawn();
            }
        }
    }
}
