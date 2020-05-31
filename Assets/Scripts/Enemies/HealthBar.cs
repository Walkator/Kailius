using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour {

	public Slider slider;
	public Gradient gradient;
	public Image fill;
	public GameObject boss;
	public int MaxHealth = 4000;

	void Start() {
		SetMaxHealth(MaxHealth);
	}

	void Update() {
		slider.value = boss.GetComponent<Enemy>().health;
		fill.color = fill.color = gradient.Evaluate(slider.normalizedValue);
	}

	public void SetMaxHealth(int health) {
		slider.maxValue = health;
		slider.value = health;
		fill.color = gradient.Evaluate(1f);
	}
}
