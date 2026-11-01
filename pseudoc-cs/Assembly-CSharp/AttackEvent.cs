// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/AttackEvent.c by tools/c2cs.py
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

public class AttackEvent : MonoBehaviour // TypeDefIndex: 5548
{
    // Fields
    [CompilerGenerated]
    private Action<AttackEvent> OnAttack; // 0x10

    // Methods

    [CompilerGenerated]
    // RVA: 0x36CB Offset: 0x36CB VA: 0x36CB
    public void add_OnAttack(Action<AttackEvent> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnAttack;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_AttackEvent__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = (param1_00 as System_Action_AttackEvent_), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref this.OnAttack, param2_00, param1);
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
    // RVA: 0x36CC Offset: 0x36CC VA: 0x36CC
    public void remove_OnAttack(Action<AttackEvent> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnAttack;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_AttackEvent__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = (param1_00 as System_Action_AttackEvent_), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref this.OnAttack, param2_00, param1);
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

    // RVA: 0x36CD Offset: 0x36CD VA: 0x36CD
    public void CallAttackEvent()
    {
        Action pAVar1 = default;

        pAVar1 = this.OnAttack;
        if (pAVar1 != (Action)0x0) {
            Raw.VCall((ulong)(uint)pAVar1[3]._opaque * 4) /* virtual */ (pAVar1[8]._opaque,this,pAVar1[5]._opaque);
        }
    }

    // RVA: 0x36CE Offset: 0x36CE VA: 0x36CE
    public AttackEvent()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
