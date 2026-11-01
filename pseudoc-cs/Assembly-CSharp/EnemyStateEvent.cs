// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EnemyStateEvent.c by tools/c2cs.py
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

public class EnemyStateEvent : MonoBehaviour // TypeDefIndex: 5595
{
    // Fields
    public Action<EnemyStateEvent, EnemyStateEventArgs> onEnemyState; // 0x10

    // Methods

    // RVA: 0x37D5 Offset: 0x37D5 VA: 0x37D5
    public void CallEnemyStateEvent(EnemyState enemyState)
    {
        int iVar1 = default;
        Action pAVar2 = default;

        pAVar2 = this.onEnemyState;
        if (pAVar2 != (Action)0x0) {
            iVar1 = new EnemyStateEventArgs();
            Raw.Write<EnemyState>(iVar1 + 8, enemyState);
            Raw.DelegateInvoke(pAVar2) /* delegate invoke */ (pAVar2[8]._opaque,this,iVar1,pAVar2[5]._opaque);
        }
    }

    // RVA: 0x37D6 Offset: 0x37D6 VA: 0x37D6
    public EnemyStateEvent()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
