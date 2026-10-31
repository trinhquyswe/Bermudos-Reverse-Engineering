// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/HealthEventArgs.c by tools/c2cs.py
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

public class HealthEventArgs : EventArgs // TypeDefIndex: 5623
{
    // Fields
    public float healthPercent; // 0x8
    public int healthAmount; // 0xC
    public int damageAmount; // 0x10

    // Methods

    // RVA: 0x3839 Offset: 0x3839 VA: 0x3839
    public HealthEventArgs()
    {

    }
}
