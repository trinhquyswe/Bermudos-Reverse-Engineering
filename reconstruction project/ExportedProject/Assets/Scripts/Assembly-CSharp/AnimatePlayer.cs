using UnityEngine;

public class AnimatePlayer : MonoBehaviour
{
    private Player player;
    private DieEvent dieEvent;
    private Coroutine attackAnimationCoroutine; // TODO(il2cpp): attack animation coroutine body not recovered.
    private bool isAttacking;

    private void Awake()
    {
        player = GetComponent<Player>();
        dieEvent = GetComponent<DieEvent>();
    }

    private void OnEnable()
    {
        player.animateEvent.OnAnimate += AnimateEvent_OnAnimate;
        player.idleEvent.OnIdle += IdleEvent_OnIdle;
        player.movementByVelocityEvent.OnMovementByVelocity += MovementByVelocityEvent_OnMovementByVelocity;
        player.attackEvent.OnAttack += AttackEvent_OnAttack;
        player.destroyedEvent.OnDestroyed += DestroyedEvent_OnDestroyed;
        dieEvent.OnDie += DieEvent_OnDie;
        GameManager.Instance.OnGameStateChange += GameStateChanged_OnPlayer;
    }

    private void OnDisable()
    {
        player.animateEvent.OnAnimate -= AnimateEvent_OnAnimate;
        player.idleEvent.OnIdle -= IdleEvent_OnIdle;
        player.movementByVelocityEvent.OnMovementByVelocity -= MovementByVelocityEvent_OnMovementByVelocity;
        player.attackEvent.OnAttack -= AttackEvent_OnAttack;
        player.destroyedEvent.OnDestroyed -= DestroyedEvent_OnDestroyed;
        dieEvent.OnDie -= DieEvent_OnDie;
        GameManager.Instance.OnGameStateChange -= GameStateChanged_OnPlayer;
    }

    private void AnimateEvent_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs args)
    {
        // TODO(il2cpp): AnimateEventArgs fields and the animator parameters set here are not recovered.
    }

    private void IdleEvent_OnIdle(IdleEvent idleEvent)
    {
        player.animator.SetBool(Settings.isIdle, true);
        player.animator.SetBool(Settings.isMoving, false);
    }

    private void MovementByVelocityEvent_OnMovementByVelocity(MovementByVelocityEvent movementByVelocityEvent, MovementByVelocityArgs args)
    {
        // TODO(il2cpp): movement animation parameters derived from MovementByVelocityArgs not recovered.
    }

    private void AttackEvent_OnAttack(AttackEvent attackEvent)
    {
        if (isAttacking)
        {
            return;
        }

        isAttacking = true;
        player.animator.SetBool(Settings.isAttack, true);
        // TODO(il2cpp): attackAnimationCoroutine start and reset logic not recovered.
    }

    private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs args)
    {
        // TODO(il2cpp): destroyed handler body not recovered.
    }

    private void DieEvent_OnDie(DieEvent dieEvent)
    {
        // TODO(il2cpp): death animation handler body not recovered.
    }

    private void GameStateChanged_OnPlayer(GameState gameState)
    {
        // TODO(il2cpp): game state handler body not recovered.
    }
}
