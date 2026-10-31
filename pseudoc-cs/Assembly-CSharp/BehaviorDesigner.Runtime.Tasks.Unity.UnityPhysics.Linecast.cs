// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Linecast.c by tools/c2cs.py
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

public class Linecast : Action // TypeDefIndex: 6092
{
    // Fields
    [Tooltip("The starting position of the linecast")]
    public SharedVector3 startPosition; // 0x2C
    [Tooltip("The ending position of the linecast")]
    public SharedVector3 endPosition; // 0x30
    [Tooltip("Selectively ignore colliders.")]
    public LayerMask layerMask; // 0x34

    // Methods

    // RVA: 0x400B Offset: 0x400B VA: 0x400B Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param3 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        unnamed_function_61245(&local_20,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
        param3 = Raw.Read<int>(this + 0x34);
        local_28 = local_8;
        local_38 = local_18;
        local_30 = local_10;
        local_40 = local_20;
        UnityEngine.Physics.Linecast(&local_30,&local_40,param3,0);
        return;
    }

    // RVA: 0x400C Offset: 0x400C VA: 0x400C Slot: 16
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
        this.startPosition = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_40.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_20._0_8_ = local_40._0_8_;
        local_20.z = local_40.z;
        pVVar1 = SharedVector3.op_Implicit(&local_40);
        this.endPosition = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        this.layerMask.m_Mask = -1;
    }

    // RVA: 0x400D Offset: 0x400D VA: 0x400D
    public Linecast()
    {
        this.layerMask.m_Mask = -1;
        unnamed_function_51834(this,0);
    }
}
