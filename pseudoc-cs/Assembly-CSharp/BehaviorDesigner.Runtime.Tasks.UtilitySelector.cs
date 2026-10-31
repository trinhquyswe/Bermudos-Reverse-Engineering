// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.UtilitySelector.c by tools/c2cs.py
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

public class UtilitySelector : Composite // TypeDefIndex: 5850
{
    // Fields
    private int currentChildIndex; // 0x34
    private float highestUtility; // 0x38
    private TaskStatus executionStatus; // 0x3C
    private bool reevaluating; // 0x40
    private List<int> availableChildren; // 0x44

    // Methods

    // RVA: 0x3C86 Offset: 0x3C86 VA: 0x3C86 Slot: 5
    public override void OnStart()
    {
        object piVar1 = default; // int*
        float fVar2 = default;
        List pLVar3 = default;
        int iVar4 = default;
        uint uVar5 = default;
        int param2 = default;

        param2 = 0;
        this.highestUtility = -3.4028235e+38;
        pLVar3 = this.availableChildren;
        pLVar3[3]._opaque = 0;
        pLVar3[4]._opaque = pLVar3[4]._opaque + 1;
        iVar4 = Raw.Read<int>(this.pad_8 + 0x24);
        if (0 < Raw.Read<int>(iVar4 + 0xc)) {
            do {
                piVar1 = (object)unnamed_function_6529(iVar4,param2,DAT_ram_00563e88);
                fVar2 = (float)Raw.VCall((ulong)Raw.Read<uint>(*piVar1 + 0x128) * 4) /* virtual */ (piVar1,Raw.Read<int>(*piVar1 + 300));
                if (this.highestUtility < fVar2) {
                    this.currentChildIndex = param2;
                    this.highestUtility = fVar2;
                }
                iVar4 = DAT_ram_00563320;
                pLVar3 = this.availableChildren;
                pLVar3[4]._opaque = pLVar3[4]._opaque + 1;
                uVar5 = pLVar3[3]._opaque;
                if (uVar5 < Raw.Read<uint>(pLVar3[2]._opaque + 0xc)) {
                    pLVar3[3]._opaque = uVar5 + 1;
                    Raw.Write<int>(pLVar3[2]._opaque + uVar5 * 4 + 0x10, param2);
                }
                else {
                    unnamed_function_6534 (pLVar3,param2,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar4 + 0x10) + 0x60) + 0x38));
                }
                param2 = param2 + 1;
                iVar4 = Raw.Read<int>(this.pad_8 + 0x24);
            } while (param2 < Raw.Read<int>(iVar4 + 0xc));
        }
    }

    // RVA: 0x3C87 Offset: 0x3C87 VA: 0x3C87 Slot: 33
    public override int CurrentChildIndex()
    {

    }

    // RVA: 0x3C88 Offset: 0x3C88 VA: 0x3C88 Slot: 40
    public override void OnChildStarted(int childIndex)
    {
        this.executionStatus = Running;
    }

    // RVA: 0x3C89 Offset: 0x3C89 VA: 0x3C89 Slot: 34
    public override bool CanExecute()
    {
        bool bVar1 = default;

        bVar1 = false;
        if (((this.executionStatus & ~Failure) != Success) && (this.reevaluating == false)) {
            bVar1 = 0 < this.availableChildren[3]._opaque;
        }
        return bVar1;
    }

    // RVA: 0x3C8A Offset: 0x3C8A VA: 0x3C8A Slot: 38
    public override void OnChildExecuted(int childIndex, TaskStatus childStatus)
    {
        int param2 = default;
        int param2_00 = default;
        object piVar1 = default; // int*
        float fVar2 = default;
        int iVar3 = default;
        List param1 = default;
        int param1_00 = default;

        if (((childStatus != Inactive) && (((childStatus == Failure || (childStatus == Success)) || (childStatus != Running)))) && (this.executionStatus = childStatus, childStatus == Failure)) {
            System.Collections.Generic.List<int>.Remove(this.availableChildren,childIndex,DAT_ram_00563340);
            this.highestUtility = -3.4028235e+38;
            param1 = this.availableChildren;
            if (0 < param1[3]._opaque) {
                param2 = 0;
                do {
                    param1_00 = Raw.Read<int>(this.pad_8 + 0x24);
                    param2_00 = unnamed_function_6529(param1,param2,DAT_ram_0056335c);
                    piVar1 = (object)unnamed_function_6529(param1_00,param2_00,DAT_ram_00563e88);
                    fVar2 = (float)Raw.VCall((ulong)Raw.Read<uint>(*piVar1 + 0x128) * 4) /* virtual */ (piVar1,Raw.Read<int>(*piVar1 + 300));
                    if (this.highestUtility < fVar2) {
                        this.highestUtility = fVar2;
                        iVar3 = unnamed_function_6529(this.availableChildren,param2,DAT_ram_0056335c);
                        this.currentChildIndex = iVar3;
                    }
                    param2 = param2 + 1;
                    param1 = this.availableChildren;
                } while (param2 < param1[3]._opaque);
            }
        }
    }

    // RVA: 0x3C8B Offset: 0x3C8B VA: 0x3C8B Slot: 43
    public override void OnConditionalAbort(int childIndex)
    {
        this.executionStatus = Inactive;
        this.currentChildIndex = childIndex;
    }

    // RVA: 0x3C8C Offset: 0x3C8C VA: 0x3C8C Slot: 9
    public override void OnEnd()
    {
        this.currentChildIndex = 0;
        this.executionStatus = Inactive;
    }

    // RVA: 0x3C8D Offset: 0x3C8D VA: 0x3C8D Slot: 41
    public override TaskStatus OverrideStatus(TaskStatus status)
    {

    }

    // RVA: 0x3C8E Offset: 0x3C8E VA: 0x3C8E Slot: 32
    public override bool CanRunParallelChildren()
    {
        return true;
    }

    // RVA: 0x3C8F Offset: 0x3C8F VA: 0x3C8F Slot: 36
    public override bool CanReevaluate()
    {
        return true;
    }

    // RVA: 0x3C90 Offset: 0x3C90 VA: 0x3C90 Slot: 44
    public override bool OnReevaluationStarted()
    {
        if (this.executionStatus != Inactive) {
            this.reevaluating = true;
        }
        return this.executionStatus != Inactive;
    }

    // RVA: 0x3C91 Offset: 0x3C91 VA: 0x3C91 Slot: 45
    public override void OnReevaluationEnded(TaskStatus status)
    {
        int param2 = default;
        int uVar1 = default;
        object piVar2 = default; // int*
        float fVar3 = default;
        int iVar4 = default;
        List param1 = default;
        int param2_00 = default;
        int uVar5 = default;
        int param2_01 = default;

        this.reevaluating = false;
        this.highestUtility = -3.4028235e+38;
        param1 = this.availableChildren;
        if (0 < param1[3]._opaque) {
            param2_00 = this.currentChildIndex;
            param2 = 0;
            do {
                uVar5 = Raw.Read<int>(this.pad_8 + 0x24);
                uVar1 = unnamed_function_6529(param1,param2,DAT_ram_0056335c);
                piVar2 = (object)unnamed_function_6529(uVar5,uVar1,DAT_ram_00563e88);
                fVar3 = (float)Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x128) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 300));
                if (this.highestUtility < fVar3) {
                    this.highestUtility = fVar3;
                    iVar4 = unnamed_function_6529(this.availableChildren,param2,DAT_ram_0056335c);
                    this.currentChildIndex = iVar4;
                }
                param2 = param2 + 1;
                param1 = this.availableChildren;
            } while (param2 < param1[3]._opaque);
            if (param2_00 != this.currentChildIndex) {
                uVar5 = Raw.Deref(Raw.Read<object>(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x5c));
                param2_01 = Raw.Read<int>(this.pad_8 + 0xc);
                uVar1 = unnamed_function_6529 (Raw.Read<int>(this.pad_8 + 0x24),param2_00,DAT_ram_00563e88);
                BehaviorDesigner.Runtime.BehaviorManager.Interrupt(uVar5,param2_01,uVar1,this,1,0);
                this.executionStatus = Inactive;
            }
        }
    }

    // RVA: 0x3C92 Offset: 0x3C92 VA: 0x3C92
    public UtilitySelector()
    {
        List param1 = default;

        param1 = (List)new System_Collections_Generic_List_int_();
        unnamed_function_5132(param1,DAT_ram_00563314);
        this.availableChildren = param1;
        unnamed_function_51834(this,0);
    }
}
