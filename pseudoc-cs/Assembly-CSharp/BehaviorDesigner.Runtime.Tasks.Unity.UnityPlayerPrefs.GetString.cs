// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetString.c by tools/c2cs.py
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

public class GetString : Action // TypeDefIndex: 6083
{
    // Fields
    [Tooltip("The key to store")]
    public SharedString key; // 0x2C
    [Tooltip("The default value")]
    public SharedString defaultValue; // 0x30
    [RequiredField]
    [Tooltip("The value retrieved from the PlayerPrefs")]
    public SharedString storeResult; // 0x34

    // Methods

    // RVA: 0x3FF1 Offset: 0x3FF1 VA: 0x3FF1 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x34);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar1 = UnityEngine.PlayerPrefs.GetString(uVar1,param2,0);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565d10);
        return;
    }

    // RVA: 0x3FF2 Offset: 0x3FF2 VA: 0x3FF2 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        pBVar1 = SharedString.op_Implicit("");
        this.key = pBVar1;
        pBVar1 = SharedString.op_Implicit("");
        this.defaultValue = pBVar1;
        pBVar1 = SharedString.op_Implicit("");
        this.storeResult = pBVar1;
    }

    // RVA: 0x3FF3 Offset: 0x3FF3 VA: 0x3FF3
    public GetString()
    {
        unnamed_function_51834(this,0);
    }
}
