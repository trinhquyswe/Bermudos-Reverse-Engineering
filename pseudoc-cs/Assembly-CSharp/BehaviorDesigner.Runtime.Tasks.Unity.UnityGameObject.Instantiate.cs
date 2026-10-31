// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.Instantiate.c by tools/c2cs.py
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

public class Instantiate : Action // TypeDefIndex: 6209
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The position of the new GameObject")]
    public SharedVector3 position; // 0x30
    [Tooltip("The rotation of the new GameObject")]
    public SharedQuaternion rotation; // 0x34
    [Tooltip("The instantiated GameObject")]
    [SharedRequired]
    public SharedGameObject storeResult; // 0x38

    // Methods

    // RVA: 0x4198 Offset: 0x4198 VA: 0x4198 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param1 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        int local_8 = default;

        param1 = Raw.Read<int>(this + 0x38);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
        unnamed_function_61197(&local_20,Raw.Read<int>(this + 0x34),DAT_ram_00565ce8);
        local_28 = local_8;
        local_38 = local_18;
        local_30 = local_10;
        local_40 = local_20;
        uVar1 = unnamed_function_86418(uVar1,&local_30,&local_40,DAT_ram_0056b548);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
        return;
    }

    // RVA: 0x4199 Offset: 0x4199 VA: 0x4199 Slot: 16
    public override void OnReset()
    {
        Vector3 pVVar1 = default;
        Quaternion pQVar2 = default;
        Quaternion local_40 = default;
        Vector3 local_30 = default;
        Quaternion local_20 = default;
        Vector3 local_10 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_30.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_30._0_8_;
        local_10.z = local_30.z;
        pVVar1 = SharedVector3.op_Implicit(&local_30);
        this.position = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_40._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_20._0_8_ = local_40._0_8_;
        local_20._8_8_ = local_40._8_8_;
        pQVar2 = SharedQuaternion.op_Implicit(&local_40);
        this.rotation = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar2;
    }

    // RVA: 0x419A Offset: 0x419A VA: 0x419A
    public Instantiate()
    {
        Quaternion pQVar1 = default;
        Quaternion local_20 = default;
        Quaternion local_10 = default;

        local_20._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_20._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_10._0_8_ = local_20._0_8_;
        local_10._8_8_ = local_20._8_8_;
        pQVar1 = SharedQuaternion.op_Implicit(&local_20);
        this.rotation = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
        unnamed_function_51834(this,0);
    }
}
