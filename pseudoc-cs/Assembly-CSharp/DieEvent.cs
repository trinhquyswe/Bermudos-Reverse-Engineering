// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/DieEvent.c by tools/c2cs.py
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

public class DieEvent : MonoBehaviour // TypeDefIndex: 5619
{
    // Fields
    [CompilerGenerated]
    private Action<DieEvent> OnDie; // 0x10

    // Methods

    [CompilerGenerated]
    // RVA: 0x3823 Offset: 0x3823 VA: 0x3823
    public void add_OnDie(Action<DieEvent> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnDie;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_DieEvent__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = (param1_00 as System_Action_DieEvent_), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref this.OnDie, param2_00, param1);
            bVar1 = param1 == pAVar2;
            param1 = pAVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,param2);
        do {
            throw null;
        } while( true );
    }

    [CompilerGenerated]
    // RVA: 0x3824 Offset: 0x3824 VA: 0x3824
    public void remove_OnDie(Action<DieEvent> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnDie;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_DieEvent__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = (param1_00 as System_Action_DieEvent_), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref this.OnDie, param2_00, param1);
            bVar1 = param1 == pAVar2;
            param1 = pAVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3825 Offset: 0x3825 VA: 0x3825
    public void CallDieEvent()
    {
        Action pAVar1 = default;

        pAVar1 = this.OnAttack;
        if (pAVar1 != (Action)0x0) {
            Raw.VCall((ulong)(uint)pAVar1[3]._opaque * 4) /* virtual */ (pAVar1[8]._opaque,this,pAVar1[5]._opaque);
        }
    }

    // RVA: 0x3826 Offset: 0x3826 VA: 0x3826
    public DieEvent()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
