// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Identity.c by tools/c2cs.py
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

public class Identity : Action // TypeDefIndex: 6073
{
    // Fields
    [RequiredField]
    [Tooltip("The identity")]
    public SharedQuaternion storeResult; // 0x2C

    // Methods

    // RVA: 0x3FD4 Offset: 0x3FD4 VA: 0x3FD4 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        local_8 = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_10 = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        unnamed_function_61198(param1,&local_10,DAT_ram_00565cec);
        return;
    }

    // RVA: 0x3FD5 Offset: 0x3FD5 VA: 0x3FD5 Slot: 16
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
        this.storeResult = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
    }

    // RVA: 0x3FD6 Offset: 0x3FD6 VA: 0x3FD6
    public Identity()
    {
        unnamed_function_51834(this,0);
    }
}
