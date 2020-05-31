using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButtonBow : MonoBehaviour, IPointerDownHandler {
    public Bow player;

    public void OnPointerDown(PointerEventData eventData) {
        player.AttackButton();
    }
}