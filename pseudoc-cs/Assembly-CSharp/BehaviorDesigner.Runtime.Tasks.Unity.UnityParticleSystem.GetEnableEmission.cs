// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.GetEnableEmission.c by tools/c2cs.py
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

public class GetEnableEmission : Action // TypeDefIndex: 6097
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("Is the Particle System emitting particles?")]
    [RequiredField]
    public SharedBool storeResult; // 0x30
    private ParticleSystem particleSystem; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x401C Offset: 0x401C VA: 0x401C Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        ParticleSystem pPVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pPVar2 = (ParticleSystem)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569ad8);
            this.prevGameObject = param1;
            this.particleSystem = pPVar2;
        }
    }

    // RVA: 0x401D Offset: 0x401D VA: 0x401D Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param1 = default;

        int[] local_8 = new int[2];
        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            param1 = Raw.Read<int>(this + 0x30);
            local_8[0] = Raw.Read<int>(this + 0x34);
            uVar2 = unnamed_function_86798(local_8,0);
            BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(param1,uVar2,DAT_ram_00565c7c);
        }
        else {
            UnityEngine.Debug.LogWarning("ParticleSystem is null",0);
        }
        return;
    }

    // RVA: 0x401E Offset: 0x401E VA: 0x401E Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedBool.op_Implicit(false);
        this.storeValue = pBVar1;
    }

    // RVA: 0x401F Offset: 0x401F VA: 0x401F
    public GetEnableEmission()
    {
        unnamed_function_51834(this,0);
    }
}
