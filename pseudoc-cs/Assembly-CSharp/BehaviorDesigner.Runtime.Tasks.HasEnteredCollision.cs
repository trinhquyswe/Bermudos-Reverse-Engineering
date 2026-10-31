// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.HasEnteredCollision.c by tools/c2cs.py
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

public class HasEnteredCollision : Conditional // TypeDefIndex: 5852
{
    // Fields
    [Tooltip("The tag of the GameObject to check for a collision against")]
    public SharedString tag; // 0x2C
    [Tooltip("The object that started the collision")]
    public SharedGameObject collidedGameObject; // 0x30
    private bool enteredCollision; // 0x34

    // Methods

    // RVA: 0x3C9D Offset: 0x3C9D VA: 0x3C9D Slot: 6
    public override TaskStatus OnUpdate()
    {

    }

    // RVA: 0x3C9E Offset: 0x3C9E VA: 0x3C9E Slot: 9
    public override void OnEnd()
    {
        this.enteredCollision = false;
    }

    // RVA: 0x3C9F Offset: 0x3C9F VA: 0x3C9F Slot: 19
    public override void OnCollisionEnter(Collision collision)
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
        this.enteredCollision = true;
    }

    // RVA: 0x3CA0 Offset: 0x3CA0 VA: 0x3CA0 Slot: 16
    public override void OnReset()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.collidedGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.tag = pBVar2;
    }

    // RVA: 0x3CA1 Offset: 0x3CA1 VA: 0x3CA1
    public HasEnteredCollision()
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
