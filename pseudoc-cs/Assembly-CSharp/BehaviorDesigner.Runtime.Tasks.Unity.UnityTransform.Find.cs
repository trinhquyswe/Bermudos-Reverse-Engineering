// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Find.c by tools/c2cs.py
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

public class Find : Action // TypeDefIndex: 5914
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The transform name to find")]
    public SharedString transformName; // 0x30
    [Tooltip("The object found by name")]
    [RequiredField]
    public SharedTransform storeValue; // 0x34
    private Transform targetTransform; // 0x38
    private GameObject prevGameObject; // 0x3C

    // Methods

    // RVA: 0x3D8C Offset: 0x3D8C VA: 0x3D8C Slot: 5
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

    // RVA: 0x3D8D Offset: 0x3D8D VA: 0x3D8D Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param1 = default;
        int param1_00 = default;

        uVar2 = Raw.Read<int>(this + 0x38);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            param1 = Raw.Read<int>(this + 0x34);
            param1_00 = Raw.Read<int>(this + 0x38);
            uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
            uVar2 = UnityEngine.Transform.Find(param1_00,uVar2,0);
            unnamed_function_61204(param1,uVar2,DAT_ram_00565d1c);
            uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565d18);
            (uVar2 != null);
            return;
        }
        UnityEngine.Debug.LogWarning("Transform is null",0);
        return;
    }

    // RVA: 0x3D8E Offset: 0x3D8E VA: 0x3D8E Slot: 16
    public override void OnReset()
    {
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.transformName = (BehaviorDesigner.Runtime.SharedString)0x0;
    }

    // RVA: 0x3D8F Offset: 0x3D8F VA: 0x3D8F
    public Find()
    {
        unnamed_function_51834(this,0);
    }
}
