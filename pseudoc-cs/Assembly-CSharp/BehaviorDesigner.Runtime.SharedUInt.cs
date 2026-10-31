// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedUInt.c by tools/c2cs.py
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

public class SharedUInt : SharedVariable<uint> // TypeDefIndex: 5819
{
    // Methods

    // RVA: 0x3BE9 Offset: 0x3BE9 VA: 0x3BE9
    public static SharedUInt op_Implicit(uint value)
    {
        BehaviorDesigner.Runtime.SharedUInt pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedUInt) new BehaviorDesigner_Runtime_SharedUInt();
        pBVar1[4].monitor = (object)value;
        return pBVar1;
    }

    // RVA: 0x3BEA Offset: 0x3BEA VA: 0x3BEA
    public SharedUInt()
    {

    }
}
