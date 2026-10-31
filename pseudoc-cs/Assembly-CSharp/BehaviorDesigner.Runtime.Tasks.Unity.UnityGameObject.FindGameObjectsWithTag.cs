// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindGameObjectsWithTag.c by tools/c2cs.py
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

public class FindGameObjectsWithTag : Action // TypeDefIndex: 6205
{
    // Fields
    [Tooltip("The tag of the GameObject to find")]
    public SharedString tag; // 0x2C
    [RequiredField]
    [Tooltip("The objects found by name")]
    public SharedGameObjectList storeValue; // 0x30

    // Methods

    // RVA: 0x418C Offset: 0x418C VA: 0x418C Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        int param1 = default;
        uint uVar4 = default;
        int iVar5 = default;

        iVar5 = 0;
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        iVar3 = UnityEngine.GameObject.FindGameObjectsWithTag(uVar2,0);
        if (0 < Raw.Read<int>(iVar3 + 0xc)) {
            do {
                param1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565c44);
                iVar1 = DAT_ram_00563078;
                uVar2 = Raw.Read<int>(iVar3 + iVar5 * 4 + 0x10);
                Raw.Write<int>(param1 + 0x10, Raw.Read<int>(param1 + 0x10) + 1);
                uVar4 = Raw.Read<uint>(param1 + 0xc);
                if (uVar4 < Raw.Read<uint>(Raw.Read<int>(param1 + 8) + 0xc)) {
                    Raw.Write<uint>(param1 + 0xc, uVar4 + 1);
                    Raw.Write<int>(Raw.Read<int>(param1 + 8) + uVar4 * 4 + 0x10, uVar2);
                }
                else {
                    unnamed_function_6534 (param1,uVar2,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar1 + 0x10) + 0x60) + 0x38));
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 < Raw.Read<int>(iVar3 + 0xc));
        }
        return;
    }

    // RVA: 0x418D Offset: 0x418D VA: 0x418D Slot: 16
    public override void OnReset()
    {
        unnamed_function_61204(this.tag,0,DAT_ram_00565d10);
        unnamed_function_61204(this.storeValue,0,DAT_ram_00565c48);
    }

    // RVA: 0x418E Offset: 0x418E VA: 0x418E
    public FindGameObjectsWithTag()
    {
        unnamed_function_51834(this,0);
    }
}
