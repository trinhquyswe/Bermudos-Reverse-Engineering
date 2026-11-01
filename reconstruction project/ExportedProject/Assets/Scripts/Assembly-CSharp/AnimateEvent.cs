using System;
using UnityEngine;

public class AnimateEvent : MonoBehaviour
{
    public event Action<AnimateEvent, AnimateEventArgs> OnAnimate;

    public void CallAnimateEvent(AimDirection aimDirection)
    {
        OnAnimate?.Invoke(this, new AnimateEventArgs { aimDirection = aimDirection });
    }
}
