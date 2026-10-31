// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.Find.c by tools/c2cs.py
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

public class Find : Action // TypeDefIndex: 6204
{
    // Fields
    [Tooltip("The GameObject name to find")]
    public SharedString gameObjectName; // 0x2C
    [Tooltip("The object found by name")]
    [RequiredField]
    public SharedGameObject storeValue; // 0x30

    // Methods

    // RVA: 0x4189 Offset: 0x4189 VA: 0x4189 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        uVar1 = UnityEngine.GameObject.Find(uVar1,0);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565c9c);
        (uVar1 != null);
        return;
    }

    // RVA: 0x418A Offset: 0x418A VA: 0x418A Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
    }

    // RVA: 0x418B Offset: 0x418B VA: 0x418B
    public Find()
    {
        unnamed_function_51834(this,0);
    }
}
