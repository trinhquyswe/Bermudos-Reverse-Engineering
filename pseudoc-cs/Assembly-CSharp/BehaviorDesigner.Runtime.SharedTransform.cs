// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedTransform.c by tools/c2cs.py
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

public class SharedTransform : SharedVariable<Transform> // TypeDefIndex: 5817
{
    // Methods

    // RVA: 0x3BE5 Offset: 0x3BE5 VA: 0x3BE5
    public static SharedTransform op_Implicit(Transform value)
    {
        BehaviorDesigner.Runtime.SharedTransform pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedTransform) new BehaviorDesigner_Runtime_SharedTransform();
        pBVar1[4].monitor = (object)value;
        return pBVar1;
    }

    // RVA: 0x3BE6 Offset: 0x3BE6 VA: 0x3BE6
    public SharedTransform()
    {

    }
}
