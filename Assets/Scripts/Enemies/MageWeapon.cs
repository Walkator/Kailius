using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MageWeapon : MonoBehaviour {

    public GameObject boss;
    public Animator animator;
    public GameObject ballPrefab;
    public GameObject sonido;

    void ShootBall() {
        // Dispara la bola de magia
        Instantiate(ballPrefab, boss.transform.position, boss.transform.rotation);

        //Sonido
        Instantiate(sonido);
    }
}
