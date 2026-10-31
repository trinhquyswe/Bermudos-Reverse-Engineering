// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtPosition.c by tools/c2cs.py
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

public class SetLookAtPosition : Action // TypeDefIndex: 6315
{
    // Fields
    [Tooltip("The position to lookAt")]
    public SharedVector3 position; // 0x2C
    private Animator animator; // 0x30
    private bool positionSet; // 0x34

    // Methods

    // RVA: 0x433E Offset: 0x433E VA: 0x433E Slot: 5
    public override void OnStart()
    {
        Animator pAVar1 = default;

        pAVar1 = (Animator)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cec0);
        this.positionSet = false;
        this.animator = pAVar1;
    }

    // RVA: 0x433F Offset: 0x433F VA: 0x433F Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        iVar1 = UnityEngine.Object.op_Equality(param1,0,0);
        if (iVar1 == 0) {
            return;
        }
        UnityEngine.Debug.LogWarning("Animator is null",0);
        return;
    }

    // RVA: 0x4340 Offset: 0x4340 VA: 0x4340 Slot: 28
    public override void OnAnimatorIK()
    {
        int iVar1 = default;
        Animator pAVar2 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        pAVar2 = this.animator;
        iVar1 = UnityEngine.Object.op_Equality(pAVar2,0,0);
        if (iVar1 == 0) {
            pAVar2 = this.animator;
            unnamed_function_61245(&local_10,this.position,DAT_ram_00565d38);
            local_18 = local_8;
            local_20 = local_10;
            UnityEngine.Animator.SetLookAtPosition(pAVar2,&local_20,0);
            this.positionSet = true;
        }
    }

    // RVA: 0x4341 Offset: 0x4341 VA: 0x4341 Slot: 16
    public override void OnReset()
    {
        Vector3 pVVar1 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        local_20._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_20.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_20._0_8_;
        local_10.z = local_20.z;
        pVVar1 = SharedVector3.op_Implicit(&local_20);
        this.storeResult = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
    }

    // RVA: 0x4342 Offset: 0x4342 VA: 0x4342
    public SetLookAtPosition()
    {
        unnamed_function_51834(this,0);
    }
}
