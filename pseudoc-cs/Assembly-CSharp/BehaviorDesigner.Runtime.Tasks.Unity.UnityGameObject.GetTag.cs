// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.GetTag.c by tools/c2cs.py
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

public class GetTag : Action // TypeDefIndex: 6208
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("Active state of the GameObject")]
    [RequiredField]
    public SharedString storeValue; // 0x30

    // Methods

    // RVA: 0x4195 Offset: 0x4195 VA: 0x4195 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        uVar1 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar1,0);
        uVar1 = UnityEngine.GameObject.get_tag(uVar1,0);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565d10);
        return;
    }

    // RVA: 0x4196 Offset: 0x4196 VA: 0x4196 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedString.op_Implicit("");
        this.storeValue = pBVar1;
    }

    // RVA: 0x4197 Offset: 0x4197 VA: 0x4197
    public GetTag()
    {
        unnamed_function_51834(this,0);
    }
}
