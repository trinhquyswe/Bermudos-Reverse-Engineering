// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForce.c by tools/c2cs.py
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

public class AddForce : Action // TypeDefIndex: 6031
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The amount of force to apply")]
    public SharedVector3 force; // 0x30
    [Tooltip("The type of force")]
    public ForceMode forceMode; // 0x34
    private Rigidbody rigidbody; // 0x38
    private GameObject prevGameObject; // 0x3C

    // Methods

    // RVA: 0x3F31 Offset: 0x3F31 VA: 0x3F31 Slot: 5
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

    // RVA: 0x3F32 Offset: 0x3F32 VA: 0x3F32 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar2 = Raw.Read<int>(this + 0x38);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            uVar2 = Raw.Read<int>(this + 0x38);
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
            local_18 = local_8;
            local_20 = local_10;
            unnamed_function_15250(uVar2,&local_20,Raw.Read<int>(this + 0x34),0);
        }
        else {
            UnityEngine.Debug.LogWarning("Rigidbody is null",0);
        }
        return;
    }

    // RVA: 0x3F33 Offset: 0x3F33 VA: 0x3F33 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 param1 = default;
        long local_10 = default;
        int local_8 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        param1 = this.force;
        if (param1 != (BehaviorDesigner.Runtime.SharedVector3)0x0) {
            local_8 = Raw.Read<int>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
            local_10 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
            unnamed_function_61246(param1,&local_10,DAT_ram_00565d3c);
        }
        this.forceMode = Force;
    }

    // RVA: 0x3F34 Offset: 0x3F34 VA: 0x3F34
    public AddForce()
    {
        unnamed_function_51834(this,0);
    }
}
