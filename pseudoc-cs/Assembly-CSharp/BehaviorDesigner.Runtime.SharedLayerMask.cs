// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.SharedLayerMask.c by tools/c2cs.py
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

public class SharedLayerMask : SharedVariable<LayerMask> // TypeDefIndex: 5810
{
    // Methods

    // RVA: 0x3BD7 Offset: 0x3BD7 VA: 0x3BD7
    public static SharedLayerMask op_Implicit(LayerMask value)
    {
        BehaviorDesigner.Runtime.SharedLayerMask param1 = default;

        param1 = (BehaviorDesigner.Runtime.SharedLayerMask) new BehaviorDesigner_Runtime_SharedLayerMask();
        unnamed_function_61204(param1,value,DAT_ram_00565cc4);
        return param1;
    }

    // RVA: 0x3BD8 Offset: 0x3BD8 VA: 0x3BD8
    public SharedLayerMask()
    {

    }
}
