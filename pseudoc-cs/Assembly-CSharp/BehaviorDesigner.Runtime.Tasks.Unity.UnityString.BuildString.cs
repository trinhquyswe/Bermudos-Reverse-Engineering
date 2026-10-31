// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityString.BuildString.c by tools/c2cs.py
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

public class BuildString : Action // TypeDefIndex: 5956
{
    // Fields
    [Tooltip("The array of strings")]
    public SharedString[] source; // 0x2C
    [RequiredField]
    [Tooltip("The stored result")]
    public SharedString storeResult; // 0x30

    // Methods

    // RVA: 0x3E2F Offset: 0x3E2F VA: 0x3E2F Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;
        int param2 = default;

        iVar3 = 0;
        if (0 < Raw.Read<int>(Raw.Read<int>(this + 0x2c) + 0xc)) {
            do {
                param1 = Raw.Read<int>(this + 0x30);
                uVar1 = unnamed_function_61203(param1,DAT_ram_00565d0c);
                piVar2 = Raw.Read<object>(Raw.Read<int>(this + 0x2c) + iVar3 * 4 + 0x10);
                if (piVar2 == (object)0x0) {
                    param2 = 0;
                }
                else {
                    param2 = Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0xd8) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 0xdc));
                }
                uVar1 = System.String.Concat(uVar1,param2,0);
                unnamed_function_61204(param1,uVar1,DAT_ram_00565d10);
                iVar3 = iVar3 + 1;
            } while (iVar3 < Raw.Read<int>(Raw.Read<int>(this + 0x2c) + 0xc));
        }
        return;
    }

    // RVA: 0x3E30 Offset: 0x3E30 VA: 0x3E30 Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
    }

    // RVA: 0x3E31 Offset: 0x3E31 VA: 0x3E31
    public BuildString()
    {
        unnamed_function_51834(this,0);
    }
}
