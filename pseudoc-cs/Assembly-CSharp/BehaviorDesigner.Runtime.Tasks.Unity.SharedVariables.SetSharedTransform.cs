// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedTransform.c by tools/c2cs.py
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

public class SetSharedTransform : Action // TypeDefIndex: 5996
{
    // Fields
    [Tooltip("The value to set the SharedTransform to. If null the variable will be set to the current Transform")]
    public SharedTransform targetValue; // 0x2C
    [RequiredField]
    [Tooltip("The SharedTransform to set")]
    public SharedTransform targetVariable; // 0x30

    // Methods

    // RVA: 0x3EAC Offset: 0x3EAC VA: 0x3EAC Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int iVar2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d18);
        iVar2 = (uVar1 != null);
        if (iVar2 == 0) {
            uVar1 = Raw.Read<int>(this + 0xc);
        }
        else {
            uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d18);
        }
        unnamed_function_61204(param1,uVar1,DAT_ram_00565d1c);
        return;
    }

    // RVA: 0x3EAD Offset: 0x3EAD VA: 0x3EAD Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
    }

    // RVA: 0x3EAE Offset: 0x3EAE VA: 0x3EAE
    public SetSharedTransform()
    {
        unnamed_function_51834(this,0);
    }
}
