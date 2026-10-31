// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedQuaternion.c by tools/c2cs.py
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

public class SetSharedQuaternion : Action // TypeDefIndex: 5993
{
    // Fields
    [Tooltip("The value to set the SharedQuaternion to")]
    public SharedQuaternion targetValue; // 0x2C
    [Tooltip("The SharedQuaternion to set")]
    [RequiredField]
    public SharedQuaternion targetVariable; // 0x30

    // Methods

    // RVA: 0x3EA3 Offset: 0x3EA3 VA: 0x3EA3 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565ce8);
        local_18 = local_8;
        local_20 = local_10;
        unnamed_function_61198(param1,&local_20,DAT_ram_00565cec);
        return;
    }

    // RVA: 0x3EA4 Offset: 0x3EA4 VA: 0x3EA4 Slot: 16
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

    // RVA: 0x3EA5 Offset: 0x3EA5 VA: 0x3EA5
    public SetSharedQuaternion()
    {
        unnamed_function_51834(this,0);
    }
}
