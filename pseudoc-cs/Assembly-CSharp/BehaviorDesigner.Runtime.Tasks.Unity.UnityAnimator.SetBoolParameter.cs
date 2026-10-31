// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetBoolParameter.c by tools/c2cs.py
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

public class SetBoolParameter : Action // TypeDefIndex: 6309
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The name of the parameter")]
    public SharedString paramaterName; // 0x30
    [Tooltip("The value of the bool parameter")]
    public SharedBool boolValue; // 0x34
    [Tooltip("Should the value be reverted back to its original value after it has been set?")]
    public bool setOnce; // 0x38
    private int hashID; // 0x3C
    private Animator animator; // 0x40
    private GameObject prevGameObject; // 0x44

    // Methods

    // RVA: 0x4319 Offset: 0x4319 VA: 0x4319 Slot: 5
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

    // RVA: 0x431A Offset: 0x431A VA: 0x431A Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param3 = default;
        int uVar2 = default;
        int param1 = default;
        int param2 = default;

        uVar2 = Raw.Read<int>(this + 0x40);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Animator is null",0);
            return;
        }
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar2 = UnityEngine.Animator.StringToHash(uVar2,0);
        Raw.Write<int>(this + 0x3c, uVar2);
        uVar2 = unnamed_function_45419(Raw.Read<int>(this + 0x40),uVar2,0);
        param1 = Raw.Read<int>(this + 0x40);
        param2 = Raw.Read<int>(this + 0x3c);
        param3 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565c78);
        unnamed_function_45420(param1,param2,param3,0);
        if (Raw.Read<sbyte>(this + 0x38) != '\0') {
            if (DAT_ram_00664edf == '\0') {
                unnamed_function_1099 (& BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__ResetValue_d__9_TypeInfo );
            }
            iVar1 = unnamed_function_95402 ( BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__ResetValue_d__9_TypeInfo );
            Raw.Write<sbyte>(iVar1 + 0x14, (sbyte)uVar2);
            Raw.Write<BehaviorDesigner.Runtime_Tasks_TaskStatus>(iVar1 + 0x10, this);
            Raw.Write<int>(iVar1 + 8, 0);
            BehaviorDesigner.Runtime.Tasks.Task.StartCoroutine(this,iVar1,0);
        }
        return;
    }

    [IteratorStateMachine(typeof(SetBoolParameter._ResetValue_d__9))]
    // RVA: 0x431B Offset: 0x431B VA: 0x431B
    public IEnumerator ResetValue(bool origVale)
    {
        System.Collections.IEnumerator pSVar1 = default;

        if (DAT_ram_00664edf == '\0') {
            unnamed_function_1099 (& BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__ResetValue_d__9_TypeInfo );
        }
        pSVar1 = (System.Collections.IEnumerator) unnamed_function_95402 ( BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__ResetValue_d__9_TypeInfo );
        *(object)&pSVar1[5]._opaque = origVale;
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x431C Offset: 0x431C VA: 0x431C Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedString.op_Implicit("");
        this.paramaterName = pBVar1;
        pBVar2 = SharedBool.op_Implicit(false);
        this.boolValue = pBVar2;
    }

    // RVA: 0x431D Offset: 0x431D VA: 0x431D
    public SetBoolParameter()
    {
        unnamed_function_51834(this,0);
    }
}
