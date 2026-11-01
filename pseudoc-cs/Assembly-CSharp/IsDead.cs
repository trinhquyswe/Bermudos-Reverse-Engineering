// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/IsDead.c by tools/c2cs.py
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

public class IsDead : Conditional // TypeDefIndex: 5567
{
    // Fields
    private Health health; // 0x2C

    // Methods

    // RVA: 0x372C Offset: 0x372C VA: 0x372C Slot: 4
    public override void OnAwake()
    {
        Health pHVar1 = default;

        pHVar1 = (Health)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056ced4);
        this.health = pHVar1;
    }

    // RVA: 0x372D Offset: 0x372D VA: 0x372D Slot: 6
    public override TaskStatus OnUpdate()
    {

    }

    // RVA: 0x372E Offset: 0x372E VA: 0x372E
    public IsDead()
    {
        /* candidates: BehaviorDesigner.Runtime.Tasks.Action.ctor | BehaviorDesigner.Runtime.Tasks.BehaviorReference.ctor (+6) */ unnamed_function_51834(this,0);
    }
}
