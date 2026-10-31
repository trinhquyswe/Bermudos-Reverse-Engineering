// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.SetRotation.c by tools/c2cs.py
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

public class SetRotation : Action // TypeDefIndex: 6060
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The rotation of the Rigidbody")]
    public SharedQuaternion rotation; // 0x30
    private Rigidbody rigidbody; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x3FA5 Offset: 0x3FA5 VA: 0x3FA5 Slot: 5
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

    // RVA: 0x3FA6 Offset: 0x3FA6 VA: 0x3FA6 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            uVar2 = Raw.Read<int>(this + 0x34);
            unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565ce8);
            local_18 = local_8;
            local_20 = local_10;
            unnamed_function_15244(uVar2,&local_20,0);
        }
        else {
            UnityEngine.Debug.LogWarning("Rigidbody is null",0);
        }
        return;
    }

    // RVA: 0x3FA7 Offset: 0x3FA7 VA: 0x3FA7 Slot: 16
    public override void OnReset()
    {
        Quaternion pQVar1 = default;
        Quaternion local_20 = default;
        Quaternion local_10 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        local_20._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_20._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_10._0_8_ = local_20._0_8_;
        local_10._8_8_ = local_20._8_8_;
        pQVar1 = SharedQuaternion.op_Implicit(&local_20);
        this.storeValue = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
    }

    // RVA: 0x3FA8 Offset: 0x3FA8 VA: 0x3FA8
    public SetRotation()
    {
        unnamed_function_51834(this,0);
    }
}
