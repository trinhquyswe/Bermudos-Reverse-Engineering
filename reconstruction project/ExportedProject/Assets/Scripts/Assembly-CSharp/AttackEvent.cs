using System;
using UnityEngine;

[DisallowMultipleComponent]
public class AttackEvent : MonoBehaviour
{
    // Field-like event (compiler-generated add_/remove_ accessors in the original assembly).
    public event Action<AttackEvent> OnAttack;

    public void CallAttackEvent()
    {
        OnAttack?.Invoke(this);
    }
}
