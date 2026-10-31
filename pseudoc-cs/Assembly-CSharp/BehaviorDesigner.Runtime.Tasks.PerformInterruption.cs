// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.PerformInterruption.c by tools/c2cs.py
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

public class PerformInterruption : Action // TypeDefIndex: 5828
{
    // Fields
    [Tooltip("The list of tasks to interrupt. Can be any number of tasks")]
    public Interrupt[] interruptTasks; // 0x2C
    [Tooltip("When we interrupt the task should we return a task status of success?")]
    public SharedBool interruptSuccess; // 0x30

    // Methods

    // RVA: 0x3BFB Offset: 0x3BFB VA: 0x3BFB Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param4 = default;
        int iVar1 = default;
        int param3 = default;
        int iVar2 = default;

        iVar2 = 0;
        iVar1 = Raw.Read<int>(this + 0x2c);
        if (0 < Raw.Read<int>(iVar1 + 0xc)) {
            do {
                param3 = Raw.Read<int>(iVar1 + iVar2 * 4 + 0x10);
                iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
                if (iVar1 == 0) {
                    param4 = 1;
                    Raw.Write<int>(param3 + 0x30 /* interruptSuccess */, 1);
                    iVar1 = Raw.Read<int>(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x74);
                }
                else {
                    param4 = 2;
                    Raw.Write<int>(param3 + 0x30 /* interruptSuccess */, 2);
                    iVar1 = Raw.Read<int>(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x74);
                }
                if (iVar1 == 0) {
                }
                BehaviorDesigner.Runtime.BehaviorManager.Interrupt(Raw.Deref(Raw.Read<object>(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x5c)), Raw.Read<int>(param3 + 0x14),param3,param4,0);
                iVar2 = iVar2 + 1;
                iVar1 = Raw.Read<int>(this + 0x2c);
            } while (iVar2 < Raw.Read<int>(iVar1 + 0xc));
        }
        return;
    }

    // RVA: 0x3BFC Offset: 0x3BFC VA: 0x3BFC Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        this.interruptTasks = (BehaviorDesigner.Runtime.Tasks.Interrupt)0x0;
        pBVar1 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar1[4].monitor = 0;
        this.interruptSuccess = pBVar1;
    }

    // RVA: 0x3BFD Offset: 0x3BFD VA: 0x3BFD
    public PerformInterruption()
    {
        unnamed_function_51834(this,0);
    }
}
