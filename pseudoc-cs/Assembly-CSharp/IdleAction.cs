// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/IdleAction.c by tools/c2cs.py
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

public class IdleAction : SkillsAction // TypeDefIndex: 5566
{
    // Methods

    // RVA: 0x3729 Offset: 0x3729 VA: 0x3729 Slot: 4
    public override void OnAwake()
    {
        ((SkillsAction)this).OnAwake();
    }

    // RVA: 0x372A Offset: 0x372A VA: 0x372A Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        param2 = /* candidates: System.Collections.Generic.Dictionary<Int32Enum, Int32Enum>.get_Item | System.Collections.Generic.Dictionary<Int32Enum, int>.get_Item (+1) */ unnamed_function_77425 (Raw.Read<int>(this + 0xa4),Raw.Read<int>(this + 0x30),DAT_ram_0055fd54);
        /* candidates: UnityEngine.Animator.SetTrigger | UnityEngine.Animator.SetTriggerID */ unnamed_function_45425(param1,param2,0);
        return;
    }

    // RVA: 0x372B Offset: 0x372B VA: 0x372B
    public IdleAction()
    {
        new SkillsAction();
    }
}
