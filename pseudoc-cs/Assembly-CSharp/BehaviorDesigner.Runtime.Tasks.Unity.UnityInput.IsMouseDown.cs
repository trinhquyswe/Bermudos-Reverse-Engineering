// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsMouseDown.c by tools/c2cs.py
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

public class IsMouseDown : Conditional // TypeDefIndex: 6196
{
    // Fields
    [Tooltip("The button index")]
    public SharedInt buttonIndex; // 0x2C

    // Methods

    // RVA: 0x4171 Offset: 0x4171 VA: 0x4171 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;

        param1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565cb8);
        UnityEngine.Input.GetMouseButtonDown(param1,0);
        return;
    }

    // RVA: 0x4172 Offset: 0x4172 VA: 0x4172 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        pBVar1 = SharedInt.op_Implicit(0);
        this.intVariable = pBVar1;
    }

    // RVA: 0x4173 Offset: 0x4173 VA: 0x4173
    public IsMouseDown()
    {
        unnamed_function_51834(this,0);
    }
}
