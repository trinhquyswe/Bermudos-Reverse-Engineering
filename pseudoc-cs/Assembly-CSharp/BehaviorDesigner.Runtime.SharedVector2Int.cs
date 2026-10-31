// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedVector2Int.c by tools/c2cs.py
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

public class SharedVector2Int : SharedVariable<Vector2Int> // TypeDefIndex: 5821
{
    // Methods

    // RVA: 0x3BED Offset: 0x3BED VA: 0x3BED
    public static SharedVector2Int op_Implicit(Vector2Int value)
    {
        BehaviorDesigner.Runtime.SharedVector2Int pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2Int) new BehaviorDesigner_Runtime_SharedVector2Int();
        *(UnityEngine.Vector2Int)&pBVar1[4].monitor = *value;
        return pBVar1;
    }

    // RVA: 0x3BEE Offset: 0x3BEE VA: 0x3BEE
    public SharedVector2Int()
    {

    }
}
