// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.Save.c by tools/c2cs.py
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

public class Save : Action // TypeDefIndex: 6085
{
    // Methods

    // RVA: 0x3FF7 Offset: 0x3FF7 VA: 0x3FF7 Slot: 6
    public override TaskStatus OnUpdate()
    {
        UnityEngine.PlayerPrefs.Save(0);
    }

    // RVA: 0x3FF8 Offset: 0x3FF8 VA: 0x3FF8
    public Save()
    {
        unnamed_function_51834(this,0);
    }
}
