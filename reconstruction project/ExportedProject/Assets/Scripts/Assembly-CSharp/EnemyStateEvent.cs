using System;
using UnityEngine;

public class EnemyStateEvent : MonoBehaviour
{
    public Action<EnemyStateEvent, EnemyStateEventArgs> onEnemyState;

    public void CallEnemyStateEvent(EnemyState enemyState)
    {
        if (onEnemyState != null)
        {
            onEnemyState(this, new EnemyStateEventArgs { enemyState = enemyState });
        }
    }
}
