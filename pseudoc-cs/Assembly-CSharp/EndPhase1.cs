// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EndPhase1.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(k, s)(args)               virtual call: vtable slot s of class k (k+0xc0+8*s)
//   Raw.VCallAt(e)(args)                virtual call: vtable entry at address e (interface)
//   Raw.DelegateInvoke(d)(args)         delegate invoke: target from d+0xc, this d+0x20
//   Raw.IndirectCall(a)(args)           unresolved indirect call (function-table offset a)
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class EndPhase1 : Action // TypeDefIndex: 5562
{
    // Fields
    private Animator animator; // 0x2C
    public SharedMaterial material; // 0x30
    public float transitionTime; // 0x34
    private float fadeAmount; // 0x38
    private float transitionTime2; // 0x3C
    private RangedSkills rangedSkills; // 0x40
    private MeleeSkills meleeSkills; // 0x44
    private bool isEyeLoopDeath; // 0x48
    [SerializeField]
    private SoundEffectSO transitionSoundEffect; // 0x4C

    // Methods

    // RVA: 0x3714 Offset: 0x3714 VA: 0x3714 Slot: 4
    public override void OnAwake()
    {
        Animator pAVar1 = default;
        RangedSkills pRVar2 = default;
        MeleeSkills pMVar3 = default;

        pAVar1 = (Animator)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cec0);
        this.animator = pAVar1;
        pRVar2 = (RangedSkills)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cee4);
        this.rangedSkills = pRVar2;
        pMVar3 = (MeleeSkills)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cedc);
        this.meleeSkills = pMVar3;
    }

    // RVA: 0x3715 Offset: 0x3715 VA: 0x3715 Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        int iVar1 = default;
        int param1 = default;

        iVar1 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
        }
        iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
        }
        ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar1 + 0x5c))).PlaySoundEffect(this.transitionSoundEffect);
        UnityEngine.MonoBehaviour.StopAllCoroutines(this.rangedSkills,0);
        UnityEngine.MonoBehaviour.StopAllCoroutines(this.meleeSkills,0);
        this.transitionTime2 = this.transitionTime;
        iVar1 = new EndPhase1__EndPhase1Coroutine_d__12();
        Raw.Write<object>(iVar1 + 0x10, this);
        Raw.Write<int>(iVar1 + 8, 0);
        BehaviorDesigner.Runtime.Tasks.Task.StartCoroutine(this,iVar1,0);
        param1 = Raw.Read<int>(this).pad_8;
        param2 = UnityEngine.LayerMask.NameToLayer("Default",0);
        UnityEngine.GameObject.set_layer(param1,param2,0);
    }

    // RVA: 0x3716 Offset: 0x3716 VA: 0x3716 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        int param1 = default;
        float fVar2 = default;

        if (0.0 < Raw.Read<float>(this + 0x34)) {
            if (Raw.Read<sbyte>(this + 0x48) != '\0') {
                fVar2 = Raw.Read<float>(this + 0x38);
                fVar1 = UnityEngine.Time.get_deltaTime(0);
                Raw.Write<float>(this + 0x38, fVar2 + fVar1 / Raw.Read<float>(this + 0x3c));
                fVar2 = Raw.Read<float>(this + 0x34);
                fVar1 = UnityEngine.Time.get_deltaTime(0);
                Raw.Write<float>(this + 0x34, fVar2 - fVar1);
                param1 = /* candidates: BehaviorDesigner.Runtime.SharedVariable<Int32Enum>.get_Value | BehaviorDesigner.Runtime.SharedVariable<LayerMask>.get_Value (+4) */ unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565ccc);
                UnityEngine.Material.SetFloat(param1,"_FadeAmount",Raw.Read<float>(this + 0x38),0);
            }
            return;
        }
        return;
    }

    [IteratorStateMachine(typeof(EndPhase1._EndPhase1Coroutine_d__12))]
    // RVA: 0x3717 Offset: 0x3717 VA: 0x3717
    public IEnumerator EndPhase1Coroutine()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new EndPhase1__EndPhase1Coroutine_d__12();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3718 Offset: 0x3718 VA: 0x3718
    public EndPhase1()
    {
        this.transitionTime = 1.0;
        /* candidates: BehaviorDesigner.Runtime.Tasks.Action.ctor | BehaviorDesigner.Runtime.Tasks.BehaviorReference.ctor (+6) */ unnamed_function_51834(this,0);
    }
}
