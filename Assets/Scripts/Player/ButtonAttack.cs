using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButtonAttack : MonoBehaviour, IPointerDownHandler {
    public PlayerCombat player;

    public void OnPointerDown(PointerEventData eventData) {
        player.AttackButton();
    }
}