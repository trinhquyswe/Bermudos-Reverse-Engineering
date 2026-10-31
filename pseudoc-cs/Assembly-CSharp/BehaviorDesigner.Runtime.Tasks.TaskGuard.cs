// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.TaskGuard.c by tools/c2cs.py
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

public class TaskGuard : Decorator // TypeDefIndex: 5872
{
    // Fields
    [Tooltip("The number of times the child tasks can be accessed by parallel tasks at once")]
    public SharedInt maxTaskAccessCount; // 0x30
    [Tooltip("The linked tasks that also guard a task. If the task guard is not linked against any other tasks it doesn't have much purpose. Marked as LinkedTask to ensure all tasks linked are linked to the same set of tasks")]
    [LinkedTask]
    public TaskGuard[] linkedTaskGuards; // 0x34
    [Tooltip("If true the task will wait until the child task is available. If false then any unavailable child tasks will be skipped over")]
    public SharedBool waitUntilTaskAvailable; // 0x38
    private int executingTasks; // 0x3C
    private bool executing; // 0x40

    // Methods

    // RVA: 0x3D0D Offset: 0x3D0D VA: 0x3D0D Slot: 34
    public override bool CanExecute()
    {
        int iVar1 = default;
        bool bVar2 = default;
        int iVar3 = default;

        iVar3 = this.executingTasks;
        iVar1 = unnamed_function_61203(this.maxTaskAccessCount,DAT_ram_00565cb8);
        if (iVar3 < iVar1) {
            bVar2 = this.executing == false;
        }
        else {
            bVar2 = false;
        }
        return bVar2;
    }

    // RVA: 0x3D0E Offset: 0x3D0E VA: 0x3D0E Slot: 39
    public override void OnChildStarted()
    {
        int iVar1 = default;
        BehaviorDesigner.Runtime.Tasks.TaskGuard pBVar2 = default;
        uint uVar3 = default;
        uint uVar4 = default;
        uint uVar5 = default;
        uint uVar6 = default;

        uVar5 = 0;
        uVar4 = 0;
        this.executing = true;
        this.executingTasks = this.executingTasks + 1;
        pBVar2 = this.linkedTaskGuards;
        uVar3 = Raw.Read<uint>(pBVar2.pad_8 + 4);
        if (0 < (int)uVar3) {
            iVar1 = 0;
            if (2 < uVar3 - 1) {
                do {
                    uVar6 = iVar1 * 4;
                    Raw.Write<int>(Raw.Read<int>(pBVar2.pad_8 + uVar6 + 8) + 0x3c, Raw.Read<int>(Raw.Read<int>(pBVar2.pad_8 + uVar6 + 8) + 0x3c) + 1);
                    Raw.Write<int>(Raw.Read<int>(pBVar2.pad_8 + (uVar6 | 4) + 8) + 0x3c, Raw.Read<int>(Raw.Read<int>(pBVar2.pad_8 + (uVar6 | 4) + 8) + 0x3c) + 1);
                    Raw.Write<int>(Raw.Read<int>(pBVar2.pad_8 + (uVar6 | 8) + 8) + 0x3c, Raw.Read<int>(Raw.Read<int>(pBVar2.pad_8 + (uVar6 | 8) + 8) + 0x3c) + 1);
                    Raw.Write<int>(Raw.Read<int>(pBVar2.pad_8 + (uVar6 | 0xc) + 8) + 0x3c, Raw.Read<int>(Raw.Read<int>(pBVar2.pad_8 + (uVar6 | 0xc) + 8) + 0x3c) + 1);
                    iVar1 = iVar1 + 4;
                    uVar4 = uVar4 + 4;
                } while (uVar4 != (uVar3 & 0xfffffffc));
            }
            if ((uVar3 & 3) != 0) {
                do {
                    Raw.Write<int>(Raw.Read<int>(pBVar2.pad_8 + iVar1 * 4 + 8) + 0x3c, Raw.Read<int>(Raw.Read<int>(pBVar2.pad_8 + iVar1 * 4 + 8) + 0x3c) + 1);
                    iVar1 = iVar1 + 1;
                    uVar5 = uVar5 + 1;
                } while (uVar5 != (uVar3 & 3));
            }
        }
    }

