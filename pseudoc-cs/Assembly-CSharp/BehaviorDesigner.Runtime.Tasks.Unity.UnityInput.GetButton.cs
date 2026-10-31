// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetButton.c by tools/c2cs.py
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

public class GetButton : Action // TypeDefIndex: 6188
{
    // Fields
    [Tooltip("The name of the button")]
    public SharedString buttonName; // 0x2C
    [RequiredField]
    [Tooltip("The stored result")]
    public SharedBool storeResult; // 0x30

    // Methods

    // RVA: 0x4159 Offset: 0x4159 VA: 0x4159 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        uVar1 = unnamed_function_12087(uVar1,0);
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(param1,uVar1,DAT_ram_00565c7c);
        return;
    }

    // RVA: 0x415A Offset: 0x415A VA: 0x415A Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;

        pBVar1 = SharedString.op_Implicit("Fire1");
        this.buttonName = pBVar1;
        pBVar2 = SharedBool.op_Implicit(false);
        this.storeResult = pBVar2;
    }

    // RVA: 0x415B Offset: 0x415B VA: 0x415B
    public GetButton()
    {
        unnamed_function_51834(this,0);
    }
}
