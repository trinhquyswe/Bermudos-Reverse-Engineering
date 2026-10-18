// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
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
		currentStamina = maxStamina;
		player.staminaEvent.CallStaminaChangedEvent(currentStamina / (float)maxStamina, currentStamina, 0f);
	}

	private void Start()
	{
		staminaRecoveryRate = 1f;
		staminaRegenAmount = 5f;
		staminaRecoveryTimer = Time.time + staminaRecoveryRate;
	}

	private void Update()
	{
		if (currentStamina < (float)maxStamina && Time.time >= staminaRecoveryTimer)
		{
			RegenerateStamina();
		}
	}

	public void UseStamina(int staminaAmount)
	{
		if (0f < currentStamina)
		{
			currentStamina -= (float)staminaAmount;
			player.staminaEvent.CallStaminaChangedEvent(currentStamina / (float)maxStamina, currentStamina, (float)staminaAmount);
		}
	}

	private void RegenerateStamina()
	{
		currentStamina += staminaRegenAmount * Time.deltaTime;
		player.staminaEvent.CallStaminaChangedEvent(currentStamina / (float)maxStamina, currentStamina, 0f);
		staminaRecoveryTimer = Time.time + staminaRecoveryRate;
	}
}
