using System.Collections.Generic;
using UnityEngine;

// The original base class is BehaviorDesigner.Runtime.Tasks.Action, which is not part of the exported project.
public class SkillsAction : MonoBehaviour
{
    [HideInInspector]
    public Animator animator;
    public BossAnimationState bossAnimationState;
    public float normalizedTime;
    [HideInInspector]
    public bool isFirstUpdate;
    private int Idle = Animator.StringToHash("Idle");
    private int ouch = Animator.StringToHash("ouch");
    private int OpenMouth = Animator.StringToHash("OpenMouth");
    private int eyeAttack = Animator.StringToHash("eyeAttack");
    private int eyeLoop = Animator.StringToHash("eyeLoop");
    private int Hop = Animator.StringToHash("Hop");
    private int EyeLoopDeath = Animator.StringToHash("EyeLoopDeath");
    private int Base = Animator.StringToHash("Base");
    private int Walk = Animator.StringToHash("Walk");
    private int swipe = Animator.StringToHash("swipe");
    private int mouthOpenLoop = Animator.StringToHash("mouthOpenLoop");
    private int spearAtk = Animator.StringToHash("spearAtk");
    private int spinny = Animator.StringToHash("spinny");
    private int Idle2 = Animator.StringToHash("Idle2");
    private int ouch2 = Animator.StringToHash("ouch2");
    private int OpenMouth2 = Animator.StringToHash("OpenMouth2");
    private int eyeAttack2 = Animator.StringToHash("eyeAttack2");
    private int eyeLoop2 = Animator.StringToHash("eyeLoop2");
    private int Hop2 = Animator.StringToHash("Hop2");
    private int EyeLoopDeath2 = Animator.StringToHash("EyeLoopDeath2");
    private int Base2 = Animator.StringToHash("Base2");
    private int Walk2 = Animator.StringToHash("Walk2");
    private int swipe2 = Animator.StringToHash("swipe2");
    private int mouthOpenLoop2 = Animator.StringToHash("mouthOpenLoop2");
    private int spearAtk2 = Animator.StringToHash("spearAtk2");
    private int spinny2 = Animator.StringToHash("spinny2");
    protected Dictionary<BossAnimationState, int> bossAnimationStateDic = new Dictionary<BossAnimationState, int>();

    public virtual void OnAwake()
    {
        bossAnimationStateDic.Add(BossAnimationState.Idle, Idle);
        bossAnimationStateDic.Add(BossAnimationState.ouch, ouch);
        bossAnimationStateDic.Add(BossAnimationState.OpenMouth, OpenMouth);
        bossAnimationStateDic.Add(BossAnimationState.eyeAttack, eyeAttack);
        bossAnimationStateDic.Add(BossAnimationState.eyeLoop, eyeLoop);
        bossAnimationStateDic.Add(BossAnimationState.Hop, Hop);
        bossAnimationStateDic.Add(BossAnimationState.EyeLoopDeath, EyeLoopDeath);
        bossAnimationStateDic.Add(BossAnimationState.Base, Base);
        bossAnimationStateDic.Add(BossAnimationState.Walk, Walk);
        bossAnimationStateDic.Add(BossAnimationState.swipe, swipe);
        bossAnimationStateDic.Add(BossAnimationState.mouthOpenLoop, mouthOpenLoop);
        bossAnimationStateDic.Add(BossAnimationState.spearAtk, spearAtk);
        bossAnimationStateDic.Add(BossAnimationState.spinny, spinny);
        bossAnimationStateDic.Add(BossAnimationState.Idle2, Idle2);
        bossAnimationStateDic.Add(BossAnimationState.ouch2, ouch2);
        bossAnimationStateDic.Add(BossAnimationState.OpenMouth2, OpenMouth2);
        bossAnimationStateDic.Add(BossAnimationState.eyeAttack2, eyeAttack2);
        bossAnimationStateDic.Add(BossAnimationState.eyeLoop2, eyeLoop2);
        bossAnimationStateDic.Add(BossAnimationState.Hop2, Hop2);
        bossAnimationStateDic.Add(BossAnimationState.EyeLoopDeath2, EyeLoopDeath2);
        bossAnimationStateDic.Add(BossAnimationState.Base2, Base2);
        bossAnimationStateDic.Add(BossAnimationState.Walk2, Walk2);
        bossAnimationStateDic.Add(BossAnimationState.swipe2, swipe2);
        bossAnimationStateDic.Add(BossAnimationState.mouthOpenLoop2, mouthOpenLoop2);
        bossAnimationStateDic.Add(BossAnimationState.spearAtk2, spearAtk2);
        bossAnimationStateDic.Add(BossAnimationState.spinny2, spinny2);
        animator = GetComponent<Animator>();
    }

    public virtual void OnStart()
    {
        animator.SetTrigger(bossAnimationStateDic[bossAnimationState]);
        isFirstUpdate = true;
    }

    public virtual void OnUpdate()
    {
        HandleTimeOfHits(normalizedTime);
    }

    public virtual void HandleTimeOfHits(float time)
    {
        if (isFirstUpdate)
        {
            isFirstUpdate = false;
            return;
        }
        // TODO(il2cpp): animator state info query into a local buffer was not recovered.
    }

    public virtual void OnEnd()
    {
        isFirstUpdate = false;
    }
}
