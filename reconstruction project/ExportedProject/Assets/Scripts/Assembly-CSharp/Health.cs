using UnityEngine;

public class Health : MonoBehaviour
{
    public int currentHealth;
    public int startingHealth;

    private HealthEvent healthEvent;
    private DieEvent dieEvent;

    private void Awake()
    {
        healthEvent = GetComponent<HealthEvent>();
        dieEvent = GetComponent<DieEvent>();
    }

    private void OnEnable()
    {
        StaticEventHandler.OnRestInBonfire += StaticEventHandler_OnRestInBonfire;

        if (dieEvent != null)
        {
            dieEvent.OnDie += DieEvent_OnDie;
        }
    }

    private void OnDisable()
    {
        StaticEventHandler.OnRestInBonfire -= StaticEventHandler_OnRestInBonfire;

        if (dieEvent != null)
        {
            dieEvent.OnDie -= DieEvent_OnDie;
        }
    }

    private void StaticEventHandler_OnRestInBonfire()
    {
        ResetHealth();
    }

    private void DieEvent_OnDie(DieEvent dieEvent)
    {
        ResetHealth();
    }

    private void Start()
    {
        ResetHealth();
    }

    public void TakeDamage(int damageAmount)
    {
        currentHealth -= damageAmount;

        // The compiled code switches the hurt sound based on whether this Health
        // sits on the Player.
        // TODO(il2cpp): component type in the null-check (DAT_ram_00567ef0) guessed as Player.
        SoundEffectSO soundEffect;
        if (GetComponent<Player>() != null)
        {
            soundEffect = GameResources.Instance.getHurtPlayer;
        }
        else
        {
            soundEffect = GameResources.Instance.getHurtEnemy;
        }
        SoundEffectManager.Instance.PlaySoundEffect(soundEffect);

        healthEvent.CallHealthChangedEvent((float)currentHealth / (float)startingHealth, currentHealth, damageAmount);
    }

    public void IncreaseHealth(int healthAmount)
    {
        int newMax = startingHealth;
        int newCurrent = currentHealth + healthAmount;
        if (newCurrent <= newMax)
        {
            newCurrent = newMax;
        }
        currentHealth = newCurrent;
        healthEvent.CallHealthChangedEvent((float)currentHealth / (float)newMax, currentHealth, 0);
    }

    private void ResetHealth()
    {
        currentHealth = startingHealth;
        healthEvent.CallHealthChangedEvent((float)currentHealth / (float)startingHealth, currentHealth, 0);
    }
}
