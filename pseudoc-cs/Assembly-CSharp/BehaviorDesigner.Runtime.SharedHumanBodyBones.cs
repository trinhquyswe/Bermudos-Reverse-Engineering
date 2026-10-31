// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedHumanBodyBones.c by tools/c2cs.py
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

public class SharedHumanBodyBones : SharedVariable<HumanBodyBones> // TypeDefIndex: 5808
{
    // Methods

    // RVA: 0x3BD3 Offset: 0x3BD3 VA: 0x3BD3
    public static SharedHumanBodyBones op_Implicit(HumanBodyBones value)
    {
        BehaviorDesigner.Runtime.SharedHumanBodyBones param1 = default;

        param1 = (BehaviorDesigner.Runtime.SharedHumanBodyBones) new BehaviorDesigner_Runtime_SharedHumanBodyBones();
        unnamed_function_61204(param1,value,DAT_ram_00565cb0);
        return param1;
    }

    // RVA: 0x3BD4 Offset: 0x3BD4 VA: 0x3BD4
    public SharedHumanBodyBones()
    {

    }
}
