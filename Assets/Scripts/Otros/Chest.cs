using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;


public class Chest : MonoBehaviour {
    public GameObject coins;
    public GameObject gems;
    public GameObject hearts;
    public GameObject sword;
    public GameObject shield;
    public Sprite openChestSprite;

    public int maxCoins = 11;
    public int maxGems = 6;
    public int maxHearts = 3;
    public int maxSwords = 2;
    public int maxShields = 2;

    private bool range = false;
    private bool open = true;

    void Update() {
        if (Input.GetKeyDown(KeyCode.E) && range && open) {
            gameObject.GetComponent<SpriteRenderer>().sprite = openChestSprite;
            generar();
            open = false;
        }
    }

    public void generar() {
        int numCoins = Random.Range(1, maxCoins);
        int numGems = Random.Range(1, maxGems);
        int numHearts = Random.Range(1, maxHearts);
        int numSwords = Random.Range(0, maxSwords);
        int numShields = Random.Range(0, maxShields);

        for (int i = 0; i < numCoins; i++) {
            Instantiate(coins, new Vector3(gameObject.transform.position.x -1.0f, gameObject.transform.position.y + 3.0f, gameObject.transform.position.z), Quaternion.identity);
        }

        for (int i = 0; i < numGems; i++) {
            Instantiate(gems, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y + 3.0f, gameObject.transform.position.z), Quaternion.identity);
        }

        for (int i = 0; i < numHearts; i++) {
            Instantiate(hearts, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y + 3.0f, gameObject.transform.position.z), Quaternion.identity);
        }

        for (int i = 0; i < numSwords; i++) {
            Instantiate(sword, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y + 3.0f, gameObject.transform.position.z), Quaternion.identity);
        }

        for (int i = 0; i < numSwords; i++) {
            Instantiate(shield, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y + 3.0f, gameObject.transform.position.z), Quaternion.identity);
        }

    }

    void OnTriggerEnter2D(Collider2D collision) {
        if (collision.gameObject.CompareTag("Player")) {
            range = true;
        }
    }

    public void openChest() {
        if (open) {
            gameObject.GetComponent<SpriteRenderer>().sprite = openChestSprite;
            generar();
            open = false;
        }
    }
}
