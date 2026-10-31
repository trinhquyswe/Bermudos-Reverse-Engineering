// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetForwardVector.c by tools/c2cs.py
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

public class GetForwardVector : Action // TypeDefIndex: 5919
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [RequiredField]
    [Tooltip("The position of the Transform")]
    public SharedVector3 storeValue; // 0x30
    private Transform targetTransform; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x3DA0 Offset: 0x3DA0 VA: 0x3DA0 Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        RuleTile_TilingRuleOutput_Transform RVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            RVar2 = UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569b30);
            this.prevGameObject = param1;
            this.targetTransform = RVar2;
        }
    }

    // RVA: 0x3DA1 Offset: 0x3DA1 VA: 0x3DA1 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            uVar2 = Raw.Read<int>(this + 0x30);
            UnityEngine.Transform.get_forward(&local_10,Raw.Read<int>(this + 0x34),0);
            local_18 = local_8;
            local_20 = local_10;
            unnamed_function_61246(uVar2,&local_20,DAT_ram_00565d3c);
        }
        else {
            UnityEngine.Debug.LogWarning("Transform is null",0);
        }
        return;
    }

    // RVA: 0x3DA2 Offset: 0x3DA2 VA: 0x3DA2 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 pBVar1 = default;
        object pvVar2 = default; // object*
        long uVar3 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pvVar2 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.storeValue = pBVar1;
    }

    // RVA: 0x3DA3 Offset: 0x3DA3 VA: 0x3DA3
    public GetForwardVector()
    {
        unnamed_function_51834(this,0);
    }
}
