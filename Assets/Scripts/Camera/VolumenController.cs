using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VolumenController: MonoBehaviour {
    private AudioSource AudioSrc;
 
    private float AudioVolume = 1f;
 
    void Start () {
        AudioSrc = GetComponent<AudioSource>();
        if (PlayerPrefs.GetFloat("AudioVolume", 0) > 0) {
            AudioVolume = PlayerPrefs.GetFloat("AudioVolume", 0);
        } else {
            PlayerPrefs.SetFloat("AudioVolume", AudioVolume);
        }
    }
 
    void Update () {
        AudioSrc.volume = AudioVolume;
    }
 
    public void SetVolume(float vol) {
        AudioVolume = vol;
        PlayerPrefs.SetFloat("AudioVolume", AudioVolume);
    }
}