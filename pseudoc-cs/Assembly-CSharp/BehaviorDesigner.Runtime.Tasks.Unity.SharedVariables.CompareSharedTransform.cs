// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedTransform.c by tools/c2cs.py
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

public class CompareSharedTransform : Conditional // TypeDefIndex: 5980
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedTransform variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedTransform compareTo; // 0x30

    // Methods

    // RVA: 0x3E7C Offset: 0x3E7C VA: 0x3E7C Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int iVar2 = default;
        object piVar3 = default; // int*

        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d18);
        iVar2 = UnityEngine.Object.op_Equality(uVar1,0,0);
        if (iVar2 != 0) {
            uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d18);
            iVar2 = (uVar1 != null);
            if (iVar2 != 0) {
                return;
            }
        }
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d18);
        iVar2 = UnityEngine.Object.op_Equality(uVar1,0,0);
        if (iVar2 != 0) {
            uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d18);
            iVar2 = UnityEngine.Object.op_Equality(uVar1,0,0);
            if (iVar2 != 0) {
                return;
            }
        }
        piVar3 = (object)unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d18);
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d18);
        Raw.VCall((ulong)Raw.Read<uint>(*piVar3 + 0xc0) * 4) /* virtual */ (piVar3,uVar1,Raw.Read<int>(*piVar3 + 0xc4));
        return;
    }

    // RVA: 0x3E7D Offset: 0x3E7D VA: 0x3E7D Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
    }

    // RVA: 0x3E7E Offset: 0x3E7E VA: 0x3E7E
    public CompareSharedTransform()
    {
        unnamed_function_51834(this,0);
    }
}
