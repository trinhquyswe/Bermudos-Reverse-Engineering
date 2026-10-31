// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedBool.c by tools/c2cs.py
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

public class CompareSharedBool : Conditional // TypeDefIndex: 5969
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedBool variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedBool compareTo; // 0x30

    // Methods

    // RVA: 0x3E5B Offset: 0x3E5B VA: 0x3E5B Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        byte local_1 = default;

        uVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565c78);
        local_1 = (byte)uVar1;
        uVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
        unnamed_function_82782(&local_1,uVar1,0);
        return;
    }

    // RVA: 0x3E5C Offset: 0x3E5C VA: 0x3E5C Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar1[4].monitor = 0;
        this.variable = pBVar1;
        pBVar1 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar1[4].monitor = 0;
        this.compareTo = pBVar1;
    }

    // RVA: 0x3E5D Offset: 0x3E5D VA: 0x3E5D
    public CompareSharedBool()
    {
        unnamed_function_51834(this,0);
    }
}
