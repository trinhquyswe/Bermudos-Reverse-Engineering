// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedQuaternion.c by tools/c2cs.py
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

public class SharedQuaternion : SharedVariable<Quaternion> // TypeDefIndex: 5814
{
    // Methods

    // RVA: 0x3BDF Offset: 0x3BDF VA: 0x3BDF
    public static SharedQuaternion op_Implicit(Quaternion value)
    {
        float fVar1 = default;
        Quaternion pQVar2 = default;

        pQVar2 = (Quaternion) new BehaviorDesigner_Runtime_SharedQuaternion();
        *(object)&pQVar2[2].w = *(object)&value.z;
        fVar1 = value.y;
        pQVar2[2].y = value.x;
        pQVar2[2].z = fVar1;
        return pQVar2;
    }

    // RVA: 0x3BE0 Offset: 0x3BE0 VA: 0x3BE0
    public SharedQuaternion()
    {

    }
}
