using System;
using UnityEngine;

[DisallowMultipleComponent]
public class DestroyedEvent : MonoBehaviour
{
    // Field-like event (compiler-generated add_/remove_ accessors in the original assembly).
    public event Action<DestroyedEvent, DestroyedEventArgs> OnDestroyed;

    public void CallDestroyedEvent(DestroyedEventArgs destroyedEventArgs)
    {
        OnDestroyed?.Invoke(this, destroyedEventArgs);
    }
}
