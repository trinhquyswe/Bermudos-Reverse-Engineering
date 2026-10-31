// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.LookAt.c by tools/c2cs.py
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

public class LookAt : Action // TypeDefIndex: 5930
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The GameObject to look at. If null the world position will be used.")]
    public SharedGameObject targetLookAt; // 0x30
    [Tooltip("Point to look at")]
    public SharedVector3 worldPosition; // 0x34
    [Tooltip("Vector specifying the upward direction")]
    public Vector3 worldUp; // 0x38
    private Transform targetTransform; // 0x44
    private GameObject prevGameObject; // 0x48

    // Methods

    // RVA: 0x3DCC Offset: 0x3DCC VA: 0x3DCC Slot: 5
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

    // RVA: 0x3DCD Offset: 0x3DCD VA: 0x3DCD Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int uVar3 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar3 = Raw.Read<int>(this + 0x44);
        iVar1 = UnityEngine.Object.op_Equality(uVar3,0,0);
        if (iVar1 == 0) {
            uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565c9c);
            iVar1 = (uVar3 != null);
            uVar3 = Raw.Read<int>(this + 0x44);
            if (iVar1 == 0) {
                unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x34),DAT_ram_00565d38);
                local_18 = local_8;
                local_20 = local_10;
                local_28 = Raw.Read<int>(this + 0x40);
                local_30 = Raw.Read<long>(this + 0x38);
                UnityEngine.Transform.LookAt(uVar3,&local_20,&local_30,0);
            }
            else {
                uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565c9c);
                uVar2 = UnityEngine.GameObject.get_transform(uVar2,0);
                UnityEngine.Transform.LookAt(uVar3,uVar2,0);
            }
        }
        else {
            UnityEngine.Debug.LogWarning("Transform is null",0);
        }
        return;
    }

    // RVA: 0x3DCE Offset: 0x3DCE VA: 0x3DCE Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 pBVar1 = default;
        object pvVar2 = default; // object*
        long uVar3 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.targetLookAt = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pvVar2 = Raw.Read<object>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x20);
        uVar3 = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x18);
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.worldPosition = pBVar1;
        uVar3 = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x18);
        this.worldUp.z = Raw.Read<float>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x20);
        this.worldUp.x = (float)(int)uVar3;
        this.worldUp.y = (float)(int)((ulong)uVar3 >> 0x20);
    }

    // RVA: 0x3DCF Offset: 0x3DCF VA: 0x3DCF
    public LookAt()
    {
        unnamed_function_51834(this,0);
    }
}
