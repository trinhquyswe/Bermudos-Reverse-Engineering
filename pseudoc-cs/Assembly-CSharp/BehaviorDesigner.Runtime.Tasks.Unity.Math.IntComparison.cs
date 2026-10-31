// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.IntComparison.c by tools/c2cs.py
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

public class IntComparison : Conditional // TypeDefIndex: 6152
{
    // Fields
    [Tooltip("The operation to perform")]
    public IntComparison.Operation operation; // 0x2C
    [Tooltip("The first integer")]
    public SharedInt integer1; // 0x30
    [Tooltip("The second integer")]
    public SharedInt integer2; // 0x34

    // Methods

    // RVA: 0x40DF Offset: 0x40DF VA: 0x40DF Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;

        iVar1 = Raw.Read<int>(this + 0x2c);
        if (iVar1 == 0) {
            unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
            unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
            return;
        }
        if (iVar1 == 1) {
            unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
            unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
            return;
        }
        if (iVar1 == 2) {
            unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
            unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
            return;
        }
        if (iVar1 == 3) {
            unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
            unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
            return;
        }
        if (iVar1 == 4) {
            unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
            unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
            return;
        }
        if (iVar1 == 5) {
            unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
            unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
        }
        return;
    }

    // RVA: 0x40E0 Offset: 0x40E0 VA: 0x40E0 Slot: 16
    public override void OnReset()
    {
        this.operation = LessThan;
        unnamed_function_61204(this.integer1,0,DAT_ram_00565cbc);
        unnamed_function_61204(this.integer2,0,DAT_ram_00565cbc);
    }

    // RVA: 0x40E1 Offset: 0x40E1 VA: 0x40E1
    public IntComparison()
    {
        unnamed_function_51834(this,0);
    }
}
