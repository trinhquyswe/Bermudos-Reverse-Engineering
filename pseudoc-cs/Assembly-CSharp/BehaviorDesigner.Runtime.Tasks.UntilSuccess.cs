// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.UntilSuccess.c by tools/c2cs.py
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

public class UntilSuccess : Decorator // TypeDefIndex: 5874
{
    // Fields
    private TaskStatus executionStatus; // 0x30

    // Methods

    // RVA: 0x3D18 Offset: 0x3D18 VA: 0x3D18 Slot: 34
    public override bool CanExecute()
    {
        return this.executionStatus < Success;
    }

    // RVA: 0x3D19 Offset: 0x3D19 VA: 0x3D19 Slot: 37
    public override void OnChildExecuted(TaskStatus childStatus)
    {
        this.executionStatus = childStatus;
    }

    // RVA: 0x3D1A Offset: 0x3D1A VA: 0x3D1A Slot: 9
    public override void OnEnd()
    {
        this.collidedGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
    }

    // RVA: 0x3D1B Offset: 0x3D1B VA: 0x3D1B
    public UntilSuccess()
    {
        unnamed_function_51834(this,0);
    }
}
