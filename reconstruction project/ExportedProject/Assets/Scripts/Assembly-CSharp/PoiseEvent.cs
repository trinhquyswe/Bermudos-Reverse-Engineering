using System;
using UnityEngine;

[DisallowMultipleComponent]
public class PoiseEvent : MonoBehaviour
{
    // Field-like event (compiler-generated add_/remove_ accessors in the original assembly).
    public event Action<PoiseEvent, PoiseEventArgs> OnPoise;

    public void CallPoiseEvent(float poiseAmount, float currentPoise, float maxPoise, float stunTime)
    {
        OnPoise?.Invoke(this, new PoiseEventArgs
        {
            poiseAmount = poiseAmount,
            currentPoise = currentPoise,
            maxPoise = maxPoise,
            stunTime = stunTime
        });
    }
}
