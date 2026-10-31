// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Sequence.c by tools/c2cs.py
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

public class Sequence : Composite // TypeDefIndex: 5849
{
    // Fields
    private int currentChildIndex; // 0x34
    private TaskStatus executionStatus; // 0x38

    // Methods

    // RVA: 0x3C80 Offset: 0x3C80 VA: 0x3C80 Slot: 33
    public override int CurrentChildIndex()
    {

    }

    // RVA: 0x3C81 Offset: 0x3C81 VA: 0x3C81 Slot: 34
    public override bool CanExecute()
    {
        bool bVar1 = default;

        if (this.currentChildIndex < Raw.Read<int>(Raw.Read<int>(this.pad_8 + 0x24) + 0xc)) {
            bVar1 = this.executionStatus != Failure;
        }
        else {
            bVar1 = false;
        }
        return bVar1;
    }

    // RVA: 0x3C82 Offset: 0x3C82 VA: 0x3C82 Slot: 37
    public override void OnChildExecuted(TaskStatus childStatus)
    {
        this.executionStatus = childStatus;
        this.currentChildIndex = this.currentChildIndex + 1;
    }

    // RVA: 0x3C83 Offset: 0x3C83 VA: 0x3C83 Slot: 43
    public override void OnConditionalAbort(int childIndex)
    {
        this.executionStatus = Inactive;
        this.currentChildIndex = childIndex;
    }

    // RVA: 0x3C84 Offset: 0x3C84 VA: 0x3C84 Slot: 9
    public override void OnEnd()
    {
        this.currentChildIndex = 0;
        this.executionStatus = Inactive;
    }

    // RVA: 0x3C85 Offset: 0x3C85 VA: 0x3C85
    public Sequence()
    {
        unnamed_function_51834(this,0);
    }
}
