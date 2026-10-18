// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

[DisallowMultipleComponent]
public class HealthEvent : MonoBehaviour
{
	public event Action<HealthEvent, HealthEventArgs> OnHealthChanged;

	public void CallHealthChangedEvent(float healthPercent, int healthAmount, int damageAmount)
	{
		OnHealthChanged?.Invoke(this, new HealthEventArgs()
		{
			healthPercent = healthPercent,
			healthAmount = healthAmount,
			damageAmount = damageAmount
		});
	}
}
