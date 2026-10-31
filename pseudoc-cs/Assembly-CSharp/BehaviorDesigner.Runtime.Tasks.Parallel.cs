// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Parallel.c by tools/c2cs.py
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

public class Parallel : Composite // TypeDefIndex: 5841
{
    // Fields
    private int currentChildIndex; // 0x34
    private TaskStatus[] executionStatus; // 0x38

    // Methods

    // RVA: 0x3C35 Offset: 0x3C35 VA: 0x3C35 Slot: 4
    public override void OnAwake()
    {
        BehaviorDesigner.Runtime_Tasks_TaskStatus BVar1 = default;

        BVar1 = unnamed_function_1050 (BehaviorDesigner_Runtime_Tasks_TaskStatus___TypeInfo, Raw.Read<int>(Raw.Read<int>(this.pad_8 + 0x24) + 0xc));
        this.executionStatus = BVar1;
    }

    // RVA: 0x3C36 Offset: 0x3C36 VA: 0x3C36 Slot: 40
    public override void OnChildStarted(int childIndex)
    {
        this.currentChildIndex = this.currentChildIndex + 1;
        Raw.Write<int>(this.executionStatus + childIndex * 4 + 0x10, 3);
    }

    // RVA: 0x3C37 Offset: 0x3C37 VA: 0x3C37 Slot: 32
    public override bool CanRunParallelChildren()
    {
        return true;
    }

    // RVA: 0x3C38 Offset: 0x3C38 VA: 0x3C38 Slot: 33
    public override int CurrentChildIndex()
    {

    }

    // RVA: 0x3C39 Offset: 0x3C39 VA: 0x3C39 Slot: 34
    public override bool CanExecute()
    {
        return this.currentChildIndex < Raw.Read<int>(Raw.Read<int>(this.pad_8 + 0x24) + 0xc);
    }

    // RVA: 0x3C3A Offset: 0x3C3A VA: 0x3C3A Slot: 38
    public override void OnChildExecuted(int childIndex, TaskStatus childStatus)
    {
        Raw.Write<BehaviorDesigner.Runtime_Tasks_TaskStatus>(this.executionStatus + childIndex * 4 + 0x10, childStatus);
    }

    // RVA: 0x3C3B Offset: 0x3C3B VA: 0x3C3B Slot: 41
    public override TaskStatus OverrideStatus(TaskStatus status)
    {
        int iVar1 = default;
        int iVar2 = default;

        iVar2 = Raw.Read<int>(Raw.Read<int>(this + 0x38) + 0xc);
        if (0 < iVar2) {
            iVar1 = 0;
            do {
                if (Raw.Read<int>(Raw.Read<int>(this + 0x38) + iVar1 * 4 + 0x10) == 1) {
                    return;
                }
                iVar1 = iVar1 + 1;
            } while (iVar1 != iVar2);
        }
        return;
    }

    // RVA: 0x3C3C Offset: 0x3C3C VA: 0x3C3C Slot: 43
    public override void OnConditionalAbort(int childIndex)
    {
        int iVar1 = default;

        this.currentChildIndex = 0;
        iVar1 = Raw.Read<int>(this.executionStatus + 0xc);
        if (0 < iVar1) {
            unnamed_function_486(this.executionStatus + 0x10,0,iVar1 << 2);
        }
    }

    // RVA: 0x3C3D Offset: 0x3C3D VA: 0x3C3D Slot: 9
    public override void OnEnd()
    {
        int iVar1 = default;

        iVar1 = Raw.Read<int>(this.executionStatus + 0xc);
        if (0 < iVar1) {
            unnamed_function_486(this.executionStatus + 0x10,0,iVar1 << 2);
        }
        this.currentChildIndex = 0;
    }

    // RVA: 0x3C3E Offset: 0x3C3E VA: 0x3C3E
    public Parallel()
    {
        unnamed_function_51834(this,0);
    }
}
