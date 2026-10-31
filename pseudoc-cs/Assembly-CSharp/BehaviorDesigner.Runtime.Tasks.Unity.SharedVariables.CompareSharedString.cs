// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedString.c by tools/c2cs.py
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

public class CompareSharedString : Conditional // TypeDefIndex: 5979
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedString variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedString compareTo; // 0x30

    // Methods

    // RVA: 0x3E79 Offset: 0x3E79 VA: 0x3E79 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        int param2 = default;

        param1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        System.String.Equals(param1,param2,0);
        return;
    }

    // RVA: 0x3E7A Offset: 0x3E7A VA: 0x3E7A Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        pBVar1 = SharedString.op_Implicit("");
        this.variable = pBVar1;
        pBVar1 = SharedString.op_Implicit("");
        this.compareTo = pBVar1;
    }

    // RVA: 0x3E7B Offset: 0x3E7B VA: 0x3E7B
    public CompareSharedString()
    {
        unnamed_function_51834(this,0);
    }
}
