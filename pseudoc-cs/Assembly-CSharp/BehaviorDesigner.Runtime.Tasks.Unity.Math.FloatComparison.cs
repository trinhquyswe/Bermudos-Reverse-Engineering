// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatComparison.c by tools/c2cs.py
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

public class FloatComparison : Conditional // TypeDefIndex: 6146
{
    // Fields
    [Tooltip("The operation to perform")]
    public FloatComparison.Operation operation; // 0x2C
    [Tooltip("The first float")]
    public SharedFloat float1; // 0x30
    [Tooltip("The second float")]
    public SharedFloat float2; // 0x34

    // Methods

    // RVA: 0x40D3 Offset: 0x40D3 VA: 0x40D3 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;

        iVar1 = Raw.Read<int>(this + 0x2c);
        if (iVar1 == 0) {
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
            return;
        }
        if (iVar1 == 1) {
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
            return;
        }
        if (iVar1 == 2) {
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
            return;
        }
        if (iVar1 == 3) {
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
            return;
        }
        if (iVar1 == 4) {
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
            return;
        }
        if (iVar1 == 5) {
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        }
        return;
    }

    // RVA: 0x40D4 Offset: 0x40D4 VA: 0x40D4 Slot: 16
    public override void OnReset()
    {
        this.operation = LessThan;
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(this.float1,0.0,DAT_ram_00565d04);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(this.float2,0.0,DAT_ram_00565d04);
    }

    // RVA: 0x40D5 Offset: 0x40D5 VA: 0x40D5
    public FloatComparison()
    {
        unnamed_function_51834(this,0);
    }
}
