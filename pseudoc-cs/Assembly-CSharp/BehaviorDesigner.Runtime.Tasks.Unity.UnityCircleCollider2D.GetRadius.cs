// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityCircleCollider2D.GetRadius.c by tools/c2cs.py
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

public class GetRadius : Action // TypeDefIndex: 6220
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [RequiredField]
    [Tooltip("The radius of the CircleCollider2D")]
    public SharedFloat storeValue; // 0x30
    private CircleCollider2D circleCollider2D; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x41BC Offset: 0x41BC VA: 0x41BC Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        CircleCollider2D pCVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pCVar2 = (CircleCollider2D)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569a88);
            this.prevGameObject = param1;
            this.circleCollider2D = pCVar2;
        }
    }

    // RVA: 0x41BD Offset: 0x41BD VA: 0x41BD Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float param2 = default;
        int uVar2 = default;

        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("CircleCollider2D is null",0);
            return;
        }
        uVar2 = Raw.Read<int>(this + 0x30);
        param2 = UnityEngine.CircleCollider2D.get_radius(Raw.Read<int>(this + 0x34),0);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar2,param2,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x41BE Offset: 0x41BE VA: 0x41BE Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.torque = pBVar1;
    }

    // RVA: 0x41BF Offset: 0x41BF VA: 0x41BF
    public GetRadius()
    {
        unnamed_function_51834(this,0);
    }
}
