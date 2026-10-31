// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.GetComponent.c by tools/c2cs.py
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

public class GetComponent : Action // TypeDefIndex: 6207
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The type of component")]
    public SharedString type; // 0x30
    [RequiredField]
    [Tooltip("The component")]
    public SharedObject storeValue; // 0x34

    // Methods

    // RVA: 0x4192 Offset: 0x4192 VA: 0x4192 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x34);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        uVar1 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar1,0);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar1 = unnamed_function_44676(uVar1,param2,0);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565ce0);
        return;
    }

    // RVA: 0x4193 Offset: 0x4193 VA: 0x4193 Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        unnamed_function_61204(this.type,"",DAT_ram_00565d10);
        unnamed_function_61204(this.storeValue,0,DAT_ram_00565ce0);
    }

    // RVA: 0x4194 Offset: 0x4194 VA: 0x4194
    public GetComponent()
    {
        unnamed_function_51834(this,0);
    }
}
