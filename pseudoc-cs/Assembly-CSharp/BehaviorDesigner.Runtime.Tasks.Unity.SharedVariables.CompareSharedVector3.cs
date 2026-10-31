// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector3.c by tools/c2cs.py
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

public class CompareSharedVector3 : Conditional // TypeDefIndex: 5983
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedVector3 variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedVector3 compareTo; // 0x30

    // Methods

    // RVA: 0x3E85 Offset: 0x3E85 VA: 0x3E85 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
        return;
    }

    // RVA: 0x3E86 Offset: 0x3E86 VA: 0x3E86 Slot: 16
    public override void OnReset()
    {
        Vector3 pVVar1 = default;
        Vector3 local_40 = default;
        Vector3 local_30 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_30.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_30._0_8_;
        local_10.z = local_30.z;
        pVVar1 = SharedVector3.op_Implicit(&local_30);
        this.variable = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_40.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_20._0_8_ = local_40._0_8_;
        local_20.z = local_40.z;
        pVVar1 = SharedVector3.op_Implicit(&local_40);
        this.compareTo = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
    }

    // RVA: 0x3E87 Offset: 0x3E87 VA: 0x3E87
    public CompareSharedVector3()
    {
        unnamed_function_51834(this,0);
    }
}
