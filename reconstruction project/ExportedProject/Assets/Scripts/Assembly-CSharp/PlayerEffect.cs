using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

[DisallowMultipleComponent]
public class PlayerEffect : Effect
{
    private Player player;
    private Coroutine pushPlayerByEnemyCoroutine;
    [HideInInspector]
    public bool isDashing;
    private float dashEffectDuration;

    public PlayerEffect()
    {
        dashEffectDuration = 0.05f;
    }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (pushPlayerByEnemyCoroutine != null)
        {
            StopCoroutine(pushPlayerByEnemyCoroutine);
        }
    }

    private void Awake()
    {
        player = GetComponent<Player>();
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        if (isDashing)
        {
            DashShadowPlayerEffect();
        }
    }

    public void CallDamageFlashEffect(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
    {
        if (gameObject.activeSelf)
        {
            StartCoroutine(DamageFlashCoroutine(damageFlash, defaultMaterial, spriteRenderers));
        }
    }

    private IEnumerator DamageFlashCoroutine(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
    {
        // TODO(il2cpp): state machine body (d__10 MoveNext) was not recovered; the per-renderer flash over duration is not reproduced.
        yield break;
    }

    public void DamagePushEfect(Vector2 damageSource)
    {
        if (pushPlayerByEnemyCoroutine != null)
        {
            StopCoroutine(pushPlayerByEnemyCoroutine);
        }

        if (gameObject.activeSelf)
        {
            Vector2 position = rb.position;
            Vector2 offset = position - damageSource;
            float length = offset.magnitude;
            Vector2 direction;
            if (length > 1e-5f)
            {
                direction = offset / length;
            }
            else
            {
                // TODO(il2cpp): fallback direction came from an unresolved Vector2 static; using zero.
                direction = Vector2.zero;
            }

            Vector3 targetPosition = new Vector3(position.x + direction.x * damageForce, position.y + direction.y * damageForce, 0f);
            pushPlayerByEnemyCoroutine = StartCoroutine(PushPlayerByEnemy(targetPosition));
        }
    }

    private IEnumerator PushPlayerByEnemy(Vector3 targetPosition)
    {
        // TODO(il2cpp): state machine body was not recovered; the lerp toward targetPosition over duration is not reproduced.
        yield break;
    }

    private void DashShadowPlayerEffect()
    {
        if (dashEffectDuration > 0f)
        {
            dashEffectDuration -= Time.deltaTime;
        }
        else
        {
            SpriteRenderer[] playerSpriteRenderers = GetComponentsInChildren<SpriteRenderer>();
            PlayerShadow shadow = PoolManager.Instance.ReuseComponent(GameResources.Instance.playerShadowPrefab, player.transform.position, Quaternion.identity) as PlayerShadow;
            if (shadow != null)
            {
                shadow.gameObject.SetActive(true);
                shadow.InitialiseSprite(playerSpriteRenderers);
            }
            dashEffectDuration = 0.035f;
        }
    }
}
