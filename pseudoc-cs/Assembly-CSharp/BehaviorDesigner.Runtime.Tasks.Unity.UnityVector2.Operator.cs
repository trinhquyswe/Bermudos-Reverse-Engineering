// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Operator.c by tools/c2cs.py
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

public class Operator : Action // TypeDefIndex: 5911
{
    // Fields
    [Tooltip("The operation to perform")]
    public Operator.Operation operation; // 0x2C
    [Tooltip("The first Vector2")]
    public SharedVector2 firstVector2; // 0x30
    [Tooltip("The second Vector2")]
    public SharedVector2 secondVector2; // 0x34
    [Tooltip("The variable to store the result")]
    public SharedVector2 storeResult; // 0x38

    // Methods

    // RVA: 0x3D83 Offset: 0x3D83 VA: 0x3D83 Slot: 6
    public override TaskStatus OnUpdate()
    {
        long uVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        iVar2 = Raw.Read<int>(this + 0x2c);
        if (iVar2 == 0) {
            uVar3 = Raw.Read<int>(this + 0x38);
            unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
            uVar1 = local_8;
            unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x34),DAT_ram_00565d28);
            local_20 = CONCAT44((float)((ulong)uVar1 >> 0x20) + (float)((ulong)local_8 >> 0x20), (float)uVar1 + (float)local_8);
            local_8 = local_20;
            unnamed_function_61236(uVar3,&local_20,DAT_ram_00565d2c);
        }
        else if (iVar2 == 1) {
            uVar3 = Raw.Read<int>(this + 0x38);
            unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
            uVar1 = local_8;
            unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x34),DAT_ram_00565d28);
            local_18 = CONCAT44((float)((ulong)uVar1 >> 0x20) - (float)((ulong)local_8 >> 0x20), (float)uVar1 - (float)local_8);
            local_8 = local_18;
            unnamed_function_61236(uVar3,&local_18,DAT_ram_00565d2c);
        }
        else if (iVar2 == 2) {
            uVar3 = Raw.Read<int>(this + 0x38);
            unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x30),DAT_ram_00565d28);
            uVar1 = local_8;
            unnamed_function_61235(&local_8,Raw.Read<int>(this + 0x34),DAT_ram_00565d28);
            local_10 = CONCAT44((float)((ulong)uVar1 >> 0x20) * (float)((ulong)local_8 >> 0x20), (float)uVar1 * (float)local_8);
            local_8 = local_10;
            unnamed_function_61236(uVar3,&local_10,DAT_ram_00565d2c);
        }
        return;
    }

    // RVA: 0x3D84 Offset: 0x3D84 VA: 0x3D84 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedVector2 pBVar1 = default;
        long uVar2 = default;

        this.operation = Add;
        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.firstVector2 = pBVar1;
        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.secondVector2 = pBVar1;
        uVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        pBVar1 = (BehaviorDesigner.Runtime.SharedVector2) new BehaviorDesigner_Runtime_SharedVector2();
        *(object)&pBVar1[4].monitor = uVar2;
        this.storeResult = pBVar1;
    }

    // RVA: 0x3D85 Offset: 0x3D85 VA: 0x3D85
    public Operator()
    {
        unnamed_function_51834(this,0);
    }
}
