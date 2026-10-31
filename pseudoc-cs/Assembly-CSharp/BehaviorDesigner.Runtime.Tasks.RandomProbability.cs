// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.RandomProbability.c by tools/c2cs.py
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

public class RandomProbability : Conditional // TypeDefIndex: 5860
{
    // Fields
    [Tooltip("The chance that the task will return success")]
    public SharedFloat successProbability; // 0x2C
    [Tooltip("Seed the random number generator to make things easier to debug")]
    public SharedInt seed; // 0x30
    [Tooltip("Do we want to use the seed?")]
    public SharedBool useSeed; // 0x34

    // Methods

    // RVA: 0x3CC5 Offset: 0x3CC5 VA: 0x3CC5 Slot: 4
    public override void OnAwake()
    {
        int iVar1 = default;
        int param1 = default;

        iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(this.useSeed,DAT_ram_00565c78);
        if (iVar1 != 0) {
            param1 = unnamed_function_61203(this.seed,DAT_ram_00565cb8);
            UnityEngine.Random.InitState(param1,0);
        }
    }

    // RVA: 0x3CC6 Offset: 0x3CC6 VA: 0x3CC6 Slot: 6
    public override TaskStatus OnUpdate()
    {
        UnityEngine.Random.get_value(0);
        BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x2c),DAT_ram_00565d00);
        return;
    }

    // RVA: 0x3CC7 Offset: 0x3CC7 VA: 0x3CC7 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;

        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.5,DAT_ram_00565d04);
        this.successProbability = param1;
        pBVar1 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar1[4].monitor = (object)0x0;
        this.seed = pBVar1;
        pBVar2 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar2[4].monitor = 0;
        this.useSeed = pBVar2;
    }

    // RVA: 0x3CC8 Offset: 0x3CC8 VA: 0x3CC8
    public RandomProbability()
    {
        BehaviorDesigner.Runtime.SharedFloat param1 = default;

        param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
        BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,0.5,DAT_ram_00565d04);
        this.successProbability = param1;
        unnamed_function_51834(this,0);
    }
}
