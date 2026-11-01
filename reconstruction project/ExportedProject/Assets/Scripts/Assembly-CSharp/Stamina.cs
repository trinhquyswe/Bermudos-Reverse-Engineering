using UnityEngine;

public class Stamina : MonoBehaviour
{
    [SerializeField]
    private int maxStamina;

    [HideInInspector]
    public float currentStamina;

    private Player player;
    private float staminaRecoveryTimer;
    private float staminaRecoveryRate;
    private float staminaRegenAmount;

    private void Awake()
    {
        player = GetComponent<Player>();
    }

    private void Start()
    {
        currentStamina = maxStamina;
        player.staminaEvent.CallStaminaChangedEvent(currentStamina / maxStamina, currentStamina, 0f);
    }

    private void Update()
    {
        RegenerateStamina();
        staminaRecoveryTimer = Time.time + staminaRecoveryRate;
    }

    public void UseStamina(int staminaAmount)
    {
        if (currentStamina > 0f)
        {
            currentStamina -= staminaAmount;
            player.staminaEvent.CallStaminaChangedEvent(currentStamina / maxStamina, currentStamina, staminaAmount);
        }
    }

    private void RegenerateStamina()
    {
        if (currentStamina < maxStamina)
        {
            currentStamina += staminaRegenAmount * Time.deltaTime;
            player.staminaEvent.CallStaminaChangedEvent(currentStamina / maxStamina, currentStamina, 0f);
        }
    }

    public Stamina()
    {
        staminaRecoveryRate = 1f;
        staminaRegenAmount = 5f;
    }
}
