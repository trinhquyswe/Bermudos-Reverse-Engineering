// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Linecast.c by tools/c2cs.py
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

public class Linecast : Action // TypeDefIndex: 6090
{
    // Fields
    [Tooltip("The starting position of the linecast.")]
    public SharedVector2 startPosition; // 0x2C
    [Tooltip("The ending position of the linecast.")]
    public SharedVector2 endPosition; // 0x30
    [Tooltip("Selectively ignore colliders.")]
    public LayerMask layerMask; // 0x34

    // Methods

    // RVA: 0x4005 Offset: 0x4005 VA: 0x4005 Slot: 6
    public override TaskStatus OnUpdate()
    {
        long uVar1 = default;
        int param4 = default;
        long local_70 = default;
        long local_68 = default;
        long local_60 = default;
        long local_58 = default;
        int local_50 = default;
        long local_48 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        int local_8 = default;

        unnamed_function_61235(&local_28,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        uVar1 = local_28;
        unnamed_function_61235(&local_28,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
        local_38 = local_28;
        param4 = Raw.Read<int>(this + 0x34);
        local_30 = uVar1;
        local_40 = uVar1;
        local_48 = local_38;
        UnityEngine.Physics2D.Linecast(&local_28,&local_40,&local_48,param4,0);
        local_50 = local_8;
        local_58 = local_10;
        local_60 = local_18;
        local_68 = local_20;
        local_70 = local_28;
        UnityEngine.RaycastHit2D.op_Implicit(&local_70,0);
        return;
    }

    // RVA: 0x4006 Offset: 0x4006 VA: 0x4006 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        Vector2 local_20 = default;
        Vector2 local_18 = default;
        Vector2 local_10 = default;
        Vector2 local_8 = default;

        local_18 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        local_8 = local_18;
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) SharedVector2.op_Implicit(&local_18);
        this.startPosition = pBVar1;
        local_20 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        local_10 = local_20;
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) SharedVector2.op_Implicit(&local_20);
        this.endPosition = pBVar1;
        this.layerMask.m_Mask = -1;
    }

    // RVA: 0x4007 Offset: 0x4007 VA: 0x4007
    public Linecast()
    {
        this.layerMask.m_Mask = -1;
        unnamed_function_51834(this,0);
    }
}
