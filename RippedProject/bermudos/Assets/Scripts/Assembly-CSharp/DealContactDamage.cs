// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

[DisallowMultipleComponent]
public class DealContactDamage : MonoBehaviour
{
	private PoiseEvent poiseEvent;
	[Tooltip("The contact damage to deal (is overridden by the receiver)")]
	[Header("DEAL DAMAGE")]
	[Space(10)]
	public int contactDamageAmount;
	[Tooltip("Specify what layers objects should be on to receive contact damage")]
	private LayerMask playerlayerMask;
	private bool isColliding;
	private float stunTime;
	public bool isRemoved;

	private void Awake()
	{
		poiseEvent = GetComponent<PoiseEvent>();
		playerlayerMask = LayerMask.NameToLayer("Player");
	}

	private void OnEnable()
	{
		poiseEvent.OnPoise += PoiseEvent_OnPoise;
	}

	private void OnDisable()
	{
		poiseEvent.OnPoise -= PoiseEvent_OnPoise;
	}

	private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
	{
		if (poiseEventArgs.currentPoise <= 0f)
		{
			stunTime = poiseEventArgs.stunTime;
		}
	}

	private void Update()
	{
		if (0f < stunTime)
		{
			stunTime -= Time.deltaTime;
		}
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		if (isRemoved || isColliding || 0f < stunTime)
		{
			return;
		}
		if (((1 << collision.gameObject.layer) & playerlayerMask) == 0)
		{
			return;
		}
		ContactDamage(collision);
		Enemy enemy = collision.GetComponent<Enemy>();
		if (enemy != null && enemy.gameObject.layer != 0)
		{
			enemy.gameObject.layer = 0;
			enemy.enemyEffect.PushEnemyByWeapon(transform.position);
		}
	}

	private void OnTriggerStay2D(Collider2D collision)
	{
		if (isRemoved || isColliding || 0f < stunTime)
		{
			return;
		}
		if (((1 << collision.gameObject.layer) & playerlayerMask) == 0)
		{
			return;
		}
		ContactDamage(collision);
		Enemy enemy = collision.GetComponent<Enemy>();
		if (enemy != null && enemy.gameObject.layer != 0)
		{
			enemy.gameObject.layer = 0;
			enemy.enemyEffect.PushEnemyByWeapon(transform.position);
		}
	}

	private void ContactDamage(Collider2D collision)
	{
		ReceiveContactDamage receiveContactDamage = collision.GetComponent<ReceiveContactDamage>();
		if (receiveContactDamage != null)
		{
			isColliding = true;
			Invoke("ResetContactCollision", 0.5f);
			receiveContactDamage.TakeContactDamage(contactDamageAmount);
		}
	}

	private void ResetContactCollision()
	{
		isColliding = false;
	}
}
