using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CameraWin : MonoBehaviour {

    public TextMeshProUGUI scoreTotal;
    public GameObject cameraWin;
    public GameObject stats;

    public Image Star1;
    public Image Star2;
    public Image Star3;
    public Sprite Star;

    public GameObject boss;

    public int stars;
    // Start is called before the first frame update
    void Start() {
        
    }

    // Update is called once per frame
    void Update() {
        if (boss.GetComponent<Enemy>().health <= 0) {
            cameraWin.SetActive(true);
            stats.SetActive(false);

            scoreTotal.text = "" + ScoreManager.instance.getScoreTotal();
            stars = ScoreManager.instance.getScoreStars();

            switch (stars) {
                case 1:
                    Star1.sprite = Star;
                    break;
                case 2:
                    Star1.sprite = Star;
                    Star2.sprite = Star;
                    break;
                case 3:
                    Star1.sprite = Star;
                    Star2.sprite = Star;
                    Star3.sprite = Star;
                    break;
            }

            Time.timeScale = 0;
        }

    }
}
