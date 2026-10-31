// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetKey.c by tools/c2cs.py
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

public class GetKey : Action // TypeDefIndex: 6189
{
    // Fields
    [Tooltip("The key to test.")]
    public KeyCode key; // 0x2C
    [Tooltip("The stored result")]
    [RequiredField]
    public SharedBool storeResult; // 0x30

    // Methods

    // RVA: 0x415C Offset: 0x415C VA: 0x415C Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        param2 = unnamed_function_12090(Raw.Read<int>(this + 0x2c),0);
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(param1,param2,DAT_ram_00565c7c);
        return;
    }

    // RVA: 0x415D Offset: 0x415D VA: 0x415D Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedBool.op_Implicit(false);
        this.storeValue = pBVar1;
    }

    // RVA: 0x415E Offset: 0x415E VA: 0x415E
    public GetKey()
    {
        unnamed_function_51834(this,0);
    }
}
