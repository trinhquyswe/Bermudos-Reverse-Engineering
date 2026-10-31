// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.IntAbs.c by tools/c2cs.py
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

public class IntAbs : Action // TypeDefIndex: 6149
{
    // Fields
    [Tooltip("The int to return the absolute value of")]
    public SharedInt intVariable; // 0x2C

    // Methods

    // RVA: 0x40D9 Offset: 0x40D9 VA: 0x40D9 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        iVar1 = unnamed_function_61203(param1,DAT_ram_00565cb8);
        unnamed_function_61204(param1,iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f,DAT_ram_00565cbc);
        return;
    }

    // RVA: 0x40DA Offset: 0x40DA VA: 0x40DA Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        pBVar1 = SharedInt.op_Implicit(0);
        this.intVariable = pBVar1;
    }

    // RVA: 0x40DB Offset: 0x40DB VA: 0x40DB
    public IntAbs()
    {
        unnamed_function_51834(this,0);
    }
}
