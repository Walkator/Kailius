using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow : MonoBehaviour {

    public float speed = 20f;
    public int damage = 200;
    public float time = 0.5f;
    public Rigidbody2D rb;

    // Start is called before the first frame update
    void Start() {
        rb.velocity = transform.right * speed;
    }

    void Update() {
        // Borra el objeto despues de haber trascurrido un tiempo
        //Object.Destroy(gameObject, 1.0f);
    }

    void OnTriggerEnter2D(Collider2D collision) {

        if (collision.gameObject.CompareTag("Enemies") || collision.gameObject.CompareTag("Boss")) {
            Enemy enemy = collision.GetComponent<Enemy>();
            if(enemy != null) {
                damage = Mathf.FloorToInt(Stats.instance.getAttackDamage() + (0.4f * Stats.instance.getAttackDamage()));
                Debug.Log(damage);
                enemy.TakeDamage(damage);
            }
            Destroy(gameObject);
        }

        if (collision.gameObject.CompareTag("Ground")) {
            Destroy(gameObject);
        }
    }
}
