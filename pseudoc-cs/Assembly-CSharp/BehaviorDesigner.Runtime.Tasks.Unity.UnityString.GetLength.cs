// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetLength.c by tools/c2cs.py
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

public class GetLength : Action // TypeDefIndex: 5959
{
    // Fields
    [Tooltip("The target string")]
    public SharedString targetString; // 0x2C
    [RequiredField]
    [Tooltip("The stored result")]
    public SharedInt storeResult; // 0x30

    // Methods

    // RVA: 0x3E39 Offset: 0x3E39 VA: 0x3E39 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        unnamed_function_61204(param1,Raw.Read<int>(iVar1 + 8),DAT_ram_00565cbc);
        return;
    }

    // RVA: 0x3E3A Offset: 0x3E3A VA: 0x3E3A Slot: 16
    public override void OnReset()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;
        BehaviorDesigner.Runtime.SharedInt pBVar3 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.targetString = pBVar2;
        pBVar3 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar3[4].monitor = (object)0x0;
        this.storeResult = pBVar3;
    }

    // RVA: 0x3E3B Offset: 0x3E3B VA: 0x3E3B
    public GetLength()
    {
        unnamed_function_51834(this,0);
    }
}
