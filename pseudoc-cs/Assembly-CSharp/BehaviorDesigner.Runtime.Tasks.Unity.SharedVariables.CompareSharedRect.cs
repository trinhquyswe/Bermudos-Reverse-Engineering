// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedRect.c by tools/c2cs.py
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

public class CompareSharedRect : Conditional // TypeDefIndex: 5978
{
    // Fields
    [Tooltip("The first variable to compare")]
    public SharedRect variable; // 0x2C
    [Tooltip("The variable to compare to")]
    public SharedRect compareTo; // 0x30

    // Methods

    // RVA: 0x3E76 Offset: 0x3E76 VA: 0x3E76 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        int iVar4 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;
        float local_4 = default;

        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x2c),DAT_ram_00565cf4);
        fVar3 = local_4;
        fVar2 = local_8;
        fVar1 = local_c;
        unnamed_function_61197(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565cf4);
        iVar4 = System.Single.Equals(&local_10,(float)local_10,0);
        if (iVar4 != 0) {
            local_10 = fVar1;
            iVar4 = System.Single.Equals(&local_10,(float)local_c,0);
            if (iVar4 != 0) {
                local_10 = fVar2;
                iVar4 = System.Single.Equals(&local_10,(float)local_8,0);
                if (iVar4 != 0) {
                    local_10 = fVar3;
                    System.Single.Equals(&local_10,(float)local_4,0);
                }
            }
        }
        return;
    }

    // RVA: 0x3E77 Offset: 0x3E77 VA: 0x3E77 Slot: 16
    public override void OnReset()
    {
        Rect pRVar1 = default;
        Rect local_40 = default;
        Rect local_30 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        local_8 = 0;
        local_30.width = 0.0;
        local_30.height = 0.0;
        local_10 = 0;
        local_30.x = 0.0;
        local_30.y = 0.0;
        pRVar1 = SharedRect.op_Implicit(&local_30);
        this.variable = (BehaviorDesigner.Runtime.SharedRect)pRVar1;
        local_18 = 0;
        local_40.width = 0.0;
        local_40.height = 0.0;
        local_20 = 0;
        local_40.x = 0.0;
        local_40.y = 0.0;
        pRVar1 = SharedRect.op_Implicit(&local_40);
        this.compareTo = (BehaviorDesigner.Runtime.SharedRect)pRVar1;
    }

    // RVA: 0x3E78 Offset: 0x3E78 VA: 0x3E78
    public CompareSharedRect()
    {
        unnamed_function_51834(this,0);
    }
}
