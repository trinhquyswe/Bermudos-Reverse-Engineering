// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetAcceleration.c by tools/c2cs.py
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

public class GetAcceleration : Action // TypeDefIndex: 6185
{
    // Fields
    [RequiredField]
    [Tooltip("The stored result")]
    public SharedVector3 storeResult; // 0x2C

    // Methods

    // RVA: 0x4150 Offset: 0x4150 VA: 0x4150 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        UnityEngine.Input.get_acceleration(&local_10,0);
        local_18 = local_8;
        local_20 = local_10;
        unnamed_function_61246(param1,&local_20,DAT_ram_00565d3c);
        return;
    }

    // RVA: 0x4151 Offset: 0x4151 VA: 0x4151 Slot: 16
    public override void OnReset()
    {
        Vector3 pVVar1 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        local_20._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_20.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_20._0_8_;
        local_10.z = local_20.z;
        pVVar1 = SharedVector3.op_Implicit(&local_20);
        this.storeResult = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
    }

    // RVA: 0x4152 Offset: 0x4152 VA: 0x4152
    public GetAcceleration()
    {
        unnamed_function_51834(this,0);
    }
}
