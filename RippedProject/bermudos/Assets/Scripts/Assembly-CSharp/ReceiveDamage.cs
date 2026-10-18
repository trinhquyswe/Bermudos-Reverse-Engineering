// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

[DisallowMultipleComponent]
public class ReceiveDamage : MonoBehaviour
{
	[SerializeField]
	[Header("The damage amount to receive")]
	private int damageAmount;
	private Health health;
	public bool isNotReceivingDamage;

	private void Awake()
	{
		health = GetComponent<Health>();
	}

	public void TakeDamage(int damageAmount = 0)
	{
		if (!isNotReceivingDamage)
		{
			if (0 < this.damageAmount)
			{
				damageAmount = this.damageAmount;
			}
			health.TakeDamage(damageAmount);
		}
	}
}
