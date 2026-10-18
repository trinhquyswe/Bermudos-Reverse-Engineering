// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

[DisallowMultipleComponent]
public class AttackEvent : MonoBehaviour
{
	public event Action<AttackEvent> OnAttack;

	public void CallAttackEvent()
	{
		OnAttack?.Invoke(this);
	}
}
