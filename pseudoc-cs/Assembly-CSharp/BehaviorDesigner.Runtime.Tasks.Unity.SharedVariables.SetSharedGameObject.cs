// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedGameObject.c by tools/c2cs.py
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

public class SetSharedGameObject : Action // TypeDefIndex: 5988
{
    // Fields
    [Tooltip("The value to set the SharedGameObject to. If null the variable will be set to the current GameObject")]
    public SharedGameObject targetValue; // 0x2C
    [Tooltip("The SharedGameObject to set")]
    [RequiredField]
    public SharedGameObject targetVariable; // 0x30
    [Tooltip("Can the target value be null?")]
    public SharedBool valueCanBeNull; // 0x34

    // Methods

    // RVA: 0x3E94 Offset: 0x3E94 VA: 0x3E94 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int iVar2 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x30);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        iVar2 = (uVar1 != null);
        if ((iVar2 == 0) && (iVar2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565c78), iVar2 == 0)) {
            uVar1 = Raw.Read<int>(this + 8);
        }
        else {
            uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        }
        unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
        return;
    }

    // RVA: 0x3E95 Offset: 0x3E95 VA: 0x3E95 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        pBVar1 = SharedBool.op_Implicit(false);
        this.targetValue = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.targetVariable = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.valueCanBeNull = pBVar1;
    }

    // RVA: 0x3E96 Offset: 0x3E96 VA: 0x3E96
    public SetSharedGameObject()
    {
        unnamed_function_51834(this,0);
    }
}
