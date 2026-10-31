// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnitySphereCollider.GetRadius.c by tools/c2cs.py
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

public class GetRadius : Action // TypeDefIndex: 5966
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [RequiredField]
    [Tooltip("The radius of the SphereCollider")]
    public SharedFloat storeValue; // 0x30
    private SphereCollider sphereCollider; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x3E4F Offset: 0x3E4F VA: 0x3E4F Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        SphereCollider pSVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pSVar2 = (SphereCollider)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569b04);
            this.prevGameObject = param1;
            this.sphereCollider = pSVar2;
        }
    }

    // RVA: 0x3E50 Offset: 0x3E50 VA: 0x3E50 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float param2 = default;
        int uVar2 = default;

        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("SphereCollider is null",0);
            return;
        }
        uVar2 = Raw.Read<int>(this + 0x30);
        param2 = UnityEngine.SphereCollider.get_radius(Raw.Read<int>(this + 0x34),0);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar2,param2,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3E51 Offset: 0x3E51 VA: 0x3E51 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat param1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.storeValue = param1;
    }

    // RVA: 0x3E52 Offset: 0x3E52 VA: 0x3E52
    public GetRadius()
    {
        unnamed_function_51834(this,0);
    }
}
