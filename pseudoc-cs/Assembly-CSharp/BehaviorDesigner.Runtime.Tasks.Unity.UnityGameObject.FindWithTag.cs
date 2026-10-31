// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindWithTag.c by tools/c2cs.py
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

public class FindWithTag : Action // TypeDefIndex: 6206
{
    // Fields
    [Tooltip("The tag of the GameObject to find")]
    public SharedString tag; // 0x2C
    [Tooltip("Should a random GameObject be found?")]
    public SharedBool random; // 0x30
    [RequiredField]
    [Tooltip("The object found by name")]
    public SharedGameObject storeValue; // 0x34

    // Methods

    // RVA: 0x418F Offset: 0x418F VA: 0x418F Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        int uVar4 = default;

        iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
        if (iVar1 == 0) {
            uVar4 = Raw.Read<int>(this + 0x34);
            uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
            uVar3 = unnamed_function_44681(uVar3,0);
        }
        else {
            uVar4 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
            iVar1 = UnityEngine.GameObject.FindGameObjectsWithTag(uVar4,0);
            if (iVar1 == 0) {
                return;
            }
            if (Raw.Read<int>(iVar1 + 0xc) == 0) {
                return;
            }
            uVar4 = Raw.Read<int>(this + 0x34);
            iVar2 = unnamed_function_44584(0,Raw.Read<int>(iVar1 + 0xc),0);
            uVar3 = Raw.Read<int>(iVar1 + iVar2 * 4 + 0x10);
        }
        unnamed_function_61204(uVar4,uVar3,DAT_ram_00565ca0);
        uVar4 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565c9c);
        (uVar4 != null);
        return;
    }

    // RVA: 0x4190 Offset: 0x4190 VA: 0x4190 Slot: 16
    public override void OnReset()
    {
        unnamed_function_61204(this.tag,0,DAT_ram_00565d10);
        unnamed_function_61204(this.storeValue,0,DAT_ram_00565ca0);
    }

    // RVA: 0x4191 Offset: 0x4191 VA: 0x4191
    public FindWithTag()
    {
        unnamed_function_51834(this,0);
    }
}
