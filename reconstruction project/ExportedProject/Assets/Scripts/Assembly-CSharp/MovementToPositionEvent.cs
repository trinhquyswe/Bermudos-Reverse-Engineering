using System;
using UnityEngine;

[DisallowMultipleComponent]
public class MovementToPositionEvent : MonoBehaviour
{
    // Field-like event (compiler-generated add_/remove_ accessors in the original assembly).
    public event Action<MovementToPositionEvent, MovementToPositionArgs> OnMovementToPosition;

    public void CallMovementToPositionEvent(Vector3 movePosition, Vector3 currentPosition, float moveSpeed, Vector2 moveDirection, bool isDashing = false)
    {
        OnMovementToPosition?.Invoke(this, new MovementToPositionArgs
        {
            movePosition = movePosition,
            currentPosition = currentPosition,
            moveSpeed = moveSpeed,
            moveDirection = moveDirection,
            isDashing = isDashing
        });
    }
}
