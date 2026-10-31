// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Dot.c by tools/c2cs.py
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

public class Dot : Action // TypeDefIndex: 5899
{
    // Fields
    [Tooltip("The left hand side of the dot product")]
    public SharedVector2 leftHandSide; // 0x2C
    [Tooltip("The right hand side of the dot product")]
    public SharedVector2 rightHandSide; // 0x30
    [Tooltip("The dot product result")]
    [RequiredField]
    public SharedFloat storeResult; // 0x34

    // Methods

    // RVA: 0x3D62 Offset: 0x3D62 VA: 0x3D62 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;

        byte[] auVar1 = new byte[8];
        byte[] local_8 = new byte[8];
        param1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61235(local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        auVar1 = local_8;
        unnamed_function_61235(local_8,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,auVar1._0_4_ * local_8._0_4_ + auVar1._4_4_ * local_8._4_4_,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3D63 Offset: 0x3D63 VA: 0x3D63 Slot: 16
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

    // RVA: 0x3D64 Offset: 0x3D64 VA: 0x3D64
    public Dot()
    {
        unnamed_function_51834(this,0);
    }
}
