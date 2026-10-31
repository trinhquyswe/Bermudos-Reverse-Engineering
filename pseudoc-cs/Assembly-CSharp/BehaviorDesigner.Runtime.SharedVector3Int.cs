// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedVector3Int.c by tools/c2cs.py
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

public class SharedVector3Int : SharedVariable<Vector3Int> // TypeDefIndex: 5823
{
    // Methods

    // RVA: 0x3BF1 Offset: 0x3BF1 VA: 0x3BF1
    public static SharedVector3Int op_Implicit(Vector3Int value)
    {
        BehaviorDesigner.Runtime.SharedVector3Int pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3Int) new BehaviorDesigner_Runtime_SharedVector3Int();
        pBVar1[5].monitor = (object)value.m_Z;
        *(object)&pBVar1[4].monitor = Raw.Read<long>(value);
        return pBVar1;
    }

    // RVA: 0x3BF2 Offset: 0x3BF2 VA: 0x3BF2
    public SharedVector3Int()
    {

    }
}
