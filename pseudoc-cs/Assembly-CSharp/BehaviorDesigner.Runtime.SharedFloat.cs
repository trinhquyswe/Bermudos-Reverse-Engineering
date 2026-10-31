// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedFloat.c by tools/c2cs.py
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

public class SharedFloat : SharedVariable<float> // TypeDefIndex: 5805
{
    // Methods

    // RVA: 0x3BCD Offset: 0x3BCD VA: 0x3BCD
    public static SharedFloat op_Implicit(float value)
    {
        BehaviorDesigner.Runtime.SharedFloat param1 = default;

        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,value,DAT_ram_00565d04);
        return param1;
    }

    // RVA: 0x3BCE Offset: 0x3BCE VA: 0x3BCE
    public SharedFloat()
    {

    }
}
