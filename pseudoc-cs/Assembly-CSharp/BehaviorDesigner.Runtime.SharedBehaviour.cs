// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedBehaviour.c by tools/c2cs.py
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

public class SharedBehaviour : SharedVariable<Behaviour> // TypeDefIndex: 5801
{
    // Methods

    // RVA: 0x3BC5 Offset: 0x3BC5 VA: 0x3BC5
    public static SharedBehaviour op_Explicit(Behaviour value)
    {
        BehaviorDesigner.Runtime.SharedBehaviour pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedBehaviour) new BehaviorDesigner_Runtime_SharedBehaviour();
        pBVar1[4].monitor = (object)value;
        return pBVar1;
    }

    // RVA: 0x3BC6 Offset: 0x3BC6 VA: 0x3BC6
    public SharedBehaviour()
    {

    }
}
