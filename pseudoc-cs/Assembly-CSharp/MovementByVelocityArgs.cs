// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MovementByVelocityArgs.c by tools/c2cs.py
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

public class MovementByVelocityArgs : EventArgs // TypeDefIndex: 5677
{
    // Fields
    public Vector2 moveDirection; // 0x8
    public float moveSpeed; // 0x10
    public bool isAttacking; // 0x14

    // Methods

    // RVA: 0x3967 Offset: 0x3967 VA: 0x3967
    public MovementByVelocityArgs()
    {

    }
}
