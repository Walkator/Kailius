using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Portal : MonoBehaviour {

    private void OnTriggerEnter2D(Collider2D plyr) {
        if (plyr.gameObject.tag == "Player") {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        }
    }
        

}
