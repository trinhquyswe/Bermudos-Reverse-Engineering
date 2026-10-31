// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator.c by tools/c2cs.py
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

public class ConditionalEvaluator : Decorator // TypeDefIndex: 5865
{
    // Fields
    [Tooltip("Should the conditional task be reevaluated every tick?")]
    public SharedBool reevaluate; // 0x30
    [Tooltip("The conditional task to evaluate")]
    [InspectTask]
    public Conditional conditionalTask; // 0x34
    [Tooltip("Should the inspected conditional task be labeled within the graph?")]
    public bool graphLabel; // 0x38
    private TaskStatus executionStatus; // 0x3C
    private bool checkConditionalTask; // 0x40
    private bool conditionalTaskFailed; // 0x41

    // Methods

    // RVA: 0x3CE0 Offset: 0x3CE0 VA: 0x3CE0 Slot: 4
    public override void OnAwake()
    {
        Conditional pCVar1 = default;

        pCVar1 = this.conditionalTask;
        if (pCVar1 != (Conditional)0x0) {
            pCVar1[5]._opaque = Raw.Read<int>(this.pad_8 + 0xc);
            pCVar1[2]._opaque = Raw.Read<int>(this).pad_8;
            pCVar1[3]._opaque = Raw.Read<int>(this.pad_8 + 4);
            Raw.VCall((ulong)Raw.Read<uint>(pCVar1._opaque + 0xe0) * 4) /* virtual */ (pCVar1,Raw.Read<int>(pCVar1._opaque + 0xe4));
        }
    }

    // RVA: 0x3CE1 Offset: 0x3CE1 VA: 0x3CE1 Slot: 5
    public override void OnStart()
    {
        Conditional pCVar1 = default;

        pCVar1 = this.conditionalTask;
        if (pCVar1 != (Conditional)0x0) {
            Raw.VCall((ulong)Raw.Read<uint>(pCVar1._opaque + 0xe8) * 4) /* virtual */ (pCVar1,Raw.Read<int>(pCVar1._opaque + 0xec));
        }
    }

    // RVA: 0x3CE2 Offset: 0x3CE2 VA: 0x3CE2 Slot: 34
    public override bool CanExecute()
    {
        bool bVar1 = default;

        if (this.checkConditionalTask != false) {
            this.checkConditionalTask = false;
            Raw.VCall((ulong)Raw.Read<uint>((int)this.klass + 0xf0) * 4) /* virtual */ (this,Raw.Read<int>((int)this.klass + 0xf4));
        }
        if (this.conditionalTaskFailed == false) {
            bVar1 = this.executionStatus == Inactive || this.executionStatus == Running;
        }
        else {
            bVar1 = false;
        }
        return bVar1;
    }

    // RVA: 0x3CE3 Offset: 0x3CE3 VA: 0x3CE3 Slot: 36
    public override bool CanReevaluate()
    {
        int uVar1 = default;

        uVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(this.reevaluate,DAT_ram_00565c78);
        return SUB41(uVar1,0);
    }

    // RVA: 0x3CE4 Offset: 0x3CE4 VA: 0x3CE4 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;

        iVar1 = Raw.Deref(Raw.Read<object>(this + 0x34));
        iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xf0) * 4) /* virtual */ (Raw.Read<object>(this + 0x34),Raw.Read<int>(iVar1 + 0xf4));
        Raw.Write<bool>(this + 0x41, iVar1 == 1 || Raw.Read<int>(this + 0x34) == 0);
        return;
    }

    // RVA: 0x3CE5 Offset: 0x3CE5 VA: 0x3CE5 Slot: 37
    public override void OnChildExecuted(TaskStatus childStatus)
    {
        this.executionStatus = childStatus;
    }

    // RVA: 0x3CE6 Offset: 0x3CE6 VA: 0x3CE6 Slot: 42
    public override TaskStatus OverrideStatus()
    {
        return true;
    }

    // RVA: 0x3CE7 Offset: 0x3CE7 VA: 0x3CE7 Slot: 41
    public override TaskStatus OverrideStatus(TaskStatus status)
    {

    }

    // RVA: 0x3CE8 Offset: 0x3CE8 VA: 0x3CE8 Slot: 9
    public override void OnEnd()
    {
        Conditional pCVar1 = default;

        this.checkConditionalTask = true;
        this.conditionalTaskFailed = false;
        this.executionStatus = Inactive;
        pCVar1 = this.conditionalTask;
        if (pCVar1 != (Conditional)0x0) {
            Raw.VCall((ulong)Raw.Read<uint>(pCVar1._opaque + 0x108) * 4) /* virtual */ (pCVar1,Raw.Read<int>(pCVar1._opaque + 0x10c));
        }
    }

    // RVA: 0x3CE9 Offset: 0x3CE9 VA: 0x3CE9 Slot: 18
    public override string OnDrawNodeText()
    {
        object piVar1 = default; // int*
        System.String pSVar2 = default;

        if ((this.conditionalTask != (Conditional)0x0) && (this.graphLabel != false)) {
            piVar1 = (object)unnamed_function_82118(this.conditionalTask);
            pSVar2 = (System.String) Raw.VCall((ulong)Raw.Read<uint>(*piVar1 + 0x100) * 4) /* virtual */ (piVar1,Raw.Read<int>(*piVar1 + 0x104));
            return pSVar2;
        }
        return (System.String)Raw.Deref(Raw.Read<object>(string_TypeInfo + 0x5c));
    }

    // RVA: 0x3CEA Offset: 0x3CEA VA: 0x3CEA Slot: 16
    public override void OnReset()
    {
        this.behavior = (Behavior)0x0;
    }

    // RVA: 0x3CEB Offset: 0x3CEB VA: 0x3CEB
    public ConditionalEvaluator()
    {
        this.checkConditionalTask = true;
        unnamed_function_51834(this,0);
    }
}
