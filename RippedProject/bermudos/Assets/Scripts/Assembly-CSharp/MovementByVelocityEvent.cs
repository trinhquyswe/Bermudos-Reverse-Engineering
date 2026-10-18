// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

[DisallowMultipleComponent]
public class MovementByVelocityEvent : MonoBehaviour
{
	public event Action<MovementByVelocityEvent, MovementByVelocityArgs> OnMovementByVelocity;

	public void CallMovementByVelocityEvent(Vector2 moveDirection, float moveSpeed)
	{
		OnMovementByVelocity?.Invoke(this, new MovementByVelocityArgs() { moveDirection = moveDirection, moveSpeed = moveSpeed });
	}
}
