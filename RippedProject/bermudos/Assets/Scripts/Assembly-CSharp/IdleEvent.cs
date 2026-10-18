// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

[DisallowMultipleComponent]
public class IdleEvent : MonoBehaviour
{
	public event Action<IdleEvent> OnIdle;

	public void CallIdleEvent()
	{
		OnIdle?.Invoke(this);
	}
}
