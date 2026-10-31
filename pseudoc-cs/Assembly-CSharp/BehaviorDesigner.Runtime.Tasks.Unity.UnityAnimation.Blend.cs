// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.Blend.c by tools/c2cs.py
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

public class Blend : Action // TypeDefIndex: 6324
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The name of the animation")]
    public SharedString animationName; // 0x30
    [Tooltip("The weight the animation should blend to")]
    public float targetWeight; // 0x34
    [Tooltip("The amount of time it takes to blend")]
    public float fadeLength; // 0x38
    private Animation animation; // 0x3C
    private GameObject prevGameObject; // 0x40

    // Methods

    // RVA: 0x4365 Offset: 0x4365 VA: 0x4365 Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        Animation pAVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pAVar2 = (Animation)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569a4c);
            this.prevGameObject = param1;
            this.animation = pAVar2;
        }
    }

    // RVA: 0x4366 Offset: 0x4366 VA: 0x4366 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param1 = default;

        uVar2 = Raw.Read<int>(this + 0x3c);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Animation is null",0);
            return;
        }
        param1 = Raw.Read<int>(this + 0x3c);
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        UnityEngine.Animation.Blend(param1,uVar2,Raw.Read<float>(this + 0x34),Raw.Read<float>(this + 0x38),0);
        return;
    }

    // RVA: 0x4367 Offset: 0x4367 VA: 0x4367 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedString.op_Implicit("");
        this.targetWeight = 1.0;
        this.fadeLength = 0.3;
        this.animationName = pBVar1;
    }

    // RVA: 0x4368 Offset: 0x4368 VA: 0x4368
    public Blend()
    {
        this.targetWeight = 1.0;
        this.fadeLength = 0.3;
        unnamed_function_51834(this,0);
    }
}
