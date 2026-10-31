// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.MatchTarget.c by tools/c2cs.py
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

public class MatchTarget : Action // TypeDefIndex: 6305
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The position we want the body part to reach")]
    public SharedVector3 matchPosition; // 0x30
    [Tooltip("The rotation in which we want the body part to be")]
    public SharedQuaternion matchRotation; // 0x34
    [Tooltip("The body part that is involved in the match")]
    public AvatarTarget targetBodyPart; // 0x38
    [Tooltip("Weights for matching position")]
    public Vector3 weightMaskPosition; // 0x3C
    [Tooltip("Weights for matching rotation")]
    public float weightMaskRotation; // 0x48
    [Tooltip("Start time within the animation clip")]
    public float startNormalizedTime; // 0x4C
    [Tooltip("End time within the animation clip")]
    public float targetNormalizedTime; // 0x50
    private Animator animator; // 0x54
    private GameObject prevGameObject; // 0x58

    // Methods

    // RVA: 0x430D Offset: 0x430D VA: 0x430D Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        Animator pAVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pAVar2 = (Animator)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569a50);
            this.prevGameObject = param1;
            this.animator = pAVar2;
        }
    }

    // RVA: 0x430E Offset: 0x430E VA: 0x430E Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param4 = default;
        long local_70 = default;
        long local_68 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        int local_48 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar2 = Raw.Read<int>(this + 0x54);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            uVar2 = Raw.Read<int>(this + 0x54);
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
            unnamed_function_61197(&local_20,Raw.Read<int>(this + 0x34),DAT_ram_00565ce8);
            param4 = Raw.Read<int>(this + 0x38);
            local_28 = 0;
            local_30 = 0;
            local_38 = Raw.Read<int>(this + 0x44);
            local_40 = Raw.Read<long>(this + 0x3c);
            unnamed_function_45411(&local_30,&local_40,Raw.Read<float>(this + 0x48),0);
            local_48 = local_8;
            local_58 = local_18;
            local_68 = local_28;
            local_50 = local_10;
            local_60 = local_20;
            local_70 = local_30;
            UnityEngine.Animator.MatchTarget(uVar2,&local_50,&local_60,param4,&local_70,Raw.Read<float>(this + 0x4c), Raw.Read<float>(this + 0x50),0);
        }
        else {
            UnityEngine.Debug.LogWarning("Animator is null",0);
        }
        return;
    }

    // RVA: 0x430F Offset: 0x430F VA: 0x430F Slot: 16
    public override void OnReset()
    {
        Vector3 pVVar1 = default;
        Quaternion pQVar2 = default;
        long uVar3 = default;
        Quaternion local_40 = default;
        Vector3 local_30 = default;
        Quaternion local_20 = default;
        Vector3 local_10 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_30.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_30._0_8_;
        local_10.z = local_30.z;
        pVVar1 = SharedVector3.op_Implicit(&local_30);
        this.matchPosition = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_40._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_20._0_8_ = local_40._0_8_;
        local_20._8_8_ = local_40._8_8_;
        pQVar2 = SharedQuaternion.op_Implicit(&local_40);
        this.targetBodyPart = Root;
        this.matchRotation = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar2;
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        this.weightMaskPosition.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        this.weightMaskPosition.x = (float)(int)uVar3;
        this.weightMaskPosition.y = (float)(int)((ulong)uVar3 >> 0x20);
        this.targetNormalizedTime = 1.0;
        this.weightMaskRotation = 0.0;
        this.startNormalizedTime = 0.0;
    }

    // RVA: 0x4310 Offset: 0x4310 VA: 0x4310
    public MatchTarget()
    {
        this.targetNormalizedTime = 1.0;
        unnamed_function_51834(this,0);
    }
}
