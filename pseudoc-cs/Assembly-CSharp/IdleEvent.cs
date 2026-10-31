// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/IdleEvent.c by tools/c2cs.py
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

public class IdleEvent : MonoBehaviour // TypeDefIndex: 5673
{
    // Fields
    [CompilerGenerated]
    private Action<IdleEvent> OnIdle; // 0x10

    // Methods

    [CompilerGenerated]
    // RVA: 0x3953 Offset: 0x3953 VA: 0x3953
    public void add_OnIdle(Action<IdleEvent> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnIdle;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_IdleEvent__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = unnamed_function_1112(param1_00,System_Action_IdleEvent__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&this.OnIdle,param2_00,param1);
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
    // RVA: 0x3954 Offset: 0x3954 VA: 0x3954
    public void remove_OnIdle(Action<IdleEvent> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnIdle;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_IdleEvent__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = unnamed_function_1112(param1_00,System_Action_IdleEvent__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&this.OnIdle,param2_00,param1);
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

    // RVA: 0x3955 Offset: 0x3955 VA: 0x3955
    public void CallIdleEvent()
    {
        Action pAVar1 = default;

        pAVar1 = this.OnAttack;
        if (pAVar1 != (Action)0x0) {
            Raw.VCall((ulong)(uint)pAVar1[3]._opaque * 4) /* virtual */ (pAVar1[8]._opaque,this,pAVar1[5]._opaque);
        }
    }

    // RVA: 0x3956 Offset: 0x3956 VA: 0x3956
    public IdleEvent()
    {
        unnamed_function_44622(this,0);
    }
}
