// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.IsFloatPositive.c by tools/c2cs.py
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

public class IsFloatPositive : Conditional // TypeDefIndex: 6155
{
    // Fields
    [Tooltip("The float to check if positive")]
    public SharedFloat floatVariable; // 0x2C

    // Methods

    // RVA: 0x40E5 Offset: 0x40E5 VA: 0x40E5 Slot: 6
    public override TaskStatus OnUpdate()
    {
        BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565d00);
        return;
    }

    // RVA: 0x40E6 Offset: 0x40E6 VA: 0x40E6 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.floatVariable = pBVar1;
    }

    // RVA: 0x40E7 Offset: 0x40E7 VA: 0x40E7
    public IsFloatPositive()
    {
        unnamed_function_51834(this,0);
    }
}
