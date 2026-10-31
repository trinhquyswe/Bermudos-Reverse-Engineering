// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Dot.c by tools/c2cs.py
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

public class Dot : Action // TypeDefIndex: 5880
{
    // Fields
    [Tooltip("The left hand side of the dot product")]
    public SharedVector3 leftHandSide; // 0x2C
    [Tooltip("The right hand side of the dot product")]
    public SharedVector3 rightHandSide; // 0x30
    [Tooltip("The dot product result")]
    [RequiredField]
    public SharedFloat storeResult; // 0x34

    // Methods

    // RVA: 0x3D2C Offset: 0x3D2C VA: 0x3D2C Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        int param1 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        param1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        fVar3 = local_8;
        fVar2 = local_c;
        fVar1 = local_10;
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,(float)fVar1 * (float)local_10 + (float)fVar2 * (float)local_c + (float)fVar3 * (float)local_8,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3D2D Offset: 0x3D2D VA: 0x3D2D Slot: 16
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

    // RVA: 0x3D2E Offset: 0x3D2E VA: 0x3D2E
    public Dot()
    {
        unnamed_function_51834(this,0);
    }
}
