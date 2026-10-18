// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

[DisallowMultipleComponent]
public class MovementByVelocity : MonoBehaviour
{
	private Rigidbody2D rigidBody2D;
	private MovementByVelocityEvent movementByVelocityEvent;
	private DestroyedEvent destroyedEvent;
	private DieEvent dieEvent;

	private void Awake()
	{
		rigidBody2D = GetComponent<Rigidbody2D>();
		movementByVelocityEvent = GetComponent<MovementByVelocityEvent>();
		destroyedEvent = GetComponent<DestroyedEvent>();
		dieEvent = GetComponent<DieEvent>();
	}

	private void OnEnable()
	{
		movementByVelocityEvent.OnMovementByVelocity += MovementByVelocityEvent_OnMovementByVelocity;
		destroyedEvent.OnDestroyed += DestroyedEvent_OnDestroyed;
		dieEvent.OnDie += DieEvent_OnDie;
	}

	private void OnDisable()
	{
		movementByVelocityEvent.OnMovementByVelocity -= MovementByVelocityEvent_OnMovementByVelocity;
		destroyedEvent.OnDestroyed -= DestroyedEvent_OnDestroyed;
		dieEvent.OnDie -= DieEvent_OnDie;
	}

	private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
	{
		if (destroyedEventArgs.playerDied)
		{
			movementByVelocityEvent.OnMovementByVelocity += MovementByVelocityEvent_OnMovementByVelocity;
		}
	}

	private void DieEvent_OnDie(DieEvent dieEvent)
	{
		movementByVelocityEvent.OnMovementByVelocity -= MovementByVelocityEvent_OnMovementByVelocity;
	}

	private void MovementByVelocityEvent_OnMovementByVelocity(MovementByVelocityEvent movementByVelocityEvent, MovementByVelocityArgs movementByVelocityArgs)
	{
		MoveRigidBody(movementByVelocityArgs.moveDirection, movementByVelocityArgs.moveSpeed);
	}

	private void MoveRigidBody(Vector2 moveDirection, float moveSpeed)
	{
		rigidBody2D.velocity = moveDirection * moveSpeed;
	}
}
