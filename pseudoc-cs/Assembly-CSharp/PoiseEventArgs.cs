// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/PoiseEventArgs.c by tools/c2cs.py
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

public class PoiseEventArgs // TypeDefIndex: 5626
{
    // Fields
    public float poiseAmount; // 0x8
    public float currentPoise; // 0xC
    public float maxPoise; // 0x10
    public float stunTime; // 0x14

    // Methods

    // RVA: 0x3842 Offset: 0x3842 VA: 0x3842
    public PoiseEventArgs()
    {

    }
}
