// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.DrawLine.c by tools/c2cs.py
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

public class DrawLine : Action // TypeDefIndex: 6213
{
    // Fields
    [Tooltip("The start position")]
    public SharedVector3 start; // 0x2C
    [Tooltip("The end position")]
    public SharedVector3 end; // 0x30
    [Tooltip("The color")]
    public SharedColor color; // 0x34
    [Tooltip("Duration the line will be visible for in seconds.\nDefault: 0 means 1 frame.")]
    public SharedFloat duration; // 0x38
    [Tooltip("Whether the line should show through world geometry.")]
    public SharedBool depthTest; // 0x3C

    // Methods

    // RVA: 0x41A4 Offset: 0x41A4 VA: 0x41A4 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float param4 = default;
        int param5 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        int local_48 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        unnamed_function_61245(&local_20,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
        unnamed_function_61197(&local_30,Raw.Read<int>(this + 0x34),DAT_ram_00565c90);
        param4 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x38),DAT_ram_00565d00);
        param5 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x3c),DAT_ram_00565c78);
        local_38 = local_8;
        local_48 = local_18;
        local_58 = local_28;
        local_40 = local_10;
        local_50 = local_20;
        local_60 = local_30;
        UnityEngine.Debug.DrawLine(&local_40,&local_50,&local_60,param4,param5,0);
        return;
    }

    // RVA: 0x41A5 Offset: 0x41A5 VA: 0x41A5 Slot: 16
    public override void OnReset()
    {
        Vector3 pVVar1 = default;
        Color pCVar2 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar3 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar4 = default;
        Color local_60 = default;
        Vector3 local_50 = default;
        Vector3 local_40 = default;
        long local_30 = default;
        long local_28 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_40.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_40._0_8_;
        local_10.z = local_40.z;
        pVVar1 = SharedVector3.op_Implicit(&local_40);
        this.start = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        local_50._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_50.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_20._0_8_ = local_50._0_8_;
        local_20.z = local_50.z;
        pVVar1 = SharedVector3.op_Implicit(&local_50);
        this.end = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
        local_28 = 0x3f8000003f800000;
        local_60.b = 1.0;
        local_60.a = 1.0;
        local_30 = 0x3f8000003f800000;
        local_60.r = 1.0;
        local_60.g = 1.0;
        pCVar2 = SharedColor.op_Implicit(&local_60);
        this.color = (BehaviorDesigner.Runtime.SharedColor)pCVar2;
        pBVar3 = SharedFloat.op_Implicit(0.0);
        this.duration = pBVar3;
        pBVar4 = SharedBool.op_Implicit(true);
        this.depthTest = pBVar4;
    }

    // RVA: 0x41A6 Offset: 0x41A6 VA: 0x41A6
    public DrawLine()
    {
        Color pCVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;
        Color local_20 = default;
        long local_10 = default;
        long local_8 = default;

        local_8 = 0x3f8000003f800000;
        local_20.b = 1.0;
        local_20.a = 1.0;
        local_10 = 0x3f8000003f800000;
        local_20.r = 1.0;
        local_20.g = 1.0;
        pCVar1 = SharedColor.op_Implicit(&local_20);
        this.color = (BehaviorDesigner.Runtime.SharedColor)pCVar1;
        pBVar2 = SharedBool.op_Implicit(true);
        this.depthTest = pBVar2;
        unnamed_function_51834(this,0);
    }
}
