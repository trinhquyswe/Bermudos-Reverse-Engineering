// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetLayerWeight.c by tools/c2cs.py
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

public class GetLayerWeight : Action // TypeDefIndex: 6298
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The index of the layer")]
    public SharedInt index; // 0x30
    [Tooltip("The value of the float parameter")]
    [RequiredField]
    public SharedFloat storeValue; // 0x34
    private Animator animator; // 0x38
    private GameObject prevGameObject; // 0x3C

    // Methods

    // RVA: 0x42F2 Offset: 0x42F2 VA: 0x42F2 Slot: 5
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

    // RVA: 0x42F3 Offset: 0x42F3 VA: 0x42F3 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float param2 = default;
        int uVar2 = default;
        int param1 = default;
        int param1_00 = default;

        uVar2 = Raw.Read<int>(this + 0x38);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Animator is null",0);
            return;
        }
        param1 = Raw.Read<int>(this + 0x34);
        param1_00 = Raw.Read<int>(this + 0x38);
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
        param2 = UnityEngine.Animator.GetLayerWeight(param1_00,uVar2,0);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,param2,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x42F4 Offset: 0x42F4 VA: 0x42F4 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar2 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedInt.op_Implicit(0);
        this.index = pBVar1;
        pBVar2 = SharedFloat.op_Implicit(0.0);
        this.storeValue = pBVar2;
    }

    // RVA: 0x42F5 Offset: 0x42F5 VA: 0x42F5
    public GetLayerWeight()
    {
        unnamed_function_51834(this,0);
    }
}
