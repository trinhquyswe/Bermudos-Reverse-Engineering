// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.Sample.c by tools/c2cs.py
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

public class Sample : Action // TypeDefIndex: 6332
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    private Animation animation; // 0x30
    private GameObject prevGameObject; // 0x34

    // Methods

    // RVA: 0x4385 Offset: 0x4385 VA: 0x4385 Slot: 5
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

    // RVA: 0x4386 Offset: 0x4386 VA: 0x4386 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        iVar1 = UnityEngine.Object.op_Equality(param1,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Animation is null",0);
            return;
        }
        UnityEngine.Animation.Sample(Raw.Read<int>(this + 0x30),0);
        return;
    }

    // RVA: 0x4387 Offset: 0x4387 VA: 0x4387 Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
    }

    // RVA: 0x4388 Offset: 0x4388 VA: 0x4388
    public Sample()
    {
        unnamed_function_51834(this,0);
    }
}
