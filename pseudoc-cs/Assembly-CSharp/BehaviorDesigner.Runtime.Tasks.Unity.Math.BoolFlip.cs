// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolFlip.c by tools/c2cs.py
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

public class BoolFlip : Action // TypeDefIndex: 6140
{
    // Fields
    [Tooltip("The bool to flip the value of")]
    public SharedBool boolVariable; // 0x2C

    // Methods

    // RVA: 0x40C7 Offset: 0x40C7 VA: 0x40C7 Slot: 6
    public override TaskStatus OnUpdate()
    {
        uint uVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        uVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(param1,DAT_ram_00565c78);
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(param1,uVar1 ^ 1,DAT_ram_00565c7c);
        return;
    }

    // RVA: 0x40C8 Offset: 0x40C8 VA: 0x40C8 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(this.boolVariable,0,DAT_ram_00565c7c);
    }

    // RVA: 0x40C9 Offset: 0x40C9 VA: 0x40C9
    public BoolFlip()
    {
        unnamed_function_51834(this,0);
    }
}
