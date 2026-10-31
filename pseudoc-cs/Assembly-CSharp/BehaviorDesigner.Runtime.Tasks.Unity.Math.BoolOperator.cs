// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolOperator.c by tools/c2cs.py
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

public class BoolOperator : Action // TypeDefIndex: 6142
{
    // Fields
    [Tooltip("The operation to perform")]
    public BoolOperator.Operation operation; // 0x2C
    [Tooltip("The first bool")]
    public SharedBool bool1; // 0x30
    [Tooltip("The second bool")]
    public SharedBool bool2; // 0x34
    [Tooltip("The variable to store the result")]
    public SharedBool storeResult; // 0x38

    // Methods

    // RVA: 0x40CA Offset: 0x40CA VA: 0x40CA Slot: 6
    public override TaskStatus OnUpdate()
    {
        uint uVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        int uVar4 = default;
        uint uVar5 = default;

        iVar2 = Raw.Read<int>(this + 0x2c);
        if (iVar2 == 0) {
            uVar3 = Raw.Read<int>(this + 0x38);
            iVar2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
            if (iVar2 == 0) {
                uVar4 = 0;
            }
            else {
                uVar4 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565c78);
            }
            BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(uVar3,uVar4,DAT_ram_00565c7c);
            return;
        }
        if (iVar2 == 1) {
            uVar3 = Raw.Read<int>(this + 0x38);
            iVar2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
            if (iVar2 == 0) {
                uVar4 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565c78);
            }
            else {
                uVar4 = 1;
            }
            BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(uVar3,uVar4,DAT_ram_00565c7c);
            return;
        }
        if (iVar2 != 2) {
            if (iVar2 == 3) {
                uVar3 = Raw.Read<int>(this + 0x38);
                uVar5 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
                uVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565c78);
                BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(uVar3,uVar5 ^ uVar1,DAT_ram_00565c7c);
            }
            return;
        }
        uVar3 = Raw.Read<int>(this + 0x38);
        iVar2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
        if (iVar2 == 0) {
            uVar5 = 1;
        }
        else {
            uVar5 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565c78);
            uVar5 = uVar5 ^ 1;
        }
        BehaviorDesigner.Runtime.SharedVariable<bool>.set_Value(uVar3,uVar5,DAT_ram_00565c7c);
        return;
    }

    // RVA: 0x40CB Offset: 0x40CB VA: 0x40CB Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        this.operation = AND;
        pBVar1 = SharedBool.op_Implicit(false);
        this.bool1 = pBVar1;
        pBVar1 = SharedBool.op_Implicit(false);
        this.bool2 = pBVar1;
    }

    // RVA: 0x40CC Offset: 0x40CC VA: 0x40CC
    public BoolOperator()
    {
        unnamed_function_51834(this,0);
    }
}
