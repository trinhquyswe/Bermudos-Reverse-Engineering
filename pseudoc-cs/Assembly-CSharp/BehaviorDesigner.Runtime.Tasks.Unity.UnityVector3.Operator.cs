// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Operator.c by tools/c2cs.py
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

public class Operator : Action // TypeDefIndex: 5893
{
    // Fields
    [Tooltip("The operation to perform")]
    public Operator.Operation operation; // 0x2C
    [Tooltip("The first Vector3")]
    public SharedVector3 firstVector3; // 0x30
    [Tooltip("The second Vector3")]
    public SharedVector3 secondVector3; // 0x34
    [Tooltip("The variable to store the result")]
    public SharedVector3 storeResult; // 0x38

    // Methods

    // RVA: 0x3D50 Offset: 0x3D50 VA: 0x3D50 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        int iVar4 = default;
        int uVar5 = default;
        long local_40 = default;
        float local_38 = default;
        long local_30 = default;
        float local_28 = default;
        long local_20 = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        iVar4 = Raw.Read<int>(this + 0x2c);
        if (iVar4 == 0) {
            uVar5 = Raw.Read<int>(this + 0x38);
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
            fVar3 = local_8;
            fVar2 = local_c;
            fVar1 = local_10;
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x34),DAT_ram_00565d38);
            local_38 = (float)fVar3 + (float)local_8;
            local_c = (float)((float)fVar2 + (float)local_c);
            local_10 = (float)((float)fVar1 + (float)local_10);
            local_40 = CONCAT44(local_c,local_10);
            local_8 = (float)local_38;
            unnamed_function_61246(uVar5,&local_40,DAT_ram_00565d3c);
        }
        else if (iVar4 == 1) {
            uVar5 = Raw.Read<int>(this + 0x38);
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
            fVar3 = local_8;
            fVar2 = local_c;
            fVar1 = local_10;
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x34),DAT_ram_00565d38);
            local_28 = (float)fVar3 - (float)local_8;
            local_c = (float)((float)fVar2 - (float)local_c);
            local_10 = (float)((float)fVar1 - (float)local_10);
            local_30 = CONCAT44(local_c,local_10);
            local_8 = (float)local_28;
            unnamed_function_61246(uVar5,&local_30,DAT_ram_00565d3c);
        }
        else if (iVar4 == 2) {
            uVar5 = Raw.Read<int>(this + 0x38);
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
            fVar3 = local_8;
            fVar2 = local_c;
            fVar1 = local_10;
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x34),DAT_ram_00565d38);
            local_18 = (float)fVar3 * (float)local_8;
            local_c = (float)((float)fVar2 * (float)local_c);
            local_10 = (float)((float)fVar1 * (float)local_10);
            local_20 = CONCAT44(local_c,local_10);
            local_8 = (float)local_18;
            unnamed_function_61246(uVar5,&local_20,DAT_ram_00565d3c);
        }
        return;
    }

    // RVA: 0x3D51 Offset: 0x3D51 VA: 0x3D51 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 pBVar1 = default;
        object pvVar2 = default; // object*
        long uVar3 = default;

        this.operation = Add;
        pvVar2 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.firstVector3 = pBVar1;
        pvVar2 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.secondVector3 = pBVar1;
        pvVar2 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.storeResult = pBVar1;
    }

    // RVA: 0x3D52 Offset: 0x3D52 VA: 0x3D52
    public Operator()
    {
        unnamed_function_51834(this,0);
    }
}
