// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFade.c by tools/c2cs.py
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

public class CrossFade : Action // TypeDefIndex: 6325
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The name of the animation")]
    public SharedString animationName; // 0x30
    [Tooltip("The speed of the animation. Use a negative value to play the animation backwards")]
    public SharedFloat animationSpeed; // 0x34
    [Tooltip("The amount of time it takes to blend")]
    public SharedFloat fadeLength; // 0x38
    [Tooltip("The play mode of the animation")]
    public PlayMode playMode; // 0x3C
    private Animation animation; // 0x40
    private GameObject prevGameObject; // 0x44

    // Methods

    // RVA: 0x4369 Offset: 0x4369 VA: 0x4369 Slot: 5
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

    // RVA: 0x436A Offset: 0x436A VA: 0x436A Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float fVar2 = default;
        int uVar3 = default;
        int uVar4 = default;
        int param1 = default;

        uVar3 = Raw.Read<int>(this + 0x40);
        iVar1 = UnityEngine.Object.op_Equality(uVar3,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Animation is null",0);
            return;
        }
        uVar4 = Raw.Read<int>(this + 0x40);
        uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar3 = unnamed_function_45369(uVar4,uVar3,0);
        fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        UnityEngine.AnimationState.set_speed(uVar3,fVar2,0);
        uVar4 = Raw.Read<int>(this + 0x40);
        uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar3 = unnamed_function_45369(uVar4,uVar3,0);
        fVar2 = UnityEngine.AnimationState.get_speed(uVar3,0);
        if (fVar2 < 0.0) {
            uVar4 = Raw.Read<int>(this + 0x40);
            uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
            uVar3 = unnamed_function_45369(uVar4,uVar3,0);
            param1 = Raw.Read<int>(this + 0x40);
            uVar4 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
            uVar4 = unnamed_function_45369(param1,uVar4,0);
            fVar2 = UnityEngine.AnimationState.get_length(uVar4,0);
            UnityEngine.AnimationState.set_time(uVar3,fVar2,0);
        }
        uVar4 = Raw.Read<int>(this + 0x40);
        uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x38),DAT_ram_00565d00);
        UnityEngine.Animation.CrossFade(uVar4,uVar3,fVar2,Raw.Read<int>(this + 0x3c),0);
        return;
    }

    // RVA: 0x436B Offset: 0x436B VA: 0x436B Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        unnamed_function_61204(this.animationName,"",DAT_ram_00565d10);
        pBVar1 = SharedFloat.op_Implicit(1.0);
        this.animationSpeed = pBVar1;
        pBVar1 = SharedFloat.op_Implicit(0.3);
        this.playMode = StopSameLayer;
        this.fadeLength = pBVar1;
    }

    // RVA: 0x436C Offset: 0x436C VA: 0x436C
    public CrossFade()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(1.0);
        this.animationSpeed = pBVar1;
        pBVar1 = SharedFloat.op_Implicit(0.3);
        this.fadeLength = pBVar1;
        unnamed_function_51834(this,0);
    }
}
