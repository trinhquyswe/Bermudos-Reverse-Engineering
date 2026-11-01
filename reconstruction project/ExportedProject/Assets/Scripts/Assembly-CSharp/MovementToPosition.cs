using UnityEngine;

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
        float dx = movePosition.x - currentPosition.x;
        float dy = movePosition.y - currentPosition.y;
        float dz = movePosition.z - currentPosition.z;
        float magnitude = Mathf.Sqrt(dx * dx + dy * dy + dz * dz);

        Vector2 direction;
        if (magnitude > 1e-5f)
        {
            direction = new Vector2(dx / magnitude, dy / magnitude);
        }
        else
        {
            // TODO(il2cpp): fallback direction constant not recovered
            direction = Vector2.zero;
        }

        Vector2 velocity = rigidBody2D.velocity;
        // TODO(il2cpp): delta time source assumed to be Time.deltaTime
        float deltaTime = Time.deltaTime;
        rigidBody2D.velocity = new Vector2(
            velocity.x + direction.x * moveSpeed * deltaTime,
            velocity.y + direction.y * moveSpeed * deltaTime);
    }
}
