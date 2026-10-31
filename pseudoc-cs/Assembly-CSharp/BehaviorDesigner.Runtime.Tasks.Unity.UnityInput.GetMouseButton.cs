// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetMouseButton.c by tools/c2cs.py
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

public class GetMouseButton : Action // TypeDefIndex: 6190
{
    // Fields
    [Tooltip("The index of the button")]
    public SharedInt buttonIndex; // 0x2C
    [RequiredField]
    [Tooltip("The stored result")]
    public SharedBool storeResult; // 0x30

    // Methods

    // RVA: 0x415F Offset: 0x415F VA: 0x415F Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565cb8);
        uVar1 = UnityEngine.Input.GetMouseButton(uVar1,0);
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(param1,uVar1,DAT_ram_00565c7c);
        return;
    }

    // RVA: 0x4160 Offset: 0x4160 VA: 0x4160 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;

        pBVar1 = SharedInt.op_Implicit(0);
        this.buttonIndex = pBVar1;
        pBVar2 = SharedBool.op_Implicit(false);
        this.storeResult = pBVar2;
    }

    // RVA: 0x4161 Offset: 0x4161 VA: 0x4161
    public GetMouseButton()
    {
        unnamed_function_51834(this,0);
    }
}
