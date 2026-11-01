// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MoveByEnemyAIEvent.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(k, s)(args)               virtual call: vtable slot s of class k (k+0xc0+8*s)
//   Raw.VCallAt(e)(args)                virtual call: vtable entry at address e (interface)
//   Raw.DelegateInvoke(d)(args)         delegate invoke: target from d+0xc, this d+0x20
//   Raw.IndirectCall(a)(args)           unresolved indirect call (function-table offset a)
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class MoveByEnemyAIEvent : MonoBehaviour // TypeDefIndex: 5674
{
    // Fields
    [CompilerGenerated]
    private Action<MoveByEnemyAIEvent> OnMoveByEnemyAI; // 0x10

    // Methods

    [CompilerGenerated]
    // RVA: 0x3957 Offset: 0x3957 VA: 0x3957
    public void add_OnMoveByEnemyAI(Action<MoveByEnemyAIEvent> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnMoveByEnemyAI;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_MoveByEnemyAIEvent__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = (param1_00 as System_Action_MoveByEnemyAIEvent_), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref this.OnMoveByEnemyAI, param2_00, param1);
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
    // RVA: 0x3958 Offset: 0x3958 VA: 0x3958
    public void remove_OnMoveByEnemyAI(Action<MoveByEnemyAIEvent> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnMoveByEnemyAI;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_MoveByEnemyAIEvent__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = (param1_00 as System_Action_MoveByEnemyAIEvent_), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref this.OnMoveByEnemyAI, param2_00, param1);
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

    // RVA: 0x3959 Offset: 0x3959 VA: 0x3959
    public void CallMoveByEnemyAIEvent()
    {
        Action pAVar1 = default;

        pAVar1 = this.OnAttack;
        if (pAVar1 != (Action)0x0) {
            Raw.DelegateInvoke(pAVar1) /* delegate invoke */ (pAVar1[8]._opaque,this,pAVar1[5]._opaque);
        }
    }

    // RVA: 0x395A Offset: 0x395A VA: 0x395A
    public MoveByEnemyAIEvent()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
