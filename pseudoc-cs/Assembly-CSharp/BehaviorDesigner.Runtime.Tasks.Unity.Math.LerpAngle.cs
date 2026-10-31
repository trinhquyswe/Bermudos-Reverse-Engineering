// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.LerpAngle.c by tools/c2cs.py
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

public class LerpAngle : Action // TypeDefIndex: 6158
{
    // Fields
    [Tooltip("The from value")]
    public SharedFloat fromValue; // 0x2C
    [Tooltip("The to value")]
    public SharedFloat toValue; // 0x30
    [Tooltip("The amount to lerp")]
    public SharedFloat lerpAmount; // 0x34
    [RequiredField]
    [Tooltip("The lerp resut")]
    public SharedFloat storeResult; // 0x38

    // Methods

    // RVA: 0x40EE Offset: 0x40EE VA: 0x40EE Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        int param1 = default;
        float fVar4 = default;
        float fVar5 = default;

        param1 = Raw.Read<int>(this + 0x38);
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565d00);
        fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        fVar3 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        fVar5 = fVar3;
        if (1.0 <= fVar3) {
            fVar5 = 1.0;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar3) {
            fVar4 = fVar5;
        }
        fVar2 = (fVar2 - fVar1) + FLOOR((fVar2 - fVar1) / 360.0) * -360.0;
        fVar5 = fVar2;
        if (360.0 <= fVar2) {
            fVar5 = 360.0;
        }
        fVar3 = 0.0;
        if (0.0 <= fVar2) {
            fVar3 = fVar5;
        }
        fVar5 = fVar3 + -360.0;
        if (fVar3 <= 180.0) {
            fVar5 = fVar3;
        }
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,fVar1 + fVar4 * fVar5,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x40EF Offset: 0x40EF VA: 0x40EF Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.fromValue = pBVar1;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.toValue = pBVar1;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.lerpAmount = pBVar1;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.storeResult = pBVar1;
    }

    // RVA: 0x40F0 Offset: 0x40F0 VA: 0x40F0
    public LerpAngle()
    {
        unnamed_function_51834(this,0);
    }
}
