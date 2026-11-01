using System;
using UnityEngine;

public class MoveByEnemyAIEvent : MonoBehaviour
{
    // Field-like event (compiler-generated add_/remove_ accessors in the original assembly).
    public event Action<MoveByEnemyAIEvent> OnMoveByEnemyAI;

    public void CallMoveByEnemyAIEvent()
    {
        OnMoveByEnemyAI?.Invoke(this);
    }
}
