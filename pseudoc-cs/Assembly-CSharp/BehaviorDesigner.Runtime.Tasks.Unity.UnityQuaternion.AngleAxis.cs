// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.AngleAxis.c by tools/c2cs.py
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

public class AngleAxis : Action // TypeDefIndex: 6069
{
    // Fields
    [Tooltip("The number of degrees")]
    public SharedFloat degrees; // 0x2C
    [Tooltip("The axis direction")]
    public SharedVector3 axis; // 0x30
    [Tooltip("The stored result")]
    [RequiredField]
    public SharedQuaternion storeResult; // 0x34

    // Methods

    // RVA: 0x3FC8 Offset: 0x3FC8 VA: 0x3FC8 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float param2 = default;
        int param1 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        int local_8 = default;

        param1 = Raw.Read<int>(this + 0x34);
        param2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565d00);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
        local_28 = local_8;
        local_30 = local_10;
        UnityEngine.Quaternion.AngleAxis(&local_20,param2,&local_30,0);
        local_38 = local_18;
        local_40 = local_20;
        unnamed_function_61198(param1,&local_40,DAT_ram_00565cec);
        return;
    }

    // RVA: 0x3FC9 Offset: 0x3FC9 VA: 0x3FC9 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;
        Vector3 pVVar2 = default;
        Quaternion pQVar3 = default;
        Quaternion local_40 = default;
        Vector3 local_30 = default;
        Quaternion local_20 = default;
        Vector3 local_10 = default;

        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.degrees = pBVar1;
        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_30.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_30._0_8_;
        local_10.z = local_30.z;
        pVVar2 = SharedVector3.op_Implicit(&local_30);
        this.axis = (BehaviorDesigner.Runtime.SharedVector3)pVVar2;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_40._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_20._0_8_ = local_40._0_8_;
        local_20._8_8_ = local_40._8_8_;
        pQVar3 = SharedQuaternion.op_Implicit(&local_40);
        this.storeResult = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar3;
    }

    // RVA: 0x3FCA Offset: 0x3FCA VA: 0x3FCA
    public AngleAxis()
    {
        unnamed_function_51834(this,0);
    }
}
