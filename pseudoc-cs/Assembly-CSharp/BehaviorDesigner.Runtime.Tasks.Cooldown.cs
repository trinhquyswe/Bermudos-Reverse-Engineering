// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Cooldown.c by tools/c2cs.py
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

public class Cooldown : Decorator // TypeDefIndex: 5866
{
    // Fields
    public SharedFloat duration; // 0x30
    private TaskStatus executionStatus; // 0x34
    private float cooldownTime; // 0x38

    // Methods

    // RVA: 0x3CEC Offset: 0x3CEC VA: 0x3CEC Slot: 34
    public override bool CanExecute()
    {
        float fVar1 = default;
        float fVar2 = default;
        bool bVar3 = default;
        float fVar4 = default;

        fVar4 = this.cooldownTime;
        if (fVar4 == -1.0) {
            bVar3 = true;
        }
        else {
            fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(this.duration,DAT_ram_00565d00);
            fVar2 = UnityEngine.Time.get_time(0);
            bVar3 = fVar2 < fVar4 + fVar1;
        }
        return bVar3;
    }

    // RVA: 0x3CED Offset: 0x3CED VA: 0x3CED Slot: 33
    public override int CurrentChildIndex()
    {

    }

    // RVA: 0x3CEE Offset: 0x3CEE VA: 0x3CEE Slot: 37
    public override void OnChildExecuted(TaskStatus childStatus)
    {
        float fVar1 = default;

        this.executionStatus = childStatus;
        if (childStatus - Failure < 2) {
            fVar1 = UnityEngine.Time.get_time(0);
            this.cooldownTime = fVar1;
        }
    }

    // RVA: 0x3CEF Offset: 0x3CEF VA: 0x3CEF Slot: 42
    public override TaskStatus OverrideStatus()
    {
        Raw.VCall((ulong)Raw.Read<uint>(Raw.Read<int>(this) + 0x1d0) * 4) /* virtual */ (this,Raw.Read<int>(Raw.Read<int>(this) + 0x1d4));
        return;
    }

    // RVA: 0x3CF0 Offset: 0x3CF0 VA: 0x3CF0 Slot: 41
    public override TaskStatus OverrideStatus(TaskStatus status)
    {

    }

    // RVA: 0x3CF1 Offset: 0x3CF1 VA: 0x3CF1 Slot: 9
    public override void OnEnd()
    {
        this.executionStatus = Inactive;
        this.cooldownTime = -1.0;
    }

    // RVA: 0x3CF2 Offset: 0x3CF2 VA: 0x3CF2
    public Cooldown()
    {
        BehaviorDesigner.Runtime.SharedFloat param1 = default;

        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,2.0,DAT_ram_00565d04);
        this.cooldownTime = -1.0;
        this.duration = param1;
        unnamed_function_51834(this,0);
    }
}
