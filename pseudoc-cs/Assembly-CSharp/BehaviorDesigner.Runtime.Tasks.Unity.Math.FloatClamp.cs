// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatClamp.c by tools/c2cs.py
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

public class FloatClamp : Action // TypeDefIndex: 6144
{
    // Fields
    [Tooltip("The float to clamp")]
    public SharedFloat floatVariable; // 0x2C
    [Tooltip("The maximum value of the float")]
    public SharedFloat minValue; // 0x30
    [Tooltip("The maximum value of the float")]
    public SharedFloat maxValue; // 0x34

    // Methods

    // RVA: 0x40D0 Offset: 0x40D0 VA: 0x40D0 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float param2 = default;
        float fVar2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(param1,DAT_ram_00565d00);
        param2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        if (fVar1 <= fVar2) {
            fVar2 = fVar1;
        }
        if (param2 <= fVar1) {
            param2 = fVar2;
        }
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,param2,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x40D1 Offset: 0x40D1 VA: 0x40D1 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.floatVariable = pBVar1;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.minValue = pBVar1;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.maxValue = pBVar1;
    }

    // RVA: 0x40D2 Offset: 0x40D2 VA: 0x40D2
    public FloatClamp()
    {
        unnamed_function_51834(this,0);
    }
}
