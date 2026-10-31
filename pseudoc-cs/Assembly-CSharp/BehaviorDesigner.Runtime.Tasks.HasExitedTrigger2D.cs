// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.HasExitedTrigger2D.c by tools/c2cs.py
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

public class HasExitedTrigger2D : Conditional // TypeDefIndex: 5859
{
    // Fields
    [Tooltip("The tag of the GameObject to check for a trigger against")]
    public SharedString tag; // 0x2C
    [Tooltip("The object that exited the trigger")]
    public SharedGameObject otherGameObject; // 0x30
    private bool exitedTrigger; // 0x34

    // Methods

    // RVA: 0x3CC0 Offset: 0x3CC0 VA: 0x3CC0 Slot: 6
    public override TaskStatus OnUpdate()
    {

    }

    // RVA: 0x3CC1 Offset: 0x3CC1 VA: 0x3CC1 Slot: 9
    public override void OnEnd()
    {
        this.enteredCollision = false;
    }

    // RVA: 0x3CC2 Offset: 0x3CC2 VA: 0x3CC2 Slot: 26
    public override void OnTriggerExit2D(Collider2D other)
    {
        int uVar1 = default;
        int iVar2 = default;
        int param2 = default;
        BehaviorDesigner.Runtime.SharedGameObject param1 = default;

        uVar1 = unnamed_function_61203(this.tag,DAT_ram_00565d0c);
        iVar2 = System.String.IsNullOrEmpty(uVar1,0);
        if (iVar2 == 0) {
            uVar1 = UnityEngine.Component.get_gameObject(other,0);
            param2 = unnamed_function_61203(this.tag,DAT_ram_00565d0c);
            iVar2 = UnityEngine.GameObject.CompareTag(uVar1,param2,0);
            if (iVar2 == 0) {
                return;
            }
        }
        param1 = this.otherGameObject;
        uVar1 = UnityEngine.Component.get_gameObject(other,0);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
        this.exitedTrigger = true;
    }

    // RVA: 0x3CC3 Offset: 0x3CC3 VA: 0x3CC3 Slot: 16
    public override void OnReset()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.otherGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.tag = pBVar2;
    }

    // RVA: 0x3CC4 Offset: 0x3CC4 VA: 0x3CC4
    public HasExitedTrigger2D()
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
