// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.SetXYZ.c by tools/c2cs.py
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

public class SetXYZ : Action // TypeDefIndex: 5896
{
    // Fields
    [Tooltip("The Vector3 to set the values of")]
    public SharedVector3 vector3Variable; // 0x2C
    [Tooltip("The X value. Set to None to have the value ignored")]
    public SharedFloat xValue; // 0x30
    [Tooltip("The Y value. Set to None to have the value ignored")]
    public SharedFloat yValue; // 0x34
    [Tooltip("The Z value. Set to None to have the value ignored")]
    public SharedFloat zValue; // 0x38

    // Methods

    // RVA: 0x3D59 Offset: 0x3D59 VA: 0x3D59 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        long local_20 = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(Raw.Read<int>(this + 0x30),0);
        fVar2 = (float)local_10;
        if (iVar1 == 0) {
            fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        }
        iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(Raw.Read<int>(this + 0x34),0);
        fVar3 = (float)local_c;
        if (iVar1 == 0) {
            fVar3 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        }
        iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(Raw.Read<int>(this + 0x38),0);
        if (iVar1 == 0) {
            local_8 = (float)BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x38),DAT_ram_00565d00);
        }
        local_20 = CONCAT44(fVar3,fVar2);
        local_18 = (float)local_8;
        local_10 = (float)fVar2;
        local_c = (float)fVar3;
        unnamed_function_61246(Raw.Read<int>(this + 0x2c),&local_20,DAT_ram_00565d3c);
        return;
    }

    // RVA: 0x3D5A Offset: 0x3D5A VA: 0x3D5A Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        object pvVar2 = default; // object*
        long uVar3 = default;

        pvVar2 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar2;
        *(object)&pBVar1[4].monitor = uVar3;
        this.vector3Variable = pBVar1;
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.yValue = param1;
        this.zValue = param1;
        this.xValue = param1;
    }

    // RVA: 0x3D5B Offset: 0x3D5B VA: 0x3D5B
    public SetXYZ()
    {
        unnamed_function_51834(this,0);
    }
}
