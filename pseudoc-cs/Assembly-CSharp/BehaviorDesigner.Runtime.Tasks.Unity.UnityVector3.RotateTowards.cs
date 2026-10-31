// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.RotateTowards.c by tools/c2cs.py
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

public class RotateTowards : Action // TypeDefIndex: 5894
{
    // Fields
    [Tooltip("The current rotation in euler angles")]
    public SharedVector3 currentRotation; // 0x2C
    [Tooltip("The target rotation in euler angles")]
    public SharedVector3 targetRotation; // 0x30
    [Tooltip("The maximum delta of the degrees")]
    public SharedFloat maxDegreesDelta; // 0x34
    [Tooltip("The maximum delta of the magnitude")]
    public SharedFloat maxMagnitudeDelta; // 0x38
    [Tooltip("The rotation resut")]
    [RequiredField]
    public SharedVector3 storeResult; // 0x3C

    // Methods

    // RVA: 0x3D53 Offset: 0x3D53 VA: 0x3D53 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        float param5 = default;
        int param1 = default;
        long local_60 = default;
        int local_58 = default;
        long local_50 = default;
        int local_48 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        param1 = Raw.Read<int>(this + 0x3c);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        unnamed_function_61245(&local_20,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        fVar2 = UnityEngine.Time.get_deltaTime(0);
        param5 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x38),DAT_ram_00565d00);
        local_38 = local_8;
        local_48 = local_18;
        local_40 = local_10;
        local_50 = local_20;
        UnityEngine.Vector3.RotateTowards(&local_30,&local_40,&local_50,fVar2 * fVar1 * 0.017453292,param5,0);
        local_58 = local_28;
        local_60 = local_30;
        unnamed_function_61246(param1,&local_60,DAT_ram_00565d3c);
        return;
    }

    // RVA: 0x3D54 Offset: 0x3D54 VA: 0x3D54 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector3 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar2 = default;
        object pvVar3 = default; // object*
        long uVar4 = default;

        pvVar3 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar4 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar3;
        *(object)&pBVar1[4].monitor = uVar4;
        this.currentRotation = pBVar1;
        pvVar3 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar4 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar3;
        *(object)&pBVar1[4].monitor = uVar4;
        this.targetRotation = pBVar1;
        pvVar3 = Raw.Read<object>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        uVar4 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector3) new BehaviorDesigner_Runtime_SharedVector3();
        pBVar1[5].monitor = pvVar3;
        *(object)&pBVar1[4].monitor = uVar4;
        this.storeResult = pBVar1;
        pBVar2 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar2,0.0,DAT_ram_00565d04);
        this.maxDegreesDelta = pBVar2;
        pBVar2 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar2,0.0,DAT_ram_00565d04);
        this.maxMagnitudeDelta = pBVar2;
    }

    // RVA: 0x3D55 Offset: 0x3D55 VA: 0x3D55
    public RotateTowards()
    {
        unnamed_function_51834(this,0);
    }
}
