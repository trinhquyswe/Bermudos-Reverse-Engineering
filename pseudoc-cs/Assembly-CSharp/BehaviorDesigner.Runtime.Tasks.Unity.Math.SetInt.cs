// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.SetInt.c by tools/c2cs.py
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

public class SetInt : Action // TypeDefIndex: 6164
{
    // Fields
    [Tooltip("The int value to set")]
    public SharedInt intValue; // 0x2C
    [Tooltip("The variable to store the result")]
    public SharedInt storeResult; // 0x30

    // Methods

    // RVA: 0x40FF Offset: 0x40FF VA: 0x40FF Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565cb8);
        unnamed_function_61204(param1,param2,DAT_ram_00565cbc);
        return;
    }

    // RVA: 0x4100 Offset: 0x4100 VA: 0x4100 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        pBVar1 = SharedInt.op_Implicit(0);
        this.targetValue = pBVar1;
        pBVar1 = SharedInt.op_Implicit(0);
        this.targetVariable = pBVar1;
    }

    // RVA: 0x4101 Offset: 0x4101 VA: 0x4101
    public SetInt()
    {
        unnamed_function_51834(this,0);
    }
}
