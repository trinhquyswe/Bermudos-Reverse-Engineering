using UnityEngine;

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

    private void DestroyedEvent_OnDestroyed(DestroyedEvent sender, DestroyedEventArgs destroyedEventArgs)
    {
        if (destroyedEventArgs.playerDied)
        {
            movementByVelocityEvent.OnMovementByVelocity -= MovementByVelocityEvent_OnMovementByVelocity;
        }
    }

    private void DieEvent_OnDie(DieEvent sender)
    {
        movementByVelocityEvent.OnMovementByVelocity += MovementByVelocityEvent_OnMovementByVelocity;
    }

    private void MovementByVelocityEvent_OnMovementByVelocity(MovementByVelocityEvent sender, MovementByVelocityArgs movementByVelocityArgs)
    {
        MoveRigidBody(movementByVelocityArgs.moveDirection, movementByVelocityArgs.moveSpeed);
    }

    private void MoveRigidBody(Vector2 moveDirection, float moveSpeed)
    {
        rigidBody2D.velocity = new Vector2(moveDirection.x * moveSpeed, moveDirection.y * moveSpeed);
    }
}
