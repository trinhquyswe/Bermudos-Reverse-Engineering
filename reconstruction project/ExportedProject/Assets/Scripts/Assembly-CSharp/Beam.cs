using UnityEngine;

public class Beam : MonoBehaviour
{
    private bool isColliding;
    private int damageBeam = 20;
    private Animator animator;
    private LayerMask enemyLayerMask;
    private LayerMask bossLayerMask;
    private LayerMask playerLayerMask;
    private LayerMask bashAmmoLayerMask;
    [HideInInspector]
    public float amountScaleY;
    [SerializeField]
    private SoundEffectSO beamSoundEffect;
    [SerializeField]
    private SoundEffectSO beamPlayerSoundEffect;

    private void Awake()
    {
        animator = GetComponent<Animator>();
        enemyLayerMask = LayerMask.GetMask("Enemy");
        bossLayerMask = LayerMask.GetMask("Boss");
        playerLayerMask = LayerMask.GetMask("Player");
        bashAmmoLayerMask = LayerMask.GetMask("BashAmmo");
    }

    private void LateUpdate()
    {
        float normalizedTime = animator.GetCurrentAnimatorStateInfo(0).normalizedTime;
        float t = Mathf.Clamp01(normalizedTime / 1.5f);
        Vector3 scale = transform.localScale;
        transform.localScale = new Vector3(scale.x, amountScaleY * t, scale.z);
    }

    private void Start()
    {
        int bashAmmoBit = bashAmmoLayerMask.value & (1 << gameObject.layer);
        SoundEffectSO sound = bashAmmoBit < 1 ? beamSoundEffect : beamPlayerSoundEffect;
        SoundEffectManager.Instance.PlaySoundEffect(sound);
    }

    public void EyeAttackEnd()
    {
        Destroy(gameObject);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (isColliding) return;

        int layer = collision.gameObject.layer;

        if ((playerLayerMask.value & (1 << layer)) > 0)
        {
            PlayerEffect playerEffect = collision.GetComponent<PlayerEffect>();
            playerEffect.DamagePushEfect(transform.position);
            playerEffect.CallDamageFlashEffect(GameResources.Instance.damegeFlashMaterial, GameResources.Instance.litMaterial, collision.GetComponentsInChildren<SpriteRenderer>());
        }

        ReceiveDamage receiveDamage = collision.GetComponent<ReceiveDamage>();
        if (receiveDamage != null)
        {
            receiveDamage.TakeDamage(damageBeam);
        }

        if ((enemyLayerMask.value & (1 << layer)) > 0)
        {
            EnemyEffect enemyEffect = collision.GetComponent<EnemyEffect>();
            if (enemyEffect != null)
            {
                enemyEffect.DamagePushEfect(transform.position);
                enemyEffect.CallDamageFlashEffect(GameResources.Instance.damegeFlashMaterial, GameResources.Instance.litMaterial, collision.GetComponentsInChildren<SpriteRenderer>());
            }
        }

        if ((bossLayerMask.value & (1 << layer)) > 0)
        {
            BossEffect bossEffect = collision.GetComponent<BossEffect>();
            if (bossEffect != null)
            {
                bossEffect.PushBossByWeapon(transform.position);
                bossEffect.OuchEffect();
            }
        }

        isColliding = true;
    }
}
