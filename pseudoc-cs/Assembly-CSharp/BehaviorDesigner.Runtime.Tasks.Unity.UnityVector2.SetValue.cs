// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.SetValue.c by tools/c2cs.py
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

public class SetValue : Action // TypeDefIndex: 5912
{
    // Fields
    [Tooltip("The Vector2 to get the values of")]
    public SharedVector2 vector2Value; // 0x2C
    [Tooltip("The Vector2 to set the values of")]
    public SharedVector2 vector2Variable; // 0x30

    // Methods

    // RVA: 0x3D86 Offset: 0x3D86 VA: 0x3D86 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        local_10 = local_8;
        unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
        return;
    }

    // RVA: 0x3D87 Offset: 0x3D87 VA: 0x3D87 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        long uVar2 = default;

        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.vector2Variable = pBVar1;
        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.storeResult = pBVar1;
    }

    // RVA: 0x3D88 Offset: 0x3D88 VA: 0x3D88
    public SetValue()
    {
        unnamed_function_51834(this,0);
    }
}
