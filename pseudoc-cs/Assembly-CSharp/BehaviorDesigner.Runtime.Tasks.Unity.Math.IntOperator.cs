// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.IntOperator.c by tools/c2cs.py
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

public class IntOperator : Action // TypeDefIndex: 6154
{
    // Fields
    [Tooltip("The operation to perform")]
    public IntOperator.Operation operation; // 0x2C
    [Tooltip("The first integer")]
    public SharedInt integer1; // 0x30
    [Tooltip("The second integer")]
    public SharedInt integer2; // 0x34
    [Tooltip("The variable to store the result")]
    [RequiredField]
    public SharedInt storeResult; // 0x38

    // Methods

    // RVA: 0x40E2 Offset: 0x40E2 VA: 0x40E2 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int iVar2 = default;
        int uVar3 = default;

        iVar2 = Raw.Read<int>(this + 0x2c);
        if (iVar2 == 0) {
            uVar3 = Raw.Read<int>(this + 0x38);
            iVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
            iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
            unnamed_function_61204(uVar3,iVar2 + iVar1,DAT_ram_00565cbc);
            return;
        }
        if (iVar2 == 1) {
            uVar3 = Raw.Read<int>(this + 0x38);
            iVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
            iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
            unnamed_function_61204(uVar3,iVar2 - iVar1,DAT_ram_00565cbc);
            return;
        }
        if (iVar2 != 2) {
            if (iVar2 == 3) {
                uVar3 = Raw.Read<int>(this + 0x38);
                iVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
                iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
                unnamed_function_61204(uVar3,iVar2 / iVar1,DAT_ram_00565cbc);
                return;
            }
            if (iVar2 != 4) {
                if (iVar2 != 5) {
                    if (iVar2 == 6) {
                        uVar3 = Raw.Read<int>(this + 0x38);
                        iVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
                        iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
                        unnamed_function_61204(uVar3,iVar2 % iVar1,DAT_ram_00565cbc);
                    }
                    return;
                }
                uVar3 = Raw.Read<int>(this + 0x38);
                iVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
                iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
                if (iVar2 <= iVar1) {
                    iVar2 = iVar1;
                }
                unnamed_function_61204(uVar3,iVar2,DAT_ram_00565cbc);
                return;
            }
            uVar3 = Raw.Read<int>(this + 0x38);
            iVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
            iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
            if (iVar1 <= iVar2) {
                iVar2 = iVar1;
            }
            unnamed_function_61204(uVar3,iVar2,DAT_ram_00565cbc);
            return;
        }
        uVar3 = Raw.Read<int>(this + 0x38);
        iVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
        iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
        unnamed_function_61204(uVar3,iVar2 * iVar1,DAT_ram_00565cbc);
        return;
    }

    // RVA: 0x40E3 Offset: 0x40E3 VA: 0x40E3 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        this.operation = Add;
        pBVar1 = SharedInt.op_Implicit(0);
        this.integer1 = pBVar1;
        pBVar1 = SharedInt.op_Implicit(0);
        this.integer2 = pBVar1;
        pBVar1 = SharedInt.op_Implicit(0);
        this.storeResult = pBVar1;
    }

    // RVA: 0x40E4 Offset: 0x40E4 VA: 0x40E4
    public IntOperator()
    {
        unnamed_function_51834(this,0);
    }
}
