// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.EntryTask.c by tools/c2cs.py
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

public class EntryTask : ParentTask // TypeDefIndex: 5875
{
    // Methods

    // RVA: 0x3D1C Offset: 0x3D1C VA: 0x3D1C Slot: 31
    public override int MaxChildren()
    {
        return true;
    }

    // RVA: 0x3D1D Offset: 0x3D1D VA: 0x3D1D
    public EntryTask()
    {
        unnamed_function_51834(this,0);
    }
}
