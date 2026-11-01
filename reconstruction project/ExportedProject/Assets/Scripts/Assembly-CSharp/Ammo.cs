using UnityEngine;

public class Ammo : MonoBehaviour, IFireable
{
    [HideInInspector]
    public AmmoDetailsSO ammoDetailsSO;

    private EnemyEffect enemyEffect;
    private PlayerEffect playerEffect;
    private DestroyedEvent destroyedEvent;
    private AmmoVisual ammoVisual;
    private AmmoAnimation ammoAnimation;

    private LayerMask enemyLayerMask;
    private LayerMask playerLayerMask;
    private LayerMask bossLayerMask;

    private Vector2 trajectoryStartPoint;
    private Vector2 target;
    private Vector2 trajectoryRange;
    private Vector2 ammoMoveDirection;

    private float nextYTrajectoryPosition;
    private float nextXTrajectoryPosition;
    private float trajectoryMaxRelativeHeight;
    private float nextPositionYCorrectionAbsolute;
    private float nextPositionXCorrectionAbsolute;

    private float speed;

    [SerializeField]
    private int poiseAmount;
    [SerializeField]
    private float stunDuration;

    public AmmoState ammoState;

    private bool isColliding;

    [SerializeField]
    private SoundEffectSO shootSoundEffect;

    private bool isFirstOnEnable;

    private void Awake()
    {
        enemyEffect = GetComponent<EnemyEffect>();
        playerEffect = GetComponent<PlayerEffect>();
        destroyedEvent = GetComponent<DestroyedEvent>();
        ammoVisual = GetComponent<AmmoVisual>();
        ammoAnimation = GetComponent<AmmoAnimation>();
    }

    private void OnEnable()
    {
        trajectoryStartPoint = transform.position;

        if (isFirstOnEnable == false)
        {
            SoundEffectManager.Instance.PlaySoundEffect(shootSoundEffect);
        }
        else
        {
            isFirstOnEnable = false;
        }
    }

    private void Start()
    {
        GetLayerMark();
    }

    private void Update()
    {
        switch (ammoState)
        {
            case AmmoState.Linear:
                MoveAmmoByDirection();
                break;
            case AmmoState.Freeze:
                break;
            default:
                UpdateAmmoPosition();
                break;
        }
    }

    private void UpdateAmmoPosition()
    {
        trajectoryRange = target - trajectoryStartPoint;

        float normalisedX = 0f;
        float length = Mathf.Sqrt(trajectoryRange.x * trajectoryRange.x + trajectoryRange.y * trajectoryRange.y);
        if (length > 1e-05f)
        {
            normalisedX = trajectoryRange.x / length;
        }

        float normalisedY = 0f;
        length = Mathf.Sqrt(trajectoryRange.x * trajectoryRange.x + trajectoryRange.y * trajectoryRange.y);
        if (length > 1e-05f)
        {
            normalisedY = trajectoryRange.y / length;
        }

        if (Mathf.Abs(normalisedX) < Mathf.Abs(normalisedY))
        {
            if (trajectoryRange.y < 0f)
            {
                speed = -speed;
            }

            UpdateAmmoXPosition();
            return;
        }

        if (trajectoryRange.x < 0f)
        {
            speed = -speed;
        }

        UpdateAmmoYPosition();
    }

