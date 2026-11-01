using UnityEngine;

public class IdleEvent : MonoBehaviour
{
    // Field-like event (compiler-generated add_/remove_ accessors in the original assembly).
    public event System.Action<IdleEvent> OnIdle;

    public void CallIdleEvent()
    {
        OnIdle?.Invoke(this);
    }
}
