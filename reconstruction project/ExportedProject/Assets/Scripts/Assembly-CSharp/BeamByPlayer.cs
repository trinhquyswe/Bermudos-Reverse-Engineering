using UnityEngine;

public class BeamByPlayer : MonoBehaviour
{
    public GameObject beamPrefab;
    public Material beamMaterial;
    private Rage rage;
    private AnimateEvent animateEvent;
    private Vector3 direction;
    private float ragePercent;

    private void Awake()
    {
        rage = GetComponent<Rage>();
        animateEvent = GetComponent<AnimateEvent>();
    }

    private void OnEnable()
    {
        RageEvent.OnRageChanged += RageEvent_OnRageChanged;
        animateEvent.OnAnimate += AnimateEvent_OnAnimate;
    }

    private void OnDisable()
    {
        RageEvent.OnRageChanged -= RageEvent_OnRageChanged;
        animateEvent.OnAnimate -= AnimateEvent_OnAnimate;
    }

    private void AnimateEvent_OnAnimate(AnimateEvent sender, AnimateEventArgs animateEventArgs)
    {
        // TODO(il2cpp): direction vectors were read from Vector3 static offsets (0x18, 0x24, 0x30, 0x3c);
        // mapped to Vector3.up/down/left/right. Verify the static order against Unity.
        switch (animateEventArgs.aimDirection)
        {
            case AimDirection.Up:
                direction = Vector3.up;
                break;
            case AimDirection.UpRight:
                direction = Vector3.up + Vector3.right;
                break;
            case AimDirection.UpLeft:
                direction = Vector3.up + Vector3.left;
                break;
            case AimDirection.Right:
                direction = Vector3.right;
                break;
            case AimDirection.Left:
                direction = Vector3.left;
                break;
            case AimDirection.Down:
                direction = Vector3.down;
                break;
            case AimDirection.DownRight:
                direction = Vector3.down + Vector3.right;
                break;
            case AimDirection.DownLeft:
                direction = Vector3.down + Vector3.left;
                break;
        }
    }

    private void RageEvent_OnRageChanged(RageEventArgs rageEventArgs)
    {
        ragePercent = rageEventArgs.ragePercent;
    }

    public void Beam()
    {
        if (ragePercent < 1f)
        {
            return;
        }

        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg + 90f;
        Quaternion rotation = Quaternion.Euler(0f, 0f, angle);
        GameObject beamObject = Instantiate(beamPrefab, transform.position, rotation);
        beamObject.layer = LayerMask.NameToLayer("BashAmmo");

        Beam beamComponent = beamObject.GetComponent<Beam>();
        beamComponent.amountScaleY = 10f;

        // The original applied beamMaterial through a Renderer component lookup (type inferred).
        beamObject.GetComponent<Renderer>().material = beamMaterial;

        rage.currentRage = 0f;
        // Replaces RageEvent.CallRageChangedEvent(0f, 0f, rage.maxRage), which does not exist in the project's RageEvent.cs.
        RageEvent.OnRageChanged?.Invoke(new RageEventArgs
        {
            ragePercent = 0f,
            currentRage = 0f,
            maxRage = rage.maxRage
        });
    }
}
