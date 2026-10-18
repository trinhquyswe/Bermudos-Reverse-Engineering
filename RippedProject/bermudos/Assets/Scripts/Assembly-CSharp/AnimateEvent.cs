// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

[DisallowMultipleComponent]
public class AnimateEvent : MonoBehaviour
{
	public event Action<AnimateEvent, AnimateEventArgs> OnAnimate;

	public void CallAnimateEvent(AimDirection aimDirection)
	{
		OnAnimate?.Invoke(this, new AnimateEventArgs() { aimDirection = aimDirection });
	}
}
