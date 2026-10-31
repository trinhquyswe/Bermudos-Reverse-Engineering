// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/AnimateEvent.c by tools/c2cs.py
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

public class AnimateEvent : MonoBehaviour // TypeDefIndex: 5544
{
    // Fields
    [CompilerGenerated]
    private Action<AnimateEvent, AnimateEventArgs> OnAnimate; // 0x10

    // Methods

    [CompilerGenerated]
    // RVA: 0x36B0 Offset: 0x36B0 VA: 0x36B0
    public void add_OnAnimate(Action<AnimateEvent, AnimateEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnAnimate;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = unnamed_function_1112 (param1_00,System_Action_AnimateEvent__AnimateEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&this.OnAnimate,param2_00,param1);
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
    // RVA: 0x36B1 Offset: 0x36B1 VA: 0x36B1
    public void remove_OnAnimate(Action<AnimateEvent, AnimateEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnAnimate;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = unnamed_function_1112 (param1_00,System_Action_AnimateEvent__AnimateEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&this.OnAnimate,param2_00,param1);
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

    // RVA: 0x36B2 Offset: 0x36B2 VA: 0x36B2
    public void CallAnimateEvent(AimDirection aimDirection)
    {
        int iVar1 = default;
        Action pAVar2 = default;

        pAVar2 = this.OnAnimate;
        if (pAVar2 != (Action)0x0) {
            iVar1 = new AnimateEventArgs();
            Raw.Write<AimDirection>(iVar1 + 8, aimDirection);
            Raw.VCall((ulong)(uint)pAVar2[3]._opaque * 4) /* virtual */ (pAVar2[8]._opaque,this,iVar1,pAVar2[5]._opaque);
        }
    }

    // RVA: 0x36B3 Offset: 0x36B3 VA: 0x36B3
    public AnimateEvent()
    {
        unnamed_function_44622(this,0);
    }
}
