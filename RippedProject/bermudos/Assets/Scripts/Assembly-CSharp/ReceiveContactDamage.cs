// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

[RequireComponent(typeof(Health))]
public class ReceiveContactDamage : MonoBehaviour
{
	[SerializeField]
	[Header("The contact damage amount to receive")]
	private int contactDamageAmount;
	private Health health;

	private void Awake()
	{
		health = GetComponent<Health>();
	}

	public void TakeContactDamage(int damageAmount = 0)
	{
		if (0 < contactDamageAmount)
		{
			damageAmount = contactDamageAmount;
		}
		health.TakeDamage(damageAmount);
	}
}
