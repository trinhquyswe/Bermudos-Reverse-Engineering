// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Multiply.c by tools/c2cs.py
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

public class Multiply : Action // TypeDefIndex: 5908
{
    // Fields
    [Tooltip("The Vector2 to multiply of")]
    public SharedVector2 vector2Variable; // 0x2C
    [Tooltip("The value to multiply the Vector2 of")]
    public SharedFloat multiplyBy; // 0x30
    [RequiredField]
    [Tooltip("The multiplication resut")]
    public SharedVector2 storeResult; // 0x34

    // Methods

    // RVA: 0x3D7D Offset: 0x3D7D VA: 0x3D7D Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        int param1 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        local_10 = CONCAT44(fVar1 * (float)((ulong)local_8 >> 0x20),fVar1 * (float)local_8);
        local_8 = local_10;
        unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
        return;
    }

    // RVA: 0x3D7E Offset: 0x3D7E VA: 0x3D7E Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        long uVar2 = default;

        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.vector2Variable = pBVar1;
        this.storeResult = pBVar1;
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.multiplyBy = param1;
    }

    // RVA: 0x3D7F Offset: 0x3D7F VA: 0x3D7F
    public Multiply()
    {
        unnamed_function_51834(this,0);
    }
}
