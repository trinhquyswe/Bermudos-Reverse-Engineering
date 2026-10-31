// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Normalize.c by tools/c2cs.py
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

public class Normalize : Action // TypeDefIndex: 5891
{
    // Fields
    [Tooltip("The Vector3 to normalize")]
    public SharedVector3 vector3Variable; // 0x2C
    [RequiredField]
    [Tooltip("The normalized resut")]
    public SharedVector3 storeResult; // 0x30

    // Methods

    // RVA: 0x3D4D Offset: 0x3D4D VA: 0x3D4D Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        float fVar1 = default;
        object pfVar2 = default; // float*
        long local_20 = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        param1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        fVar1 = Mathf.Sqrt((float)local_10 * (float)local_10 + (float)local_c * (float)local_c + (float)local_8 * (float)local_8);
        if (1e-05 < fVar1) {
            local_18 = (float)local_8 / fVar1;
            local_10 = (float)((float)local_10 / fVar1);
            local_c = (float)((float)local_c / fVar1);
        }
        else {
            pfVar2 = Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c);
            local_18 = pfVar2[2];
            local_10 = (float)*pfVar2;
            local_c = (float)pfVar2[1];
        }
        local_20 = CONCAT44(local_c,local_10);
        local_8 = (float)local_18;
        unnamed_function_61246(param1,&local_20,DAT_ram_00565d3c);
        return;
    }

    // RVA: 0x3D4E Offset: 0x3D4E VA: 0x3D4E Slot: 16
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
        this.vector3Variable = pBVar1;
        pvVar2 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.storeResult = pBVar1;
    }

    // RVA: 0x3D4F Offset: 0x3D4F VA: 0x3D4F
    public Normalize()
    {
        unnamed_function_51834(this,0);
    }
}
