// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetChild.c by tools/c2cs.py
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

public class GetChild : Action // TypeDefIndex: 5916
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The index of the child")]
    public SharedInt index; // 0x30
    [Tooltip("The child of the Transform")]
    [RequiredField]
    public SharedTransform storeValue; // 0x34
    private Transform targetTransform; // 0x38
    private GameObject prevGameObject; // 0x3C

    // Methods

    // RVA: 0x3D94 Offset: 0x3D94 VA: 0x3D94 Slot: 5
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

    // RVA: 0x3D95 Offset: 0x3D95 VA: 0x3D95 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param1 = default;
        int param1_00 = default;

        uVar2 = Raw.Read<int>(this + 0x38);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Transform is null",0);
            return;
        }
        param1 = Raw.Read<int>(this + 0x34);
        param1_00 = Raw.Read<int>(this + 0x38);
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
        uVar2 = UnityEngine.Transform.GetChild(param1_00,uVar2,0);
        unnamed_function_61204(param1,uVar2,DAT_ram_00565d1c);
        return;
    }

    // RVA: 0x3D96 Offset: 0x3D96 VA: 0x3D96 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar1[4].monitor = (object)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
        this.index = pBVar1;
    }

    // RVA: 0x3D97 Offset: 0x3D97 VA: 0x3D97
    public GetChild()
    {
        unnamed_function_51834(this,0);
    }
}
