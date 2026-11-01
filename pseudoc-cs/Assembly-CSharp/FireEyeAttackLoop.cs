// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/FireEyeAttackLoop.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(a)(args)                  virtual call through vtable slot a
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class FireEyeAttackLoop : Action // TypeDefIndex: 5564
{
    // Fields
    private RangedSkills rangedSkills; // 0x2C
    [Header("EYE LOOP")]
    public float eyeLoopRate; // 0x30
    public float eyeLoopDuration; // 0x34

    // Methods

    // RVA: 0x3723 Offset: 0x3723 VA: 0x3723 Slot: 4
    public override void OnAwake()
    {
        RangedSkills pRVar1 = default;

        pRVar1 = (RangedSkills)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cee4);
        this.rangedSkills = pRVar1;
    }

    // RVA: 0x3724 Offset: 0x3724 VA: 0x3724 Slot: 6
    public override TaskStatus OnUpdate()
    {
        (Raw.Read<object>(this + 0x2c)).StartEyeLoop(Raw.Read<float>(this + 0x34), Raw.Read<float>(this + 0x30));
        return;
    }

    // RVA: 0x3725 Offset: 0x3725 VA: 0x3725
    public FireEyeAttackLoop()
    {
        /* candidates: BehaviorDesigner.Runtime.Tasks.Action.ctor | BehaviorDesigner.Runtime.Tasks.BehaviorReference.ctor (+6) */ unnamed_function_51834(this,0);
    }
}
