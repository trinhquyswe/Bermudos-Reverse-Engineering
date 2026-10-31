// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.GetEnabled.c by tools/c2cs.py
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

public class GetEnabled : Action // TypeDefIndex: 6252
{
    // Fields
    [Tooltip("The Behavior to use")]
    public SharedBehaviour specifiedObject; // 0x2C
    [RequiredField]
    [Tooltip("The enabled/disabled state")]
    public SharedBool storeValue; // 0x30

    // Methods

    // RVA: 0x423D Offset: 0x423D VA: 0x423D Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param1 = default;

        if (Raw.Read<int>(this + 0x2c) == 0) {
            UnityEngine.Debug.LogWarning("SpecifiedObject is null",0);
            return;
        }
        param1 = Raw.Read<int>(this + 0x30);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c6c);
        uVar1 = UnityEngine.Behaviour.get_enabled(uVar1,0);
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(param1,uVar1,DAT_ram_00565c7c);
        return;
    }

    // RVA: 0x423E Offset: 0x423E VA: 0x423E Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        unnamed_function_61204(this.specifiedObject,0,DAT_ram_00565c70);
        pBVar1 = SharedBool.op_Implicit(false);
        this.storeValue = pBVar1;
    }

    // RVA: 0x423F Offset: 0x423F VA: 0x423F
    public GetEnabled()
    {
        unnamed_function_51834(this,0);
    }
}
