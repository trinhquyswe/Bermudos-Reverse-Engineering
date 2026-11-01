using UnityEngine;

// Originally a BehaviorDesigner Conditional task; re-exposed as a MonoBehaviour with the same callback names.
public class IsReceiveDamage : MonoBehaviour
{
    private HealthEvent healthEvent;
    private bool isReceiveDamage;

    public void OnAwake()
    {
        healthEvent = GetComponent<HealthEvent>();
        healthEvent.OnHealthChanged += OnHealthChanged;
    }

    private void OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
    {
        isReceiveDamage = true;
    }

    public void OnUpdate()
    {
        // TODO(il2cpp): OnUpdate body and returned TaskStatus are empty in the pseudo output.
    }

    public void OnEnd()
    {
        isReceiveDamage = false;
    }
}
