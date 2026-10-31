// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.SetFloat.c by tools/c2cs.py
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

public class SetFloat : Action // TypeDefIndex: 6163
{
    // Fields
    [Tooltip("The float value to set")]
    public SharedFloat floatValue; // 0x2C
    [Tooltip("The variable to store the result")]
    public SharedFloat storeResult; // 0x30

    // Methods

    // RVA: 0x40FC Offset: 0x40FC VA: 0x40FC Slot: 6
    public override TaskStatus OnUpdate()
    {
        float param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        param2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565d00);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,param2,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x40FD Offset: 0x40FD VA: 0x40FD Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.targetValue = pBVar1;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.targetVariable = pBVar1;
    }

    // RVA: 0x40FE Offset: 0x40FE VA: 0x40FE
    public SetFloat()
    {
        unnamed_function_51834(this,0);
    }
}
