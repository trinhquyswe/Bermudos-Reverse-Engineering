// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.ReturnSuccess.c by tools/c2cs.py
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

public class ReturnSuccess : Decorator // TypeDefIndex: 5871
{
    // Fields
    private TaskStatus executionStatus; // 0x30

    // Methods

    // RVA: 0x3D08 Offset: 0x3D08 VA: 0x3D08 Slot: 34
    public override bool CanExecute()
    {
        return this.executionStatus == Inactive || this.executionStatus == Running;
    }

    // RVA: 0x3D09 Offset: 0x3D09 VA: 0x3D09 Slot: 37
    public override void OnChildExecuted(TaskStatus childStatus)
    {
        this.executionStatus = childStatus;
    }

    // RVA: 0x3D0A Offset: 0x3D0A VA: 0x3D0A Slot: 35
    public override TaskStatus Decorate(TaskStatus status)
    {

    }

    // RVA: 0x3D0B Offset: 0x3D0B VA: 0x3D0B Slot: 9
    public override void OnEnd()
    {
        this.collidedGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
    }

    // RVA: 0x3D0C Offset: 0x3D0C VA: 0x3D0C
    public ReturnSuccess()
    {
        unnamed_function_51834(this,0);
    }
}
