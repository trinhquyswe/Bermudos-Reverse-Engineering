using System.Collections;
using UnityEngine;

public class Boss : MonoBehaviour
{
    [HideInInspector]
    public HealthEvent healthEvent;
    [HideInInspector]
    public DestroyedEvent destroyedEvent;
    [HideInInspector]
    public PoiseEvent poiseEvent;
    [HideInInspector]
    public Rigidbody2D rb;
    [HideInInspector]
    public BossEffect bossEffect;
    [HideInInspector]
    public Animator animator;
    [HideInInspector]
    public bool isPhaseTwo;

    private void Awake()
    {
        healthEvent = GetComponent<HealthEvent>();
        destroyedEvent = GetComponent<DestroyedEvent>();
        poiseEvent = GetComponent<PoiseEvent>();
        bossEffect = GetComponent<BossEffect>();
        animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
    }

    private void OnEnable()
    {
        healthEvent.OnHealthChanged += HealthEvent_OnHealthLost;
    }

    private void OnDisable()
    {
        healthEvent.OnHealthChanged -= HealthEvent_OnHealthLost;
    }

    private void Start()
    {
        StaticEventHandler.CallBossChangedEvent(this);
        GameResources.Instance.boss.SetFloat("_FadeAmount", 0f);
    }

    public IEnumerator BossAttack()
    {
        // TODO(il2cpp): coroutine body not recoverable from decompile
        yield break;
    }

    private void HealthEvent_OnHealthLost(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
    {
        if (healthEventArgs.healthAmount < 1)
        {
            EnemyDestroyed();
            healthEvent.OnHealthChanged -= HealthEvent_OnHealthLost;
        }
    }

    private void EnemyDestroyed()
    {
        destroyedEvent.CallDestroyedEvent(new DestroyedEventArgs { bossDied = true });
    }
}
