using UnityEngine;

public class Enemy : MonoBehaviour
{
    [HideInInspector]
    public AnimateEvent animateEvent;
    [HideInInspector]
    public HealthEvent healthEvent;
    [HideInInspector]
    public EnemyStateEvent enemyStateEvent;
    [HideInInspector]
    public Animator animator;
    [HideInInspector]
    public Health health;
    [HideInInspector]
    public EnemyEffect enemyEffect;
    [HideInInspector]
    public PoiseEvent poiseEvent;
    [HideInInspector]
    private SpriteRenderer spriteRenderer;
    [HideInInspector]
    public IdleEvent idleEvent;
    [HideInInspector]
    public MoveByEnemyAIEvent moveByEnemyAIEvent;
    [HideInInspector]
    public AttackEvent attackEvent;
    [HideInInspector]
    public EnemyAI enemyAI;
    public AnimationEnemyType animationEnemyType;
    [HideInInspector]
    public string mapKey;
    [HideInInspector]
    public int enemyID;

    private void Awake()
    {
        animateEvent = GetComponent<AnimateEvent>();
        healthEvent = GetComponent<HealthEvent>();
        enemyStateEvent = GetComponent<EnemyStateEvent>();
        poiseEvent = GetComponent<PoiseEvent>();
        animator = GetComponent<Animator>();
        health = GetComponent<Health>();
        enemyEffect = GetComponent<EnemyEffect>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        idleEvent = GetComponent<IdleEvent>();
        moveByEnemyAIEvent = GetComponent<MoveByEnemyAIEvent>();
        enemyAI = GetComponent<EnemyAI>();
        attackEvent = GetComponent<AttackEvent>();
    }

    private void OnEnable()
    {
        healthEvent.OnHealthChanged += HealthEvent_OnHealthLost;
    }

    private void OnDisable()
    {
        healthEvent.OnHealthChanged -= HealthEvent_OnHealthLost;
    }

    public void InitializeEnemy(string mapName, int enemyID)
    {
        this.enemyID = enemyID;
        mapKey = mapName;
    }

    private void HealthEvent_OnHealthLost(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
    {
        if (healthEventArgs.healthAmount < 1)
        {
            EnemyDestroyed();
        }
    }

    private void EnemyDestroyed()
    {
        DestroyedEvent destroyedEvent = GetComponent<DestroyedEvent>();
        destroyedEvent.CallDestroyedEvent(new DestroyedEventArgs { playerDied = false });
    }
}
