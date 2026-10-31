// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.GetDrag.c by tools/c2cs.py
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

public class GetDrag : Action // TypeDefIndex: 6010
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The drag of the Rigidbody2D")]
    [RequiredField]
    public SharedFloat storeValue; // 0x30
    private Rigidbody2D rigidbody2D; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x3EDD Offset: 0x3EDD VA: 0x3EDD Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        Rigidbody2D pRVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pRVar2 = (Rigidbody2D)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569af0);
            this.prevGameObject = param1;
            this.rigidbody2D = pRVar2;
        }
    }

    // RVA: 0x3EDE Offset: 0x3EDE VA: 0x3EDE Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float param2 = default;
        int uVar2 = default;

        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Rigidbody2D is null",0);
            return;
        }
        uVar2 = Raw.Read<int>(this + 0x30);
        param2 = UnityEngine.Rigidbody2D.get_drag(Raw.Read<int>(this + 0x34),0);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar2,param2,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3EDF Offset: 0x3EDF VA: 0x3EDF Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.torque = pBVar1;
    }

    // RVA: 0x3EE0 Offset: 0x3EE0 VA: 0x3EE0
    public GetDrag()
    {
        unnamed_function_51834(this,0);
    }
}
