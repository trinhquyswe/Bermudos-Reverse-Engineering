// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetVector2.c by tools/c2cs.py
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

public class GetVector2 : Action // TypeDefIndex: 5886
{
    // Fields
    [Tooltip("The Vector3 to get the Vector2 value of")]
    public SharedVector3 vector3Variable; // 0x2C
    [RequiredField]
    [Tooltip("The Vector2 value")]
    public SharedVector2 storeResult; // 0x30

    // Methods

    // RVA: 0x3D3E Offset: 0x3D3E VA: 0x3D3E Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_18 = default;

        long[] local_10 = new long[2];
        param1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61245(local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        local_18 = local_10[0];
        unnamed_function_61236(param1,&local_18,DAT_ram_00565d2c);
        return;
    }

    // RVA: 0x3D3F Offset: 0x3D3F VA: 0x3D3F Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedVector2 pBVar2 = default;
        object pvVar3 = default; // object*
        long uVar4 = default;

        pvVar3 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar4 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar3;
        *(object)&pBVar1[4].monitor = uVar4;
        this.vector3Variable = pBVar1;
        uVar4 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar2 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar2[4].monitor = uVar4;
        this.storeResult = pBVar2;
    }

    // RVA: 0x3D40 Offset: 0x3D40 VA: 0x3D40
    public GetVector2()
    {
        unnamed_function_51834(this,0);
    }
}
