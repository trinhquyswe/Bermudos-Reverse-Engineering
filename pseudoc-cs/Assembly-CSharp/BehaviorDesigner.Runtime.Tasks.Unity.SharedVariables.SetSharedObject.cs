// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedObject.c by tools/c2cs.py
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

public class SetSharedObject : Action // TypeDefIndex: 5991
{
    // Fields
    [Tooltip("The value to set the SharedObject to")]
    public SharedObject targetValue; // 0x2C
    [Tooltip("The SharedTransform to set")]
    [RequiredField]
    public SharedObject targetVariable; // 0x30

    // Methods

    // RVA: 0x3E9D Offset: 0x3E9D VA: 0x3E9D Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565cdc);
        unnamed_function_61204(param1,param2,DAT_ram_00565ce0);
        return;
    }

    // RVA: 0x3E9E Offset: 0x3E9E VA: 0x3E9E Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
    }

    // RVA: 0x3E9F Offset: 0x3E9F VA: 0x3E9F
    public SetSharedObject()
    {
        unnamed_function_51834(this,0);
    }
}
