// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/FireOpenMouthLoop.c by tools/c2cs.py
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

public class FireOpenMouthLoop : Action // TypeDefIndex: 5565
{
    // Fields
    private RangedSkills rangedSkills; // 0x2C
    public float mouthOpenLoopRate; // 0x30
    public float mouthOpenLoopDuration; // 0x34

    // Methods

    // RVA: 0x3726 Offset: 0x3726 VA: 0x3726 Slot: 4
    public override void OnAwake()
    {
        RangedSkills pRVar1 = default;

        pRVar1 = (RangedSkills)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cee4);
        this.rangedSkills = pRVar1;
    }

    // RVA: 0x3727 Offset: 0x3727 VA: 0x3727 Slot: 6
    public override TaskStatus OnUpdate()
    {
        (Raw.Read<object>(this + 0x2c)).StartMouthOpenLoopMouth(Raw.Read<float>(this + 0x30), Raw.Read<float>(this + 0x34));
        return;
    }

    // RVA: 0x3728 Offset: 0x3728 VA: 0x3728
    public FireOpenMouthLoop()
    {
        /* candidates: BehaviorDesigner.Runtime.Tasks.Action.ctor | BehaviorDesigner.Runtime.Tasks.BehaviorReference.ctor (+6) */ unnamed_function_51834(this,0);
    }
}
