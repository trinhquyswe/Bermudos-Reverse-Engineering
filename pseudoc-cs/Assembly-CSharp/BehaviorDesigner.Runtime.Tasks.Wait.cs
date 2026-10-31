// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Wait.c by tools/c2cs.py
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

public class Wait : Action // TypeDefIndex: 5840
{
    // Fields
    [Tooltip("The amount of time to wait")]
    public SharedFloat waitTime; // 0x2C
    [Tooltip("Should the wait be randomized?")]
    public SharedBool randomWait; // 0x30
    [Tooltip("The minimum wait time if random wait is enabled")]
    public SharedFloat randomWaitMin; // 0x34
    [Tooltip("The maximum wait time if random wait is enabled")]
    public SharedFloat randomWaitMax; // 0x38
    private float waitDuration; // 0x3C
    private float startTime; // 0x40
    private float pauseTime; // 0x44

    // Methods

    // RVA: 0x3C30 Offset: 0x3C30 VA: 0x3C30 Slot: 5
    public override void OnStart()
    {
        float fVar1 = default;
        int iVar2 = default;
        float param2 = default;

        fVar1 = UnityEngine.Time.get_time(0);
        this.startTime = fVar1;
        iVar2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(this.randomWait,DAT_ram_00565c78);
        if (iVar2 != 0) {
            fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(this.randomWaitMin,DAT_ram_00565d00);
            param2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(this.randomWaitMax,DAT_ram_00565d00);
            fVar1 = UnityEngine.Random.Range(fVar1,param2,0);
            this.waitDuration = fVar1;
            return;
        }
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(this.waitTime,DAT_ram_00565d00);
        this.waitDuration = fVar1;
    }

    // RVA: 0x3C31 Offset: 0x3C31 VA: 0x3C31 Slot: 6
    public override TaskStatus OnUpdate()
    {
        UnityEngine.Time.get_time(0);
    }

    // RVA: 0x3C32 Offset: 0x3C32 VA: 0x3C32 Slot: 10
    public override void OnPause(bool paused)
    {
        uint in_register_20000011 = default;
        float fVar1 = default;
        float fVar2 = default;

        if (CONCAT31(in_register_20000011,paused) == 0) {
            fVar2 = this.startTime;
            fVar1 = UnityEngine.Time.get_time(0);
            this.startTime = fVar2 + (fVar1 - this.pauseTime);
            return;
        }
        fVar1 = UnityEngine.Time.get_time(0);
        this.pauseTime = fVar1;
    }

    // RVA: 0x3C33 Offset: 0x3C33 VA: 0x3C33 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar1,1.0,DAT_ram_00565d04);
        this.waitTime = pBVar1;
        pBVar2 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar2[4].monitor = 0;
        this.randomWait = pBVar2;
        pBVar1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar1,1.0,DAT_ram_00565d04);
        this.randomWaitMin = pBVar1;
        pBVar1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar1,1.0,DAT_ram_00565d04);
        this.randomWaitMax = pBVar1;
    }

    // RVA: 0x3C34 Offset: 0x3C34 VA: 0x3C34
    public Wait()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar1,1.0,DAT_ram_00565d04);
        this.waitTime = pBVar1;
        pBVar2 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar2[4].monitor = 0;
        this.randomWait = pBVar2;
        pBVar1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar1,1.0,DAT_ram_00565d04);
        this.randomWaitMin = pBVar1;
        pBVar1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar1,1.0,DAT_ram_00565d04);
        this.randomWaitMax = pBVar1;
        unnamed_function_51834(this,0);
    }
}
