// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetColor.c by tools/c2cs.py
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

public class SetColor : Action // TypeDefIndex: 6172
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The color to set")]
    public SharedColor color; // 0x30
    private Light light; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x411E Offset: 0x411E VA: 0x411E Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        Light pLVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pLVar2 = (Light)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569ac4);
            this.prevGameObject = param1;
            this.light = pLVar2;
        }
    }

    // RVA: 0x411F Offset: 0x411F VA: 0x411F Slot: 6
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
            unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565c90);
            local_18 = local_8;
            local_20 = local_10;
            unnamed_function_52940(uVar2,&local_20,0);
        }
        else {
            UnityEngine.Debug.LogWarning("Light is null",0);
        }
        return;
    }

    // RVA: 0x4120 Offset: 0x4120 VA: 0x4120 Slot: 16
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

    // RVA: 0x4121 Offset: 0x4121 VA: 0x4121
    public SetColor()
    {
        unnamed_function_51834(this,0);
    }
}
