using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DialogueManager : MonoBehaviour {

    public Dialogue dialogue;
    public GameObject dialoguePanel;
    public TextMeshProUGUI displayText;
    public float typingSpeed = 0.05f;
    //public AudioClip speakSound; 

    Queue<string> sentences;
    string activeSentence;
    //AudioSource myAudio;

    // Start is called before the first frame update
    void Start() {
        sentences = new Queue<string>();
        //myAudio = GetComponent<AudioSource>();
    }

    void StartDialogue() {
        sentences.Clear();

        foreach(string sentence in dialogue.sentenceList) {
            sentences.Enqueue(sentence);
        }

        DisplayNextSentence();
    }
    
    void DisplayNextSentence() {
        if(sentences.Count <= 0) {
            displayText.text = activeSentence;
            return;
        }

        activeSentence = sentences.Dequeue();
        displayText.text = activeSentence;

        StopAllCoroutines();
        StartCoroutine(TypeTheSentence(activeSentence));
    }

    IEnumerator TypeTheSentence(string sentence) {
        displayText.text = "";

        foreach(char letter in sentence.ToCharArray()) {
            displayText.text += letter;
            //myAudio.PlayOneShot(speakSound);
            yield return new WaitForSeconds(typingSpeed);
        }
    }

    private void OnTriggerEnter2D(Collider2D other) {
        if(other.CompareTag("Player")) {
            dialoguePanel.SetActive(true);
            StartDialogue();
        }
    }

    private void OnTriggerStay2D(Collider2D collision) {
        if(collision.CompareTag("Player")) {
            if(Input.GetKeyDown(KeyCode.Return) && displayText.text == activeSentence) {
                DisplayNextSentence();
            }
        }
    }

    private void OnTriggerExit2D(Collider2D collision) {
        if(collision.CompareTag("Player")) {
            dialoguePanel.SetActive(false);
            StopAllCoroutines();
        }
    }

    public void DialogueMobile() {
        if (displayText.text == activeSentence) {
            DisplayNextSentence();
        }
    }


}
