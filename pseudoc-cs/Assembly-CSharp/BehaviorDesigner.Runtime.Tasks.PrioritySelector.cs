// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.PrioritySelector.c by tools/c2cs.py
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

public class PrioritySelector : Composite // TypeDefIndex: 5844
{
    // Fields
    private int currentChildIndex; // 0x34
    private TaskStatus executionStatus; // 0x38
    private List<int> childrenExecutionOrder; // 0x3C

    // Methods

    // RVA: 0x3C53 Offset: 0x3C53 VA: 0x3C53 Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        object piVar1 = default; // int*
        float fVar2 = default;
        int param2_00 = default;
        float fVar3 = default;
        List pLVar4 = default;
        int iVar5 = default;
        int param1 = default;
        int param2_01 = default;

        param2_01 = 0;
        pLVar4 = this.childrenExecutionOrder;
        pLVar4[3]._opaque = 0;
        pLVar4[4]._opaque = pLVar4[4]._opaque + 1;
        iVar5 = Raw.Read<int>(this.pad_8 + 0x24);
        if (0 < Raw.Read<int>(iVar5 + 0xc)) {
            do {
                piVar1 = (object)unnamed_function_6529(iVar5,param2_01,DAT_ram_00563e88);
                fVar2 = (float)Raw.VCall((ulong)Raw.Read<uint>(*piVar1 + 0x120) * 4) /* virtual */ (piVar1,Raw.Read<int>(*piVar1 + 0x124));
                param2 = 0;
                pLVar4 = this.childrenExecutionOrder;
                iVar5 = pLVar4[3]._opaque;
                if (0 < iVar5) {
                    do {
                        param1 = Raw.Read<int>(this.pad_8 + 0x24);
                        param2_00 = unnamed_function_6529(pLVar4,param2,DAT_ram_0056335c);
                        piVar1 = (object)unnamed_function_6529(param1,param2_00,DAT_ram_00563e88);
                        fVar3 = (float)Raw.VCall((ulong)Raw.Read<uint>(*piVar1 + 0x120) * 4) /* virtual */ (piVar1,Raw.Read<int>(*piVar1 + 0x124));
                        if (fVar3 < fVar2) {
                            pLVar4 = this.childrenExecutionOrder;
                            iVar5 = param2;
                            break;
                        }
                        param2 = param2 + 1;
                        pLVar4 = this.childrenExecutionOrder;
                    } while (param2 < pLVar4[3]._opaque);
                }
                unnamed_function_6553(pLVar4,iVar5,param2_01,DAT_ram_0056333c);
                param2_01 = param2_01 + 1;
                iVar5 = Raw.Read<int>(this.pad_8 + 0x24);
            } while (param2_01 < Raw.Read<int>(iVar5 + 0xc));
        }
    }

    // RVA: 0x3C54 Offset: 0x3C54 VA: 0x3C54 Slot: 33
    public override int CurrentChildIndex()
    {
        unnamed_function_6529 (Raw.Read<int>(this + 0x3c),Raw.Read<int>(this + 0x34),DAT_ram_0056335c);
        return;
    }

    // RVA: 0x3C55 Offset: 0x3C55 VA: 0x3C55 Slot: 34
    public override bool CanExecute()
    {
        bool bVar1 = default;

        if (this.currentChildIndex < Raw.Read<int>(Raw.Read<int>(this.pad_8 + 0x24) + 0xc)) {
            bVar1 = this.executionStatus != Success;
        }
        else {
            bVar1 = false;
        }
        return bVar1;
    }

    // RVA: 0x3C56 Offset: 0x3C56 VA: 0x3C56 Slot: 37
    public override void OnChildExecuted(TaskStatus childStatus)
    {
        this.executionStatus = childStatus;
        this.currentChildIndex = this.currentChildIndex + 1;
    }

    // RVA: 0x3C57 Offset: 0x3C57 VA: 0x3C57 Slot: 43
    public override void OnConditionalAbort(int childIndex)
    {
        this.executionStatus = Inactive;
        this.currentChildIndex = childIndex;
    }

    // RVA: 0x3C58 Offset: 0x3C58 VA: 0x3C58 Slot: 9
    public override void OnEnd()
    {
        this.currentChildIndex = 0;
        this.executionStatus = Inactive;
    }

    // RVA: 0x3C59 Offset: 0x3C59 VA: 0x3C59
    public PrioritySelector()
    {
        List param1 = default;

        param1 = (List)new System_Collections_Generic_List_int_();
        unnamed_function_5132(param1,DAT_ram_00563314);
        this.childrenExecutionOrder = param1;
        unnamed_function_51834(this,0);
    }
}
