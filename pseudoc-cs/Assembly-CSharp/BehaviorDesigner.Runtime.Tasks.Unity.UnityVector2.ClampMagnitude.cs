// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.ClampMagnitude.c by tools/c2cs.py
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

public class ClampMagnitude : Action // TypeDefIndex: 5897
{
    // Fields
    [Tooltip("The Vector2 to clamp the magnitude of")]
    public SharedVector2 vector2Variable; // 0x2C
    [Tooltip("The max length of the magnitude")]
    public SharedFloat maxLength; // 0x30
    [Tooltip("The clamp magnitude resut")]
    [RequiredField]
    public SharedVector2 storeResult; // 0x34

    // Methods

    // RVA: 0x3D5C Offset: 0x3D5C VA: 0x3D5C Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        int param1 = default;
        float fVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x34);
        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        fVar3 = (float)((ulong)local_8 >> 0x20);
        fVar4 = (float)local_8;
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        fVar2 = fVar4 * fVar4 + fVar3 * fVar3;
        if (fVar1 * fVar1 < fVar2) {
            fVar2 = Mathf.Sqrt(fVar2);
            fVar3 = fVar1 * (fVar3 / fVar2);
            fVar4 = fVar1 * (fVar4 / fVar2);
        }
        local_10 = CONCAT44(fVar3,fVar4);
        local_8 = local_10;
        unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
        return;
    }

    // RVA: 0x3D5D Offset: 0x3D5D VA: 0x3D5D Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        long uVar2 = default;

        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.vector2Variable = pBVar1;
        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.storeResult = pBVar1;
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.maxLength = param1;
    }

    // RVA: 0x3D5E Offset: 0x3D5E VA: 0x3D5E
    public ClampMagnitude()
    {
        unnamed_function_51834(this,0);
    }
}
