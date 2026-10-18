// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

[DisallowMultipleComponent]
public class MovementToPositionEvent : MonoBehaviour
{
	public event Action<MovementToPositionEvent, MovementToPositionArgs> OnMovementToPosition;

	public void CallMovementToPositionEvent(Vector3 movePosition, Vector3 currentPosition, float moveSpeed, Vector2 moveDirection, bool isDashing = false)
	{
		OnMovementToPosition?.Invoke(this, new MovementToPositionArgs()
		{
			movePosition = movePosition,
			currentPosition = currentPosition,
			moveSpeed = moveSpeed,
			moveDirection = moveDirection,
			isDashing = isDashing
		});
	}
}
