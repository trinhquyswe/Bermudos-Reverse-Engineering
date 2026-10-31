// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/StaminaEvent.c by tools/c2cs.py
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

public class StaminaEvent : MonoBehaviour // TypeDefIndex: 5632
{
    // Fields
    [CompilerGenerated]
    private Action<StaminaEvent, StaminaEventArgs> OnStaminaChanged; // 0x10

    // Methods

    [CompilerGenerated]
    // RVA: 0x3854 Offset: 0x3854 VA: 0x3854
    public void add_OnStaminaChanged(Action<StaminaEvent, StaminaEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnStaminaChanged;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_StaminaEvent__StaminaEventArgs__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = unnamed_function_1112 (param1_00,System_Action_StaminaEvent__StaminaEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&this.OnStaminaChanged,param2_00,param1);
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
    // RVA: 0x3855 Offset: 0x3855 VA: 0x3855
    public void remove_OnStaminaChanged(Action<StaminaEvent, StaminaEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnStaminaChanged;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_StaminaEvent__StaminaEventArgs__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = unnamed_function_1112 (param1_00,System_Action_StaminaEvent__StaminaEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&this.OnStaminaChanged,param2_00,param1);
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

    // RVA: 0x3856 Offset: 0x3856 VA: 0x3856
    public void CallStaminaChangedEvent(float staminaPercent, float currentStamina, float staminaAmount)
    {
        int iVar1 = default;
        Action pAVar2 = default;

        pAVar2 = this.OnStaminaChanged;
        if (pAVar2 != (Action)0x0) {
            iVar1 = new StaminaEventArgs();
            Raw.Write<float>(iVar1 + 0x10, staminaAmount);
            Raw.Write<float>(iVar1 + 0xc, currentStamina);
            Raw.Write<float>(iVar1 + 8, staminaPercent);
            Raw.VCall((ulong)(uint)pAVar2[3]._opaque * 4) /* virtual */ (pAVar2[8]._opaque,this,iVar1,pAVar2[5]._opaque);
        }
    }

    // RVA: 0x3857 Offset: 0x3857 VA: 0x3857
    public StaminaEvent()
    {
        unnamed_function_44622(this,0);
    }
}
