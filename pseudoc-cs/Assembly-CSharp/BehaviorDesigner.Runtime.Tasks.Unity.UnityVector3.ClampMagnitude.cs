// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.ClampMagnitude.c by tools/c2cs.py
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

public class ClampMagnitude : Action // TypeDefIndex: 5878
{
    // Fields
    [Tooltip("The Vector3 to clamp the magnitude of")]
    public SharedVector3 vector3Variable; // 0x2C
    [Tooltip("The max length of the magnitude")]
    public SharedFloat maxLength; // 0x30
    [RequiredField]
    [Tooltip("The clamp magnitude resut")]
    public SharedVector3 storeResult; // 0x34

    // Methods

    // RVA: 0x3D26 Offset: 0x3D26 VA: 0x3D26 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        int param1 = default;
        float fVar2 = default;
        long local_20 = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        param1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        fVar2 = (float)local_10 * (float)local_10 + (float)local_c * (float)local_c + (float)local_8 * (float)local_8;
        if (fVar1 * fVar1 < fVar2) {
            fVar2 = Mathf.Sqrt(fVar2);
            local_8 = (float)(((float)local_8 / fVar2) * fVar1);
            local_10 = (float)(((float)local_10 / fVar2) * fVar1);
            local_c = (float)(((float)local_c / fVar2) * fVar1);
        }
        local_20 = CONCAT44(local_c,local_10);
        local_18 = (float)local_8;
        unnamed_function_61246(param1,&local_20,DAT_ram_00565d3c);
        return;
    }

    // RVA: 0x3D27 Offset: 0x3D27 VA: 0x3D27 Slot: 16
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
        this.vector3Variable = pBVar1;
        pvVar2 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.storeResult = pBVar1;
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.maxLength = param1;
    }

    // RVA: 0x3D28 Offset: 0x3D28 VA: 0x3D28
    public ClampMagnitude()
    {
        unnamed_function_51834(this,0);
    }
}
