// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.RotateAround.c by tools/c2cs.py
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

public class RotateAround : Action // TypeDefIndex: 5932
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("Point to rotate around")]
    public SharedVector3 point; // 0x30
    [Tooltip("Axis to rotate around")]
    public SharedVector3 axis; // 0x34
    [Tooltip("Amount to rotate")]
    public SharedFloat angle; // 0x38
    private Transform targetTransform; // 0x3C
    private GameObject prevGameObject; // 0x40

    // Methods

    // RVA: 0x3DD4 Offset: 0x3DD4 VA: 0x3DD4 Slot: 5
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

    // RVA: 0x3DD5 Offset: 0x3DD5 VA: 0x3DD5 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float param4 = default;
        int uVar2 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar2 = Raw.Read<int>(this + 0x3c);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            uVar2 = Raw.Read<int>(this + 0x3c);
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
            unnamed_function_61245(&local_20,Raw.Read<int>(this + 0x34),DAT_ram_00565d38);
            param4 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x38),DAT_ram_00565d00);
            local_28 = local_8;
            local_38 = local_18;
            local_30 = local_10;
            local_40 = local_20;
            UnityEngine.Transform.RotateAround(uVar2,&local_30,&local_40,param4,0);
        }
        else {
            UnityEngine.Debug.LogWarning("Transform is null",0);
        }
        return;
    }

    // RVA: 0x3DD6 Offset: 0x3DD6 VA: 0x3DD6 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        object pvVar2 = default; // object*
        long uVar3 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pvVar2 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.point = pBVar1;
        pvVar2 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.axis = pBVar1;
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.angle = param1;
    }

    // RVA: 0x3DD7 Offset: 0x3DD7 VA: 0x3DD7
    public RotateAround()
    {
        unnamed_function_51834(this,0);
    }
}
