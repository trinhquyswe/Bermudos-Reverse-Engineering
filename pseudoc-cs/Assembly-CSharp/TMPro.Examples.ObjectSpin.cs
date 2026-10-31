// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.ObjectSpin.c by tools/c2cs.py
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

public class ObjectSpin : MonoBehaviour // TypeDefIndex: 5757
{
    // Fields
    public float SpinSpeed; // 0x10
    public int RotationRange; // 0x14
    private Transform m_transform; // 0x18
    private float m_time; // 0x1C
    private Vector3 m_prevPOS; // 0x20
    private Vector3 m_initial_Rotation; // 0x2C
    private Vector3 m_initial_Position; // 0x38
    private Color32 m_lightColor; // 0x44
    private int frames; // 0x48
    public ObjectSpin.MotionType Motion; // 0x4C

    // Methods

    // RVA: 0x3B00 Offset: 0x3B00 VA: 0x3B00
    private void Awake()
    {
        float fVar1 = default;
        float fVar2 = default;
        RuleTile_TilingRuleOutput_Transform param2 = default;
        int param1 = default;
        int iVar3 = default;
        float local_30 = default;
        float local_28 = default;
        long local_70 = default;
        long local_68 = default;
        long local_60 = default;
        float local_58 = default;
        float local_40 = default;
        float local_3c = default;
        float local_38 = default;
        float local_34 = default;
        float local_20 = default;
        float local_1c = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        byte[] local_50 = new byte[16];
        fVar1 = 0.0;
        fVar2 = 0.0;
        param2 = UnityEngine.Component.get_transform(this,0);
        this.m_transform = param2;
        UnityEngine.Transform.get_rotation(&local_30,param2,0);
        UnityEngine.Quaternion.Internal_ToEulerRad(&local_10,local_50,0);
        local_58 = (float)local_8 * 57.29578;
        local_1c = (float)((float)local_c * 57.29578);
        local_20 = (float)((float)local_10 * 57.29578);
        local_60 = CONCAT44(local_1c,local_20);
        local_18 = (float)local_58;
        UnityEngine.Quaternion.Internal_MakePositive(&local_10,&local_60,0);
        this.m_initial_Rotation.z = (float)local_8;
        this.m_initial_Rotation.x = (float)local_10;
        this.m_initial_Rotation.y = (float)local_c;
        UnityEngine.Transform.get_position(&local_20,this.m_transform,0);
        this.m_initial_Position.z = (float)local_18;
        this.m_initial_Position.x = (float)local_20;
        this.m_initial_Position.y = (float)local_1c;
        param1 = UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ec4);
        iVar3 = (param1 != null);
        if (iVar3 == 0) {
            local_28 = 1.0;
            local_28 = 0.0;
        }
        else {
            UnityEngine.Light.get_color(&local_30,param1,0);
            fVar1 = local_30;
            fVar2 = local_30;
        }
        local_68 = CONCAT44(local_28,local_28);
        local_70 = CONCAT44(fVar1,fVar2);
        local_40 = fVar2;
        local_3c = fVar1;
        local_38 = local_28;
        local_34 = local_28;
        UnityEngine.Color32.op_Implicit(&local_30,&local_70,0);
        this.m_lightColor = (UnityEngine.Color32)local_30;
    }

    // RVA: 0x3B01 Offset: 0x3B01 VA: 0x3B01
    private void Update()
    {
        float fVar1 = default;
        RuleTile_TilingRuleOutput_Transform RVar2 = default;
        int iVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        long local_60 = default;
        float local_58 = default;
        long local_40 = default;
        float local_38 = default;
        float local_30 = default;
        float local_2c = default;
        float local_28 = default;
        long local_20 = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        long[] local_50 = new long[2];
        if (this.Motion == Rotation) {
            RVar2 = this.m_transform;
            fVar5 = this.SpinSpeed;
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            UnityEngine.Transform.Rotate(RVar2,0.0,fVar5 * fVar1,0.0,0);
        }
        else if (this.Motion == BackAndForth) {
            fVar4 = this.m_time;
            fVar5 = this.SpinSpeed;
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            fVar4 = fVar4 + fVar5 * fVar1;
            this.m_time = fVar4;
            fVar5 = this.m_initial_Rotation.y;
            RVar2 = this.m_transform;
            iVar3 = this.RotationRange;
            local_38 = this.m_initial_Rotation.z * 0.017453292;
            local_10 = (float)(this.m_initial_Rotation.x * 0.017453292);
            local_8 = (float)local_38;
            fVar1 = unnamed_function_12076(fVar4);
            local_c = (float)((fVar5 + fVar1 * (float)iVar3) * 0.017453292);
            local_40 = CONCAT44(local_c,local_10);
            UnityEngine.Quaternion.Internal_FromEulerRad(&local_20,&local_40,0);
            local_50[0] = local_20;
            unnamed_function_44967(RVar2,local_50,0);
        }
        else {
            fVar4 = this.m_time;
            fVar5 = this.SpinSpeed;
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            fVar4 = fVar4 + fVar5 * fVar1;
            this.m_time = fVar4;
            RVar2 = this.m_transform;
            fVar5 = this.m_initial_Position.x;
            local_58 = this.m_initial_Position.z + 10.0;
            local_2c = (float)(this.m_initial_Position.y + 0.0);
            local_28 = (float)local_58;
            fVar1 = unnamed_function_12075(fVar4 * 0.95);
            local_30 = (float)(fVar5 + fVar1 * 15.0);
            local_60 = CONCAT44(local_2c,local_30);
            unnamed_function_44962(RVar2,&local_60,0);
            UnityEngine.Transform.get_position(&local_20,this.m_transform,0);
            this.m_prevPOS.z = local_18;
            this.m_prevPOS.x = (float)(int)local_20;
            this.m_prevPOS.y = (float)local_20._4_4_;
            this.frames = this.frames + 1;
        }
    }

    // RVA: 0x3B02 Offset: 0x3B02 VA: 0x3B02
    public ObjectSpin()
    {
        this.SpinSpeed = 5.0;
        this.RotationRange = 0xf;
        unnamed_function_44622(this,0);
    }
}
