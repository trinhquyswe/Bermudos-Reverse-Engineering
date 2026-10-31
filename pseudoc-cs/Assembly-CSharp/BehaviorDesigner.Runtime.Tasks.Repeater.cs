// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Repeater.c by tools/c2cs.py
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

public class Repeater : Decorator // TypeDefIndex: 5869
{
    // Fields
    [Tooltip("The number of times to repeat the execution of its child task")]
    public SharedInt count; // 0x30
    [Tooltip("Allows the repeater to repeat forever")]
    public SharedBool repeatForever; // 0x34
    [Tooltip("Should the task return if the child task returns a failure")]
    public SharedBool endOnFailure; // 0x38
    private int executionCount; // 0x3C
    private TaskStatus executionStatus; // 0x40

    // Methods

    // RVA: 0x3CFE Offset: 0x3CFE VA: 0x3CFE Slot: 34
    public override bool CanExecute()
    {
        int iVar1 = default;
        bool bVar2 = default;
        int iVar3 = default;

        iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(this.repeatForever,DAT_ram_00565c78);
        if ((iVar1 == 0) && (iVar3 = this.executionCount, iVar1 = unnamed_function_61203(this.count,DAT_ram_00565cb8) , iVar1 <= iVar3)) {
            bVar2 = false;
        }
        else {
            iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(this.endOnFailure,DAT_ram_00565c78);
            if (iVar1 == 0) {
                bVar2 = true;
            }
            else {
                iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(this.endOnFailure,DAT_ram_00565c78);
                if (iVar1 == 0) {
                    bVar2 = false;
                }
                else {
                    bVar2 = this.executionStatus != Failure;
                }
            }
        }
        return bVar2;
    }

    // RVA: 0x3CFF Offset: 0x3CFF VA: 0x3CFF Slot: 37
    public override void OnChildExecuted(TaskStatus childStatus)
    {
        this.executionStatus = childStatus;
        this.executionCount = this.executionCount + 1;
    }

    // RVA: 0x3D00 Offset: 0x3D00 VA: 0x3D00 Slot: 9
    public override void OnEnd()
    {
        this.executionCount = 0;
        this.executionStatus = Inactive;
    }

    // RVA: 0x3D01 Offset: 0x3D01 VA: 0x3D01 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar1[4].monitor = (object)0x0;
        this.count = pBVar1;
        pBVar2 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar2[4].monitor = 1;
        this.endOnFailure = pBVar2;
    }

    // RVA: 0x3D02 Offset: 0x3D02 VA: 0x3D02
    public Repeater()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar1[4].monitor = (object)0x1;
        this.count = pBVar1;
        unnamed_function_51834(this,0);
    }
}