    private void UpdateAmmoXPosition()
    {
        float currentY = transform.position.y;
        float nextY = currentY + speed * Time.deltaTime;

        float normalisedPosition = (nextY - trajectoryStartPoint.y) / trajectoryRange.y;

        float trajectoryCurveValue = ammoDetailsSO.trajectoryAnimationCurve.Evaluate(normalisedPosition);
        float axisCorrectionValue = ammoDetailsSO.axisCorrectionAnimationCurve.Evaluate(normalisedPosition);

        nextPositionXCorrectionAbsolute = axisCorrectionValue * trajectoryRange.x;

        nextXTrajectoryPosition = trajectoryCurveValue * trajectoryMaxRelativeHeight;

        if (trajectoryRange.x > 0f && trajectoryRange.y > 0f)
        {
            nextXTrajectoryPosition = -nextXTrajectoryPosition;
        }

        if (trajectoryRange.x < 0f && trajectoryRange.y < 0f)
        {
            nextXTrajectoryPosition = -nextXTrajectoryPosition;
        }

        float nextX = trajectoryStartPoint.x + nextPositionXCorrectionAbsolute + nextXTrajectoryPosition;

        ammoMoveDirection = new Vector2(nextX - transform.position.x, nextY - transform.position.y);

        speed = ammoDetailsSO.ammoSpeedAnimationCurve.Evaluate(trajectoryCurveValue) * ammoDetailsSO.maxSpeed;

        transform.position = new Vector2(nextX, nextY);

        if (normalisedPosition > 0.996f)
        {
            ammoState = AmmoState.Linear;
        }
    }

    private void UpdateAmmoYPosition()
    {
        float currentX = transform.position.x;
        float nextX = currentX + speed * Time.deltaTime;

        float normalisedPosition = (nextX - trajectoryStartPoint.x) / trajectoryRange.x;

        float trajectoryCurveValue = ammoDetailsSO.trajectoryAnimationCurve.Evaluate(normalisedPosition);
        float axisCorrectionValue = ammoDetailsSO.axisCorrectionAnimationCurve.Evaluate(normalisedPosition);

        nextPositionYCorrectionAbsolute = axisCorrectionValue * trajectoryRange.y;

        nextYTrajectoryPosition = trajectoryCurveValue * trajectoryMaxRelativeHeight;

        if (trajectoryRange.x > 0f && trajectoryRange.y < 0f)
        {
            nextYTrajectoryPosition = -nextYTrajectoryPosition;
        }

        if (trajectoryRange.x < 0f && trajectoryRange.y < 0f)
        {
            nextYTrajectoryPosition = -nextYTrajectoryPosition;
        }

        float nextY = trajectoryStartPoint.y + nextPositionYCorrectionAbsolute + nextYTrajectoryPosition;

        ammoMoveDirection = new Vector2(nextX - transform.position.x, nextY - transform.position.y);

        speed = ammoDetailsSO.ammoSpeedAnimationCurve.Evaluate(normalisedPosition) * ammoDetailsSO.maxSpeed;

        transform.position = new Vector2(nextX, nextY);

        if (normalisedPosition > 0.996f)
        {
            ammoState = AmmoState.Linear;
        }
    }

    public Vector2 GetAmmoMoveDirection()
    {
        return ammoMoveDirection;
    }

    public float GetNextYTrajectoryPosition()
    {
        return nextYTrajectoryPosition;
    }

    public float GetNextPositionYCorrectionAbsolute()
    {
        return nextPositionYCorrectionAbsolute;
    }

    private void MoveAmmoByDirection()
    {
        Vector2 direction = ammoMoveDirection.normalized;

        float step = ammoDetailsSO.maxSpeed * Time.deltaTime;

        Vector2 position = (Vector2)transform.position + direction * (step * 1f);

        transform.position = new Vector3(position.x, position.y, transform.position.z);
    }

    private void CalculateNextAmmoMoveSpeed(float nextPositionXNormalized)
    {
        speed = ammoDetailsSO.ammoSpeedAnimationCurve.Evaluate(nextPositionXNormalized) * ammoDetailsSO.maxSpeed;
    }

    public void InitialiseAmmo(AmmoDetailsSO ammoDetailsSO, Vector3 target)
    {
        this.ammoDetailsSO = ammoDetailsSO;

        this.target = target;

        float distance = Mathf.Sqrt(
            (target.x - transform.position.x) * (target.x - transform.position.x) +
            (target.y - transform.position.y) * (target.y - transform.position.y) +
            (target.z - transform.position.z) * (target.z - transform.position.z));

        trajectoryMaxRelativeHeight = ammoDetailsSO.trajectoryMaxHeight * Mathf.Abs(distance);

        gameObject.layer = LayerMask.NameToLayer("EnemyAmmo");

        isColliding = false;
        ammoState = AmmoState.Trajectory;

        ammoAnimation.InitializeAmmoAnimation();

        gameObject.SetActive(true);
    }

