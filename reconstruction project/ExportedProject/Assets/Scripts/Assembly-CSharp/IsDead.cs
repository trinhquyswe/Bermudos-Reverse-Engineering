using UnityEngine;

// The original base class is BehaviorDesigner.Runtime.Tasks.Conditional, which is not part of the exported project.
public class IsDead : MonoBehaviour
{
    private Health health;

    public void OnAwake()
    {
        health = GetComponent<Health>();
    }

    public void OnUpdate()
    {
        // TODO(il2cpp): OnUpdate body was empty in the decompiled output; original returned TaskStatus.
    }
}
