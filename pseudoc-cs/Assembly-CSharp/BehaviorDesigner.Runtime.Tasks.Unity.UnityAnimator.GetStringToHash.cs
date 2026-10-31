// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetStringToHash.c by tools/c2cs.py
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

public class GetStringToHash : Action // TypeDefIndex: 6300
{
    // Fields
    [Tooltip("The name of the state to convert to a hash code")]
    public SharedString stateName; // 0x2C
    [RequiredField]
    [Tooltip("The hash value")]
    public SharedInt storeValue; // 0x30

    // Methods

    // RVA: 0x42FA Offset: 0x42FA VA: 0x42FA Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        uVar1 = UnityEngine.Animator.StringToHash(uVar1,0);
        unnamed_function_61204(param1,uVar1,DAT_ram_00565cbc);
        return;
    }

    // RVA: 0x42FB Offset: 0x42FB VA: 0x42FB Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedInt pBVar2 = default;

        pBVar1 = SharedString.op_Implicit("");
        this.stateName = pBVar1;
        pBVar2 = SharedInt.op_Implicit(0);
        this.storeValue = pBVar2;
    }

    // RVA: 0x42FC Offset: 0x42FC VA: 0x42FC
    public GetStringToHash()
    {
        unnamed_function_51834(this,0);
    }
}
