// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/RageEvent.c by tools/c2cs.py
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

public static class RageEvent // TypeDefIndex: 5628
{
    // Fields
    [CompilerGenerated]
    private static Action<RageEventArgs> OnRageChanged; // 0x0

    // Methods

    [CompilerGenerated]
    // RVA: 0x3845 Offset: 0x3845 VA: 0x3845
    public static void add_OnRageChanged(Action<RageEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = Raw.Deref(Raw.Read<object>(RageEvent_TypeInfo + 0x5c));
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_RageEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_RageEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(RageEvent_TypeInfo + 0x5c),iVar2,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
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
    // RVA: 0x3846 Offset: 0x3846 VA: 0x3846
    public static void remove_OnRageChanged(Action<RageEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = Raw.Deref(Raw.Read<object>(RageEvent_TypeInfo + 0x5c));
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_RageEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_RageEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(RageEvent_TypeInfo + 0x5c),iVar2,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3847 Offset: 0x3847 VA: 0x3847
    public static void CallRageChangedEvent(float ragePercent, float currentRage, float rageAmount)
    {
        int iVar1 = default;
        int iVar2 = default;

        iVar2 = Raw.Deref(Raw.Read<object>(RageEvent_TypeInfo + 0x5c));
        if (iVar2 != 0) {
            iVar1 = new RageEventArgs();
            Raw.Write<float>(iVar1 + 0x10, rageAmount);
            Raw.Write<float>(iVar1 + 0xc, rageAmount);
            Raw.Write<float>(iVar1 + 8, ragePercent);
            Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar2 + 0x20),iVar1,Raw.Read<int>(iVar2 + 0x14));
        }
    }
}
