// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogValue.c by tools/c2cs.py
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

public class LogValue : Action // TypeDefIndex: 6216
{
    // Fields
    [Tooltip("The variable to output")]
    public SharedGenericVariable variable; // 0x2C

    // Methods

    // RVA: 0x41AF Offset: 0x41AF VA: 0x41AF Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param1 = default;
        int iVar2 = default;

        iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565ca8);
        iVar2 = Raw.Deref(Raw.Read<object>(iVar1 + 0xc));
        param1 = Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(iVar1 + 0xc),Raw.Read<int>(iVar2 + 0xec));
        UnityEngine.Debug.Log(param1,0);
        return;
    }

    // RVA: 0x41B0 Offset: 0x41B0 VA: 0x41B0 Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
    }

    // RVA: 0x41B1 Offset: 0x41B1 VA: 0x41B1
    public LogValue()
    {
        unnamed_function_51834(this,0);
    }
}
