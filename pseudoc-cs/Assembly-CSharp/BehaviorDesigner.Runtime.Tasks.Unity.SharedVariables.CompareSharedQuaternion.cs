// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedQuaternion.c by tools/c2cs.py
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

public class CompareSharedQuaternion : Conditional // TypeDefIndex: 5977
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedQuaternion variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedQuaternion compareTo; // 0x30

    // Methods

    // RVA: 0x3E73 Offset: 0x3E73 VA: 0x3E73 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float local_30 = default;
        float local_2c = default;
        float local_28 = default;
        float local_24 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        unnamed_function_61197(&local_20,Raw.Read<int>(this + 0x2c),DAT_ram_00565ce8);
        local_8 = local_18;
        local_10 = local_20;
        unnamed_function_61197(&local_30,Raw.Read<int>(this + 0x30),DAT_ram_00565ce8);
        iVar1 = System.Single.Equals(&local_10,(float)local_30,0);
        if (((iVar1 != 0) && (iVar1 = System.Single.Equals((uint)&local_10 | 4,(float)local_2c,0), iVar1 != 0)) && (iVar1 = System.Single.Equals(&local_8,(float)local_28,0), iVar1 != 0)) {
            System.Single.Equals((int)&local_8 + 4,(float)local_24,0);
        }
        return;
    }

    // RVA: 0x3E74 Offset: 0x3E74 VA: 0x3E74 Slot: 16
    public override void OnReset()
    {
        Quaternion pQVar1 = default;
        Quaternion local_40 = default;
        Quaternion local_30 = default;
        Quaternion local_20 = default;
        Quaternion local_10 = default;

        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_30._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_10._0_8_ = local_30._0_8_;
        local_10._8_8_ = local_30._8_8_;
        pQVar1 = SharedQuaternion.op_Implicit(&local_30);
        this.variable = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_40._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_20._0_8_ = local_40._0_8_;
        local_20._8_8_ = local_40._8_8_;
        pQVar1 = SharedQuaternion.op_Implicit(&local_40);
        this.compareTo = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
    }

    // RVA: 0x3E75 Offset: 0x3E75 VA: 0x3E75
    public CompareSharedQuaternion()
    {
        unnamed_function_51834(this,0);
    }
}
