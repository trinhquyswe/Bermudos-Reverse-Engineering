// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedTransformList.c by tools/c2cs.py
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

public class SharedTransformList : SharedVariable<List<Transform>> // TypeDefIndex: 5818
{
    // Methods

    // RVA: 0x3BE7 Offset: 0x3BE7 VA: 0x3BE7
    public SharedTransformList()
    {
        object param1 = default; // object*

        param1 = (object)new System_Collections_Generic_List_Transform_();
        unnamed_function_5132(param1,DAT_ram_00563fb8);
        this[4].monitor = param1;
    }

    // RVA: 0x3BE8 Offset: 0x3BE8 VA: 0x3BE8
    public static SharedTransformList op_Implicit(List<Transform> value)
    {
        BehaviorDesigner.Runtime.SharedTransformList pBVar1 = default;
        int param1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedTransformList) new BehaviorDesigner_Runtime_SharedTransformList();
        param1 = new System_Collections_Generic_List_Transform_();
        unnamed_function_5132(param1,DAT_ram_00563fb8);
        pBVar1[4].monitor = value;
        return pBVar1;
    }
}
