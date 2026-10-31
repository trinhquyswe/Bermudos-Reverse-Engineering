// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.SetVelocity.c by tools/c2cs.py
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

public class SetVelocity : Action // TypeDefIndex: 6027
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The velocity of the Rigidbody2D")]
    public SharedVector2 velocity; // 0x30
    private Rigidbody2D rigidbody2D; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x3F21 Offset: 0x3F21 VA: 0x3F21 Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        Rigidbody2D pRVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pRVar2 = (Rigidbody2D)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569af0);
            this.prevGameObject = param1;
            this.rigidbody2D = pRVar2;
        }
    }

    // RVA: 0x3F22 Offset: 0x3F22 VA: 0x3F22 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        long local_10 = default;
        long local_8 = default;

        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            uVar2 = Raw.Read<int>(this + 0x34);
            unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
            local_10 = local_8;
            unnamed_function_16392(uVar2,&local_10,0);
        }
        else {
            UnityEngine.Debug.LogWarning("Rigidbody2D is null",0);
        }
        return;
    }

    // RVA: 0x3F23 Offset: 0x3F23 VA: 0x3F23 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        Vector2 local_10 = default;
        Vector2 local_8 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        local_10 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        local_8 = local_10;
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) SharedVector2.op_Implicit(&local_10);
        this.force = pBVar1;
    }

    // RVA: 0x3F24 Offset: 0x3F24 VA: 0x3F24
    public SetVelocity()
    {
        unnamed_function_51834(this,0);
    }
}
