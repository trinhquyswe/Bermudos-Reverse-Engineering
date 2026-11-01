using DG.Tweening;
using Esper.ESave;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    [HideInInspector]
    public MovementByVelocityEvent movementByVelocityEvent;
    [HideInInspector]
    public MovementToPositionEvent movementToPositionEvent;
    public MovementDetailsSO movementDetails;
    [HideInInspector]
    public IdleEvent idleEvent;
    [HideInInspector]
    public AnimateEvent animateEvent;
    [HideInInspector]
    public AttackEvent attackEvent;
    [HideInInspector]
    public DealDamageEvent dealDamageEvent;
    [HideInInspector]
    public HealthEvent healthEvent;
    [HideInInspector]
    public DestroyedEvent destroyedEvent;
    [HideInInspector]
    public BashEvent bashEvent;
    [HideInInspector]
    public DashEvent dashEvent;
    [HideInInspector]
    public StaminaEvent staminaEvent;
    [HideInInspector]
    public Stamina stamina;
    [HideInInspector]
    public Animator animator;
    [HideInInspector]
    public PlayerEffect playerEffect;
    [HideInInspector]
    public Rage rage;
    [HideInInspector]
    public InventoryManager inventoryManager;
    private DieEvent dieEvent;
    [HideInInspector]
    public Vector2[] spawnPosition = new Vector2[2];
    public SoundEffectSO runSoundEffect;
    public SoundEffectSO dashSoundEffect;
    public SoundEffectSO attackSoundEffect;
    public SoundEffectSO dieSoundEffect;
    private bool isDead;

    private void Awake()
    {
        movementByVelocityEvent = GetComponent<MovementByVelocityEvent>();
        movementToPositionEvent = GetComponent<MovementToPositionEvent>();
        idleEvent = GetComponent<IdleEvent>();
        animateEvent = GetComponent<AnimateEvent>();
        attackEvent = GetComponent<AttackEvent>();
        dealDamageEvent = GetComponent<DealDamageEvent>();
        healthEvent = GetComponent<HealthEvent>();
        destroyedEvent = GetComponent<DestroyedEvent>();
        bashEvent = GetComponent<BashEvent>();
        dashEvent = GetComponent<DashEvent>();
        staminaEvent = GetComponent<StaminaEvent>();
        stamina = GetComponent<Stamina>();
        animator = GetComponent<Animator>();
        playerEffect = GetComponent<PlayerEffect>();
        rage = GetComponent<Rage>();
        inventoryManager = GetComponent<InventoryManager>();
        dieEvent = GetComponent<DieEvent>();
    }

    private void OnEnable()
    {
        StaticEventHandler.CallPlayerChangedEvent(this);
        healthEvent.OnHealthChanged += HealthEvent_OnHealthChanged;
        GameManager.Instance.OnGameStateChange += GameStateChanged_OnPlayer;
        dieEvent.OnDie += DieEvent_OnDie;
    }

    private void OnDisable()
    {
        healthEvent.OnHealthChanged -= HealthEvent_OnHealthChanged;
        dieEvent.OnDie -= DieEvent_OnDie;
    }

    public Vector2 GetPlayerPosition()
    {
        return transform.position;
    }

    private void DieEvent_OnDie(DieEvent dieEvent)
    {
        SoundEffectManager.Instance.PlaySoundEffect(dieSoundEffect);

        SaveFile saveFile = GameManager.Instance.saveFileSetup.GetSaveFile();
        if (saveFile.HasData("Checkpoint"))
        {
            string checkpoint = saveFile.GetData<string>("Checkpoint", null);
            string sceneName = null;
            if (checkpoint == "Coast")
            {
                transform.position = spawnPosition[0];
                sceneName = "Coast";
            }
            else if (checkpoint == "The Forest")
            {
                transform.position = spawnPosition[1];
                sceneName = "The Forest";
            }

            if (sceneName != null)
            {
                Scene currentScene = SceneManager.GetSceneAt(1);
                SceneManager.UnloadSceneAsync(currentScene.name);
                SceneManager.LoadScene(sceneName, LoadSceneMode.Additive);
            }
        }

        GameResources.Instance.beginUI.SetFloat("_FadeAmount", 0f);
        Image fade = GameManager.Instance.beginSreen;
        fade.color = Color.black;
        fade.gameObject.SetActive(true);
        fade.DOFade(0f, 2f).SetEase(Ease.InOutSine).OnComplete(() =>
        {
            // TODO(il2cpp): OnComplete body (Player.<>c.<DieEvent_OnDie>b__28_0) is not in the pseudo output.
        });
    }

    private void HealthEvent_OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
    {
        if (healthEventArgs.healthAmount < 1)
        {
            // TODO(il2cpp): isDead polarity looks inverted (true means alive); logic kept literal.
            if (!isDead)
            {
                return;
            }

            destroyedEvent.CallDestroyedEvent(new DestroyedEventArgs { playerDied = true });
            isDead = false;
        }
        else
        {
            isDead = true;
        }
    }

    private void GameStateChanged_OnPlayer(GameState gameState)
    {
        if (gameState == GameState.Intro)
        {
            transform.position = spawnPosition[0];
            GameManager.Instance.OnGameStateChange -= GameStateChanged_OnPlayer;
        }
    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        if (collision.gameObject.layer == LayerMask.NameToLayer("Boss"))
        {
            Boss boss = collision.gameObject.GetComponent<Boss>();
            if (boss.isPhaseTwo)
            {
                boss.rb.constraints = (RigidbodyConstraints2D)7; // FreezeAll
            }
        }
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.layer == LayerMask.NameToLayer("Boss"))
        {
            Boss boss = collision.gameObject.GetComponent<Boss>();
            if (boss.isPhaseTwo)
            {
                boss.rb.constraints = (RigidbodyConstraints2D)4; // FreezeRotation
            }
        }
    }
}
