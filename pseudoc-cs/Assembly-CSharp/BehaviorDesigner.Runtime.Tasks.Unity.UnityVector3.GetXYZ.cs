// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetXYZ.c by tools/c2cs.py
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

public class GetXYZ : Action // TypeDefIndex: 5887
{
    // Fields
    [Tooltip("The Vector3 to get the values of")]
    public SharedVector3 vector3Variable; // 0x2C
    [Tooltip("The X value")]
    [RequiredField]
    public SharedFloat storeX; // 0x30
    [RequiredField]
    [Tooltip("The Y value")]
    public SharedFloat storeY; // 0x34
    [RequiredField]
    [Tooltip("The Z value")]
    public SharedFloat storeZ; // 0x38

    // Methods

    // RVA: 0x3D41 Offset: 0x3D41 VA: 0x3D41 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        uVar1 = Raw.Read<int>(this + 0x30);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar1,(float)local_10,DAT_ram_00565d04);
        uVar1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar1,(float)local_c,DAT_ram_00565d04);
        uVar1 = Raw.Read<int>(this + 0x38);
        unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565d38);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar1,(float)local_8,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3D42 Offset: 0x3D42 VA: 0x3D42 Slot: 16
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
        this.vector3Variable = pBVar1;
        pBVar2 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar2,0.0,DAT_ram_00565d04);
        this.storeX = pBVar2;
        pBVar2 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar2,0.0,DAT_ram_00565d04);
        this.storeY = pBVar2;
        pBVar2 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar2,0.0,DAT_ram_00565d04);
        this.storeZ = pBVar2;
    }

    // RVA: 0x3D43 Offset: 0x3D43 VA: 0x3D43
    public GetXYZ()
    {
        unnamed_function_51834(this,0);
    }
}
