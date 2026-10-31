// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetXY.c by tools/c2cs.py
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

public class GetXY : Action // TypeDefIndex: 5905
{
    // Fields
    [Tooltip("The Vector2 to get the values of")]
    public SharedVector2 vector2Variable; // 0x2C
    [Tooltip("The X value")]
    [RequiredField]
    public SharedFloat storeX; // 0x30
    [Tooltip("The Y value")]
    [RequiredField]
    public SharedFloat storeY; // 0x34

    // Methods

    // RVA: 0x3D74 Offset: 0x3D74 VA: 0x3D74 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        float local_8 = default;
        float local_4 = default;

        uVar1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar1,(float)local_8,DAT_ram_00565d04);
        uVar1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar1,(float)local_4,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3D75 Offset: 0x3D75 VA: 0x3D75 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        long uVar2 = default;

        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.vector2Variable = pBVar1;
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.storeX = param1;
        this.storeY = param1;
    }

    // RVA: 0x3D76 Offset: 0x3D76 VA: 0x3D76
    public GetXY()
    {
        unnamed_function_51834(this,0);
    }
}
