// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Euler.c by tools/c2cs.py
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

public class Euler : Action // TypeDefIndex: 6071
{
    // Fields
    [Tooltip("The euler vector")]
    public SharedVector3 eulerVector; // 0x2C
    [RequiredField]
    [Tooltip("The stored quaternion")]
    public SharedQuaternion storeResult; // 0x30

    // Methods

    // RVA: 0x3FCE Offset: 0x3FCE VA: 0x3FCE Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_30 = default;
        float local_28 = default;
        float local_20 = default;
        float local_1c = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        byte[] local_40 = new byte[16];
        param1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61245(&local_20,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        local_28 = (float)local_18 * 0.017453292;
        local_c = (float)((float)local_1c * 0.017453292);
        local_10 = (float)((float)local_20 * 0.017453292);
        local_30 = CONCAT44(local_c,local_10);
        local_8 = (float)local_28;
        UnityEngine.Quaternion.Internal_FromEulerRad(&local_20,&local_30,0);
        unnamed_function_61198(param1,local_40,DAT_ram_00565cec);
        return;
    }

    // RVA: 0x3FCF Offset: 0x3FCF VA: 0x3FCF Slot: 16
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
        this.eulerVector = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_40._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_20._0_8_ = local_40._0_8_;
        local_20._8_8_ = local_40._8_8_;
        pQVar2 = SharedQuaternion.op_Implicit(&local_40);
        this.storeResult = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar2;
    }

    // RVA: 0x3FD0 Offset: 0x3FD0 VA: 0x3FD0
    public Euler()
    {
        unnamed_function_51834(this,0);
    }
}
