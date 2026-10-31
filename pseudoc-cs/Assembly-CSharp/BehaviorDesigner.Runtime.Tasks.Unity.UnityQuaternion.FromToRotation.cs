// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.FromToRotation.c by tools/c2cs.py
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

public class FromToRotation : Action // TypeDefIndex: 6072
{
    // Fields
    [Tooltip("The from rotation")]
    public SharedVector3 fromDirection; // 0x2C
    [Tooltip("The to rotation")]
    public SharedVector3 toDirection; // 0x30
    [Tooltip("The stored result")]
    [RequiredField]
    public SharedQuaternion storeResult; // 0x34

    // Methods

    // RVA: 0x3FD1 Offset: 0x3FD1 VA: 0x3FD1 Slot: 6
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
        UnityEngine.Quaternion.FromToRotation(&local_30,&local_40,&local_50,0);
        local_58 = local_28;
        local_60 = local_30;
        unnamed_function_61198(param1,&local_60,DAT_ram_00565cec);
        return;
    }

    // RVA: 0x3FD2 Offset: 0x3FD2 VA: 0x3FD2 Slot: 16
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
        this.fromDirection = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        this.toDirection = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_40._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_20._0_8_ = local_40._0_8_;
        local_20._8_8_ = local_40._8_8_;
        pQVar2 = SharedQuaternion.op_Implicit(&local_40);
        this.storeResult = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar2;
    }

    // RVA: 0x3FD3 Offset: 0x3FD3 VA: 0x3FD3
    public FromToRotation()
    {
        unnamed_function_51834(this,0);
    }
}
