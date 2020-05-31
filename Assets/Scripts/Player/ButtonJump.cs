using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButtonJump : MonoBehaviour, IPointerDownHandler {
    public MoveByTouch player;

    public void OnPointerDown(PointerEventData eventData) {
        player.saltar();
    }
}