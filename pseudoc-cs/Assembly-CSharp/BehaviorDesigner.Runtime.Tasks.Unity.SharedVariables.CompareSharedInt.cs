// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedInt.c by tools/c2cs.py
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

public class CompareSharedInt : Conditional // TypeDefIndex: 5974
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedInt variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedInt compareTo; // 0x30

    // Methods

    // RVA: 0x3E6A Offset: 0x3E6A VA: 0x3E6A Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param2 = default;
        int local_4 = default;

        local_4 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565cb8);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
        unnamed_function_7262(&local_4,param2,0);
        return;
    }

    // RVA: 0x3E6B Offset: 0x3E6B VA: 0x3E6B Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar1[4].monitor = (object)0x0;
        this.variable = pBVar1;
        pBVar1 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar1[4].monitor = (object)0x0;
        this.compareTo = pBVar1;
    }

    // RVA: 0x3E6C Offset: 0x3E6C VA: 0x3E6C
    public CompareSharedInt()
    {
        unnamed_function_51834(this,0);
    }
}
