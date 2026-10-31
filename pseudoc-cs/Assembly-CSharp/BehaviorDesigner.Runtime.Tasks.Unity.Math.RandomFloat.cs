// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomFloat.c by tools/c2cs.py
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

public class RandomFloat : Action // TypeDefIndex: 6160
{
    // Fields
    [Tooltip("The minimum amount")]
    public SharedFloat min; // 0x2C
    [Tooltip("The maximum amount")]
    public SharedFloat max; // 0x30
    [Tooltip("Is the maximum value inclusive?")]
    public bool inclusive; // 0x34
    [Tooltip("The variable to store the result")]
    public SharedFloat storeResult; // 0x38

    // Methods

    // RVA: 0x40F3 Offset: 0x40F3 VA: 0x40F3 Slot: 6
    public override TaskStatus OnUpdate()
    {
        sbyte cVar1 = default;
        float param1 = default;
        float fVar2 = default;
        int param1_00 = default;

        cVar1 = Raw.Read<sbyte>(this + 0x34);
        param1_00 = Raw.Read<int>(this + 0x38);
        param1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565d00);
        fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        if (cVar1 == '\0') {
            fVar2 = fVar2 + -1e-05;
        }
        fVar2 = UnityEngine.Random.Range(param1,fVar2,0);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1_00,fVar2,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x40F4 Offset: 0x40F4 VA: 0x40F4 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(this.min,0.0,DAT_ram_00565d04);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(this.max,0.0,DAT_ram_00565d04);
        this.inclusive = false;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.storeResult = pBVar1;
    }

    // RVA: 0x40F5 Offset: 0x40F5 VA: 0x40F5
    public RandomFloat()
    {
        unnamed_function_51834(this,0);
    }
}
