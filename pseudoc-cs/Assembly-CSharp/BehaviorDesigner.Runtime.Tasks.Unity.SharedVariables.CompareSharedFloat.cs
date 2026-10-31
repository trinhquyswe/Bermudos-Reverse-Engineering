// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedFloat.c by tools/c2cs.py
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

public class CompareSharedFloat : Conditional // TypeDefIndex: 5971
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedFloat variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedFloat compareTo; // 0x30

    // Methods

    // RVA: 0x3E61 Offset: 0x3E61 VA: 0x3E61 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float param2 = default;
        float local_4 = default;

        local_4 = (float)BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565d00);
        param2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        System.Single.Equals(&local_4,param2,0);
        return;
    }

    // RVA: 0x3E62 Offset: 0x3E62 VA: 0x3E62 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar1,0.0,DAT_ram_00565d04);
        this.variable = pBVar1;
        pBVar1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar1,0.0,DAT_ram_00565d04);
        this.compareTo = pBVar1;
    }

    // RVA: 0x3E63 Offset: 0x3E63 VA: 0x3E63
    public CompareSharedFloat()
    {
        unnamed_function_51834(this,0);
    }
}
