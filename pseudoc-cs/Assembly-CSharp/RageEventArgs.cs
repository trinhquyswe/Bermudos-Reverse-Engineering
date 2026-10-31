// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/RageEventArgs.c by tools/c2cs.py
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

public class RageEventArgs // TypeDefIndex: 5629
{
    // Fields
    public float ragePercent; // 0x8
    public float currentRage; // 0xC
    public float maxRage; // 0x10

    // Methods

    // RVA: 0x3848 Offset: 0x3848 VA: 0x3848
    public RageEventArgs()
    {

    }
}