    private void SetAmmoPlayer()
    {
        gameObject.layer = LayerMask.NameToLayer("EnemyAmmo");
    }

    private void SetTargetPosition(Vector3 target)
    {
        this.target = target;
    }

    private void SetGameObjectActive(bool isActive)
    {
        gameObject.SetActive(isActive);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (isColliding)
        {
            return;
        }

        ReceiveDamage receiveDamage = collision.GetComponent<ReceiveDamage>();
        if (receiveDamage != null && receiveDamage.isNotReceivingDamage == false)
        {
            int damage = ammoDetailsSO.damage;

            if (receiveDamage.damageAmount > 0)
            {
                damage = receiveDamage.damageAmount;
            }

            receiveDamage.TakeDamage(damage);
        }

        if ((playerLayerMask.value & (1 << collision.gameObject.layer)) != 0)
        {
            PlayerEffect targetPlayerEffect = collision.GetComponent<PlayerEffect>();

            targetPlayerEffect.DamagePushEfect(transform.position);

            PlayerEffect playerDamageEffect = collision.GetComponent<PlayerEffect>();

            SpriteRenderer[] spriteRenderers = collision.GetComponentsInChildren<SpriteRenderer>();

            if (playerDamageEffect.gameObject.activeSelf)
            {
                playerDamageEffect.CallDamageFlashEffect(
                    GameResources.Instance.damegeFlashMaterial,
                    GameResources.Instance.litMaterial,
                    spriteRenderers);
            }
        }

        if ((enemyLayerMask.value & (1 << collision.gameObject.layer)) != 0)
        {
            EnemyEffect targetEnemyEffect = collision.GetComponent<EnemyEffect>();
            if (targetEnemyEffect != null)
            {
                targetEnemyEffect.DamagePushEfect(transform.position);
            }

            EnemyEffect enemyDamageEffect = collision.GetComponent<EnemyEffect>();
            if (enemyDamageEffect != null)
            {
                SpriteRenderer[] spriteRenderers = collision.GetComponentsInChildren<SpriteRenderer>();

                if (enemyDamageEffect.gameObject.activeSelf)
                {
                    enemyDamageEffect.CallDamageFlashEffect(
                        GameResources.Instance.damegeFlashMaterial,
                        GameResources.Instance.litMaterial,
                        spriteRenderers);
                }
            }

            Poise poise = collision.GetComponent<Poise>();
            poise.TakePoise(poiseAmount);
        }

        if ((bossLayerMask.value & (1 << collision.gameObject.layer)) != 0)
        {
            Poise poise = collision.GetComponent<Poise>();
            poise.TakePoise(poiseAmount);

            BossEffect bossEffect = collision.GetComponent<BossEffect>();
            if (bossEffect != null)
            {
                bossEffect.PushBossByWeapon(transform.position);
            }

            BossEffect bossHitEffect = collision.GetComponent<BossEffect>();
            if (bossHitEffect != null)
            {
                bossHitEffect.OuchEffect();
            }
        }

        AmmoHitEffect();

        gameObject.SetActive(false);
        isColliding = true;
    }

    private void AmmoHitEffect()
    {
        Component hitEffectComponent = PoolManager.Instance.ReuseComponent(
            GameResources.Instance.ammoHitEffectPrefab,
            transform.position,
            Quaternion.identity);

        AmmoHitEffect hitEffect = hitEffectComponent as AmmoHitEffect;
        if (hitEffect != null)
        {
            hitEffect.InitialiseAmmoHitEffect(ammoDetailsSO.ammoEffectType);
        }
    }

    private void GetLayerMark()
    {
        enemyLayerMask = LayerMask.GetMask("Enemy");
        playerLayerMask = LayerMask.GetMask("Player");
        bossLayerMask = LayerMask.GetMask("Boss");
    }

    private void DisableAmmo()
    {
        gameObject.SetActive(false);
    }

    public Ammo()
    {
        isFirstOnEnable = true;
    }
}
