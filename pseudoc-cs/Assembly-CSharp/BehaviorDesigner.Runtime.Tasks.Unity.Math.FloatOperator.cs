// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatOperator.c by tools/c2cs.py
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

public class FloatOperator : Action // TypeDefIndex: 6148
{
    // Fields
    [Tooltip("The operation to perform")]
    public FloatOperator.Operation operation; // 0x2C
    [Tooltip("The first float")]
    public SharedFloat float1; // 0x30
    [Tooltip("The second float")]
    public SharedFloat float2; // 0x34
    [Tooltip("The variable to store the result")]
    public SharedFloat storeResult; // 0x38

    // Methods

    // RVA: 0x40D6 Offset: 0x40D6 VA: 0x40D6 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        int iVar3 = default;
        int uVar4 = default;
        int param1 = default;

        iVar3 = Raw.Read<int>(this + 0x2c);
        if (iVar3 == 0) {
            uVar4 = Raw.Read<int>(this + 0x38);
            fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
            BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar4,fVar1 + fVar2,DAT_ram_00565d04);
            return;
        }
        if (iVar3 == 1) {
            uVar4 = Raw.Read<int>(this + 0x38);
            fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
            BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar4,fVar1 - fVar2,DAT_ram_00565d04);
            return;
        }
        if (iVar3 != 2) {
            if (iVar3 == 3) {
                uVar4 = Raw.Read<int>(this + 0x38);
                fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
                fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
                BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar4,fVar1 / fVar2,DAT_ram_00565d04);
                return;
            }
            if (iVar3 != 4) {
                if (iVar3 != 5) {
                    if (iVar3 == 6) {
                        param1 = Raw.Read<int>(this + 0x38);
                        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
                        fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
                        uVar4 = DAT_ram_00565d04;
                        fVar1 = unnamed_function_11008(fVar1,fVar2);
                        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,fVar1,uVar4);
                    }
                    return;
                }
                uVar4 = Raw.Read<int>(this + 0x38);
                fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
                fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
                if (fVar1 <= fVar2) {
                    fVar1 = fVar2;
                }
                BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar4,fVar1,DAT_ram_00565d04);
                return;
            }
            uVar4 = Raw.Read<int>(this + 0x38);
            fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
            fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
            if (fVar2 <= fVar1) {
                fVar1 = fVar2;
            }
            BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar4,fVar1,DAT_ram_00565d04);
            return;
        }
        uVar4 = Raw.Read<int>(this + 0x38);
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar4,fVar1 * fVar2,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x40D7 Offset: 0x40D7 VA: 0x40D7 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        this.operation = Add;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.float1 = pBVar1;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.float2 = pBVar1;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.storeResult = pBVar1;
    }

    // RVA: 0x40D8 Offset: 0x40D8 VA: 0x40D8
    public FloatOperator()
    {
        unnamed_function_51834(this,0);
    }
}
