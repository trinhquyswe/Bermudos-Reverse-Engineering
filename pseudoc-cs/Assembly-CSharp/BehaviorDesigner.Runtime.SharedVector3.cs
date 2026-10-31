// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedVector3.c by tools/c2cs.py
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

public class SharedVector3 : SharedVariable<Vector3> // TypeDefIndex: 5822
{
    // Methods

    // RVA: 0x3BEF Offset: 0x3BEF VA: 0x3BEF
    public static SharedVector3 op_Implicit(Vector3 value)
    {
        float fVar1 = default;
        Vector3 pVVar2 = default;

        pVVar2 = (Vector3)new BehaviorDesigner_Runtime_SharedVector3();
        pVVar2[3].z = value.z;
        fVar1 = value.y;
        pVVar2[3].x = value.x;
        pVVar2[3].y = fVar1;
        return pVVar2;
    }

    // RVA: 0x3BF0 Offset: 0x3BF0 VA: 0x3BF0
    public SharedVector3()
    {

    }
}
