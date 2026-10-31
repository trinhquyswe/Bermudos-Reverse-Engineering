// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BashEvent.c by tools/c2cs.py
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

public class BashEvent : MonoBehaviour // TypeDefIndex: 5701
{
    // Fields
    [CompilerGenerated]
    private Action<BashEvent, BashEventArgs> OnBash; // 0x10

    // Methods

    [CompilerGenerated]
    // RVA: 0x39FD Offset: 0x39FD VA: 0x39FD
    public void add_OnBash(Action<BashEvent, BashEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnBash;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_BashEvent__BashEventArgs__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = unnamed_function_1112 (param1_00,System_Action_BashEvent__BashEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&this.OnBash,param2_00,param1);
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
    // RVA: 0x39FE Offset: 0x39FE VA: 0x39FE
    public void remove_OnBash(Action<BashEvent, BashEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnBash;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_BashEvent__BashEventArgs__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = unnamed_function_1112 (param1_00,System_Action_BashEvent__BashEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&this.OnBash,param2_00,param1);
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

    // RVA: 0x39FF Offset: 0x39FF VA: 0x39FF
    public void CallOnBashEvent(BashState bashState)
    {
        int iVar1 = default;
        Action pAVar2 = default;

        pAVar2 = this.OnBash;
        if (pAVar2 != (Action)0x0) {
            iVar1 = new BashEventArgs();
            Raw.Write<BashState>(iVar1 + 8, bashState);
            Raw.VCall((ulong)(uint)pAVar2[3]._opaque * 4) /* virtual */ (pAVar2[8]._opaque,this,iVar1,pAVar2[5]._opaque);
        }
    }

    // RVA: 0x3A00 Offset: 0x3A00 VA: 0x3A00
    public BashEvent()
    {
        unnamed_function_44622(this,0);
    }
}
