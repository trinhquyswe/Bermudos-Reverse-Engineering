// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.IsEnabled.c by tools/c2cs.py
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

public class IsEnabled : Conditional // TypeDefIndex: 6253
{
    // Fields
    [Tooltip("The Object to use")]
    public SharedObject specifiedObject; // 0x2C

    // Methods

    // RVA: 0x4240 Offset: 0x4240 VA: 0x4240 Slot: 6
    public override TaskStatus OnUpdate()
    {
        object piVar1 = default; // int*
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x2c);
        if (param1 == 0) {
            piVar1 = (object)unnamed_function_61203(0,DAT_ram_00565cdc);
            if (piVar1 != (object)0x0) {
                if (((uint)Raw.Read<byte>(UnityEngine_Behaviour_TypeInfo + 0xb8) <= (uint)Raw.Read<byte>(*piVar1 + 0xb8) ) && (Raw.Read<int>(Raw.Read<int>(*piVar1 + 100) + (uint)Raw.Read<byte>(UnityEngine_Behaviour_TypeInfo + 0xb8) * 4 + -4) == UnityEngine_Behaviour_TypeInfo)) {
                    param1 = Raw.Read<int>(this + 0x2c);
                    goto code_r0x81a836b5;
                }
            }
            UnityEngine.Debug.LogWarning("SpecifiedObject is null or not a subclass of UnityEngine.Behaviour",0);
            return;
        }
        code_r0x81a836b5: piVar1 = (object)unnamed_function_61203(param1,DAT_ram_00565cdc);
        if (piVar1 == (object)0x0) {
            piVar1 = (object)0x0;
        }
        else if ((uint)Raw.Read<byte>(*piVar1 + 0xb8) < (uint)Raw.Read<byte>(UnityEngine_Behaviour_TypeInfo + 0xb8)) {
            piVar1 = (object)0x0;
        }
        else if (Raw.Read<int>(Raw.Read<int>(*piVar1 + 100) + (uint)Raw.Read<byte>(UnityEngine_Behaviour_TypeInfo + 0xb8) * 4 + -4) != UnityEngine_Behaviour_TypeInfo) {
            piVar1 = (object)0x0;
        }
        UnityEngine.Behaviour.get_enabled(piVar1,0);
        return;
    }

    // RVA: 0x4241 Offset: 0x4241 VA: 0x4241 Slot: 16
    public override void OnReset()
    {
        if (this.specifiedObject != (BehaviorDesigner.Runtime.SharedObject)0x0) {
            unnamed_function_61204(this.specifiedObject,0,DAT_ram_00565ce0);
        }
    }

    // RVA: 0x4242 Offset: 0x4242 VA: 0x4242
    public IsEnabled()
    {
        unnamed_function_51834(this,0);
    }
}
