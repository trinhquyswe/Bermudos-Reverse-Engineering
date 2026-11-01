using System.Collections;
using UnityEngine;
using UnityEngine.AI;

// Approx: PoiseEvent pseudo casts idleEvent to AttackEvent (invalid); enemy.attackEvent used instead.
// TODO(il2cpp): stun coroutine body not fully recovered; only the wait is kept.
public class EnemyMovement : MonoBehaviour
{
    private Vector2 startPosition;
    private Vector2 roamingPosition;
    private bool hasInitializedRoamingPosition;
    private float maxDistance = 15f;
    [HideInInspector]
    public NavMeshAgent navMeshAgent;
    private Enemy enemy;

    private void Awake()
    {
        enemy = GetComponent<Enemy>();
        navMeshAgent = GetComponent<NavMeshAgent>();
    }

    private void OnEnable()
    {
        enemy.poiseEvent.OnPoise += PoiseEvent_OnPoise;
    }

    private void OnDisable()
    {
        enemy.poiseEvent.OnPoise -= PoiseEvent_OnPoise;
    }

    private void Start()
    {
        navMeshAgent.updateRotation = false;
        navMeshAgent.updateUpAxis = false;
        navMeshAgent.speed = 3f;
        startPosition = transform.position;
    }

    private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
    {
        if (poiseEventArgs.currentPoise <= 0f)
        {
            StopEnemy(poiseEventArgs.stunTime);
        }
    }

    private void StopEnemy(float stunTime)
    {
        enemy.attackEvent.CallAttackEvent();
        StartCoroutine(StopEnemyCoroutine(stunTime));
    }

    private IEnumerator StopEnemyCoroutine(float stunTime)
    {
        yield return new WaitForSeconds(stunTime);
    }

    public void MoveRoamingPosition()
    {
        if (!hasInitializedRoamingPosition)
        {
            roamingPosition = GetRoamingPosition();
            hasInitializedRoamingPosition = true;
        }

        navMeshAgent.SetDestination(roamingPosition);
        navMeshAgent.stoppingDistance = 1f;

        if (Vector2.Distance(transform.position, roamingPosition) <= 1f)
        {
            roamingPosition = GetRoamingPosition();
        }
    }

    private Vector2 GetRoamingPosition()
    {
        if (!navMeshAgent.isOnNavMesh)
        {
            return roamingPosition;
        }

        Vector2 randomDirection = HelperUtilities.GetRandomDirection();
        float randomDistance = Random.Range(1f, 5f);
        roamingPosition = startPosition + randomDirection * randomDistance;

        NavMeshHit hit;
        NavMesh.SamplePosition(roamingPosition, out hit, 10f, 1);
        return hit.position;
    }

    public void MoveToPlayer()
    {
        Player player = GameManager.Instance.player;
        if (player != null && navMeshAgent.isOnNavMesh)
        {
            navMeshAgent.stoppingDistance = 2f;
            navMeshAgent.SetDestination(player.transform.position);
        }
    }

    public void FindPlayer()
    {
        Vector3 playerPosition = GameManager.Instance.player.transform.position;
        if (Vector2.Distance(playerPosition, transform.position) < 5f)
        {
            enemy.enemyStateEvent.CallEnemyStateEvent(EnemyState.Chasing);
        }
    }

    public void GetDistanceToStartPosition()
    {
        maxDistance = 15f;
        if (Vector2.Distance(transform.position, startPosition) > maxDistance)
        {
            enemy.enemyStateEvent.CallEnemyStateEvent(EnemyState.GoBackToStart);
        }
    }

    public void GoBackToStartPosition()
    {
        if (!navMeshAgent.isOnNavMesh)
        {
            return;
        }

        navMeshAgent.stoppingDistance = 2f;
        navMeshAgent.SetDestination(startPosition);

        Vector3 playerPosition = GameManager.Instance.player.transform.position;
        if (Vector2.Distance(playerPosition, transform.position) <= 5f)
        {
            if (Vector2.Distance(startPosition, transform.position) <= maxDistance - 5f)
            {
                enemy.enemyStateEvent.CallEnemyStateEvent(EnemyState.Chasing);
            }
        }

        if (Vector2.Distance(transform.position, startPosition) < 2f)
        {
            enemy.enemyStateEvent.CallEnemyStateEvent(EnemyState.Roaming);
        }
    }

    // Approx: direction-to-angle bands assumed (Up 45..135, Right -45..45, Down -135..-45, else Left).
    public void GetAimDirection(bool isPlayerDir)
    {
        Vector3 origin = transform.position;
        Vector3 target = isPlayerDir
            ? GameManager.Instance.player.transform.position
            : (Vector3)roamingPosition;

        float angle = HelperUtilities.GetAngleFromVector(target - origin);

        AimDirection aimDirection;
        if (angle > 45f && angle <= 135f)
        {
            aimDirection = AimDirection.Up;
        }
        else if (angle > -45f && angle <= 45f)
        {
            aimDirection = AimDirection.Right;
        }
        else if (angle > -135f && angle <= -45f)
        {
            aimDirection = AimDirection.Down;
        }
        else
        {
            aimDirection = AimDirection.Left;
        }

        enemy.animateEvent.CallAnimateEvent(aimDirection);
    }
}
