// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.GetColor.c by tools/c2cs.py
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

public class GetColor : Action // TypeDefIndex: 6165
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [RequiredField]
    [Tooltip("The color to store")]
    public SharedColor storeValue; // 0x30
    private Light light; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x4102 Offset: 0x4102 VA: 0x4102 Slot: 5
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

    // RVA: 0x4103 Offset: 0x4103 VA: 0x4103 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        Color pCVar2 = default;
        int param1 = default;
        Color local_20 = default;
        Color local_10 = default;

        param1 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(param1,0,0);
        if (iVar1 == 0) {
            UnityEngine.Light.get_color(&local_10,Raw.Read<int>(this + 0x34),0);
            local_20.b = local_10.b;
            local_20.a = local_10.a;
            local_20.r = local_10.r;
            local_20.g = local_10.g;
            pCVar2 = SharedColor.op_Implicit(&local_20);
            Raw.Write<object>(this + 0x30, pCVar2);
        }
        else {
            UnityEngine.Debug.LogWarning("Light is null",0);
        }
        return;
    }

    // RVA: 0x4104 Offset: 0x4104 VA: 0x4104 Slot: 16
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

    // RVA: 0x4105 Offset: 0x4105 VA: 0x4105
    public GetColor()
    {
        unnamed_function_51834(this,0);
    }
}
