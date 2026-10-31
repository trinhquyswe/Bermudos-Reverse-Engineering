// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetAxisRaw.c by tools/c2cs.py
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

public class GetAxisRaw : Action // TypeDefIndex: 6187
{
    // Fields
    [Tooltip("The name of the axis")]
    public SharedString axisName; // 0x2C
    [Tooltip("Axis values are in the range -1 to 1. Use the multiplier to set a larger range")]
    public SharedFloat multiplier; // 0x30
    [Tooltip("The stored result")]
    [RequiredField]
    public SharedFloat storeResult; // 0x34

    // Methods

    // RVA: 0x4156 Offset: 0x4156 VA: 0x4156 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        float param2 = default;
        int iVar1 = default;
        float fVar2 = default;

        param1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        param2 = unnamed_function_12085(param1,0);
        iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(Raw.Read<int>(this + 0x30),0);
        if (iVar1 == 0) {
            fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            param2 = param2 * fVar2;
        }
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(Raw.Read<int>(this + 0x34),param2,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x4157 Offset: 0x4157 VA: 0x4157 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar2 = default;

        pBVar1 = SharedString.op_Implicit("");
        this.axisName = pBVar1;
        pBVar2 = SharedFloat.op_Implicit(1.0);
        this.multiplier = pBVar2;
        pBVar2 = SharedFloat.op_Implicit(0.0);
        this.storeResult = pBVar2;
    }

    // RVA: 0x4158 Offset: 0x4158 VA: 0x4158
    public GetAxisRaw()
    {
        unnamed_function_51834(this,0);
    }
}
