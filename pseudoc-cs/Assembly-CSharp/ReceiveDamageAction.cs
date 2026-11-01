// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/ReceiveDamageAction.c by tools/c2cs.py
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

public class ReceiveDamageAction : Action // TypeDefIndex: 5571
{
    // Fields
    private Animator animator; // 0x2C
    private RangedSkills rangedSkills; // 0x30
    private MeleeSkills meleeSkills; // 0x34
    private bool isFirstUpdate; // 0x38
    public SharedFloat stunTime; // 0x3C
    private Poise poise; // 0x40

    // Methods

    // RVA: 0x373D Offset: 0x373D VA: 0x373D Slot: 4
    public override void OnAwake()
    {
        Poise pPVar1 = default;
        Animator pAVar2 = default;
        RangedSkills pRVar3 = default;
        MeleeSkills pMVar4 = default;

        pPVar1 = (Poise)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cee0);
        this.poise = pPVar1;
        pAVar2 = (Animator)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cec0);
        this.animator = pAVar2;
        pRVar3 = (RangedSkills)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cee4);
        this.rangedSkills = pRVar3;
        pMVar4 = (MeleeSkills)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cedc);
        this.meleeSkills = pMVar4;
    }

    // RVA: 0x373E Offset: 0x373E VA: 0x373E Slot: 5
    public override void OnStart()
    {
        UnityEngine.MonoBehaviour.StopAllCoroutines(this.rangedSkills,0);
        UnityEngine.MonoBehaviour.StopAllCoroutines(this.meleeSkills,0);
        this.isFirstUpdate = true;
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(this.stunTime,this.poise.stunTime,DAT_ram_00565d04);
    }

    // RVA: 0x373F Offset: 0x373F VA: 0x373F Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        int param1 = default;

        byte[] local_50 = new byte[80];
        if ((Raw.Read<float>(Raw.Read<int>(this + 0x40) + 0x18) <= 0.0) && (fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x3c),DAT_ram_00565d00), 0.0 < fVar1)) {
            param1 = Raw.Read<int>(this + 0x3c);
            fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(param1,DAT_ram_00565d00);
            fVar2 = UnityEngine.Time.get_deltaTime(0);
            BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,fVar1 - fVar2,DAT_ram_00565d04);
        }
        if (Raw.Read<sbyte>(this + 0x38) == '\0') {
            UnityEngine.Animator.GetCurrentAnimatorStateInfo(local_50,Raw.Read<int>(this + 0x2c),0,0);
        }
        else {
            Raw.Write<byte>(this + 0x38, 0);
        }
        return;
    }

    // RVA: 0x3740 Offset: 0x3740 VA: 0x3740
    public ReceiveDamageAction()
    {
        /* candidates: BehaviorDesigner.Runtime.Tasks.Action.ctor | BehaviorDesigner.Runtime.Tasks.BehaviorReference.ctor (+6) */ unnamed_function_51834(this,0);
    }
}
