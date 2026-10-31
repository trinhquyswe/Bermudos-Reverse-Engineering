// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Interrupt.c by tools/c2cs.py
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

public class Interrupt : Decorator // TypeDefIndex: 5867
{
    // Fields
    private TaskStatus interruptStatus; // 0x30
    private TaskStatus executionStatus; // 0x34

    // Methods

    // RVA: 0x3CF3 Offset: 0x3CF3 VA: 0x3CF3 Slot: 34
    public override bool CanExecute()
    {
        return this.executionStatus == Inactive || this.executionStatus == Running;
    }

    // RVA: 0x3CF4 Offset: 0x3CF4 VA: 0x3CF4 Slot: 37
    public override void OnChildExecuted(TaskStatus childStatus)
    {
        this.executionStatus = childStatus;
    }

    // RVA: 0x3CF5 Offset: 0x3CF5 VA: 0x3CF5
    public void DoInterrupt(TaskStatus status)
    {
        this.interruptStatus = status;
        BehaviorDesigner.Runtime.BehaviorManager.Interrupt(Raw.Deref(Raw.Read<object>(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x5c)), Raw.Read<int>(this.pad_8 + 0xc),this,status,0);
    }

    // RVA: 0x3CF6 Offset: 0x3CF6 VA: 0x3CF6 Slot: 42
    public override TaskStatus OverrideStatus()
    {
        return set[6].klass;
    }

    // RVA: 0x3CF7 Offset: 0x3CF7 VA: 0x3CF7 Slot: 9
    public override void OnEnd()
    {
        this.interruptStatus = Failure;
        this.executionStatus = Inactive;
    }

    // RVA: 0x3CF8 Offset: 0x3CF8 VA: 0x3CF8
    public Interrupt()
    {
        this.interruptStatus = Failure;
        unnamed_function_51834(this,0);
    }
}
