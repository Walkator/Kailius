using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour {

    public int health = 500;
    public float timeDestroy = 1.5f;
    public Animator animator;
    public GameObject sonidoMuerte;

    public GameObject coins;
    public GameObject hearts;
    public GameObject sword;
    public GameObject shield;

    public int maxCoins = 5;
    public int maxHearts = 3;
    public int maxSwords = 2;
    public int maxShields = 2;

    public void TakeDamage(int damage) {
        this.health -= damage;

        // Play animacion de herida
        animator.SetTrigger("hurt");

        if(health <= 0) {
            Die();
        }
    }

    void Die() {
        gameObject.GetComponent<Rigidbody2D>().constraints = RigidbodyConstraints2D.FreezePositionY;

        // Dropear items
        dropItems();

        // Play animacion de muerto
        animator.SetBool("isDead", true);

        // Añadir puntuacion 
        ScoreManager.instance.ChangeScore(100);

        // Destruir al enemigo
        GetComponent<Collider2D>().enabled = false;
        this.enabled = false;

        // Sonido
        Instantiate(sonidoMuerte);
        Object.Destroy(gameObject, timeDestroy);
    }

    void dropItems() {
        int numCoins = Random.Range(1, maxCoins);
        int numHearts = Random.Range(0, maxHearts);
        int numSwords = Random.Range(0, maxSwords);
        int numShields = Random.Range(0, maxShields);

        for (int i = 0; i < numCoins; i++) {
            Instantiate(coins, new Vector3(gameObject.transform.position.x - 1.0f, gameObject.transform.position.y + 2.0f, gameObject.transform.position.z), Quaternion.identity);
        }

        for (int i = 0; i < numHearts; i++) {
            Instantiate(hearts, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y + 2.0f, gameObject.transform.position.z), Quaternion.identity);
        }

        for (int i = 0; i < numSwords; i++) {
            Instantiate(sword, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y + 2.0f, gameObject.transform.position.z), Quaternion.identity);
        }

        for (int i = 0; i < numShields; i++) {
            Instantiate(shield, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y + 2.0f, gameObject.transform.position.z), Quaternion.identity);
        }
    }


}
