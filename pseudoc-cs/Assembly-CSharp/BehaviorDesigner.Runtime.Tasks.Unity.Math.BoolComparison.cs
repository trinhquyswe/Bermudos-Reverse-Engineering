// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolComparison.c by tools/c2cs.py
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

public class BoolComparison : Conditional // TypeDefIndex: 6139
{
    // Fields
    [Tooltip("The first bool")]
    public SharedBool bool1; // 0x2C
    [Tooltip("The second bool")]
    public SharedBool bool2; // 0x30

    // Methods

    // RVA: 0x40C4 Offset: 0x40C4 VA: 0x40C4 Slot: 6
    public override TaskStatus OnUpdate()
    {
        BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565c78);
        BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
        return;
    }

    // RVA: 0x40C5 Offset: 0x40C5 VA: 0x40C5 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        pBVar1 = SharedBool.op_Implicit(false);
        this.targetValue = pBVar1;
        pBVar1 = SharedBool.op_Implicit(false);
        this.targetVariable = pBVar1;
    }

    // RVA: 0x40C6 Offset: 0x40C6 VA: 0x40C6
    public BoolComparison()
    {
        unnamed_function_51834(this,0);
    }
}
