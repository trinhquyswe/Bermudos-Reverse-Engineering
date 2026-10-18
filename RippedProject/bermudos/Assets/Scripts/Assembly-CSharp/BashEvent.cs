// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

public class BashEvent : MonoBehaviour
{
	public event Action<BashEvent, BashEventArgs> OnBash;

	public void CallOnBashEvent(BashState bashState)
	{
		OnBash?.Invoke(this, new BashEventArgs() { bashState = bashState });
	}
}
