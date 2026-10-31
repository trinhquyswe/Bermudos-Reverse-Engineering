// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetString.c by tools/c2cs.py
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

public class SetString : Action // TypeDefIndex: 6088
{
    // Fields
    [Tooltip("The key to store")]
    public SharedString key; // 0x2C
    [Tooltip("The value to set")]
    public SharedString value; // 0x30

    // Methods

    // RVA: 0x3FFF Offset: 0x3FFF VA: 0x3FFF Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        int param2 = default;

        param1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        UnityEngine.PlayerPrefs.SetString(param1,param2,0);
        return;
    }

    // RVA: 0x4000 Offset: 0x4000 VA: 0x4000 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        pBVar1 = SharedString.op_Implicit("");
        this.key = pBVar1;
        pBVar1 = SharedString.op_Implicit("");
        this.value = pBVar1;
    }

    // RVA: 0x4001 Offset: 0x4001 VA: 0x4001
    public SetString()
    {
        unnamed_function_51834(this,0);
    }
}
