using System.Collections;
using UnityEngine;

public class EnemyEffect : Effect
{
    private PoiseEvent poiseEvent;
    private EnemyMovement enemyMovement;
    private Coroutine pushEnemyByAmmoCoroutine;
    private Rigidbody2D rb2d;

    [SerializeField] private ParticleSystem hitParticleSystem;
    [SerializeField] private ParticleSystem bloodParticleSystem;

    private float pushForce = 0f; // TODO(il2cpp): default value ambiguous (0x24 vs 0x28 in dump); verify.

    private void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
        enemyMovement = GetComponent<EnemyMovement>();
        poiseEvent = GetComponent<PoiseEvent>();
    }

    private void OnEnable()
    {
        poiseEvent.OnPoise += PoiseEvent_onPoiseEvent;
    }

    private void OnDisable()
    {
        poiseEvent.OnPoise -= PoiseEvent_onPoiseEvent;
    }

    private void Start()
    {
        hitParticleSystem.Stop();
        bloodParticleSystem.Stop();
    }

    private void PoiseEvent_onPoiseEvent(PoiseEvent poiseEvent, PoiseEventArgs args)
    {
        if (args.currentPoise <= 0f)
        {
            ParticleSystem.MainModule main = hitParticleSystem.main;
            main.startLifetimeMultiplier = args.stunTime;
            hitParticleSystem.Play();
        }
    }

    public void CallDamageFlashEffect(Material flashMaterial, Material originalMaterial, SpriteRenderer[] spriteRenderers)
    {
        if (gameObject.activeSelf)
        {
            StartCoroutine(DamageFlashCoroutine(flashMaterial, originalMaterial, spriteRenderers));
        }
    }

    public void DamagePushEfect(Vector3 ammoPosition)
    {
        if (!gameObject.activeSelf)
        {
            return;
        }

        Vector2 direction = ((Vector2)(transform.position - ammoPosition)).normalized;
        if (direction == Vector2.zero)
        {
            direction = Vector2.right; // TODO(il2cpp): fallback direction assumed.
        }

        Vector2 target = new Vector2(ammoPosition.x + direction.x * pushForce, ammoPosition.y + direction.y * pushForce);
        pushEnemyByAmmoCoroutine = StartCoroutine(PushEnemyByAmmo(new Vector3(target.x, target.y, 0f)));
    }

    public void PushEnemyByWeapon(Vector3 playerPosition)
    {
        Vector2 direction = ((Vector2)(transform.position - playerPosition)).normalized;
        Vector3 target = transform.position + (Vector3)(direction * pushForce);
        StartCoroutine(PushEnemyByWeaponCoroutine(target));
    }

    public void BloodEffect()
    {
        bloodParticleSystem.Play();
    }

    private IEnumerator DamageFlashCoroutine(Material flashMaterial, Material originalMaterial, SpriteRenderer[] spriteRenderers)
    {
        // TODO(il2cpp): DamageFlashCoroutine body not recovered.
        yield break;
    }

    private IEnumerator PushEnemyByAmmo(Vector3 target)
    {
        // TODO(il2cpp): PushEnemyByAmmo coroutine body not recovered.
        yield break;
    }

    private IEnumerator PushEnemyByWeaponCoroutine(Vector3 target)
    {
        // TODO(il2cpp): PushEnemyByWeaponCoroutine body not recovered.
        yield break;
    }
}
