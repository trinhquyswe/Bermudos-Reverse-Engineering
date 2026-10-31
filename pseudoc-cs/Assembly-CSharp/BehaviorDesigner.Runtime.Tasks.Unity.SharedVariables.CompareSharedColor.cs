// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedColor.c by tools/c2cs.py
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

public class CompareSharedColor : Conditional // TypeDefIndex: 5970
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedColor variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedColor compareTo; // 0x30

    // Methods

    // RVA: 0x3E5E Offset: 0x3E5E VA: 0x3E5E Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float local_30 = default;
        float local_2c = default;
        float local_28 = default;
        float local_24 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        unnamed_function_61197(&local_20,Raw.Read<int>(this + 0x2c),DAT_ram_00565c90);
        local_8 = local_18;
        local_10 = local_20;
        unnamed_function_61197(&local_30,Raw.Read<int>(this + 0x30),DAT_ram_00565c90);
        iVar1 = System.Single.Equals(&local_10,(float)local_30,0);
        if (((iVar1 != 0) && (iVar1 = System.Single.Equals((uint)&local_10 | 4,(float)local_2c,0), iVar1 != 0)) && (iVar1 = System.Single.Equals(&local_8,(float)local_28,0), iVar1 != 0)) {
            System.Single.Equals((int)&local_8 + 4,(float)local_24,0);
        }
        return;
    }

    // RVA: 0x3E5F Offset: 0x3E5F VA: 0x3E5F Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedColor pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedColor) new BehaviorDesigner_Runtime_SharedColor();
        *(object)&pBVar1[5].monitor = 0x3f80000000000000;
        *(object)&pBVar1[4].monitor = 0;
        this.variable = pBVar1;
        pBVar1 = (BehaviorDesigner.Runtime.SharedColor) new BehaviorDesigner_Runtime_SharedColor();
        *(object)&pBVar1[5].monitor = 0x3f80000000000000;
        *(object)&pBVar1[4].monitor = 0;
        this.compareTo = pBVar1;
    }

    // RVA: 0x3E60 Offset: 0x3E60 VA: 0x3E60
    public CompareSharedColor()
    {
        unnamed_function_51834(this,0);
    }
}
