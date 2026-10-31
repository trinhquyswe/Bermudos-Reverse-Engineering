// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetRandomString.c by tools/c2cs.py
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

public class GetRandomString : Action // TypeDefIndex: 5960
{
    // Fields
    [Tooltip("The array of strings")]
    public SharedString[] source; // 0x2C
    [Tooltip("The stored result")]
    [RequiredField]
    public SharedString storeResult; // 0x30

    // Methods

    // RVA: 0x3E3C Offset: 0x3E3C VA: 0x3E3C Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;

        param1 = Raw.Read<int>(this + 0x30);
        iVar2 = Raw.Read<int>(this + 0x2c);
        iVar1 = unnamed_function_44584(0,Raw.Read<int>(iVar2 + 0xc),0);
        param2 = unnamed_function_61203(Raw.Read<int>(iVar1 * 4 + iVar2 + 0x10),DAT_ram_00565d0c);
        unnamed_function_61204(param1,param2,DAT_ram_00565d10);
        return;
    }

    // RVA: 0x3E3D Offset: 0x3E3D VA: 0x3E3D Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
    }

    // RVA: 0x3E3E Offset: 0x3E3E VA: 0x3E3E
    public GetRandomString()
    {
        unnamed_function_51834(this,0);
    }
}
