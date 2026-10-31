// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.ParallelSelector.c by tools/c2cs.py
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

public class ParallelSelector : Composite // TypeDefIndex: 5843
{
    // Fields
    private int currentChildIndex; // 0x34
    private TaskStatus[] executionStatus; // 0x38

    // Methods

    // RVA: 0x3C49 Offset: 0x3C49 VA: 0x3C49 Slot: 4
    public override void OnAwake()
    {
        BehaviorDesigner.Runtime_Tasks_TaskStatus BVar1 = default;

        BVar1 = unnamed_function_1050 (BehaviorDesigner_Runtime_Tasks_TaskStatus___TypeInfo, Raw.Read<int>(Raw.Read<int>(this.pad_8 + 0x24) + 0xc));
        this.executionStatus = BVar1;
    }

    // RVA: 0x3C4A Offset: 0x3C4A VA: 0x3C4A Slot: 40
    public override void OnChildStarted(int childIndex)
    {
        this.currentChildIndex = this.currentChildIndex + 1;
        Raw.Write<int>(this.executionStatus + childIndex * 4 + 0x10, 3);
    }

    // RVA: 0x3C4B Offset: 0x3C4B VA: 0x3C4B Slot: 32
    public override bool CanRunParallelChildren()
    {
        return true;
    }

    // RVA: 0x3C4C Offset: 0x3C4C VA: 0x3C4C Slot: 33
    public override int CurrentChildIndex()
    {

    }

    // RVA: 0x3C4D Offset: 0x3C4D VA: 0x3C4D Slot: 34
    public override bool CanExecute()
    {
        return this.currentChildIndex < Raw.Read<int>(Raw.Read<int>(this.pad_8 + 0x24) + 0xc);
    }

    // RVA: 0x3C4E Offset: 0x3C4E VA: 0x3C4E Slot: 38
    public override void OnChildExecuted(int childIndex, TaskStatus childStatus)
    {
        Raw.Write<BehaviorDesigner.Runtime_Tasks_TaskStatus>(this.executionStatus + childIndex * 4 + 0x10, childStatus);
    }

    // RVA: 0x3C4F Offset: 0x3C4F VA: 0x3C4F Slot: 43
    public override void OnConditionalAbort(int childIndex)
    {
        int iVar1 = default;

        this.currentChildIndex = 0;
        iVar1 = Raw.Read<int>(this.executionStatus + 0xc);
        if (0 < iVar1) {
            unnamed_function_486(this.executionStatus + 0x10,0,iVar1 << 2);
        }
    }

    // RVA: 0x3C50 Offset: 0x3C50 VA: 0x3C50 Slot: 41
    public override TaskStatus OverrideStatus(TaskStatus status)
    {
        int iVar1 = default;
        int iVar2 = default;

        iVar2 = Raw.Read<int>(Raw.Read<int>(this + 0x38) + 0xc);
        if (0 < iVar2) {
            iVar1 = 0;
            do {
                if (Raw.Read<int>(Raw.Read<int>(this + 0x38) + iVar1 * 4 + 0x10) == 2) {
                    return;
                }
                iVar1 = iVar1 + 1;
            } while (iVar1 != iVar2);
        }
        return;
    }

    // RVA: 0x3C51 Offset: 0x3C51 VA: 0x3C51 Slot: 9
    public override void OnEnd()
    {
        int iVar1 = default;

        iVar1 = Raw.Read<int>(this.executionStatus + 0xc);
        if (0 < iVar1) {
            unnamed_function_486(this.executionStatus + 0x10,0,iVar1 << 2);
        }
        this.currentChildIndex = 0;
    }

    // RVA: 0x3C52 Offset: 0x3C52 VA: 0x3C52
    public ParallelSelector()
    {
        unnamed_function_51834(this,0);
    }
}
