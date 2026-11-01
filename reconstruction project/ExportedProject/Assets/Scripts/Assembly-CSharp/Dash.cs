using System.Collections;
using UnityEngine;

public class Dash : MonoBehaviour
{
    private Player player;
    private Coroutine dashCoroutine;
    private WaitForFixedUpdate waitForFixedUpdate = new WaitForFixedUpdate();
    private float dashCooldownTimer;
    private int dashCost = 10;

    private void Awake()
    {
        player = GetComponent<Player>();
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
        if (dashCooldownTimer < Time.time && (float)dashCost < player.stamina.currentStamina)
        {
            SoundEffectManager.Instance.PlaySoundEffect(player.dashSoundEffect);
            Vector2 direction = dashEventArgs.direction;
            if (dashCoroutine != null)
            {
                StopCoroutine(dashCoroutine);
            }
            dashCoroutine = StartCoroutine(DashCoroutine(direction));
            player.playerEffect.isDashing = true;
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
        // TODO(il2cpp): coroutine body not recoverable from decompile
        yield break;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        player.playerEffect.isDashing = false;
        StopPlayerDashRoutine();
    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        player.playerEffect.isDashing = false;
        StopPlayerDashRoutine();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        player.playerEffect.isDashing = false;
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
