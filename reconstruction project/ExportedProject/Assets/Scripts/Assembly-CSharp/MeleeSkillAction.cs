using UnityEngine;

public class MeleeSkillAction : SkillsAction
{
    private MeleeSkills meleeSkills;

    public override void OnAwake()
    {
        base.OnAwake();
        meleeSkills = GetComponent<MeleeSkills>();
    }

    public override void OnStart()
    {
        isFirstUpdate = true;
        meleeSkills.PlayActiveSkill(bossAnimationStateDic[bossAnimationState]);
    }

    // TODO(il2cpp): original returned TaskStatus; HandleTimeOfHits call inferred from vtable slot 110 (approx).
    public override void OnUpdate()
    {
        if (meleeSkills.isAttacking)
        {
            HandleTimeOfHits(normalizedTime);
        }
    }

    public override void OnEnd()
    {
        isFirstUpdate = false;
        meleeSkills.isAttacking = false;
    }
}