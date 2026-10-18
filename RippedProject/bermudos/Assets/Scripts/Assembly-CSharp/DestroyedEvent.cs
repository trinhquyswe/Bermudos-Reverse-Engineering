// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

[DisallowMultipleComponent]
public class DestroyedEvent : MonoBehaviour
{
	public event Action<DestroyedEvent, DestroyedEventArgs> OnDestroyed;

	public void CallDestroyedEvent(DestroyedEventArgs destroyedEventArgs)
	{
		OnDestroyed?.Invoke(this, destroyedEventArgs);
	}
}
