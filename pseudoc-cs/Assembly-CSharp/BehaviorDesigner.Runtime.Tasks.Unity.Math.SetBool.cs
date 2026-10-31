// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.SetBool.c by tools/c2cs.py
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

public class SetBool : Action // TypeDefIndex: 6162
{
    // Fields
    [Tooltip("The bool value to set")]
    public SharedBool boolValue; // 0x2C
    [Tooltip("The variable to store the result")]
    public SharedBool storeResult; // 0x30

    // Methods

    // RVA: 0x40F9 Offset: 0x40F9 VA: 0x40F9 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        param2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565c78);
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(param1,param2,DAT_ram_00565c7c);
        return;
    }

    // RVA: 0x40FA Offset: 0x40FA VA: 0x40FA Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        pBVar1 = SharedBool.op_Implicit(false);
        this.boolValue = pBVar1;
    }

    // RVA: 0x40FB Offset: 0x40FB VA: 0x40FB
    public SetBool()
    {
        unnamed_function_51834(this,0);
    }
}
