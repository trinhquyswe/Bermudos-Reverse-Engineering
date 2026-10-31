// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Angle.c by tools/c2cs.py
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

public class Angle : Action // TypeDefIndex: 5877
{
    // Fields
    [Tooltip("The first Vector3")]
    public SharedVector3 firstVector3; // 0x2C
    [Tooltip("The second Vector3")]
    public SharedVector3 secondVector3; // 0x30
    [Tooltip("The angle")]
    [RequiredField]
    public SharedFloat storeResult; // 0x34

    // Methods

    // RVA: 0x3D23 Offset: 0x3D23 VA: 0x3D23 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        double dVar4 = default;
        int param1 = default;
        float fVar5 = default;
        float fVar6 = default;
        float fVar7 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        param1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        fVar3 = local_8;
        fVar2 = local_c;
        fVar1 = local_10;
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
        fVar5 = Mathf.Sqrt(((float)fVar1 * (float)fVar1 + (float)fVar2 * (float)fVar2 + (float)fVar3 * (float)fVar3) * ((float)local_10 * (float)local_10 + (float)local_c * (float)local_c + (float)local_8 * (float)local_8));
        if (fVar5 < 1e-15) {
            fVar5 = 0.0;
        }
        else {
            fVar5 = ((float)fVar1 * (float)local_10 + (float)fVar2 * (float)local_c + (float)fVar3 * (float)local_8) / fVar5;
            fVar7 = fVar5;
            if (1.0 <= fVar5) {
                fVar7 = 1.0;
            }
            fVar6 = -1.0;
            if (-1.0 <= fVar5) {
                fVar6 = fVar7;
            }
            dVar4 = unnamed_function_8249((double)fVar6);
            fVar5 = (float)dVar4 * 57.29578;
        }
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,fVar5,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3D24 Offset: 0x3D24 VA: 0x3D24 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        object pvVar2 = default; // object*
        long uVar3 = default;

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
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.storeResult = param1;
    }

    // RVA: 0x3D25 Offset: 0x3D25 VA: 0x3D25
    public Angle()
    {
        unnamed_function_51834(this,0);
    }
}
