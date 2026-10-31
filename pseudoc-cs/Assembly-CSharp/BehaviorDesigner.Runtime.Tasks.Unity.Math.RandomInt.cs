// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomInt.c by tools/c2cs.py
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

public class RandomInt : Action // TypeDefIndex: 6161
{
    // Fields
    [Tooltip("The minimum amount")]
    public SharedInt min; // 0x2C
    [Tooltip("The maximum amount")]
    public SharedInt max; // 0x30
    [Tooltip("Is the maximum value inclusive?")]
    public bool inclusive; // 0x34
    [Tooltip("The variable to store the result")]
    public SharedInt storeResult; // 0x38

    // Methods

    // RVA: 0x40F6 Offset: 0x40F6 VA: 0x40F6 Slot: 6
    public override TaskStatus OnUpdate()
    {
        byte bVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        int param1 = default;

        bVar1 = Raw.Read<byte>(this + 0x34);
        param1 = Raw.Read<int>(this + 0x38);
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565cb8);
        iVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
        uVar2 = unnamed_function_44584(uVar2,iVar3 + (uint)bVar1,0);
        unnamed_function_61204(param1,uVar2,DAT_ram_00565cbc);
        return;
    }

    // RVA: 0x40F7 Offset: 0x40F7 VA: 0x40F7 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        unnamed_function_61204(this.min,0,DAT_ram_00565cbc);
        unnamed_function_61204(this.max,0,DAT_ram_00565cbc);
        this.inclusive = false;
        pBVar1 = SharedInt.op_Implicit(0);
        this.storeResult = pBVar1;
    }

    // RVA: 0x40F8 Offset: 0x40F8 VA: 0x40F8
    public RandomInt()
    {
        unnamed_function_51834(this,0);
    }
}
