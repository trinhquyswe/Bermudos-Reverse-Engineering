// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.IntClamp.c by tools/c2cs.py
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

public class IntClamp : Action // TypeDefIndex: 6150
{
    // Fields
    [Tooltip("The int to clamp")]
    public SharedInt intVariable; // 0x2C
    [Tooltip("The maximum value of the int")]
    public SharedInt minValue; // 0x30
    [Tooltip("The maximum value of the int")]
    public SharedInt maxValue; // 0x34

    // Methods

    // RVA: 0x40DC Offset: 0x40DC VA: 0x40DC Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param2 = default;
        int iVar2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        iVar1 = unnamed_function_61203(param1,DAT_ram_00565cb8);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
        iVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
        if (iVar1 <= iVar2) {
            iVar2 = iVar1;
        }
        if (param2 <= iVar1) {
            param2 = iVar2;
        }
        unnamed_function_61204(param1,param2,DAT_ram_00565cbc);
        return;
    }

    // RVA: 0x40DD Offset: 0x40DD VA: 0x40DD Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        pBVar1 = SharedInt.op_Implicit(0);
        this.intVariable = pBVar1;
        pBVar1 = SharedInt.op_Implicit(0);
        this.minValue = pBVar1;
        pBVar1 = SharedInt.op_Implicit(0);
        this.maxValue = pBVar1;
    }

    // RVA: 0x40DE Offset: 0x40DE VA: 0x40DE
    public IntClamp()
    {
        unnamed_function_51834(this,0);
    }
}
