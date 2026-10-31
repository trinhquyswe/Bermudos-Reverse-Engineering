// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Circlecast.c by tools/c2cs.py
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

public class Circlecast : Action // TypeDefIndex: 6089
{
    // Fields
    [Tooltip("Starts the circlecast at the GameObject's position. If null the originPosition will be used.")]
    public SharedGameObject originGameObject; // 0x2C
    [Tooltip("Starts the circlecast at the position. Only used if originGameObject is null.")]
    public SharedVector2 originPosition; // 0x30
    [Tooltip("The radius of the circlecast")]
    public SharedFloat radius; // 0x34
    [Tooltip("The direction of the circlecast")]
    public SharedVector2 direction; // 0x38
    [Tooltip("The length of the ray. Set to -1 for infinity.")]
    public SharedFloat distance; // 0x3C
    [Tooltip("Selectively ignore colliders.")]
    public LayerMask layerMask; // 0x40
    [Tooltip("Use world or local space. The direction is in world space if no GameObject is specified.")]
    public Space space; // 0x44
    [SharedRequired]
    [Tooltip("Stores the hit object of the circlecast.")]
    public SharedGameObject storeHitObject; // 0x48
    [Tooltip("Stores the hit point of the circlecast.")]
    [SharedRequired]
    public SharedVector2 storeHitPoint; // 0x4C
    [SharedRequired]
    [Tooltip("Stores the hit normal of the circlecast.")]
    public SharedVector2 storeHitNormal; // 0x50
    [SharedRequired]
    [Tooltip("Stores the hit distance of the circlecast.")]
    public SharedFloat storeHitDistance; // 0x54

    // Methods

    // RVA: 0x4002 Offset: 0x4002 VA: 0x4002 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int iVar2 = default;
        float param3 = default;
        float fVar3 = default;
        float param5 = default;
        int param1 = default;
        float local_10 = default;
        long local_a0 = default;
        long local_98 = default;
        long local_80 = default;
        int local_78 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        long local_48 = default;
        int local_40 = default;
        long local_38 = default;
        int local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        int local_8 = default;

        byte[] local_90 = new byte[8];
        byte[] local_88 = new byte[8];
        local_8 = 0;
        _local_10 = 0;
        local_18 = 0;
        local_20 = 0;
        local_28 = 0;
        unnamed_function_61235(&local_60,Raw.Read<int>(this + 0x38),DAT_ram_00565d28);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        iVar2 = (uVar1 != null);
        if (iVar2 == 0) {
            unnamed_function_61235(&local_60,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
        }
        else {
            uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
            uVar1 = UnityEngine.GameObject.get_transform(uVar1,0);
            UnityEngine.Transform.get_position(&local_60,uVar1,0);
            if (Raw.Read<int>(this + 0x44) == 1) {
                uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
                uVar1 = UnityEngine.GameObject.get_transform(uVar1,0);
                unnamed_function_61235(&local_60,Raw.Read<int>(this + 0x38),DAT_ram_00565d28);
                local_30 = 0;
                local_78 = 0;
                local_38 = local_60;
                local_80 = local_60;
                UnityEngine.Transform.TransformDirection(&local_60,uVar1,&local_80,0);
            }
        }
        param3 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        param5 = INFINITY;
        fVar3 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x3c),DAT_ram_00565d00);
        if (fVar3 != -1.0) {
            param5 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x3c),DAT_ram_00565d00);
        }
        uVar1 = Raw.Read<int>(this + 0x40);
        UnityEngine.Physics2D.CircleCast(&local_60,local_88,param3,local_90,param5,uVar1,0);
        local_8 = local_40;
        _local_10 = local_48;
        local_18 = local_50;
        local_20 = local_58;
        local_28 = local_60;
        uVar1 = UnityEngine.RaycastHit2D.get_collider(&local_28,0);
        iVar2 = (uVar1 != null);
        if (iVar2 != 0) {
            param1 = Raw.Read<int>(this + 0x48);
            uVar1 = UnityEngine.RaycastHit2D.get_collider(&local_28,0);
            uVar1 = UnityEngine.Component.get_gameObject(uVar1,0);
            unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
            uVar1 = Raw.Read<int>(this + 0x4c);
            unnamed_function_7470(&local_60,&local_28,0);
            local_98 = local_60;
            unnamed_function_61236(uVar1,&local_98,DAT_ram_00565d2c);
            uVar1 = Raw.Read<int>(this + 0x50);
            unnamed_function_2785(&local_60,&local_28,0);
            local_a0 = local_60;
            unnamed_function_61236(uVar1,&local_a0,DAT_ram_00565d2c);
            BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(Raw.Read<int>(this + 0x54),(float)local_10,DAT_ram_00565d04);
        }
        return;
    }

    // RVA: 0x4003 Offset: 0x4003 VA: 0x4003 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar2 = default;
        Vector2 local_20 = default;
        Vector2 local_18 = default;
        Vector2 local_10 = default;
        Vector2 local_8 = default;

        this.originGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        local_18 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        local_8 = local_18;
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) SharedVector2.op_Implicit(&local_18);
        this.originPosition = pBVar1;
        local_20 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        local_10 = local_20;
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) SharedVector2.op_Implicit(&local_20);
        this.direction = pBVar1;
        pBVar2 = SharedFloat.op_Implicit(0.0);
        this.radius = pBVar2;
        pBVar2 = SharedFloat.op_Implicit(-1.0);
        this.distance = pBVar2;
        this.space = Self;
        this.layerMask.m_Mask = -1;
    }

    // RVA: 0x4004 Offset: 0x4004 VA: 0x4004
    public Circlecast()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(-1.0);
        this.distance = pBVar1;
        this.space = Self;
        this.layerMask.m_Mask = -1;
        unnamed_function_51834(this,0);
    }
}
