// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedString.c by tools/c2cs.py
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

public class SetSharedString : Action // TypeDefIndex: 5995
{
    // Fields
    [Tooltip("The value to set the SharedString to")]
    public SharedString targetValue; // 0x2C
    [Tooltip("The SharedString to set")]
    [RequiredField]
    public SharedString targetVariable; // 0x30

    // Methods

    // RVA: 0x3EA9 Offset: 0x3EA9 VA: 0x3EA9 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        unnamed_function_61204(param1,param2,DAT_ram_00565d10);
        return;
    }

    // RVA: 0x3EAA Offset: 0x3EAA VA: 0x3EAA Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        pBVar1 = SharedString.op_Implicit("");
        this.targetValue = pBVar1;
        pBVar1 = SharedString.op_Implicit("");
        this.targetVariable = pBVar1;
    }

    // RVA: 0x3EAB Offset: 0x3EAB VA: 0x3EAB
    public SetSharedString()
    {
        unnamed_function_51834(this,0);
    }
}
