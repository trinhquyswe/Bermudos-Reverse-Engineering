// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedColor.c by tools/c2cs.py
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

public class SetSharedColor : Action // TypeDefIndex: 5986
{
    // Fields
    [Tooltip("The value to set the SharedColor to")]
    public SharedColor targetValue; // 0x2C
    [Tooltip("The SharedColor to set")]
    [RequiredField]
    public SharedColor targetVariable; // 0x30

    // Methods

    // RVA: 0x3E8E Offset: 0x3E8E VA: 0x3E8E Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565c90);
        local_18 = local_8;
        local_20 = local_10;
        unnamed_function_61198(param1,&local_20,DAT_ram_00565c94);
        return;
    }

    // RVA: 0x3E8F Offset: 0x3E8F VA: 0x3E8F Slot: 16
    public override void OnReset()
    {
        Color pCVar1 = default;
        Color local_40 = default;
        Color local_30 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        local_8 = 0x3f80000000000000;
        local_30.b = 0.0;
        local_30.a = 1.0;
        local_10 = 0;
        local_30.r = 0.0;
        local_30.g = 0.0;
        pCVar1 = SharedColor.op_Implicit(&local_30);
        this.targetValue = (BehaviorDesigner.Runtime.SharedColor)pCVar1;
        local_18 = 0x3f80000000000000;
        local_40.b = 0.0;
        local_40.a = 1.0;
        local_20 = 0;
        local_40.r = 0.0;
        local_40.g = 0.0;
        pCVar1 = SharedColor.op_Implicit(&local_40);
        this.targetVariable = (BehaviorDesigner.Runtime.SharedColor)pCVar1;
    }

    // RVA: 0x3E90 Offset: 0x3E90 VA: 0x3E90
    public SetSharedColor()
    {
        unnamed_function_51834(this,0);
    }
}
