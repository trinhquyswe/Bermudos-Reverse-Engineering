// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector2.c by tools/c2cs.py
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

public class CompareSharedVector2 : Conditional // TypeDefIndex: 5982
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedVector2 variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedVector2 compareTo; // 0x30

    // Methods

    // RVA: 0x3E82 Offset: 0x3E82 VA: 0x3E82 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float local_8 = default;
        float local_4 = default;

        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
        return;
    }

    // RVA: 0x3E83 Offset: 0x3E83 VA: 0x3E83 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        Vector2 local_20 = default;
        Vector2 local_18 = default;
        Vector2 local_10 = default;
        Vector2 local_8 = default;

        local_18 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        local_8 = local_18;
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) SharedVector2.op_Implicit(&local_18);
        this.variable = pBVar1;
        local_20 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        local_10 = local_20;
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) SharedVector2.op_Implicit(&local_20);
        this.compareTo = pBVar1;
    }

    // RVA: 0x3E84 Offset: 0x3E84 VA: 0x3E84
    public CompareSharedVector2()
    {
        unnamed_function_51834(this,0);
    }
}
