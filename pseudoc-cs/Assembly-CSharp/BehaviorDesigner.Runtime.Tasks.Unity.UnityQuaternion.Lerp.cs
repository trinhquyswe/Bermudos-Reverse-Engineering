// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Lerp.c by tools/c2cs.py
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

public class Lerp : Action // TypeDefIndex: 6075
{
    // Fields
    [Tooltip("The from rotation")]
    public SharedQuaternion fromQuaternion; // 0x2C
    [Tooltip("The to rotation")]
    public SharedQuaternion toQuaternion; // 0x30
    [Tooltip("The amount to lerp")]
    public SharedFloat amount; // 0x34
    [RequiredField]
    [Tooltip("The stored result")]
    public SharedQuaternion storeResult; // 0x38

    // Methods

    // RVA: 0x3FDA Offset: 0x3FDA VA: 0x3FDA Slot: 6
    public override TaskStatus OnUpdate()
    {
        float param4 = default;
        int param1 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        long local_48 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x38);
        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565ce8);
        unnamed_function_61197(&local_20,Raw.Read<int>(this + 0x30),DAT_ram_00565ce8);
        param4 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        local_38 = local_8;
        local_48 = local_18;
        local_40 = local_10;
        local_50 = local_20;
        UnityEngine.Quaternion.Lerp(&local_30,&local_40,&local_50,param4,0);
        local_58 = local_28;
        local_60 = local_30;
        unnamed_function_61198(param1,&local_60,DAT_ram_00565cec);
        return;
    }

    // RVA: 0x3FDB Offset: 0x3FDB VA: 0x3FDB Slot: 16
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

    // RVA: 0x3FDC Offset: 0x3FDC VA: 0x3FDC
    public Lerp()
    {
        unnamed_function_51834(this,0);
    }
}
