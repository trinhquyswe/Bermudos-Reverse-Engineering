// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.MoveTowards.c by tools/c2cs.py
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

public class MoveTowards : Action // TypeDefIndex: 5907
{
    // Fields
    [Tooltip("The current position")]
    public SharedVector2 currentPosition; // 0x2C
    [Tooltip("The target position")]
    public SharedVector2 targetPosition; // 0x30
    [Tooltip("The movement speed")]
    public SharedFloat speed; // 0x34
    [RequiredField]
    [Tooltip("The move resut")]
    public SharedVector2 storeResult; // 0x38

    // Methods

    // RVA: 0x3D7A Offset: 0x3D7A VA: 0x3D7A Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        long uVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        int param1 = default;
        float fVar6 = default;
        float fVar7 = default;
        float fVar8 = default;
        float fVar9 = default;
        float fVar10 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = Raw.Read<int>(this + 0x38);
        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x2c),DAT_ram_00565d28);
        uVar3 = local_8;
        unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
        fVar4 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        fVar5 = UnityEngine.Time.get_deltaTime(0);
        fVar8 = (float)((ulong)local_8 >> 0x20);
        fVar9 = (float)local_8;
        fVar1 = (float)uVar3;
        fVar6 = fVar9 - fVar1;
        fVar2 = (float)((ulong)uVar3 >> 0x20);
        fVar10 = fVar8 - fVar2;
        fVar7 = fVar6 * fVar6 + fVar10 * fVar10;
        if ((fVar7 != 0.0) && (fVar4 = fVar4 * fVar5, fVar4 < 0.0 || fVar4 * fVar4 < fVar7)) {
            fVar8 = fVar4 * (fVar10 / Mathf.Sqrt(fVar7)) + fVar2;
            fVar9 = fVar4 * (fVar6 / Mathf.Sqrt(fVar7)) + fVar1;
        }
        local_10 = CONCAT44(fVar8,fVar9);
        local_8 = local_10;
        unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
        return;
    }

    // RVA: 0x3D7B Offset: 0x3D7B VA: 0x3D7B Slot: 16
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

    // RVA: 0x3D7C Offset: 0x3D7C VA: 0x3D7C
    public MoveTowards()
    {
        unnamed_function_51834(this,0);
    }
}
