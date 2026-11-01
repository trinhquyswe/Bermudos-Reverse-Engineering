using System.Collections;
using UnityEngine;

public class MeleeSkills : MonoBehaviour
{
    private Boss boss;
    private Weapon weapon;
    public float minDistance = 2f;
    [SerializeField]
    private LayerMask playerLayer;
    private MovementToPositionEvent movementToPositionEvent;
    private ContactFilter2D contactFilter2D;
    private Coroutine activeSkillCoroutine;
    private WaitForFixedUpdate waitForFixedUpdate = new WaitForFixedUpdate();
    [SerializeField]
    private SoundEffectSO slashSoundEffect;
    public bool isAttacking;
    public float speed;
    public float cooldown;
    private float previousDistance;
    private int count;

    private void Awake()
    {
        boss = GetComponent<Boss>();
        weapon = GetComponent<Weapon>();
        movementToPositionEvent = GetComponent<MovementToPositionEvent>();
    }

    private void Start()
    {
        isAttacking = false;
        contactFilter2D.SetLayerMask(playerLayer);
        contactFilter2D.useTriggers = true;
        contactFilter2D.useLayerMask = true;
    }

    public void DealDamage(int damage)
    {
        weapon.GetWeaponCollider();
        SoundEffectManager.Instance.PlaySoundEffect(slashSoundEffect);

        Collider2D[] hits = new Collider2D[1]; // TODO(il2cpp): array size approximated from decompile
        int hitCount = weapon.polygonCollider2D.OverlapCollider(contactFilter2D, hits);
        for (int i = 0; i < hitCount; i++)
        {
            Collider2D hit = hits[i];
            if (hit != null)
            {
                ReceiveDamage receiveDamage = hit.GetComponent<ReceiveDamage>();
                if (receiveDamage != null)
                {
                    receiveDamage.TakeDamage(damage);
                }

                PlayerEffect playerEffect = hit.GetComponent<PlayerEffect>();
                if (playerEffect != null)
                {
                    playerEffect.DamagePushEfect((Vector2)transform.position);
                }

                if (playerEffect != null)
                {
                    Material damageFlash = GameResources.Instance.damegeFlashMaterial;
                    Material defaultMaterial = GameResources.Instance.litMaterial;
                    SpriteRenderer[] spriteRenderers = hit.GetComponentsInChildren<SpriteRenderer>();
                    playerEffect.CallDamageFlashEffect(damageFlash, defaultMaterial, spriteRenderers);
                }
            }
        }
    }

    public void PlayActiveSkill(int skill)
    {
        if (activeSkillCoroutine != null)
        {
            StopCoroutine(activeSkillCoroutine);
        }
        activeSkillCoroutine = StartCoroutine(ActiveSkill(skill));
    }

    private IEnumerator ActiveSkill(int skill)
    {
        // TODO(il2cpp): coroutine body not recoverable from decompile
        yield break;
    }

    private void StopActiveSkillRoutine()
    {
        if (activeSkillCoroutine != null)
        {
            StopCoroutine(activeSkillCoroutine);
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.layer != LayerMask.NameToLayer("Player"))
        {
            if (activeSkillCoroutine != null)
            {
                StopCoroutine(activeSkillCoroutine);
            }
            isAttacking = true;
        }
    }
}
