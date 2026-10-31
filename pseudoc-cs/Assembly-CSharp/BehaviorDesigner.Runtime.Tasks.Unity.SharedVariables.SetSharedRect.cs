// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedRect.c by tools/c2cs.py
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

public class SetSharedRect : Action // TypeDefIndex: 5994
{
    // Fields
    [Tooltip("The value to set the SharedRect to")]
    public SharedRect targetValue; // 0x2C
    [RequiredField]
    [Tooltip("The SharedRect to set")]
    public SharedRect targetVariable; // 0x30

    // Methods

    // RVA: 0x3EA6 Offset: 0x3EA6 VA: 0x3EA6 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565cf4);
        local_18 = local_8;
        local_20 = local_10;
        unnamed_function_61198(param1,&local_20,DAT_ram_00565cf8);
        return;
    }

    // RVA: 0x3EA7 Offset: 0x3EA7 VA: 0x3EA7 Slot: 16
    public override void OnReset()
    {
        Rect pRVar1 = default;
        Rect local_40 = default;
        Rect local_30 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        local_8 = 0;
        local_30.width = 0.0;
        local_30.height = 0.0;
        local_10 = 0;
        local_30.x = 0.0;
        local_30.y = 0.0;
        pRVar1 = SharedRect.op_Implicit(&local_30);
        this.variable = (BehaviorDesigner.Runtime.SharedRect)pRVar1;
        local_18 = 0;
        local_40.width = 0.0;
        local_40.height = 0.0;
        local_20 = 0;
        local_40.x = 0.0;
        local_40.y = 0.0;
        pRVar1 = SharedRect.op_Implicit(&local_40);
        this.compareTo = (BehaviorDesigner.Runtime.SharedRect)pRVar1;
    }

    // RVA: 0x3EA8 Offset: 0x3EA8 VA: 0x3EA8
    public SetSharedRect()
    {
        unnamed_function_51834(this,0);
    }
}
