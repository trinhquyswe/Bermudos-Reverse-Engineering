// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Lerp.c by tools/c2cs.py
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

public class Lerp : Action // TypeDefIndex: 5906
{
    // Fields
    [Tooltip("The from value")]
    public SharedVector2 fromVector2; // 0x2C
    [Tooltip("The to value")]
    public SharedVector2 toVector2; // 0x30
    [Tooltip("The amount to lerp")]
    public SharedFloat lerpAmount; // 0x34
    [RequiredField]
    [Tooltip("The lerp resut")]
    public SharedVector2 storeResult; // 0x38

    // Methods

    // RVA: 0x3D77 Offset: 0x3D77 VA: 0x3D77 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        long uVar2 = default;
        float fVar3 = default;
        int param1 = default;
        float fVar4 = default;
        float fVar5 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x38);
        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        uVar2 = local_8;
        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
        fVar1 = (float)((ulong)uVar2 >> 0x20);
        fVar3 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        fVar5 = fVar3;
        if (1.0 <= fVar3) {
            fVar5 = 1.0;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar3) {
            fVar4 = fVar5;
        }
        fVar5 = (float)uVar2;
        local_10 = CONCAT44(((float)((ulong)local_8 >> 0x20) - fVar1) * fVar4 + fVar1, ((float)local_8 - fVar5) * fVar4 + fVar5);
        local_8 = local_10;
        unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
        return;
    }

    // RVA: 0x3D78 Offset: 0x3D78 VA: 0x3D78 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        long uVar2 = default;

        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.fromVector2 = pBVar1;
        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.toVector2 = pBVar1;
        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.storeResult = pBVar1;
        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.lerpAmount = param1;
    }

    // RVA: 0x3D79 Offset: 0x3D79 VA: 0x3D79
    public Lerp()
    {
        unnamed_function_51834(this,0);
    }
}
