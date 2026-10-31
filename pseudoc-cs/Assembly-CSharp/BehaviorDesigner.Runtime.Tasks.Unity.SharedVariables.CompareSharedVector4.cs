// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector4.c by tools/c2cs.py
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

public class CompareSharedVector4 : Conditional // TypeDefIndex: 5984
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedVector4 variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedVector4 compareTo; // 0x30

    // Methods

    // RVA: 0x3E88 Offset: 0x3E88 VA: 0x3E88 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float local_10 = default;
        float local_c = default;
        float local_8 = default;
        float local_4 = default;

        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d48);
        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d48);
        return;
    }

    // RVA: 0x3E89 Offset: 0x3E89 VA: 0x3E89 Slot: 16
    public override void OnReset()
    {
        Vector4 pVVar1 = default;
        Vector4 local_40 = default;
        Vector4 local_30 = default;
        Vector4 local_20 = default;
        Vector4 local_10 = default;

        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector4_TypeInfo + 0x5c));
        local_30._8_8_ = (Raw.Read<object>(UnityEngine_Vector4_TypeInfo + 0x5c))[1];
        local_10._0_8_ = local_30._0_8_;
        local_10._8_8_ = local_30._8_8_;
        pVVar1 = SharedVector4.op_Implicit(&local_30);
        this.variable = (BehaviorDesigner.Runtime.SharedVector4)pVVar1;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector4_TypeInfo + 0x5c));
        local_40._8_8_ = (Raw.Read<object>(UnityEngine_Vector4_TypeInfo + 0x5c))[1];
        local_20._0_8_ = local_40._0_8_;
        local_20._8_8_ = local_40._8_8_;
        pVVar1 = SharedVector4.op_Implicit(&local_40);
        this.compareTo = (BehaviorDesigner.Runtime.SharedVector4)pVVar1;
    }

    // RVA: 0x3E8A Offset: 0x3E8A VA: 0x3E8A
    public CompareSharedVector4()
    {
        unnamed_function_51834(this,0);
    }
}
