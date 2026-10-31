// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetFloatParameter.c by tools/c2cs.py
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

public class SetFloatParameter : Action // TypeDefIndex: 6311
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The name of the parameter")]
    public SharedString paramaterName; // 0x30
    [Tooltip("The value of the float parameter")]
    public SharedFloat floatValue; // 0x34
    [Tooltip("Should the value be reverted back to its original value after it has been set?")]
    public bool setOnce; // 0x38
    private int hashID; // 0x3C
    private Animator animator; // 0x40
    private GameObject prevGameObject; // 0x44

    // Methods

    // RVA: 0x4324 Offset: 0x4324 VA: 0x4324 Slot: 5
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

    // RVA: 0x4325 Offset: 0x4325 VA: 0x4325 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float fVar2 = default;
        float param3 = default;
        int uVar3 = default;
        int param2 = default;

        uVar3 = Raw.Read<int>(this + 0x40);
        iVar1 = UnityEngine.Object.op_Equality(uVar3,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("Animator is null",0);
            return;
        }
        uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar3 = UnityEngine.Animator.StringToHash(uVar3,0);
        Raw.Write<int>(this + 0x3c, uVar3);
        fVar2 = unnamed_function_45416(Raw.Read<int>(this + 0x40),uVar3,0);
        uVar3 = Raw.Read<int>(this + 0x40);
        param2 = Raw.Read<int>(this + 0x3c);
        param3 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        unnamed_function_45417(uVar3,param2,param3,0);
        if (Raw.Read<sbyte>(this + 0x38) != '\0') {
            if (DAT_ram_00664ee3 == '\0') {
                unnamed_function_1099 (& BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__ResetValue_d__9_TypeInfo );
            }
            iVar1 = unnamed_function_95402 ( BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__ResetValue_d__9_TypeInfo );
            Raw.Write<float>(iVar1 + 0x14, fVar2);
            Raw.Write<BehaviorDesigner.Runtime_Tasks_TaskStatus>(iVar1 + 0x10, this);
            Raw.Write<int>(iVar1 + 8, 0);
            BehaviorDesigner.Runtime.Tasks.Task.StartCoroutine(this,iVar1,0);
        }
        return;
    }

    [IteratorStateMachine(typeof(SetFloatParameter._ResetValue_d__9))]
    // RVA: 0x4326 Offset: 0x4326 VA: 0x4326
    public IEnumerator ResetValue(float origVale)
    {
        System.Collections.IEnumerator pSVar1 = default;

        if (DAT_ram_00664ee3 == '\0') {
            unnamed_function_1099 (& BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__ResetValue_d__9_TypeInfo );
        }
        pSVar1 = (System.Collections.IEnumerator) unnamed_function_95402 ( BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__ResetValue_d__9_TypeInfo );
        pSVar1[5]._opaque = (int)origVale;
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x4327 Offset: 0x4327 VA: 0x4327 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar2 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedString.op_Implicit("");
        this.paramaterName = pBVar1;
        pBVar2 = SharedFloat.op_Implicit(0.0);
        this.floatValue = pBVar2;
    }

    // RVA: 0x4328 Offset: 0x4328 VA: 0x4328
    public SetFloatParameter()
    {
        unnamed_function_51834(this,0);
    }
}
