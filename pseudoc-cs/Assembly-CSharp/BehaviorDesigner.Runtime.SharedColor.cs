// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedColor.c by tools/c2cs.py
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

public class SharedColor : SharedVariable<Color> // TypeDefIndex: 5804
{
    // Methods

    // RVA: 0x3BCB Offset: 0x3BCB VA: 0x3BCB
    public static SharedColor op_Implicit(Color value)
    {
        float fVar1 = default;
        Color pCVar2 = default;

        pCVar2 = (Color)new BehaviorDesigner_Runtime_SharedColor();
        *(object)&pCVar2[2].a = *(object)&value.b;
        fVar1 = value.g;
        pCVar2[2].g = value.r;
        pCVar2[2].b = fVar1;
        return pCVar2;
    }

    // RVA: 0x3BCC Offset: 0x3BCC VA: 0x3BCC
    public SharedColor()
    {

    }
}
