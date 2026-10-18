// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

[RequireComponent(typeof(MovementToPositionEvent))]
public class MovementToPosition : MonoBehaviour
{
	private Rigidbody2D rigidBody2D;
	private MovementToPositionEvent movementToPositionEvent;

	private void Awake()
	{
		rigidBody2D = GetComponent<Rigidbody2D>();
		movementToPositionEvent = GetComponent<MovementToPositionEvent>();
	}

	private void OnEnable()
	{
		movementToPositionEvent.OnMovementToPosition += MovementToPositionEvent_OnMovementToPosition;
	}

	private void OnDisable()
	{
		movementToPositionEvent.OnMovementToPosition -= MovementToPositionEvent_OnMovementToPosition;
	}

	private void MovementToPositionEvent_OnMovementToPosition(MovementToPositionEvent movementToPositionEvent, MovementToPositionArgs movementToPositionArgs)
	{
		MoveRigidBody(movementToPositionArgs.movePosition, movementToPositionArgs.currentPosition, movementToPositionArgs.moveSpeed);
	}

	private void MoveRigidBody(Vector3 movePosition, Vector3 currentPosition, float moveSpeed)
	{
		Vector2 moveDirection = (movePosition - currentPosition).normalized;
		rigidBody2D.MovePosition(rigidBody2D.position + moveDirection * moveSpeed * Time.fixedDeltaTime);
	}
}
