// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.HasColliderHit.c by tools/c2cs.py
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

public class HasColliderHit : Conditional // TypeDefIndex: 6229
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The tag of the GameObject to check for a collision against")]
    public SharedString tag; // 0x30
    [Tooltip("The object that started the collision")]
    public SharedGameObject collidedGameObject; // 0x34
    private bool enteredCollision; // 0x38

    // Methods

    // RVA: 0x41E0 Offset: 0x41E0 VA: 0x41E0 Slot: 6
    public override TaskStatus OnUpdate()
    {

    }

    // RVA: 0x41E1 Offset: 0x41E1 VA: 0x41E1 Slot: 9
    public override void OnEnd()
    {
        this.isFirstUpdate = false;
    }

    // RVA: 0x41E2 Offset: 0x41E2 VA: 0x41E2 Slot: 27
    public override void OnControllerColliderHit(ControllerColliderHit hit)
    {
        int uVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        BehaviorDesigner.Runtime.SharedGameObject param1 = default;

        uVar1 = unnamed_function_61203(this.tag,DAT_ram_00565d0c);
        iVar2 = System.String.IsNullOrEmpty(uVar1,0);
        if (iVar2 == 0) {
            uVar1 = unnamed_function_61203(this.tag,DAT_ram_00565d0c);
            uVar3 = UnityEngine.ControllerColliderHit.get_gameObject(hit,0);
            uVar3 = UnityEngine.GameObject.get_tag(uVar3,0);
            iVar2 = System.String.Equals(uVar1,uVar3,0);
            if (iVar2 == 0) {
                return;
            }
        }
        param1 = this.collidedGameObject;
        uVar1 = UnityEngine.ControllerColliderHit.get_gameObject(hit,0);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
        this.enteredCollision = true;
    }

    // RVA: 0x41E3 Offset: 0x41E3 VA: 0x41E3 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedString.op_Implicit("");
        this.collidedGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.tag = pBVar1;
    }

    // RVA: 0x41E4 Offset: 0x41E4 VA: 0x41E4
    public HasColliderHit()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        pBVar1 = SharedString.op_Implicit("");
        this.tag = pBVar1;
        unnamed_function_51834(this,0);
    }
}
