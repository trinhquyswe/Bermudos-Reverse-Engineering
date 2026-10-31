// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.CrossFade.c by tools/c2cs.py
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

public class CrossFade : Action // TypeDefIndex: 6290
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The name of the state")]
    public SharedString stateName; // 0x30
    [Tooltip("The duration of the transition. Value is in source state normalized time")]
    public SharedFloat transitionDuration; // 0x34
    [Tooltip("The layer where the state is")]
    public int layer; // 0x38
    [Tooltip("The normalized time at which the state will play")]
    public float normalizedTime; // 0x3C
    private Animator animator; // 0x40
    private GameObject prevGameObject; // 0x44

    // Methods

    // RVA: 0x42D2 Offset: 0x42D2 VA: 0x42D2 Slot: 5
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

    // RVA: 0x42D3 Offset: 0x42D3 VA: 0x42D3 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float param3 = default;
        int uVar2 = default;
        int param1 = default;

        uVar2 = Raw.Read<int>(this + 0x40);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Animator is null",0);
            return;
        }
        param1 = Raw.Read<int>(this + 0x40);
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        param3 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        UnityEngine.Animator.CrossFade(param1,uVar2,param3,Raw.Read<int>(this + 0x38),Raw.Read<float>(this + 0x3c),0);
        return;
    }

    // RVA: 0x42D4 Offset: 0x42D4 VA: 0x42D4 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar2 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedString.op_Implicit("");
        this.stateName = pBVar1;
        pBVar2 = SharedFloat.op_Implicit(0.0);
        this.layer = -1;
        this.normalizedTime = -INFINITY;
        this.transitionDuration = pBVar2;
    }

    // RVA: 0x42D5 Offset: 0x42D5 VA: 0x42D5
    public CrossFade()
    {
        this.layer = -1;
        this.normalizedTime = -INFINITY;
        unnamed_function_51834(this,0);
    }
}
