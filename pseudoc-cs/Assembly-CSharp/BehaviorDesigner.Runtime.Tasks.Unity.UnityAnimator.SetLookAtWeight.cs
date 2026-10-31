// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtWeight.c by tools/c2cs.py
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

public class SetLookAtWeight : Action // TypeDefIndex: 6316
{
    // Fields
    [Tooltip("(0-1) the global weight of the LookAt, multiplier for other parameters.")]
    public SharedFloat weight; // 0x2C
    [Tooltip("(0-1) determines how much the body is involved in the LookAt.")]
    public float bodyWeight; // 0x30
    [Tooltip("(0-1) determines how much the head is involved in the LookAt.")]
    public float headWeight; // 0x34
    [Tooltip("(0-1) determines how much the eyes are involved in the LookAt.")]
    public float eyesWeight; // 0x38
    [Tooltip("(0-1) 0.0 means the character is completely unrestrained in motion, 1.0 means he's completely clamped (look at becomes impossible), and 0.5 means he'll be able to move on half of the possible range (180 degrees).")]
    public float clampWeight; // 0x3C
    private Animator animator; // 0x40
    private bool weightSet; // 0x44

    // Methods

    // RVA: 0x4343 Offset: 0x4343 VA: 0x4343 Slot: 5
    public override void OnStart()
    {
        Animator pAVar1 = default;

        pAVar1 = (Animator)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cec0);
        this.weightSet = false;
        this.animator = pAVar1;
    }

    // RVA: 0x4344 Offset: 0x4344 VA: 0x4344 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x40);
        iVar1 = UnityEngine.Object.op_Equality(param1,0,0);
        if (iVar1 == 0) {
            return;
        }
        UnityEngine.Debug.LogWarning("Animator is null",0);
        return;
    }

    // RVA: 0x4345 Offset: 0x4345 VA: 0x4345 Slot: 28
    public override void OnAnimatorIK()
    {
        int iVar1 = default;
        float param2 = default;
        Animator pAVar2 = default;

        pAVar2 = this.animator;
        iVar1 = UnityEngine.Object.op_Equality(pAVar2,0,0);
        if (iVar1 == 0) {
            pAVar2 = this.animator;
            param2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(this.weight,DAT_ram_00565d00);
            UnityEngine.Animator.SetLookAtWeight(pAVar2,param2,this.bodyWeight,this.headWeight,this.eyesWeight, this.clampWeight,0);
            this.weightSet = true;
        }
    }

    // RVA: 0x4346 Offset: 0x4346 VA: 0x4346 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.eyesWeight = 0.0;
        this.clampWeight = 0.5;
        this.bodyWeight = 0.0;
        this.headWeight = 1.0;
        this.weight = pBVar1;
    }

    // RVA: 0x4347 Offset: 0x4347 VA: 0x4347
    public SetLookAtWeight()
    {
        this.clampWeight = 0.5;
        this.headWeight = 1.0;
        unnamed_function_51834(this,0);
    }
}
