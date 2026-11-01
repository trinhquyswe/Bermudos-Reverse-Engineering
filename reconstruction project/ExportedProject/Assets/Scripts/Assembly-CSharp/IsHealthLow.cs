using UnityEngine;

// The original base class is BehaviorDesigner.Runtime.Tasks.Conditional, which is not part of the exported project.
public class IsHealthLow : MonoBehaviour
{
    public float healthThreshold = 0.5f;
    private Health health;
    private bool isFirstEnd = true;

    public void OnAwake()
    {
        health = GetComponent<Health>();
    }

    public void OnUpdate()
    {
        // TODO(il2cpp): OnUpdate body was empty in the decompiled output; original returned TaskStatus.
    }

    public void OnEnd()
    {
        if (!isFirstEnd)
        {
            healthThreshold = -1f;
        }
        isFirstEnd = false;
    }
}
