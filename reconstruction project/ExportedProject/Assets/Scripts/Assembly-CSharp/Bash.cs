using UnityEngine;

public class Bash : MonoBehaviour
{
    [SerializeField] private SoundEffectSO duringBashSoundEffect;
    [SerializeField] private SoundEffectSO releaseBashSoundEffect;
    [SerializeField] private string instructionBash; // TODO(il2cpp): instruction text source not recovered.

    private float bashRadius = 2.5f;
    private float bashForce = 10f;
    private int bashCost = 10;

    private Player player;
    private Arrow arrow;
    private Collider2D collider2d;
    private BashState bashState;
    private LayerMask layerMask;
    private float aimCountdown;
    private int displayCount;
    private bool isDuring;
    private bool isRelease;
    private bool isDuringSoundPlaying;

    private void Awake()
    {
        player = GetComponent<Player>();
        arrow = GetComponent<Arrow>();
        bashState = BashState.None;
    }

    private void OnEnable()
    {
        player.bashEvent.OnBash += OnBashEvent_OnBash;
        GameManager.Instance.OnGameStateChange += GameStateChanged_OnBash;
    }

    private void OnDisable()
    {
        player.bashEvent.OnBash -= OnBashEvent_OnBash;
        GameManager.Instance.OnGameStateChange -= GameStateChanged_OnBash;
    }

    private void Start()
    {
        layerMask = LayerMask.GetMask("EnemyAmmo");
    }

    private void Update()
    {
        switch (bashState)
        {
            case BashState.ActiveBash:
                Prepare();
                break;
            case BashState.DuringBash:
                if (isDuring)
                {
                    During();
                }
                break;
            case BashState.ReleaseBash:
                if (isRelease)
                {
                    Release();
                }
                break;
            case BashState.None:
                InitializeFlagVarible();
                break;
        }
    }

    private void OnBashEvent_OnBash(BashEvent bashEvent, BashEventArgs args)
    {
        bashState = args.bashState;
    }

    private void GameStateChanged_OnBash(GameState gameState)
    {
        if (gameState == GameState.Instruct)
        {
            InvokeRepeating(nameof(InstructBash), 0f, 0.15f);
            GameManager.Instance.OnGameStateChange -= GameStateChanged_OnBash;
        }
    }

    private void InstructBash()
    {
        // Condition on the hit is inferred; original sets timeScale 0 and aimCountdown 10 on overlap.
        Collider2D hit = Physics2D.OverlapCircle(transform.position, bashRadius, layerMask);
        collider2d = hit;
        if (hit != null)
        {
            Time.timeScale = 0f;
            aimCountdown = 10f;
            isDuring = true;
        }
    }

    private void Prepare()
    {
        if (bashCost <= player.stamina.currentStamina)
        {
            player.stamina.UseStamina(bashCost);
            Collider2D hit = Physics2D.OverlapCircle(transform.position, bashRadius, layerMask);
            collider2d = hit;
            if (hit != null && hit.GetComponent<Ammo>() != null && bashCost <= player.stamina.currentStamina)
            {
                Time.timeScale = 0f;
                aimCountdown = 2f;
                isDuring = true;
                bashState = BashState.DuringBash; // Inferred state transition; not directly confirmed in pseudo.
            }
        }
    }

    private void During()
    {
        aimCountdown -= Time.unscaledDeltaTime;
        if (aimCountdown <= 0f)
        {
            // TODO(il2cpp): Arrow.lineRenderer is private; clearing the arrow line needs a reset API.
            Time.timeScale = 1f;
            isDuring = false;
            return;
        }

        isRelease = true;
        if (collider2d != null)
        {
            if (!isDuringSoundPlaying)
            {
                SoundEffectManager.Instance.PlaySoundEffect(duringBashSoundEffect);
                isDuringSoundPlaying = true;
            }

            Vector2 mousePosition = HelperUtilities.GetMouseWorldPosition();
            Vector2 ammoPosition = collider2d.transform.position;
            arrow.MakeArrow(mousePosition, ammoPosition);
        }
    }

    private void Release()
    {
        Time.timeScale = 1f;
        if (collider2d != null && isRelease)
        {
            // TODO(il2cpp): original writes 2 to a field at offset 0x74 of the hit Ammo component; field name not recovered.
            collider2d.gameObject.layer = LayerMask.NameToLayer("BashAmmo");
            MoveAmmoByBash();
            // TODO(il2cpp): clearing the arrow line needs a reset API (Arrow.lineRenderer is private).

            if (isDuringSoundPlaying)
            {
                SoundEffectManager.Instance.PlaySoundEffect(releaseBashSoundEffect);
                isDuringSoundPlaying = false;
            }

            ProcessInstructionBashInRealseState();
        }

        bashState = BashState.None; // Inferred end-of-release transition.
    }

    private void MoveAmmoByBash()
    {
        Rigidbody2D rb = collider2d.GetComponent<Rigidbody2D>();
        Vector2 ammoPosition = collider2d.transform.position;
        Vector2 mousePosition = HelperUtilities.GetMouseWorldPosition();
        Vector2 direction = ammoPosition - mousePosition;

        if (direction.magnitude > 0.00001f)
        {
            direction = direction.normalized;
        }
        else
        {
            direction = Vector2.right; // TODO(il2cpp): fallback direction constant not verified.
        }

        rb.AddForce(direction * bashForce);
    }

    private void ProcessInstructionBashInRealseState()
    {
        if (GameManager.Instance.gameState != GameState.Instruct)
        {
            return;
        }

        if (displayCount == 2)
        {
            CancelInvoke(nameof(InstructBash));
            GameManager.Instance.HandleGameState(GameState.Play);
        }

        // TODO(il2cpp): StaticEventHandler instruction-changed invoke arguments not recovered (instructionBash, count, flags).
        displayCount++;
    }

    private void InitializeFlagVarible()
    {
        isDuring = false;
        isRelease = false;
    }
}
