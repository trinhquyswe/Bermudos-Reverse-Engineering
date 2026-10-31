// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.SetEnabled.c by tools/c2cs.py
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

public class SetEnabled : Action // TypeDefIndex: 6254
{
    // Fields
    [Tooltip("The Behavior to use")]
    public SharedBehaviour specifiedObject; // 0x2C
    [Tooltip("The enabled/disabled state")]
    public SharedBool enabled; // 0x30

    // Methods

    // RVA: 0x4243 Offset: 0x4243 VA: 0x4243 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        int param2 = default;

        if (Raw.Read<int>(this + 0x2c) == 0) {
            UnityEngine.Debug.LogWarning("SpecifiedObject is null",0);
            return;
        }
        param1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c6c);
        param2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
        UnityEngine.Behaviour.set_enabled(param1,param2,0);
        return;
    }

    // RVA: 0x4244 Offset: 0x4244 VA: 0x4244 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        unnamed_function_61204(this.specifiedObject,0,DAT_ram_00565c70);
        pBVar1 = SharedBool.op_Implicit(false);
        this.enabled = pBVar1;
    }

    // RVA: 0x4245 Offset: 0x4245 VA: 0x4245
    public SetEnabled()
    {
        unnamed_function_51834(this,0);
    }
}
