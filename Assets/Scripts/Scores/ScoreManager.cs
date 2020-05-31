using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreManager : MonoBehaviour {
    public static ScoreManager instance;
    public TextMeshProUGUI Score;
    public TextMeshProUGUI textScore;
    public TextMeshProUGUI textCoins;
    public TextMeshProUGUI textGems;
    public TextMeshProUGUI textStars;

    private int score;
    private int scoreCoins;
    private int scoreGems;
    private int scoreStars;

    private static bool created = false;

    // Start is called before the first frame update
    void Start() {
        if(instance == null) {
            instance = this;
        }

        this.score = (int)PlayerPrefs.GetInt("Score", 0);
        this.scoreCoins = (int)PlayerPrefs.GetInt("ScoreCoins", 0);
        this.scoreGems = (int)PlayerPrefs.GetInt("ScoreGems", 0);
        this.scoreStars = (int)PlayerPrefs.GetInt("ScoreStars", 0);

       
        Score.text = "" + score.ToString();
        textScore.text = "" + score.ToString();
        textCoins.text = "150/" + scoreCoins.ToString();
        textGems.text = "60/" + scoreGems.ToString();
        textStars.text = "3/" + scoreStars.ToString();
    }

    public void ChangeScore(int scoreValue) {
        score += scoreValue;
        textScore.text = "" + score.ToString();
        Score.text = "" + score.ToString();

        PlayerPrefs.SetInt("Score", score);
    }

    public void ChangeScoreCoin(int coinValue) {
        scoreCoins += coinValue;
        textCoins.text = "150/" + scoreCoins.ToString();
        PlayerPrefs.SetInt("ScoreCoins", scoreCoins);
    }

    public void ChangeScoreGem(int gemValue) {
        scoreGems += gemValue;
        textGems.text = "60/" + scoreGems.ToString();
        PlayerPrefs.SetInt("ScoreGems", scoreGems);
    }

    public void ChangeScoreStar(int starsValue) {
        scoreStars += starsValue;
        textStars.text = "3/" + scoreStars.ToString();
        PlayerPrefs.SetInt("ScoreStars", scoreStars);
    }

    public int getScoreTotal() {
        return this.score;
    }

    public int getScoreStars() {
        return this.scoreStars;
    }
}
