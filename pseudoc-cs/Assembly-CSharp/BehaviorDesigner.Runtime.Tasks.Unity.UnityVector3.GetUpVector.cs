// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetUpVector.c by tools/c2cs.py
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

public class GetUpVector : Action // TypeDefIndex: 5885
{
    // Fields
    [Tooltip("The stored result")]
    [RequiredField]
    public SharedVector3 storeResult; // 0x2C

    // Methods

    // RVA: 0x3D3B Offset: 0x3D3B VA: 0x3D3B Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_10 = default;
        int local_8 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        local_8 = Raw.Read<int>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x20);
        local_10 = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x18);
        unnamed_function_61246(param1,&local_10,DAT_ram_00565d3c);
        return;
    }

    // RVA: 0x3D3C Offset: 0x3D3C VA: 0x3D3C Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 pBVar1 = default;
        object pvVar2 = default; // object*
        long uVar3 = default;

        pvVar2 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.storeResult = pBVar1;
    }

    // RVA: 0x3D3D Offset: 0x3D3D VA: 0x3D3D
    public GetUpVector()
    {
        unnamed_function_51834(this,0);
    }
}
