// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedBool.c by tools/c2cs.py
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

public class SetSharedBool : Action // TypeDefIndex: 5985
{
    // Fields
    [Tooltip("The value to set the SharedBool to")]
    public SharedBool targetValue; // 0x2C
    [Tooltip("The SharedBool to set")]
    [RequiredField]
    public SharedBool targetVariable; // 0x30

    // Methods

    // RVA: 0x3E8B Offset: 0x3E8B VA: 0x3E8B Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        param2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565c78);
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(param1,param2,DAT_ram_00565c7c);
        return;
    }

    // RVA: 0x3E8C Offset: 0x3E8C VA: 0x3E8C Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        pBVar1 = SharedBool.op_Implicit(false);
        this.targetValue = pBVar1;
        pBVar1 = SharedBool.op_Implicit(false);
        this.targetVariable = pBVar1;
    }

    // RVA: 0x3E8D Offset: 0x3E8D VA: 0x3E8D
    public SetSharedBool()
    {
        unnamed_function_51834(this,0);
    }
}
