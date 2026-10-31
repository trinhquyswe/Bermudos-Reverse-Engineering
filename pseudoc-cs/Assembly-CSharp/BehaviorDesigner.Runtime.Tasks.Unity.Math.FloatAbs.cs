// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatAbs.c by tools/c2cs.py
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

public class FloatAbs : Action // TypeDefIndex: 6143
{
    // Fields
    [Tooltip("The float to return the absolute value of")]
    public SharedFloat floatVariable; // 0x2C

    // Methods

    // RVA: 0x40CD Offset: 0x40CD VA: 0x40CD Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(param1,DAT_ram_00565d00);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,Mathf.Abs(fVar1),DAT_ram_00565d04);
        return;
    }

    // RVA: 0x40CE Offset: 0x40CE VA: 0x40CE Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.floatVariable = pBVar1;
    }

    // RVA: 0x40CF Offset: 0x40CF VA: 0x40CF
    public FloatAbs()
    {
        unnamed_function_51834(this,0);
    }
}
