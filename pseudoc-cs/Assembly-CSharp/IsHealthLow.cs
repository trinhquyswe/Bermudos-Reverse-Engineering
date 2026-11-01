// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/IsHealthLow.c by tools/c2cs.py
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

public class IsHealthLow : Conditional // TypeDefIndex: 5568
{
    // Fields
    public float healthThreshold; // 0x2C
    private Health health; // 0x30
    private bool isFirstEnd; // 0x34

    // Methods

    // RVA: 0x372F Offset: 0x372F VA: 0x372F Slot: 4
    public override void OnAwake()
    {
        Health pHVar1 = default;

        pHVar1 = (Health)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056ced4);
        this.health = pHVar1;
    }

    // RVA: 0x3730 Offset: 0x3730 VA: 0x3730 Slot: 6
    public override TaskStatus OnUpdate()
    {

    }

    // RVA: 0x3731 Offset: 0x3731 VA: 0x3731 Slot: 9
    public override void OnEnd()
    {
        if (this.isFirstEnd == false) {
            this.healthThreshold = -1.0;
        }
        this.isFirstEnd = false;
    }

    // RVA: 0x3732 Offset: 0x3732 VA: 0x3732
    public IsHealthLow()
    {
        this.isFirstEnd = true;
        this.healthThreshold = 0.5;
        /* candidates: BehaviorDesigner.Runtime.Tasks.Action.ctor | BehaviorDesigner.Runtime.Tasks.BehaviorReference.ctor (+6) */ unnamed_function_51834(this,0);
    }
}
