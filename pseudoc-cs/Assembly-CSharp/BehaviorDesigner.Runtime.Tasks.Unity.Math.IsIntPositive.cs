// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.IsIntPositive.c by tools/c2cs.py
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

public class IsIntPositive : Conditional // TypeDefIndex: 6156
{
    // Fields
    [Tooltip("The int to check if positive")]
    public SharedInt intVariable; // 0x2C

    // Methods

    // RVA: 0x40E8 Offset: 0x40E8 VA: 0x40E8 Slot: 6
    public override TaskStatus OnUpdate()
    {
        unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565cb8);
        return;
    }

    // RVA: 0x40E9 Offset: 0x40E9 VA: 0x40E9 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        pBVar1 = SharedInt.op_Implicit(0);
        this.intVariable = pBVar1;
    }

    // RVA: 0x40EA Offset: 0x40EA VA: 0x40EA
    public IsIntPositive()
    {
        unnamed_function_51834(this,0);
    }
}
