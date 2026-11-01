using System.Collections;
using UnityEngine;

public class EnemyAI : MonoBehaviour
{
    private EnemyMovement enemyMovement;
    private EnemyAttack enemyAttack;
    private EnemyStateEvent enemyStateEvent;
    private Enemy enemy;
    private EnemyState enemyState;
    private Coroutine attackCoroutine;
    private bool isAttack = true;

    private void Awake()
    {
        enemy = GetComponent<Enemy>();
        enemyStateEvent = GetComponent<EnemyStateEvent>();
        enemyAttack = GetComponent<EnemyAttack>();
        enemyMovement = GetComponent<EnemyMovement>();
    }

    private void OnEnable()
    {
        enemyStateEvent.onEnemyState += OnEnemyState;
        enemy.poiseEvent.OnPoise += PoiseEvent_OnPoise;
    }

    private void OnDisable()
    {
        enemyStateEvent.onEnemyState -= OnEnemyState;
        enemy.poiseEvent.OnPoise -= PoiseEvent_OnPoise;
    }

    private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs args)
    {
        if (args.currentPoise <= 0f)
        {
            StopAttack(args.stunTime);
        }
    }

    private void OnEnemyState(EnemyStateEvent enemyStateEvent, EnemyStateEventArgs args)
    {
        enemyState = args.enemyState;
    }

    private void Update()
    {
        switch (enemyState)
        {
            case EnemyState.Attacking:
                if (isAttack)
                {
                    enemyAttack.Shoot();
                    enemyStateEvent.CallEnemyStateEvent(EnemyState.Chasing);
                    // TODO(il2cpp): enemy.attackEvent invoke arguments not recovered (delegate garbled in pseudo).
                }
                break;
            case EnemyState.Chasing:
            case EnemyState.GoBackToStart:
                // TODO(il2cpp): moveByEnemyAIEvent invoke not recovered (garbled cast in pseudo).
                break;
        }
    }

    private void StopAttack(float stunTime)
    {
        StartCoroutine(StopAttackCoroutine(stunTime));
    }

    private IEnumerator StopAttackCoroutine(float stunTime)
    {
        // TODO(il2cpp): StopAttackCoroutine body not recovered.
        yield break;
    }
}
