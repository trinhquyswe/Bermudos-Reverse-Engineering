// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.SetActive.c by tools/c2cs.py
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

public class SetActive : Action // TypeDefIndex: 6211
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("Active state of the GameObject")]
    public SharedBool active; // 0x30

    // Methods

    // RVA: 0x419E Offset: 0x419E VA: 0x419E Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int param2 = default;

        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        uVar1 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar1,0);
        param2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
        UnityEngine.GameObject.SetActive(uVar1,param2,0);
        return;
    }

    // RVA: 0x419F Offset: 0x419F VA: 0x419F Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedBool.op_Implicit(false);
        this.storeValue = pBVar1;
    }

    // RVA: 0x41A0 Offset: 0x41A0 VA: 0x41A0
    public SetActive()
    {
        unnamed_function_51834(this,0);
    }
}
