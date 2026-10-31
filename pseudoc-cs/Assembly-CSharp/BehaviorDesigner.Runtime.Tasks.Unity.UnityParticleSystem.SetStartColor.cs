// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartColor.c by tools/c2cs.py
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

public class SetStartColor : Action // TypeDefIndex: 6113
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The start color of the ParticleSystem")]
    public SharedColor startColor; // 0x30
    private ParticleSystem particleSystem; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x405C Offset: 0x405C VA: 0x405C Slot: 5
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

    // RVA: 0x405D Offset: 0x405D VA: 0x405D Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param1 = default;
        long local_88 = default;
        long local_80 = default;
        long local_78 = default;
        long local_70 = default;
        long local_68 = default;
        int local_60 = default;
        long local_58 = default;
        long local_50 = default;
        long local_48 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        long local_28 = default;
        int local_20 = default;
        long local_18 = default;
        long local_10 = default;

        int[] local_8 = new int[2];
        param1 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(param1,0,0);
        if (iVar1 == 0) {
            local_8[0] = Raw.Read<int>(this + 0x34);
            unnamed_function_61197(&local_18,Raw.Read<int>(this + 0x30),DAT_ram_00565c90);
            local_50 = local_10;
            local_58 = local_18;
            unnamed_function_86814(&local_48,&local_58,0);
            local_60 = local_20;
            local_68 = local_28;
            local_70 = local_30;
            local_78 = local_38;
            local_80 = local_40;
            local_88 = local_48;
            unnamed_function_86787(local_8,&local_88,0);
        }
        else {
            UnityEngine.Debug.LogWarning("ParticleSystem is null",0);
        }
        return;
    }

    // RVA: 0x405E Offset: 0x405E VA: 0x405E Slot: 16
    public override void OnReset()
    {
        Color pCVar1 = default;
        Color local_20 = default;
        long local_10 = default;
        long local_8 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        local_8 = 0x3f8000003f800000;
        local_20.b = 1.0;
        local_20.a = 1.0;
        local_10 = 0x3f8000003f800000;
        local_20.r = 1.0;
        local_20.g = 1.0;
        pCVar1 = SharedColor.op_Implicit(&local_20);
        this.startColor = (BehaviorDesigner.Runtime.SharedColor)pCVar1;
    }

    // RVA: 0x405F Offset: 0x405F VA: 0x405F
    public SetStartColor()
    {
        unnamed_function_51834(this,0);
    }
}
