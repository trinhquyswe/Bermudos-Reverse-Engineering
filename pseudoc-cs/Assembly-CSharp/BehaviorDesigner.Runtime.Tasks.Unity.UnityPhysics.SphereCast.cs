// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.SphereCast.c by tools/c2cs.py
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

public class SphereCast : Action // TypeDefIndex: 6094
{
    // Fields
    [Tooltip("Starts the spherecast at the GameObject's position. If null the originPosition will be used")]
    public SharedGameObject originGameObject; // 0x2C
    [Tooltip("Starts the sherecast at the position. Only used if originGameObject is null")]
    public SharedVector3 originPosition; // 0x30
    [Tooltip("The radius of the spherecast")]
    public SharedFloat radius; // 0x34
    [Tooltip("The direction of the spherecast")]
    public SharedVector3 direction; // 0x38
    [Tooltip("The length of the spherecast. Set to -1 for infinity")]
    public SharedFloat distance; // 0x3C
    [Tooltip("Selectively ignore colliders")]
    public LayerMask layerMask; // 0x40
    [Tooltip("Use world or local space. The direction is in world space if no GameObject is specified")]
    public Space space; // 0x44
    [SharedRequired]
    [Tooltip("Stores the hit object of the spherecast")]
    public SharedGameObject storeHitObject; // 0x48
    [SharedRequired]
    [Tooltip("Stores the hit point of the spherecast")]
    public SharedVector3 storeHitPoint; // 0x4C
    [Tooltip("Stores the hit normal of the spherecast")]
    [SharedRequired]
    public SharedVector3 storeHitNormal; // 0x50
    [SharedRequired]
    [Tooltip("Stores the hit distance of the spherecast")]
    public SharedFloat storeHitDistance; // 0x54

    // Methods

    // RVA: 0x4011 Offset: 0x4011 VA: 0x4011 Slot: 6
    public override TaskStatus OnUpdate()
    {
        object puVar1 = default; // long*
        int uVar2 = default;
        int iVar3 = default;
        float param2 = default;
        float fVar4 = default;
        int param1 = default;
        object puVar5 = default; // long*
        long local_120 = default;
        int local_118 = default;
        long local_110 = default;
        int local_108 = default;
        long local_100 = default;
        int local_f8 = default;
        long local_f0 = default;
        int local_e8 = default;
        long local_e0 = default;
        int local_d8 = default;
        long local_d0 = default;
        int local_c8 = default;
        long local_c0 = default;
        int local_b8 = default;
        long local_b0 = default;
        int local_a8 = default;
        long local_a0 = default;
        int local_98 = default;
        long local_90 = default;
        int local_88 = default;
        long local_80 = default;
        int local_78 = default;
        long local_70 = default;
        int local_68 = default;
        long local_60 = default;
        int local_58 = default;
        long local_50 = default;
        long local_48 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        local_8 = 0;
        local_10 = 0;
        local_28 = 0;
        local_30 = 0;
        local_38 = 0;
        local_40 = 0;
        local_48 = 0;
        local_50 = 0;
        local_58 = 0;
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = 0;
        local_b0 = 0;
        unnamed_function_61245(&local_c0,Raw.Read<int>(this + 0x38),DAT_ram_00565d38);
        local_18 = local_b8;
        local_20 = local_c0;
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        iVar3 = (uVar2 != null);
        if (iVar3 == 0) {
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
        }
        else {
            uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
            uVar2 = UnityEngine.GameObject.get_transform(uVar2,0);
            UnityEngine.Transform.get_position(&local_10,uVar2,0);
            if (Raw.Read<int>(this + 0x44) == 1) {
                uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
                uVar2 = UnityEngine.GameObject.get_transform(uVar2,0);
                unnamed_function_61245(&local_c0,Raw.Read<int>(this + 0x38),DAT_ram_00565d38);
                local_d8 = local_b8;
                local_e0 = local_c0;
                UnityEngine.Transform.TransformDirection(&local_20,uVar2,&local_e0,0);
            }
        }
        local_b8 = local_8;
        local_c0 = local_10;
        param2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        local_c8 = local_18;
        local_d0 = local_20;
        fVar4 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x3c),DAT_ram_00565d00);
        if (fVar4 == -1.0) {
            local_58 = local_c8;
            local_68 = local_b8;
            local_60 = local_d0;
            local_70 = local_c0;
            fVar4 = INFINITY;
            puVar1 = &local_70;
            puVar5 = &local_60;
        }
        else {
            local_78 = local_c8;
            local_88 = local_b8;
            local_80 = local_d0;
            local_90 = local_c0;
            puVar1 = &local_90;
            fVar4 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x3c),DAT_ram_00565d00);
            puVar5 = &local_80;
        }
        local_98 = Raw.Read<int>(puVar5 + 1);
        local_a0 = *puVar5;
        local_a8 = Raw.Read<int>(puVar1 + 1);
        local_b0 = *puVar1;
        uVar2 = Raw.Read<int>(this + 0x40);
        local_e8 = local_a8;
        local_f8 = local_98;
        local_f0 = local_b0;
        local_100 = local_a0;
        iVar3 = UnityEngine.Physics.SphereCast(&local_f0,param2,&local_100,&local_50,fVar4,uVar2,0);
        if (iVar3 != 0) {
            param1 = Raw.Read<int>(this + 0x48);
            uVar2 = UnityEngine.RaycastHit.get_collider(&local_50,0);
            uVar2 = UnityEngine.Component.get_gameObject(uVar2,0);
            unnamed_function_61204(param1,uVar2,DAT_ram_00565ca0);
            uVar2 = Raw.Read<int>(this + 0x4c);
            unnamed_function_15207(&local_c0,&local_50,0);
            local_108 = local_b8;
            local_110 = local_c0;
            unnamed_function_61246(uVar2,&local_110,DAT_ram_00565d3c);
            uVar2 = Raw.Read<int>(this + 0x50);
            unnamed_function_1487(&local_d0,&local_50,0);
            local_118 = local_c8;
            local_120 = local_d0;
            unnamed_function_61246(uVar2,&local_120,DAT_ram_00565d3c);
            BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(Raw.Read<int>(this + 0x54),local_38._4_4_,DAT_ram_00565d04);
        }
        return;
    }

    // RVA: 0x4012 Offset: 0x4012 VA: 0x4012 Slot: 16
    public override void OnReset()
    {
        Vector3 pVVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar2 = default;
        Vector3 local_40 = default;
        Vector3 local_30 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        this.originGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_30.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_30._0_8_;
        local_10.z = local_30.z;
        pVVar1 = SharedVector3.op_Implicit(&local_30);
        this.originPosition = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        pBVar2 = SharedFloat.op_Implicit(0.0);
        this.radius = pBVar2;
        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_40.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_20._0_8_ = local_40._0_8_;
        local_20.z = local_40.z;
        pVVar1 = SharedVector3.op_Implicit(&local_40);
        this.direction = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        pBVar2 = SharedFloat.op_Implicit(-1.0);
        this.distance = pBVar2;
        this.space = Self;
        this.layerMask.m_Mask = -1;
    }

    // RVA: 0x4013 Offset: 0x4013 VA: 0x4013
    public SphereCast()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(-1.0);
        this.distance = pBVar1;
        this.space = Self;
        this.layerMask.m_Mask = -1;
        unnamed_function_51834(this,0);
    }
}
