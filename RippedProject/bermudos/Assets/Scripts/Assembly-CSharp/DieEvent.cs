// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

public class DieEvent : MonoBehaviour
{
	public event Action<DieEvent> OnDie;

	public void CallDieEvent()
	{
		OnDie?.Invoke(this);
	}
}
