// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

[DisallowMultipleComponent]
public class PoiseEvent : MonoBehaviour
{
	public event Action<PoiseEvent, PoiseEventArgs> OnPoise;

	public void CallPoiseEvent(float poiseAmount, float currentPoise, float maxPoise, float stunTime)
	{
		OnPoise?.Invoke(this, new PoiseEventArgs()
		{
			poiseAmount = poiseAmount,
			currentPoise = currentPoise,
			maxPoise = maxPoise,
			stunTime = stunTime
		});
	}
}
