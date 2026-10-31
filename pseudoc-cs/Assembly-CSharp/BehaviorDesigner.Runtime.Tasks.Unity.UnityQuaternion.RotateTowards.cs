// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.RotateTowards.c by tools/c2cs.py
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

public class RotateTowards : Action // TypeDefIndex: 6077
{
    // Fields
    [Tooltip("The from rotation")]
    public SharedQuaternion fromQuaternion; // 0x2C
    [Tooltip("The to rotation")]
    public SharedQuaternion toQuaternion; // 0x30
    [Tooltip("The maximum degrees delta")]
    public SharedFloat maxDeltaDegrees; // 0x34
    [Tooltip("The stored result")]
    [RequiredField]
    public SharedQuaternion storeResult; // 0x38

    // Methods

    // RVA: 0x3FE0 Offset: 0x3FE0 VA: 0x3FE0 Slot: 6
    public override TaskStatus OnUpdate()
    {
        long uVar1 = default;
        long uVar2 = default;
        long uVar3 = default;
        long uVar4 = default;
        float fVar5 = default;
        int param1 = default;
        float fVar6 = default;
        float local_20 = default;
        float local_30 = default;
        float local_18 = default;
        float local_28 = default;
        long local_90 = default;
        long local_88 = default;
        long local_80 = default;
        long local_78 = default;
        long local_70 = default;
        long local_68 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        long local_48 = default;
        long local_40 = default;
        long local_38 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x38);
        unnamed_function_61197(&local_40,Raw.Read<int>(this + 0x2c),DAT_ram_00565ce8);
        unnamed_function_61197(&local_50,Raw.Read<int>(this + 0x30),DAT_ram_00565ce8);
        fVar5 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        _local_28 = local_38;
        uVar2 = _local_28;
        _local_18 = local_48;
        uVar4 = _local_18;
        _local_30 = local_40;
        uVar1 = _local_30;
        _local_20 = local_50;
        uVar3 = _local_20;
        local_8 = 0;
        local_10 = 0;
        local_30 = (float)local_40;
        local_20 = (float)local_50;
        local_30 = (float)((ulong)local_40 >> 0x20);
        local_20 = (float)((ulong)local_50 >> 0x20);
        local_28 = (float)local_38;
        local_18 = (float)local_48;
        local_28 = (float)((ulong)local_38 >> 0x20);
        local_18 = (float)((ulong)local_48 >> 0x20);
        fVar6 = Mathf.Abs((float)local_30 * (float)local_20 + (float)local_30 * (float)local_20 + (float)local_28 * (float)local_18 + (float)local_28 * (float)local_18);
        if (1.0 <= fVar6) {
            fVar6 = 1.0;
        }
        _local_30 = uVar1;
        _local_28 = uVar2;
        _local_20 = uVar3;
        _local_18 = uVar4;
        if (fVar6 <= 0.999999) {
            fVar6 = unnamed_function_8251(fVar6);
            fVar6 = (fVar6 + fVar6) * 57.29578;
            if (fVar6 != 0.0) {
                local_68 = local_38;
                local_78 = local_48;
                local_70 = local_40;
                local_80 = local_50;
                fVar5 = fVar5 / fVar6;
                if (1.0 <= fVar5) {
                    fVar5 = 1.0;
                }
                UnityEngine.Quaternion.SlerpUnclamped(&local_10,&local_70,&local_80,fVar5,0);
                goto code_r0x81a768a2;
            }
        }
        local_8 = local_48;
        local_10 = local_50;
        code_r0x81a768a2: local_58 = local_8;
        local_88 = local_8;
        local_60 = local_10;
        local_90 = local_10;
        unnamed_function_61198(param1,&local_90,DAT_ram_00565cec);
        return;
    }

    // RVA: 0x3FE1 Offset: 0x3FE1 VA: 0x3FE1 Slot: 16
    public override void OnReset()
    {
        Quaternion pQVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar2 = default;
        Quaternion local_20 = default;
        Quaternion local_10 = default;

        local_20._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_20._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_10._0_8_ = local_20._0_8_;
        local_10._8_8_ = local_20._8_8_;
        pQVar1 = SharedQuaternion.op_Implicit(&local_20);
        this.toQuaternion = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
        this.storeResult = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
        this.fromQuaternion = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
        pBVar2 = SharedFloat.op_Implicit(0.0);
        this.amount = pBVar2;
    }

    // RVA: 0x3FE2 Offset: 0x3FE2 VA: 0x3FE2
    public RotateTowards()
    {
        unnamed_function_51834(this,0);
    }
}
