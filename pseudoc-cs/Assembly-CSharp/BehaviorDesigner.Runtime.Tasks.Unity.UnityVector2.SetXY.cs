// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.SetXY.c by tools/c2cs.py
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

public class SetXY : Action // TypeDefIndex: 5913
{
    // Fields
    [Tooltip("The Vector2 to set the values of")]
    public SharedVector2 vector2Variable; // 0x2C
    [Tooltip("The X value. Set to None to have the value ignored")]
    public SharedFloat xValue; // 0x30
    [Tooltip("The Y value. Set to None to have the value ignored")]
    public SharedFloat yValue; // 0x34

    // Methods

    // RVA: 0x3D89 Offset: 0x3D89 VA: 0x3D89 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float fVar2 = default;
        long local_10 = default;
        float local_8 = default;
        float local_4 = default;

        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(Raw.Read<int>(this + 0x30),0);
        fVar2 = (float)local_8;
        if (iVar1 == 0) {
            fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        }
        iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(Raw.Read<int>(this + 0x34),0);
        if (iVar1 == 0) {
            local_4 = (float)BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        }
        local_10 = CONCAT44(local_4,fVar2);
        local_8 = (float)fVar2;
        unnamed_function_61236(Raw.Read<int>(this + 0x2c),&local_10,DAT_ram_00565d2c);
        return;
    }

    // RVA: 0x3D8A Offset: 0x3D8A VA: 0x3D8A Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar2 = default;
        long uVar3 = default;

        uVar3 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar3;
        this.vector2Variable = pBVar1;
        pBVar2 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar2,0.0,DAT_ram_00565d04);
        this.xValue = pBVar2;
        pBVar2 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(pBVar2,0.0,DAT_ram_00565d04);
        this.yValue = pBVar2;
    }

    // RVA: 0x3D8B Offset: 0x3D8B VA: 0x3D8B
    public SetXY()
    {
        unnamed_function_51834(this,0);
    }
}