    // RVA: 0x3D0F Offset: 0x3D0F VA: 0x3D0F Slot: 41
    public override TaskStatus OverrideStatus(TaskStatus status)
    {
        if (Raw.Read<sbyte>(this + 0x40) == '\0') {
            BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x38),DAT_ram_00565c78);
        }
        return;
    }

    // RVA: 0x3D10 Offset: 0x3D10 VA: 0x3D10
    public void taskExecuting(bool increase)
    {
        uint in_register_20000011 = default;
        int iVar1 = default;

        iVar1 = 1;
        if (CONCAT31(in_register_20000011,increase) == 0) {
            iVar1 = -1;
        }
        this.executingTasks = this.executingTasks + iVar1;
    }

    // RVA: 0x3D11 Offset: 0x3D11 VA: 0x3D11 Slot: 9
    public override void OnEnd()
    {
        BehaviorDesigner.Runtime.Tasks.TaskGuard pBVar1 = default;
        uint uVar2 = default;
        uint uVar3 = default;
        int iVar4 = default;
        uint uVar5 = default;
        uint uVar6 = default;

        iVar4 = 0;
        uVar5 = 0;
        uVar3 = 0;
        if (this.executing != false) {
            this.executingTasks = this.executingTasks + -1;
            pBVar1 = this.linkedTaskGuards;
            uVar2 = Raw.Read<uint>(pBVar1.pad_8 + 4);
            if (0 < (int)uVar2) {
                if (2 < uVar2 - 1) {
                    do {
                        uVar6 = iVar4 * 4;
                        Raw.Write<int>(Raw.Read<int>(pBVar1.pad_8 + uVar6 + 8) + 0x3c, Raw.Read<int>(Raw.Read<int>(pBVar1.pad_8 + uVar6 + 8) + 0x3c) + -1);
                        Raw.Write<int>(Raw.Read<int>(pBVar1.pad_8 + (uVar6 | 4) + 8) + 0x3c, Raw.Read<int>(Raw.Read<int>(pBVar1.pad_8 + (uVar6 | 4) + 8) + 0x3c) + -1);
                        Raw.Write<int>(Raw.Read<int>(pBVar1.pad_8 + (uVar6 | 8) + 8) + 0x3c, Raw.Read<int>(Raw.Read<int>(pBVar1.pad_8 + (uVar6 | 8) + 8) + 0x3c) + -1);
                        Raw.Write<int>(Raw.Read<int>(pBVar1.pad_8 + (uVar6 | 0xc) + 8) + 0x3c, Raw.Read<int>(Raw.Read<int>(pBVar1.pad_8 + (uVar6 | 0xc) + 8) + 0x3c) + -1);
                        iVar4 = iVar4 + 4;
                        uVar3 = uVar3 + 4;
                    } while (uVar3 != (uVar2 & 0xfffffffc));
                }
                if ((uVar2 & 3) != 0) {
                    do {
                        Raw.Write<int>(Raw.Read<int>(pBVar1.pad_8 + iVar4 * 4 + 8) + 0x3c, Raw.Read<int>(Raw.Read<int>(pBVar1.pad_8 + iVar4 * 4 + 8) + 0x3c) + -1);
                        iVar4 = iVar4 + 1;
                        uVar5 = uVar5 + 1;
                    } while (uVar5 != (uVar2 & 3));
                }
            }
            this.executing = false;
        }
    }

    // RVA: 0x3D12 Offset: 0x3D12 VA: 0x3D12 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        this.maxTaskAccessCount = (BehaviorDesigner.Runtime.SharedInt)0x0;
        this.linkedTaskGuards = (BehaviorDesigner.Runtime.Tasks.TaskGuard)0x0;
        pBVar1 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar1[4].monitor = 1;
        this.waitUntilTaskAvailable = pBVar1;
    }

    // RVA: 0x3D13 Offset: 0x3D13 VA: 0x3D13
    public TaskGuard()
    {
        unnamed_function_51834(this,0);
    }
}
