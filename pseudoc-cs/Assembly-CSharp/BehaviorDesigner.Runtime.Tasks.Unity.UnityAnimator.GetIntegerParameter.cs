// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetIntegerParameter.c by tools/c2cs.py
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

public class GetIntegerParameter : Action // TypeDefIndex: 6297
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The name of the parameter")]
    public SharedString paramaterName; // 0x30
    [Tooltip("The value of the integer parameter")]
    [RequiredField]
    public SharedInt storeValue; // 0x34
    private Animator animator; // 0x38
    private GameObject prevGameObject; // 0x3C

    // Methods

    // RVA: 0x42EE Offset: 0x42EE VA: 0x42EE Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        Animator pAVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pAVar2 = (Animator)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569a50);
            this.prevGameObject = param1;
            this.animator = pAVar2;
        }
    }

    // RVA: 0x42EF Offset: 0x42EF VA: 0x42EF Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param1 = default;
        int param1_00 = default;

        uVar2 = Raw.Read<int>(this + 0x38);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Animator is null",0);
            return;
        }
        param1 = Raw.Read<int>(this + 0x34);
        param1_00 = Raw.Read<int>(this + 0x38);
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar2 = unnamed_function_45421(param1_00,uVar2,0);
        unnamed_function_61204(param1,uVar2,DAT_ram_00565cbc);
        return;
    }

    // RVA: 0x42F0 Offset: 0x42F0 VA: 0x42F0 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedInt pBVar2 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedString.op_Implicit("");
        this.paramaterName = pBVar1;
        pBVar2 = SharedInt.op_Implicit(0);
        this.storeValue = pBVar2;
    }

    // RVA: 0x42F1 Offset: 0x42F1 VA: 0x42F1
    public GetIntegerParameter()
    {
        unnamed_function_51834(this,0);
    }
}
