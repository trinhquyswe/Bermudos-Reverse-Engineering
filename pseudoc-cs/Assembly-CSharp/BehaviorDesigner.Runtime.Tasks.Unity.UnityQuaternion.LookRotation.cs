// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.LookRotation.c by tools/c2cs.py
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

public class LookRotation : Action // TypeDefIndex: 6076
{
    // Fields
    [Tooltip("The forward vector")]
    public SharedVector3 forwardVector; // 0x2C
    [Tooltip("The second Vector3")]
    public SharedVector3 secondVector3; // 0x30
    [RequiredField]
    [Tooltip("The stored quaternion")]
    public SharedQuaternion storeResult; // 0x34

    // Methods

    // RVA: 0x3FDD Offset: 0x3FDD VA: 0x3FDD Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        int local_48 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        param1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        unnamed_function_61245(&local_20,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
        local_38 = local_8;
        local_48 = local_18;
        local_40 = local_10;
        local_50 = local_20;
        UnityEngine.Quaternion.LookRotation(&local_30,&local_40,&local_50,0);
        local_58 = local_28;
        local_60 = local_30;
        unnamed_function_61198(param1,&local_60,DAT_ram_00565cec);
        return;
    }

    // RVA: 0x3FDE Offset: 0x3FDE VA: 0x3FDE Slot: 16
    public override void OnReset()
    {
        Vector3 pVVar1 = default;
        Quaternion pQVar2 = default;
        Quaternion local_40 = default;
        Vector3 local_30 = default;
        Quaternion local_20 = default;
        Vector3 local_10 = default;

        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_30.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_30._0_8_;
        local_10.z = local_30.z;
        pVVar1 = SharedVector3.op_Implicit(&local_30);
        this.forwardVector = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_40._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_20._0_8_ = local_40._0_8_;
        local_20._8_8_ = local_40._8_8_;
        pQVar2 = SharedQuaternion.op_Implicit(&local_40);
        this.storeResult = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar2;
    }

    // RVA: 0x3FDF Offset: 0x3FDF VA: 0x3FDF
    public LookRotation()
    {
        Vector3 pVVar1 = default;
        Vector3 local_10 = default;

        local_10.z = Raw.Read<float>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x20);
        local_10._0_8_ = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x18);
        pVVar1 = SharedVector3.op_Implicit(&local_10);
        this.secondVector3 = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        unnamed_function_51834(this,0);
    }
}
