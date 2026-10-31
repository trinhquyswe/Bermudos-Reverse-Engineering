// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityTime.GetRealtimeSinceStartup.c by tools/c2cs.py
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

public class GetRealtimeSinceStartup : Action // TypeDefIndex: 5952
{
    // Fields
    [Tooltip("The variable to store the result")]
    public SharedFloat storeResult; // 0x2C

    // Methods

    // RVA: 0x3E23 Offset: 0x3E23 VA: 0x3E23 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float param2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        param2 = UnityEngine.Time.get_realtimeSinceStartup(0);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,param2,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3E24 Offset: 0x3E24 VA: 0x3E24 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat param1 = default;

        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.0,DAT_ram_00565d04);
        this.storeResult = param1;
    }

    // RVA: 0x3E25 Offset: 0x3E25 VA: 0x3E25
    public GetRealtimeSinceStartup()
    {
        unnamed_function_51834(this,0);
    }
}
