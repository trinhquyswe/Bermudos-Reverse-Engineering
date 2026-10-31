// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedTransformList.c by tools/c2cs.py
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

public class CompareSharedTransformList : Conditional // TypeDefIndex: 5981
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedTransformList variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedTransformList compareTo; // 0x30

    // Methods

    // RVA: 0x3E7F Offset: 0x3E7F VA: 0x3E7F Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int uVar3 = default;
        int iVar4 = default;

        iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c5c);
        return;
    }

    // RVA: 0x3E80 Offset: 0x3E80 VA: 0x3E80 Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
    }

    // RVA: 0x3E81 Offset: 0x3E81 VA: 0x3E81
    public CompareSharedTransformList()
    {
        unnamed_function_51834(this,0);
    }
}
