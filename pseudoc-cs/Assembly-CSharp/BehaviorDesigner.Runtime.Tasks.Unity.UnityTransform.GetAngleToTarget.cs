// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetAngleToTarget.c by tools/c2cs.py
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

public class GetAngleToTarget : Action // TypeDefIndex: 5915
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The target object to measure the angle to. If null the targetPosition will be used.")]
    public SharedGameObject targetObject; // 0x30
    [Tooltip("The world position to measure an angle to. If the targetObject is also not null, this value is used as an offset from that object's position.")]
    public SharedVector3 targetPosition; // 0x34
    [Tooltip("Ignore height differences when calculating the angle?")]
    public SharedBool ignoreHeight; // 0x38
    [RequiredField]
    [Tooltip("The angle to the target")]
    public SharedFloat storeValue; // 0x3C
    private Transform targetTransform; // 0x40
    private GameObject prevGameObject; // 0x44

    // Methods

    // RVA: 0x3D90 Offset: 0x3D90 VA: 0x3D90 Slot: 5
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

    // RVA: 0x3D91 Offset: 0x3D91 VA: 0x3D91 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        int iVar4 = default;
        double dVar5 = default;
        int uVar6 = default;
        float fVar7 = default;
        float fVar8 = default;
        float fVar9 = default;
        float fVar10 = default;
        float fVar11 = default;
        float local_10 = default;
        float local_28 = default;
        float local_20 = default;
        float local_1c = default;
        float local_18 = default;
        float local_8 = default;

        byte[] local_30 = new byte[8];
        uVar6 = Raw.Read<int>(this + 0x40);
        iVar4 = UnityEngine.Object.op_Equality(uVar6,0,0);
        if (iVar4 == 0) {
            uVar6 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565c9c);
            iVar4 = (uVar6 != null);
            if (iVar4 == 0) {
                unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x34),DAT_ram_00565d38);
                fVar9 = (float)local_10;
                fVar3 = local_10;
                fVar7 = local_8;
            }
            else {
                uVar6 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565c9c);
                uVar6 = UnityEngine.GameObject.get_transform(uVar6,0);
                unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x34),DAT_ram_00565d38);
                local_28 = local_8;
                UnityEngine.Transform.InverseTransformPoint(&local_20,uVar6,local_30,0);
                fVar9 = (float)local_1c;
                fVar3 = local_20;
                fVar7 = local_18;
            }
            iVar4 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x38),DAT_ram_00565c78);
            if (iVar4 != 0) {
                UnityEngine.Transform.get_position(&local_10,Raw.Read<int>(this + 0x40),0);
                fVar9 = (float)local_10;
            }
            UnityEngine.Transform.get_position(&local_10,Raw.Read<int>(this + 0x40),0);
            fVar2 = local_8;
            fVar10 = (float)local_10;
            fVar1 = local_10;
            uVar6 = Raw.Read<int>(this + 0x3c);
            UnityEngine.Transform.get_forward(&local_10,Raw.Read<int>(this + 0x40),0);
            fVar8 = (float)fVar7 - (float)fVar2;
            fVar9 = fVar9 - fVar10;
            fVar10 = (float)fVar3 - (float)fVar1;
            fVar11 = Mathf.Sqrt((fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) * ((float)local_10 * (float)local_10 + (float)local_10 * (float)local_10 + (float)local_8 * (float)local_8));
            if (fVar11 < 1e-15) {
                fVar9 = 0.0;
            }
            else {
                fVar11 = (fVar10 * (float)local_10 + fVar9 * (float)local_10 + fVar8 * (float)local_8) / fVar11;
                fVar9 = fVar11;
                if (1.0 <= fVar11) {
                    fVar9 = 1.0;
                }
                fVar10 = -1.0;
                if (-1.0 <= fVar11) {
                    fVar10 = fVar9;
                }
                dVar5 = unnamed_function_8249((double)fVar10);
                fVar9 = (float)dVar5 * 57.29578;
            }
            BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar6,fVar9,DAT_ram_00565d04);
        }
        else {
            UnityEngine.Debug.LogWarning("Transform is null",0);
        }
        return;
    }

    // RVA: 0x3D92 Offset: 0x3D92 VA: 0x3D92 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        object pvVar3 = default; // object*
        long uVar4 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.targetObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pvVar3 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar4 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar3;
        *(object)&pBVar1[4].monitor = uVar4;
        this.targetPosition = pBVar1;
        pBVar2 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar2[4].monitor = 1;
        this.ignoreHeight = pBVar2;
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.storeValue = param1;
    }

    // RVA: 0x3D93 Offset: 0x3D93 VA: 0x3D93
    public GetAngleToTarget()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar1[4].monitor = 1;
        this.ignoreHeight = pBVar1;
        unnamed_function_51834(this,0);
    }
}
