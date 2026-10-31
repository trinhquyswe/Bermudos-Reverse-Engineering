// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForceAtPosition.c by tools/c2cs.py
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

public class AddForceAtPosition : Action // TypeDefIndex: 6032
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The amount of force to apply")]
    public SharedVector3 force; // 0x30
    [Tooltip("The position of the force")]
    public SharedVector3 position; // 0x34
    [Tooltip("The type of force")]
    public ForceMode forceMode; // 0x38
    private Rigidbody rigidbody; // 0x3C
    private GameObject prevGameObject; // 0x40

    // Methods

    // RVA: 0x3F35 Offset: 0x3F35 VA: 0x3F35 Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        Rigidbody pRVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pRVar2 = (Rigidbody)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569aec);
            this.prevGameObject = param1;
            this.rigidbody = pRVar2;
        }
    }

    // RVA: 0x3F36 Offset: 0x3F36 VA: 0x3F36 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar2 = Raw.Read<int>(this + 0x3c);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            uVar2 = Raw.Read<int>(this + 0x3c);
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
            unnamed_function_61245(&local_20,Raw.Read<int>(this + 0x34),DAT_ram_00565d38);
            local_28 = local_8;
            local_38 = local_18;
            local_30 = local_10;
            local_40 = local_20;
            unnamed_function_15254(uVar2,&local_30,&local_40,Raw.Read<int>(this + 0x38),0);
        }
        else {
            UnityEngine.Debug.LogWarning("Rigidbody is null",0);
        }
        return;
    }

    // RVA: 0x3F37 Offset: 0x3F37 VA: 0x3F37 Slot: 16
    public override void OnReset()
    {
        Vector3 pVVar1 = default;
        Vector3 local_40 = default;
        Vector3 local_30 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_30.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_30._0_8_;
        local_10.z = local_30.z;
        pVVar1 = SharedVector3.op_Implicit(&local_30);
        this.force = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_40.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_20._0_8_ = local_40._0_8_;
        local_20.z = local_40.z;
        pVVar1 = SharedVector3.op_Implicit(&local_40);
        this.forceMode = Force;
        this.position = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
    }

    // RVA: 0x3F38 Offset: 0x3F38 VA: 0x3F38
    public AddForceAtPosition()
    {
        unnamed_function_51834(this,0);
    }
}
