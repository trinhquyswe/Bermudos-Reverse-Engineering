// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetVector3.c by tools/c2cs.py
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

public class GetVector3 : Action // TypeDefIndex: 5904
{
    // Fields
    [Tooltip("The Vector2 to get the Vector3 value of")]
    public SharedVector2 vector3Variable; // 0x2C
    [RequiredField]
    [Tooltip("The Vector3 value")]
    public SharedVector3 storeResult; // 0x30

    // Methods

    // RVA: 0x3D71 Offset: 0x3D71 VA: 0x3D71 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        param1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61235(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        local_18 = 0;
        local_8 = 0;
        local_20 = local_10;
        unnamed_function_61246(param1,&local_20,DAT_ram_00565d3c);
        return;
    }

    // RVA: 0x3D72 Offset: 0x3D72 VA: 0x3D72 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedVector3 pBVar2 = default;
        long uVar3 = default;
        object pvVar4 = default; // object*

        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar3;
        this.vector3Variable = pBVar1;
        pvVar4 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar2 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar2[5].monitor = pvVar4;
        *(object)&pBVar2[4].monitor = uVar3;
        this.storeResult = pBVar2;
    }

    // RVA: 0x3D73 Offset: 0x3D73 VA: 0x3D73
    public GetVector3()
    {
        unnamed_function_51834(this,0);
    }
}
