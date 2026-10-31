// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetMaxParticles.c by tools/c2cs.py
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

public class SetMaxParticles : Action // TypeDefIndex: 6111
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The max particles of the ParticleSystem")]
    public SharedInt maxParticles; // 0x30
    private ParticleSystem particleSystem; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x4054 Offset: 0x4054 VA: 0x4054 Slot: 5
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

    // RVA: 0x4055 Offset: 0x4055 VA: 0x4055 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;

        int[] local_8 = new int[2];
        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            local_8[0] = Raw.Read<int>(this + 0x34);
            uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
            unnamed_function_86795(local_8,uVar2,0);
        }
        else {
            UnityEngine.Debug.LogWarning("ParticleSystem is null",0);
        }
        return;
    }

    // RVA: 0x4056 Offset: 0x4056 VA: 0x4056 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedInt.op_Implicit(0);
        this.maxParticles = pBVar1;
    }

    // RVA: 0x4057 Offset: 0x4057 VA: 0x4057
    public SetMaxParticles()
    {
        unnamed_function_51834(this,0);
    }
}
