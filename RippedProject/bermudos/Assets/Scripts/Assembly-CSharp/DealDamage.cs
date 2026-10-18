// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

[DisallowMultipleComponent]
public class DealDamage : MonoBehaviour
{
	[SerializeField]
	private LayerMask enemyLayer;
	private ContactFilter2D contactFilter2D;
	private Weapon weapon;
	[SerializeField]
	public int damage;
	private int attackCost;

	private void Awake()
	{
		enemyLayer = LayerMask.NameToLayer("Enemy");
		contactFilter2D.SetLayerMask(enemyLayer);
	}

	private void OnEnable()
	{
		GameManager.Instance.player.dealDamageEvent.OnDealDamage += DealDamageEvent_OnDealDamage;
	}

	private void OnDisable()
	{
		GameManager.Instance.player.dealDamageEvent.OnDealDamage -= DealDamageEvent_OnDealDamage;
	}

	private void DealDamageEvent_OnDealDamage(DealDamageEvent dealDamageEvent, DealDamageEventAgrs dealDamageEventAgrs)
	{
		weapon.GetWeaponCollider();
		GameManager.Instance.player.stamina.UseStamina(attackCost);
		SoundEffectManager.Instance.PlaySoundEffect(GameManager.Instance.player.attackSoundEffect);
		Collider2D[] results = new Collider2D[10];
		int num = weapon.polygonCollider2D.OverlapCollider(contactFilter2D, results);
		for (int i = 0; i < num; i++)
		{
			if (results[i].GetComponent<ReceiveDamage>() != null)
			{
				GameManager.Instance.player.rage.IncreaseRage(1f);
				DealDamageHandle(results[i]);
			}
		}
	}

	private void DealDamageHandle(Collider2D collision)
	{
		Enemy enemy = collision.GetComponent<Enemy>();
		if (enemy.enemyEffect == null)
		{
			BossEffect bossEffect = collision.GetComponent<BossEffect>();
			if (bossEffect != null)
			{
				bossEffect.PushBossByWeapon(transform.position);
				collision.GetComponent<ReceiveDamage>().TakeDamage(damage);
				bossEffect.OuchEffect();
			}
			return;
		}
		enemy.enemyEffect.DamagePushEfect(transform.position);
		collision.GetComponent<ReceiveDamage>().TakeDamage(damage);
		enemy.enemyEffect.PushEnemyByWeapon(transform.position);
		enemy.enemyEffect.BloodEffect();
	}
}
