// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Dot.c by tools/c2cs.py
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

public class Dot : Action // TypeDefIndex: 6070
{
    // Fields
    [Tooltip("The first rotation")]
    public SharedQuaternion leftRotation; // 0x2C
    [Tooltip("The second rotation")]
    public SharedQuaternion rightRotation; // 0x30
    [Tooltip("The stored result")]
    [RequiredField]
    public SharedFloat storeResult; // 0x34

    // Methods

    // RVA: 0x3FCB Offset: 0x3FCB VA: 0x3FCB Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        int param1 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;
        float local_4 = default;

        param1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565ce8);
        fVar4 = local_4;
        fVar3 = local_8;
        fVar2 = local_c;
        fVar1 = local_10;
        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565ce8);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,(float)fVar1 * (float)local_10 + (float)fVar2 * (float)local_c + (float)fVar3 * (float)local_8 + (float)fVar4 * (float)local_4,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3FCC Offset: 0x3FCC VA: 0x3FCC Slot: 16
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
        this.firstRotation = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
        this.secondRotation = (BehaviorDesigner.Runtime.SharedQuaternion)pQVar1;
        pBVar2 = SharedFloat.op_Implicit(0.0);
        this.storeResult = pBVar2;
    }

    // RVA: 0x3FCD Offset: 0x3FCD VA: 0x3FCD
    public Dot()
    {
        unnamed_function_51834(this,0);
    }
}
