using System;
using UnityEngine;

public class MovementByVelocityArgs : EventArgs
{
    public Vector2 moveDirection;
    public float moveSpeed;
    public bool isAttacking;
}
