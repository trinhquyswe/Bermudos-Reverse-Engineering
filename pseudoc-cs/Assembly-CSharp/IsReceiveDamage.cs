// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/IsReceiveDamage.c by tools/c2cs.py
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

public class IsReceiveDamage : Conditional // TypeDefIndex: 5569
{
    // Fields
    private HealthEvent healthEvent; // 0x2C
    private bool isReceiveDamage; // 0x30

    // Methods

    // RVA: 0x3733 Offset: 0x3733 VA: 0x3733 Slot: 4
    public override void OnAwake()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        HealthEvent pHVar2 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar3 = default;

        pHVar2 = (HealthEvent)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056ced8);
        this.healthEvent = pHVar2;
        param1_00 = new System_Action_HealthEvent__HealthEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056a7b4,0);
        param1 = pHVar2.OnHealthChanged;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar3 = (Action)Interlocked.CompareExchange(ref pHVar2.OnHealthChanged, param2_00, param1);
            bVar1 = param1 == pAVar3;
            param1 = pAVar3;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_01,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3734 Offset: 0x3734 VA: 0x3734
    private void OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
    {
        this.isReceiveDamage = true;
    }

    // RVA: 0x3735 Offset: 0x3735 VA: 0x3735 Slot: 6
    public override TaskStatus OnUpdate()
    {

    }

    // RVA: 0x3736 Offset: 0x3736 VA: 0x3736 Slot: 9
    public override void OnEnd()
    {
        this.isReceiveDamage = false;
    }

    // RVA: 0x3737 Offset: 0x3737 VA: 0x3737
    public IsReceiveDamage()
    {
        /* candidates: BehaviorDesigner.Runtime.Tasks.Action.ctor | BehaviorDesigner.Runtime.Tasks.BehaviorReference.ctor (+6) */ unnamed_function_51834(this,0);
    }
}
