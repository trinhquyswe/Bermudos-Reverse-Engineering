// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityString.IsNullOrEmpty.c by tools/c2cs.py
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

public class IsNullOrEmpty : Conditional // TypeDefIndex: 5962
{
    // Fields
    [Tooltip("The target string")]
    public SharedString targetString; // 0x2C

    // Methods

    // RVA: 0x3E42 Offset: 0x3E42 VA: 0x3E42 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;

        param1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        System.String.IsNullOrEmpty(param1,0);
        return;
    }

    // RVA: 0x3E43 Offset: 0x3E43 VA: 0x3E43 Slot: 16
    public override void OnReset()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.targetString = pBVar2;
    }

    // RVA: 0x3E44 Offset: 0x3E44 VA: 0x3E44
    public IsNullOrEmpty()
    {
        unnamed_function_51834(this,0);
    }
}
