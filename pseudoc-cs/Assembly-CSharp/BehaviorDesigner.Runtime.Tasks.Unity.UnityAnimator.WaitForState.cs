// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.WaitForState.c by tools/c2cs.py
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

public class WaitForState : Action // TypeDefIndex: 6323
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The name of the state")]
    public SharedString stateName; // 0x30
    [Tooltip("The layer where the state is")]
    public SharedInt layer; // 0x34
    private Animator animator; // 0x38
    private GameObject prevGameObject; // 0x3C
    private int stateHash; // 0x40

    // Methods

    // RVA: 0x4360 Offset: 0x4360 VA: 0x4360 Slot: 4
    public override void OnAwake()
    {
        int param1 = default;
        int iVar1 = default;

        param1 = unnamed_function_61203(this.stateName,DAT_ram_00565d0c);
        iVar1 = UnityEngine.Animator.StringToHash(param1,0);
        this.stateHash = iVar1;
    }

    // RVA: 0x4361 Offset: 0x4361 VA: 0x4361 Slot: 5
    public override void OnStart()
    {
        int uVar1 = default;
        GameObject param1 = default;
        int iVar2 = default;
        Animator param1_00 = default;
        int param4 = default;
        GameObject param2 = default;
        int local_4 = default;

        uVar1 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar1,0);
        param2 = this.prevGameObject;
        iVar2 = (param1 != param2);
        if (iVar2 != 0) {
            param1_00 = (Animator)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569a50);
            this.prevGameObject = param1;
            this.animator = param1_00;
            uVar1 = unnamed_function_61203(this.layer,DAT_ram_00565cb8);
            iVar2 = UnityEngine.Animator.HasState(param1_00,uVar1,this.stateHash,0);
            if (iVar2 == 0) {
                uVar1 = unnamed_function_61203(this.stateName,DAT_ram_00565d0c);
                local_4 = unnamed_function_61203(this.layer,DAT_ram_00565cb8);
                param4 = System.Int32.ToString(&local_4,0);
                uVar1 = System.String.Concat("Error: The Animator does not have the state ",uVar1," on layer ",param4,0);
                UnityEngine.Debug.LogError(uVar1,0);
            }
        }
    }

    // RVA: 0x4362 Offset: 0x4362 VA: 0x4362 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param2 = default;

        int[] local_50 = new int[20];
        uVar2 = Raw.Read<int>(this + 0x38);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            param2 = Raw.Read<int>(this + 0x38);
            uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
            UnityEngine.Animator.GetCurrentAnimatorStateInfo(local_50,param2,uVar2,0);
        }
        else {
            UnityEngine.Debug.LogWarning("Animator is null",0);
        }
        return;
    }

    // RVA: 0x4363 Offset: 0x4363 VA: 0x4363 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedInt pBVar2 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedString.op_Implicit("");
        this.stateName = pBVar1;
        pBVar2 = SharedInt.op_Implicit(-1);
        this.layer = pBVar2;
    }

    // RVA: 0x4364 Offset: 0x4364 VA: 0x4364
    public WaitForState()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        pBVar1 = SharedInt.op_Implicit(-1);
        this.layer = pBVar1;
        unnamed_function_51834(this,0);
    }
}
