// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

public class Health : MonoBehaviour
{
	public int currentHealth;
	public int startingHealth;
	private HealthEvent healthEvent;
	private DieEvent dieEvent;

	private void Awake()
	{
	}

	private void Start()
	{
		currentHealth = startingHealth;
		healthEvent.CallHealthChangedEvent((float)currentHealth / (float)startingHealth, currentHealth, 0);
	}

	private void OnEnable()
	{
		StaticEventHandler.OnRestInBonfire += StaticEventHandler_OnRestInBonfire;
		dieEvent.OnDie += DieEvent_OnDie;
	}

	private void OnDisable()
	{
		StaticEventHandler.OnRestInBonfire -= StaticEventHandler_OnRestInBonfire;
		dieEvent.OnDie -= DieEvent_OnDie;
	}

	public void TakeDamage(int damageAmount)
	{
		currentHealth -= damageAmount;
		healthEvent.CallHealthChangedEvent((float)currentHealth / (float)startingHealth, currentHealth, damageAmount);
	}

	public void IncreaseHealth(int healthAmount)
	{
		currentHealth = Mathf.Min(currentHealth + healthAmount, startingHealth);
		healthEvent.CallHealthChangedEvent((float)currentHealth / (float)startingHealth, currentHealth, 0);
	}

	private void StaticEventHandler_OnRestInBonfire()
	{
		currentHealth = startingHealth;
		healthEvent.CallHealthChangedEvent((float)currentHealth / (float)startingHealth, currentHealth, 0);
	}

	private void DieEvent_OnDie(DieEvent dieEvent)
	{
		currentHealth = startingHealth;
		healthEvent.CallHealthChangedEvent((float)currentHealth / (float)startingHealth, currentHealth, 0);
	}
}
