// NOTE: rewritten from pseudo-C# (il2cpp dump). Base class is the project Effect (kept).
// Serialized field names and attributes are kept as in the original.
using System.Collections;
using UnityEngine;

[DisallowMultipleComponent]
public class BossEffect : Effect
{
    [HideInInspector]
    public bool isPhase2;

    private Animator animator;
    private PoiseEvent poiseEvent;

    private void Awake()
    {
        animator = GetComponent<Animator>();
        poiseEvent = GetComponent<PoiseEvent>();
    }

    private void OnEnable()
    {
        poiseEvent.OnPoise += PoiseEvent_onPoiseEvent;
    }

    private void OnDisable()
    {
        poiseEvent.OnPoise -= PoiseEvent_onPoiseEvent;
    }

    private void PoiseEvent_onPoiseEvent(PoiseEvent sender, PoiseEventArgs poiseEventArgs)
    {
        if (poiseEventArgs.currentPoise <= 0f)
        {
            StunEffect(poiseEventArgs.stunTime);
        }
    }

    public void PushBossByWeapon(Vector3 playerPosition)
    {
        Vector3 position = transform.position;
        Vector3 offset = position - playerPosition;
        float length = offset.magnitude;
        Vector3 direction;
        if (length > 1e-5f)
        {
            direction = offset / length;
        }
        else
        {
            // TODO(il2cpp): fallback direction came from an unresolved Vector3 static; using zero (no push).
            direction = Vector3.zero;
        }
        Vector3 targetPosition = position + direction * damageForce;
        StartCoroutine(PushEnemyByWeaponCoroutine(targetPosition));
    }

    private IEnumerator PushEnemyByWeaponCoroutine(Vector3 targetPosition)
    {
        // TODO(il2cpp): state machine body (MoveNext) was not recovered; the lerp toward targetPosition over duration is not reproduced.
        yield break;
    }

    public void OuchEffect()
    {
        animator.SetTrigger(isPhase2 ? Settings.ouch2 : Settings.ouch);
    }
}
