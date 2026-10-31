// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsKeyUp.c by tools/c2cs.py
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

public class IsKeyUp : Conditional // TypeDefIndex: 6195
{
    // Fields
    [Tooltip("The key to test")]
    public KeyCode key; // 0x2C

    // Methods

    // RVA: 0x416E Offset: 0x416E VA: 0x416E Slot: 6
    public override TaskStatus OnUpdate()
    {
        unnamed_function_12091(Raw.Read<int>(this + 0x2c),0);
        return;
    }

    // RVA: 0x416F Offset: 0x416F VA: 0x416F Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
    }

    // RVA: 0x4170 Offset: 0x4170 VA: 0x4170
    public IsKeyUp()
    {
        unnamed_function_51834(this,0);
    }
}
