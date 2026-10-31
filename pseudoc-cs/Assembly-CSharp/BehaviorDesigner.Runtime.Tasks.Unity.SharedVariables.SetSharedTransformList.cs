// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedTransformList.c by tools/c2cs.py
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

public class SetSharedTransformList : Action // TypeDefIndex: 5997
{
    // Fields
    [Tooltip("The value to set the SharedTransformList to.")]
    public SharedTransformList targetValue; // 0x2C
    [RequiredField]
    [Tooltip("The SharedTransformList to set")]
    public SharedTransformList targetVariable; // 0x30

    // Methods

    // RVA: 0x3EAF Offset: 0x3EAF VA: 0x3EAF Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c5c);
        unnamed_function_61204(param1,param2,DAT_ram_00565c60);
        return;
    }

    // RVA: 0x3EB0 Offset: 0x3EB0 VA: 0x3EB0 Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
    }

    // RVA: 0x3EB1 Offset: 0x3EB1 VA: 0x3EB1
    public SetSharedTransformList()
    {
        unnamed_function_51834(this,0);
    }
}
