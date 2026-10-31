// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetFloat.c by tools/c2cs.py
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

public class GetFloat : Action // TypeDefIndex: 6081
{
    // Fields
    [Tooltip("The key to store")]
    public SharedString key; // 0x2C
    [Tooltip("The default value")]
    public SharedFloat defaultValue; // 0x30
    [Tooltip("The value retrieved from the PlayerPrefs")]
    [RequiredField]
    public SharedFloat storeResult; // 0x34

    // Methods

    // RVA: 0x3FEB Offset: 0x3FEB VA: 0x3FEB Slot: 6
    public override TaskStatus OnUpdate()
    {
        int param1 = default;
        float fVar1 = default;
        int param1_00 = default;

        param1_00 = Raw.Read<int>(this + 0x34);
        param1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        fVar1 = UnityEngine.PlayerPrefs.GetFloat(param1,fVar1,0);
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1_00,fVar1,DAT_ram_00565d04);
        return;
    }

    // RVA: 0x3FEC Offset: 0x3FEC VA: 0x3FEC Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat pBVar2 = default;

        pBVar1 = SharedString.op_Implicit("");
        this.key = pBVar1;
        pBVar2 = SharedFloat.op_Implicit(0.0);
        this.defaultValue = pBVar2;
        pBVar2 = SharedFloat.op_Implicit(0.0);
        this.storeResult = pBVar2;
    }

    // RVA: 0x3FED Offset: 0x3FED VA: 0x3FED
    public GetFloat()
    {
        unnamed_function_51834(this,0);
    }
}
