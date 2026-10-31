// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.SelectorEvaluator.c by tools/c2cs.py
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

public class SelectorEvaluator : Composite // TypeDefIndex: 5848
{
    // Fields
    private int currentChildIndex; // 0x34
    private TaskStatus executionStatus; // 0x38
    private int storedCurrentChildIndex; // 0x3C
    private TaskStatus storedExecutionStatus; // 0x40

    // Methods

    // RVA: 0x3C74 Offset: 0x3C74 VA: 0x3C74 Slot: 33
    public override int CurrentChildIndex()
    {

    }

    // RVA: 0x3C75 Offset: 0x3C75 VA: 0x3C75 Slot: 40
    public override void OnChildStarted(int childIndex)
    {
        this.executionStatus = Running;
        this.currentChildIndex = this.currentChildIndex + 1;
    }

    // RVA: 0x3C76 Offset: 0x3C76 VA: 0x3C76 Slot: 34
    public override bool CanExecute()
    {
        bool bVar1 = default;

        if ((this.executionStatus & ~Failure) == Success) {
            bVar1 = false;
        }
        else {
            if (this.storedCurrentChildIndex != -1) {
                return this.currentChildIndex < this.storedCurrentChildIndex + -1;
            }
            bVar1 = this.currentChildIndex < Raw.Read<int>(Raw.Read<int>(this.pad_8 + 0x24) + 0xc);
        }
        return bVar1;
    }

    // RVA: 0x3C77 Offset: 0x3C77 VA: 0x3C77 Slot: 38
    public override void OnChildExecuted(int childIndex, TaskStatus childStatus)
    {
        int iVar1 = default;

        if (childStatus == Inactive) {
            childStatus = Failure;
            iVar1 = unnamed_function_6529(Raw.Read<int>(this.pad_8 + 0x24),childIndex,DAT_ram_00563e88);
            if (Raw.Read<sbyte>(iVar1 + 0x28) == '\0') {
                return;
            }
        }
        else if (((childStatus != Failure) && (childStatus != Success)) && (childStatus == Running)) {
            return;
        }
        this.executionStatus = childStatus;
    }

    // RVA: 0x3C78 Offset: 0x3C78 VA: 0x3C78 Slot: 43
    public override void OnConditionalAbort(int childIndex)
    {
        this.executionStatus = Inactive;
        this.currentChildIndex = childIndex;
    }

    // RVA: 0x3C79 Offset: 0x3C79 VA: 0x3C79 Slot: 9
    public override void OnEnd()
    {
        this.currentChildIndex = 0;
        this.executionStatus = Inactive;
    }

    // RVA: 0x3C7A Offset: 0x3C7A VA: 0x3C7A Slot: 41
    public override TaskStatus OverrideStatus(TaskStatus status)
    {

    }

    // RVA: 0x3C7B Offset: 0x3C7B VA: 0x3C7B Slot: 32
    public override bool CanRunParallelChildren()
    {
        return true;
    }

    // RVA: 0x3C7C Offset: 0x3C7C VA: 0x3C7C Slot: 36
    public override bool CanReevaluate()
    {
        return true;
    }

    // RVA: 0x3C7D Offset: 0x3C7D VA: 0x3C7D Slot: 44
    public override bool OnReevaluationStarted()
    {
        BehaviorDesigner.Runtime_Tasks_TaskStatus BVar1 = default;

        BVar1 = this.executionStatus;
        if (BVar1 != Inactive) {
            this.storedExecutionStatus = BVar1;
            this.storedCurrentChildIndex = this.currentChildIndex;
            this.currentChildIndex = 0;
            this.executionStatus = Inactive;
        }
        return BVar1 != Inactive;
    }

    // RVA: 0x3C7E Offset: 0x3C7E VA: 0x3C7E Slot: 45
    public override void OnReevaluationEnded(TaskStatus status)
    {
        int param3 = default;
        int param1 = default;
        int param2 = default;

        if (this.executionStatus < Success) {
            this.currentChildIndex = this.storedCurrentChildIndex;
            this.executionStatus = this.storedExecutionStatus;
        }
        else {
            param1 = Raw.Deref(Raw.Read<object>(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x5c));
            param2 = Raw.Read<int>(this.pad_8 + 0xc);
            param3 = unnamed_function_6529 (Raw.Read<int>(this.pad_8 + 0x24),this.storedCurrentChildIndex + -1, DAT_ram_00563e88);
            BehaviorDesigner.Runtime.BehaviorManager.Interrupt(param1,param2,param3,this,0,0);
        }
        this.storedCurrentChildIndex = -1;
        this.storedExecutionStatus = Inactive;
    }

    // RVA: 0x3C7F Offset: 0x3C7F VA: 0x3C7F
    public SelectorEvaluator()
    {
        this.storedCurrentChildIndex = -1;
        unnamed_function_51834(this,0);
    }
}
