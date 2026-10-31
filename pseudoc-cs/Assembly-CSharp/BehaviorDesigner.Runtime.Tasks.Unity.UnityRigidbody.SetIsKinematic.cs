// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.SetIsKinematic.c by tools/c2cs.py
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

public class SetIsKinematic : Action // TypeDefIndex: 6057
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The is kinematic value of the Rigidbody")]
    public SharedBool isKinematic; // 0x30
    private Rigidbody rigidbody; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x3F99 Offset: 0x3F99 VA: 0x3F99 Slot: 5
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

    // RVA: 0x3F9A Offset: 0x3F9A VA: 0x3F9A Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param1 = default;

        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Rigidbody is null",0);
            return;
        }
        param1 = Raw.Read<int>(this + 0x34);
        uVar2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
        UnityEngine.Rigidbody.set_isKinematic(param1,uVar2,0);
        return;
    }

    // RVA: 0x3F9B Offset: 0x3F9B VA: 0x3F9B Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedBool.op_Implicit(false);
        this.storeValue = pBVar1;
    }

    // RVA: 0x3F9C Offset: 0x3F9C VA: 0x3F9C
    public SetIsKinematic()
    {
        unnamed_function_51834(this,0);
    }
}
