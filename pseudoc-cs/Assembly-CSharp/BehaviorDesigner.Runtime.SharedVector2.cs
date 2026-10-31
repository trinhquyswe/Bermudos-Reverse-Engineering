// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedVector2.c by tools/c2cs.py
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

public class SharedVector2 : SharedVariable<Vector2> // TypeDefIndex: 5820
{
    // Methods

    // RVA: 0x3BEB Offset: 0x3BEB VA: 0x3BEB
    public static SharedVector2 op_Implicit(Vector2 value)
    {
        Vector2 pVVar1 = default;

        pVVar1 = (Vector2)new BehaviorDesigner_Runtime_SharedVector2();
        *(Vector2)&pVVar1[4].y = *value;
        return pVVar1;
    }

    // RVA: 0x3BEC Offset: 0x3BEC VA: 0x3BEC
    public SharedVector2()
    {

    }
}
