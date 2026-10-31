// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Distance.c by tools/c2cs.py
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

public class Distance : Action // TypeDefIndex: 5898
{
    // Fields
    [Tooltip("The first Vector2")]
    public SharedVector2 firstVector2; // 0x2C
    [Tooltip("The second Vector2")]
    public SharedVector2 secondVector2; // 0x30
    [RequiredField]
    [Tooltip("The distance")]
    public SharedFloat storeResult; // 0x34

    // Methods

    // RVA: 0x3D5F Offset: 0x3D5F VA: 0x3D5F Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        float fVar2 = default;
        float fVar3 = default;

        byte[] auVar1 = new byte[8];
        byte[] local_8 = new byte[8];
        param1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61235(local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        auVar1 = local_8;
        unnamed_function_61235(local_8,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
        fVar2 = auVar1._0_4_ - local_8._0_4_;
        fVar3 = auVar1._4_4_ - local_8._4_4_;
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,Mathf.Sqrt(fVar2 * fVar2 + fVar3 * fVar3),DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3D60 Offset: 0x3D60 VA: 0x3D60 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        long uVar2 = default;

        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.firstVector2 = pBVar1;
        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.secondVector2 = pBVar1;
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.storeResult = param1;
    }

    // RVA: 0x3D61 Offset: 0x3D61 VA: 0x3D61
    public Distance()
    {
        unnamed_function_51834(this,0);
    }
}
