// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Inverse.c by tools/c2cs.py
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

public class Inverse : Action // TypeDefIndex: 6074
{
    // Fields
    [Tooltip("The target quaternion")]
    public SharedQuaternion targetQuaternion; // 0x2C
    [Tooltip("The stored quaternion")]
    [RequiredField]
    public SharedQuaternion storeResult; // 0x30

    // Methods

    // RVA: 0x3FD7 Offset: 0x3FD7 VA: 0x3FD7 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565ce8);
        local_28 = local_8;
        local_30 = local_10;
        UnityEngine.Quaternion.Inverse(&local_20,&local_30,0);
        local_38 = local_18;
        local_40 = local_20;
        unnamed_function_61198(param1,&local_40,DAT_ram_00565cec);
        return;
    }

    // RVA: 0x3FD8 Offset: 0x3FD8 VA: 0x3FD8 Slot: 16
    public override void OnReset()
    {
        Quaternion pQVar1 = default;
        Quaternion local_20 = default;
        Quaternion local_10 = default;

        local_20._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_20._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_10._0_8_ = local_20._0_8_;
        local_10._8_8_ = local_20._8_8_;
        pQVar1 = SharedQuaternion.op_Implicit(&local_20);
        this.targetQuaternion = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
        this.storeResult = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
    }

    // RVA: 0x3FD9 Offset: 0x3FD9 VA: 0x3FD9
    public Inverse()
    {
        unnamed_function_51834(this,0);
    }
}
