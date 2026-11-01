using System;
using UnityEngine;

public class DieEvent : MonoBehaviour
{
    // Field-like event (compiler-generated add_/remove_ accessors in the original assembly).
    public event Action<DieEvent> OnDie;

    public void CallDieEvent()
    {
        OnDie?.Invoke(this);
    }
}
