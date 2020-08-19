using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BTNJugar : MonoBehaviour {
    
    private void OnMouseDown() {
        SceneManager.LoadScene("Scene_1");
    }
}
