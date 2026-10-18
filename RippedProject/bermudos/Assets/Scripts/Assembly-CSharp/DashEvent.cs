// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

public class DashEvent : MonoBehaviour
{
	public event Action<DashEvent, DashEventArgs> OnDashEvent;

	public void CallDashEvent(Vector2 direction)
	{
		OnDashEvent?.Invoke(this, new DashEventArgs() { direction = direction });
	}
}
