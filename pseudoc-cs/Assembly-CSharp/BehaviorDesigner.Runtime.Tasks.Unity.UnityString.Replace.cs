// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Replace.c by tools/c2cs.py
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

public class Replace : Action // TypeDefIndex: 5963
{
    // Fields
    [Tooltip("The target string")]
    public SharedString targetString; // 0x2C
    [Tooltip("The old replace")]
    public SharedString oldString; // 0x30
    [Tooltip("The new string")]
    public SharedString newString; // 0x34
    [RequiredField]
    [Tooltip("The stored result")]
    public SharedString storeResult; // 0x38

    // Methods

    // RVA: 0x3E45 Offset: 0x3E45 VA: 0x3E45 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param2 = default;
        int param3 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x38);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        param3 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565d0c);
        uVar1 = System.String.Replace(uVar1,param2,param3,0);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565d10);
        return;
    }

    // RVA: 0x3E46 Offset: 0x3E46 VA: 0x3E46 Slot: 16
    public override void OnReset()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.targetString = pBVar2;
        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.oldString = pBVar2;
        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.newString = pBVar2;
        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.storeResult = pBVar2;
    }

    // RVA: 0x3E47 Offset: 0x3E47 VA: 0x3E47
    public Replace()
    {
        unnamed_function_51834(this,0);
    }
}
