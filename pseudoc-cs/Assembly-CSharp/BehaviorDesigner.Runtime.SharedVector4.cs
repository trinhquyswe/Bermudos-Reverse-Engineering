// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedVector4.c by tools/c2cs.py
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

public class SharedVector4 : SharedVariable<Vector4> // TypeDefIndex: 5824
{
    // Methods

    // RVA: 0x3BF3 Offset: 0x3BF3 VA: 0x3BF3
    public static SharedVector4 op_Implicit(Vector4 value)
    {
        float fVar1 = default;
        Vector4 pVVar2 = default;

        pVVar2 = (Vector4)new BehaviorDesigner_Runtime_SharedVector4();
        *(object)&pVVar2[2].w = *(object)&value.z;
        fVar1 = value.y;
        pVVar2[2].y = value.x;
        pVVar2[2].z = fVar1;
        return pVVar2;
    }

    // RVA: 0x3BF4 Offset: 0x3BF4 VA: 0x3BF4
    public SharedVector4()
    {

    }
}
