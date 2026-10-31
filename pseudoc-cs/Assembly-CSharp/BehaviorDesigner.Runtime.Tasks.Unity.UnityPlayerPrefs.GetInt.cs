// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetInt.c by tools/c2cs.py
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

public class GetInt : Action // TypeDefIndex: 6082
{
    // Fields
    [Tooltip("The key to store")]
    public SharedString key; // 0x2C
    [Tooltip("The default value")]
    public SharedInt defaultValue; // 0x30
    [RequiredField]
    [Tooltip("The value retrieved from the PlayerPrefs")]
    public SharedInt storeResult; // 0x34

    // Methods

    // RVA: 0x3FEE Offset: 0x3FEE VA: 0x3FEE Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x34);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
        uVar1 = UnityEngine.PlayerPrefs.GetInt(uVar1,param2,0);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565cbc);
        return;
    }

    // RVA: 0x3FEF Offset: 0x3FEF VA: 0x3FEF Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedInt pBVar2 = default;

        pBVar1 = SharedString.op_Implicit("");
        this.key = pBVar1;
        pBVar2 = SharedInt.op_Implicit(0);
        this.defaultValue = pBVar2;
        pBVar2 = SharedInt.op_Implicit(0);
        this.storeResult = pBVar2;
    }

    // RVA: 0x3FF0 Offset: 0x3FF0 VA: 0x3FF0
    public GetInt()
    {
        unnamed_function_51834(this,0);
    }
}
