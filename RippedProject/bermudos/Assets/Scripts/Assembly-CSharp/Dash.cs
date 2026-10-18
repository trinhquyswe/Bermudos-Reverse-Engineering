// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System.Collections;
using UnityEngine;

public class Dash : MonoBehaviour
{
	private Player player;
	private Coroutine dashCoroutine;
	private WaitForFixedUpdate waitForFixedUpdate;
	private float dashCooldownTimer;
	private int dashCost;

	private void Awake()
	{
		player = GetComponent<Player>();
		dashCost = 10;
		waitForFixedUpdate = new WaitForFixedUpdate();
		enabled = false;
	}

	private void OnEnable()
	{
		player.dashEvent.OnDashEvent += DashEvent_OnDashEvent;
	}

	private void OnDisable()
	{
		player.dashEvent.OnDashEvent -= DashEvent_OnDashEvent;
	}

	private void DashEvent_OnDashEvent(DashEvent dashEvent, DashEventArgs dashEventArgs)
	{
		if (dashCooldownTimer < Time.time && dashCost < player.stamina.currentStamina)
		{
			SoundEffectManager.Instance.PlaySoundEffect(player.dashSoundEffect);
			PlayDash(dashEventArgs.direction);
			dashCooldownTimer = Time.time + player.movementDetails.dashCooldownTime;
			player.stamina.UseStamina(dashCost);
		}
	}

	public void PlayDash(Vector2 direction)
	{
		if (dashCoroutine != null)
		{
			StopCoroutine(dashCoroutine);
		}
		dashCoroutine = StartCoroutine(DashCoroutine(direction));
		player.playerEffect.isDashing = true;
	}

	private IEnumerator DashCoroutine(Vector2 direction)
	{
		Vector2 targetPosition = (Vector2)transform.position + direction * player.movementDetails.dashDistance;
		float minDistance = 0.15f;
		while (Vector2.Distance(transform.position, targetPosition) > minDistance)
		{
			player.movementToPositionEvent.CallMovementToPositionEvent(targetPosition, transform.position, player.movementDetails.dashSpeed, direction, true);
			yield return waitForFixedUpdate;
		}
		transform.position = targetPosition;
		player.playerEffect.isDashing = false;
	}

	private void OnCollisionEnter2D(Collision2D collision)
	{
		StopPlayerDashRoutine();
	}

	private void OnCollisionStay2D(Collision2D collision)
	{
		StopPlayerDashRoutine();
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		StopPlayerDashRoutine();
	}

	private void StopPlayerDashRoutine()
	{
		if (dashCoroutine != null)
		{
			StopCoroutine(dashCoroutine);
		}
	}
}
