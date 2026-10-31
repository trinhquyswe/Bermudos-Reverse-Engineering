// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddExplosionForce.c by tools/c2cs.py
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

public class AddExplosionForce : Action // TypeDefIndex: 6030
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The force of the explosion")]
    public SharedFloat explosionForce; // 0x30
    [Tooltip("The position of the explosion")]
    public SharedVector3 explosionPosition; // 0x34
    [Tooltip("The radius of the explosion")]
    public SharedFloat explosionRadius; // 0x38
    [Tooltip("Applies the force as if it was applied from beneath the object")]
    public float upwardsModifier; // 0x3C
    [Tooltip("The type of force")]
    public ForceMode forceMode; // 0x40
    private Rigidbody rigidbody; // 0x44
    private GameObject prevGameObject; // 0x48

    // Methods

    // RVA: 0x3F2D Offset: 0x3F2D VA: 0x3F2D Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        Rigidbody pRVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pRVar2 = (Rigidbody)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569aec);
            this.prevGameObject = param1;
            this.rigidbody = pRVar2;
        }
    }

    // RVA: 0x3F2E Offset: 0x3F2E VA: 0x3F2E Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float param2 = default;
        float param4 = default;
        int uVar2 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar2 = Raw.Read<int>(this + 0x44);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            uVar2 = Raw.Read<int>(this + 0x44);
            param2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x34),DAT_ram_00565d38);
            param4 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x38),DAT_ram_00565d00);
            local_18 = local_8;
            local_20 = local_10;
            unnamed_function_15255 (uVar2,param2,&local_20,param4,Raw.Read<float>(this + 0x3c),Raw.Read<int>(this + 0x40), 0);
        }
        else {
            UnityEngine.Debug.LogWarning("Rigidbody is null",0);
        }
        return;
    }

    // RVA: 0x3F2F Offset: 0x3F2F VA: 0x3F2F Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;
        Vector3 pVVar2 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.explosionForce = pBVar1;
        local_20._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_20.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_20._0_8_;
        local_10.z = local_20.z;
        pVVar2 = SharedVector3.op_Implicit(&local_20);
        this.explosionPosition = (BehaviorDesigner.Runtime.SharedVector3)pVVar2;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.upwardsModifier = 0.0;
        this.forceMode = Force;
        this.explosionRadius = pBVar1;
    }

    // RVA: 0x3F30 Offset: 0x3F30 VA: 0x3F30
    public AddExplosionForce()
    {
        unnamed_function_51834(this,0);
    }
}
