using System;
using UnityEngine;

[DisallowMultipleComponent]
public class HealthEvent : MonoBehaviour
{
    // Field-like event (compiler-generated add_/remove_ accessors in the original assembly).
    public event Action<HealthEvent, HealthEventArgs> OnHealthChanged;

    public void CallHealthChangedEvent(float healthPercent, int healthAmount, int damageAmount)
    {
        OnHealthChanged?.Invoke(this, new HealthEventArgs
        {
            healthPercent = healthPercent,
            healthAmount = healthAmount,
            damageAmount = damageAmount
        });
    }
}

// Top-level class in the original assembly (TypeDefIndex 5623, directly after HealthEvent);
// it lives in this file only because the exported project has no separate HealthEventArgs.cs script.
public class HealthEventArgs : EventArgs
{
    public float healthPercent;
    public int healthAmount;
    public int damageAmount;
}
