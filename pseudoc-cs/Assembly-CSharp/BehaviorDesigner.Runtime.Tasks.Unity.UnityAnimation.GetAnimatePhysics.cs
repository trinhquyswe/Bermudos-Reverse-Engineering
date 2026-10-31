// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.GetAnimatePhysics.c by tools/c2cs.py
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

public class GetAnimatePhysics : Action // TypeDefIndex: 6327
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("Are the if animations are executed in the physics loop?")]
    [RequiredField]
    public SharedBool storeValue; // 0x30
    private Animation animation; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x4371 Offset: 0x4371 VA: 0x4371 Slot: 5
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

    // RVA: 0x4372 Offset: 0x4372 VA: 0x4372 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param1 = default;

        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Animation is null",0);
            return;
        }
        param1 = Raw.Read<int>(this + 0x30);
        uVar2 = UnityEngine.Animation.get_animatePhysics(Raw.Read<int>(this + 0x34),0);
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(param1,uVar2,DAT_ram_00565c7c);
        return;
    }

    // RVA: 0x4373 Offset: 0x4373 VA: 0x4373 Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(this.storeValue,0,DAT_ram_00565c7c);
    }

    // RVA: 0x4374 Offset: 0x4374 VA: 0x4374
    public GetAnimatePhysics()
    {
        unnamed_function_51834(this,0);
    }
}
