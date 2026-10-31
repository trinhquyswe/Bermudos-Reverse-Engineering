// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedAnimationCurve.c by tools/c2cs.py
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

public class SharedAnimationCurve : SharedVariable<AnimationCurve> // TypeDefIndex: 5800
{
    // Methods

    // RVA: 0x3BC3 Offset: 0x3BC3 VA: 0x3BC3
    public static SharedAnimationCurve op_Implicit(AnimationCurve value)
    {
        BehaviorDesigner.Runtime.SharedAnimationCurve pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedAnimationCurve) new BehaviorDesigner_Runtime_SharedAnimationCurve();
        pBVar1[4].monitor = value;
        return pBVar1;
    }

    // RVA: 0x3BC4 Offset: 0x3BC4 VA: 0x3BC4
    public SharedAnimationCurve()
    {

    }
}
