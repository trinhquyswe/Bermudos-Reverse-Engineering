// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.HasExitedCollision.c by tools/c2cs.py
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

public class HasExitedCollision : Conditional // TypeDefIndex: 5856
{
    // Fields
    [Tooltip("The tag of the GameObject to check for a collision against")]
    public SharedString tag; // 0x2C
    [Tooltip("The object that exited the collision")]
    public SharedGameObject collidedGameObject; // 0x30
    private bool exitedCollision; // 0x34

    // Methods

    // RVA: 0x3CB1 Offset: 0x3CB1 VA: 0x3CB1 Slot: 6
    public override TaskStatus OnUpdate()
    {

    }

    // RVA: 0x3CB2 Offset: 0x3CB2 VA: 0x3CB2 Slot: 9
    public override void OnEnd()
    {
        this.enteredCollision = false;
    }

    // RVA: 0x3CB3 Offset: 0x3CB3 VA: 0x3CB3 Slot: 20
    public override void OnCollisionExit(Collision collision)
    {
        int uVar1 = default;
        int iVar2 = default;
        int param2 = default;
        BehaviorDesigner.Runtime.SharedGameObject param1 = default;

        uVar1 = unnamed_function_61203(this.tag,DAT_ram_00565d0c);
        iVar2 = System.String.IsNullOrEmpty(uVar1,0);
        if (iVar2 == 0) {
            uVar1 = UnityEngine.Collision.get_gameObject(collision,0);
            param2 = unnamed_function_61203(this.tag,DAT_ram_00565d0c);
            iVar2 = UnityEngine.GameObject.CompareTag(uVar1,param2,0);
            if (iVar2 == 0) {
                return;
            }
        }
        param1 = this.collidedGameObject;
        uVar1 = UnityEngine.Collision.get_gameObject(collision,0);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
        this.exitedCollision = true;
    }

    // RVA: 0x3CB4 Offset: 0x3CB4 VA: 0x3CB4 Slot: 16
    public override void OnReset()
    {
        this.collidedGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
    }

    // RVA: 0x3CB5 Offset: 0x3CB5 VA: 0x3CB5
    public HasExitedCollision()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.tag = pBVar2;
        unnamed_function_51834(this,0);
    }
}
