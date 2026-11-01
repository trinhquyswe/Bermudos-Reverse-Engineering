using UnityEngine;

// The original base class is BehaviorDesigner.Runtime.Tasks.Action (via SkillsAction), which is not part of the exported project.
public class IdleAction : SkillsAction
{
    public override void OnAwake()
    {
        base.OnAwake();
    }

    public override void OnUpdate()
    {
        animator.SetTrigger(bossAnimationStateDic[bossAnimationState]);
        // TODO(il2cpp): original returned a TaskStatus here; the status value was not recovered.
    }
}
