using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {
    public GameObject objetivo;
    public float Velocidad = 2f;
    public float ZOriginal = 0;
    public float smoothRate = 0.3f;
    private Vector3 velocidadCamara;


    // Start is called before the first frame update
    void Start() {
        ZOriginal = transform.position.z;
        velocidadCamara = new Vector3(Velocidad, Velocidad, 0);

    }

    // Update is called once per frame
    void Update() {
        if (objetivo == null) {
            return;
        }

        Vector3 tmp = Vector3.SmoothDamp(transform.position, objetivo.transform.position, ref velocidadCamara, this.smoothRate);
        tmp.z = ZOriginal;
        this.transform.position = tmp;

    }
}
