// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedRect.c by tools/c2cs.py
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

public class SharedRect : SharedVariable<Rect> // TypeDefIndex: 5815
{
    // Methods

    // RVA: 0x3BE1 Offset: 0x3BE1 VA: 0x3BE1
    public static SharedRect op_Implicit(Rect value)
    {
        float fVar1 = default;
        Rect pRVar2 = default;

        pRVar2 = (Rect)new BehaviorDesigner_Runtime_SharedRect();
        *(object)&pRVar2[2].height = *(object)&value.width;
        fVar1 = value.y;
        pRVar2[2].y = value.x;
        pRVar2[2].width = fVar1;
        return pRVar2;
    }

    // RVA: 0x3BE2 Offset: 0x3BE2 VA: 0x3BE2
    public SharedRect()
    {

    }
}
