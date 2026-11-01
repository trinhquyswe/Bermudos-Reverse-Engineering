// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/StaticEventHandler.c by tools/c2cs.py
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

public static class StaticEventHandler // TypeDefIndex: 5720
{
    // Fields
    [CompilerGenerated]
    private static Action<MapChangedEventArgs> OnMapChanged; // 0x0
    [CompilerGenerated]
    private static Action OnMapTransition; // 0x4
    [CompilerGenerated]
    private static Action<OnNoteOpenedEventArgs> OnNoteOpened; // 0x8
    [CompilerGenerated]
    private static Action<OnPlayerChangedEventArgs> OnPlayerChanged; // 0xC
    [CompilerGenerated]
    private static Action<OnBossChangedEventArgs> OnBossChanged; // 0x10
    [CompilerGenerated]
    private static Action<OnBuildNavMeshEventArgs> OnBuildNavMesh; // 0x14
    [CompilerGenerated]
    private static Action OnTriggerBash; // 0x18
    [CompilerGenerated]
    private static Action OnTriggerDash; // 0x1C
    [CompilerGenerated]
    private static Action<OnInventoryItemChangedEventArgs> OnItemChanged; // 0x20
    [CompilerGenerated]
    private static Action OnPressRestEvent; // 0x24
    [CompilerGenerated]
    private static Action OnRestInBonfire; // 0x28
    [CompilerGenerated]
    private static Action OnExit; // 0x2C
    [CompilerGenerated]
    private static Action<OnInventoryChangedEventArgs> OnInventoryChanged; // 0x30
    [CompilerGenerated]
    private static Action<OnItemUIChangedEventArgs> OnItemUIEndDragChanged; // 0x34
    [CompilerGenerated]
    private static Action<OnItemUIChangedEventArgs> OnItemUIHoverChanged; // 0x38
    [CompilerGenerated]
    private static Action<OnItemUIChangedEventArgs> OnItemUIClickChanged; // 0x3C
    [CompilerGenerated]
    private static Action<OnInventoryItemChangedEventArgs> OnHotBarScrollChanged; // 0x40
    [CompilerGenerated]
    private static Action<OnInventoryItemChangedEventArgs> OnMoveItemToHotBar; // 0x44
    [CompilerGenerated]
    private static Action<string, int, bool> OnInstructionChanged; // 0x48

    // Methods

    [CompilerGenerated]
    // RVA: 0x3A65 Offset: 0x3A65 VA: 0x3A65
    public static void add_OnMapChanged(Action<MapChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = Raw.Deref(Raw.Read<object>(StaticEventHandler_TypeInfo + 0x5c));
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_MapChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_MapChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c),iVar2,param1);
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
    // RVA: 0x3A66 Offset: 0x3A66 VA: 0x3A66
    public static void remove_OnMapChanged(Action<MapChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = Raw.Deref(Raw.Read<object>(StaticEventHandler_TypeInfo + 0x5c));
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_MapChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_MapChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c),iVar2,param1);
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

    // RVA: 0x3A67 Offset: 0x3A67 VA: 0x3A67
    public static void CallMapChangedEvent(Map map)
    {
        MapChangedEventArgs __this_00 = default;
        int iVar1 = default;

        iVar1 = Raw.Deref(Raw.Read<object>(StaticEventHandler_TypeInfo + 0x5c));
        if (iVar1 != 0) {
            __this_00 = (MapChangedEventArgs)new MapChangedEventArgs();
            new MapChangedEventArgs();
            *(BossMap)&__this_00.map = this;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),__this_00,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A68 Offset: 0x3A68 VA: 0x3A68
    public static void add_OnMapTransition(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnMapTransition;
        while ((param1_00 = (object)System.Delegate.Combine(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 4,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    [CompilerGenerated]
    // RVA: 0x3A69 Offset: 0x3A69 VA: 0x3A69
    public static void remove_OnMapTransition(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnMapTransition;
        while ((param1_00 = (object)System.Delegate.Remove(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 4,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3A6A Offset: 0x3A6A VA: 0x3A6A
    public static void CallMapTransitionEvent()
    {
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnMapTransition;
        if (iVar1 != 0) {
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A6B Offset: 0x3A6B VA: 0x3A6B
    public static void add_OnNoteOpened(Action<OnNoteOpenedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnNoteOpened;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnNoteOpenedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnNoteOpenedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 8,iVar2,param1);
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
    // RVA: 0x3A6C Offset: 0x3A6C VA: 0x3A6C
    public static void remove_OnNoteOpened(Action<OnNoteOpenedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnNoteOpened;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnNoteOpenedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnNoteOpenedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 8,iVar2,param1);
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

    // RVA: 0x3A6D Offset: 0x3A6D VA: 0x3A6D
    public static void CallNoteOpenedEvent(bool isOpening, string note)
    {
        OnNoteOpenedEventArgs @this = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnNoteOpened;
        if (iVar1 != 0) {
            this = (OnNoteOpenedEventArgs)new OnNoteOpenedEventArgs();
            new OnNoteOpenedEventArgs();
            this.note = (string)note;
            this.isOpening = isOpening;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),this,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A6E Offset: 0x3A6E VA: 0x3A6E
    public static void add_OnPlayerChanged(Action<OnPlayerChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnPlayerChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnPlayerChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnPlayerChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0xc,iVar2,param1);
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
    // RVA: 0x3A6F Offset: 0x3A6F VA: 0x3A6F
    public static void remove_OnPlayerChanged(Action<OnPlayerChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnPlayerChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnPlayerChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnPlayerChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0xc,iVar2,param1);
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

    // RVA: 0x3A70 Offset: 0x3A70 VA: 0x3A70
    public static void CallPlayerChangedEvent(Player player)
    {
        OnPlayerChangedEventArgs @this = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnPlayerChanged;
        if (iVar1 != 0) {
            this = (OnPlayerChangedEventArgs)new OnPlayerChangedEventArgs();
            new OnPlayerChangedEventArgs();
            this.player = player;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),this,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A71 Offset: 0x3A71 VA: 0x3A71
    public static void add_OnBossChanged(Action<OnBossChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnBossChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnBossChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnBossChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x10,iVar2,param1);
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
    // RVA: 0x3A72 Offset: 0x3A72 VA: 0x3A72
    public static void remove_OnBossChanged(Action<OnBossChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnBossChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnBossChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnBossChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x10,iVar2,param1);
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

    // RVA: 0x3A73 Offset: 0x3A73 VA: 0x3A73
    public static void CallBossChangedEvent(Boss boss)
    {
        OnBossChangedEventArgs @this = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnBossChanged;
        if (iVar1 != 0) {
            this = (OnBossChangedEventArgs)new OnBossChangedEventArgs();
            new OnBossChangedEventArgs();
            this.boss = boss;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),this,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A74 Offset: 0x3A74 VA: 0x3A74
    public static void add_OnBuildNavMesh(Action<OnBuildNavMeshEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnBuildNavMesh;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnBuildNavMeshEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnBuildNavMeshEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x14,iVar2,param1);
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
    // RVA: 0x3A75 Offset: 0x3A75 VA: 0x3A75
    public static void remove_OnBuildNavMesh(Action<OnBuildNavMeshEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnBuildNavMesh;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnBuildNavMeshEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnBuildNavMeshEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x14,iVar2,param1);
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

    // RVA: 0x3A76 Offset: 0x3A76 VA: 0x3A76
    public static void CallBuildNavMeshEvent(bool isBuildWhenMapChanged)
    {
        OnBuildNavMeshEventArgs @this = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnBuildNavMesh;
        if (iVar1 != 0) {
            this = (OnBuildNavMeshEventArgs)new OnBuildNavMeshEventArgs();
            new OnBuildNavMeshEventArgs();
            this.isBuildWhenMapChanged = isBuildWhenMapChanged;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),this,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A77 Offset: 0x3A77 VA: 0x3A77
    public static void add_OnTriggerBash(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnTriggerBash;
        while ((param1_00 = (object)System.Delegate.Combine(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x18,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    [CompilerGenerated]
    // RVA: 0x3A78 Offset: 0x3A78 VA: 0x3A78
    public static void remove_OnTriggerBash(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnTriggerBash;
        while ((param1_00 = (object)System.Delegate.Remove(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x18,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3A79 Offset: 0x3A79 VA: 0x3A79
    public static void CallTriggerBashEvent()
    {
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnTriggerBash;
        if (iVar1 != 0) {
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A7A Offset: 0x3A7A VA: 0x3A7A
    public static void add_OnTriggerDash(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnTriggerDash;
        while ((param1_00 = (object)System.Delegate.Combine(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x1c,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    [CompilerGenerated]
    // RVA: 0x3A7B Offset: 0x3A7B VA: 0x3A7B
    public static void remove_OnTriggerDash(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnTriggerDash;
        while ((param1_00 = (object)System.Delegate.Remove(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x1c,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3A7C Offset: 0x3A7C VA: 0x3A7C
    public static void CallTriggerDashEvent()
    {
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnTriggerDash;
        if (iVar1 != 0) {
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A7D Offset: 0x3A7D VA: 0x3A7D
    public static void add_OnItemChanged(Action<OnInventoryItemChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnItemChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = unnamed_function_1112 (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x20,iVar2,param1);
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
    // RVA: 0x3A7E Offset: 0x3A7E VA: 0x3A7E
    public static void remove_OnItemChanged(Action<OnInventoryItemChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnItemChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = unnamed_function_1112 (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x20,iVar2,param1);
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

    // RVA: 0x3A7F Offset: 0x3A7F VA: 0x3A7F
    public static void CallItemChangedEvent(InventoryItem inventoryItem)
    {
        OnInventoryItemChangedEventArgs @this = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnItemChanged;
        if (iVar1 != 0) {
            this = (OnInventoryItemChangedEventArgs) new OnInventoryItemChangedEventArgs();
            new OnInventoryItemChangedEventArgs();
            this.inventoryItem = inventoryItem;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),this,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A80 Offset: 0x3A80 VA: 0x3A80
    public static void add_OnPressRestEvent(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnPressRestEvent;
        while ((param1_00 = (object)System.Delegate.Combine(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x24,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    [CompilerGenerated]
    // RVA: 0x3A81 Offset: 0x3A81 VA: 0x3A81
    public static void remove_OnPressRestEvent(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnPressRestEvent;
        while ((param1_00 = (object)System.Delegate.Remove(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x24,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3A82 Offset: 0x3A82 VA: 0x3A82
    public static void CallPressRestEvent()
    {
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnPressRestEvent;
        if (iVar1 != 0) {
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A83 Offset: 0x3A83 VA: 0x3A83
    public static void add_OnRestInBonfire(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnRestInBonfire;
        while ((param1_00 = (object)System.Delegate.Combine(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x28,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    [CompilerGenerated]
    // RVA: 0x3A84 Offset: 0x3A84 VA: 0x3A84
    public static void remove_OnRestInBonfire(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnRestInBonfire;
        while ((param1_00 = (object)System.Delegate.Remove(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x28,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3A85 Offset: 0x3A85 VA: 0x3A85
    public static void CallRestInBonfireEvent()
    {
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnRestInBonfire;
        if (iVar1 != 0) {
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A86 Offset: 0x3A86 VA: 0x3A86
    public static void add_OnExit(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnExit;
        while ((param1_00 = (object)System.Delegate.Combine(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x2c,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    [CompilerGenerated]
    // RVA: 0x3A87 Offset: 0x3A87 VA: 0x3A87
    public static void remove_OnExit(Action value)
    {
        bool bVar1 = default;
        int param1 = default;
        object param1_00 = default; // int*
        int iVar2 = default;

        param1 = StaticEventHandler.OnExit;
        while ((param1_00 = (object)System.Delegate.Remove(param1,value,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x2c,param1_00,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3A88 Offset: 0x3A88 VA: 0x3A88
    public static void CallExitEvent()
    {
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnExit;
        if (iVar1 != 0) {
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A89 Offset: 0x3A89 VA: 0x3A89
    public static void add_OnInventoryChanged(Action<OnInventoryChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnInventoryChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnInventoryChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnInventoryChangedEventArgs_) , iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x30,iVar2,param1);
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
    // RVA: 0x3A8A Offset: 0x3A8A VA: 0x3A8A
    public static void remove_OnInventoryChanged(Action<OnInventoryChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnInventoryChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnInventoryChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnInventoryChangedEventArgs_) , iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x30,iVar2,param1);
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

    // RVA: 0x3A8B Offset: 0x3A8B VA: 0x3A8B
    public static void CallInventoryChangedEvent(Inventory inventory)
    {
        OnInventoryChangedEventArgs __this_00 = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnInventoryChanged;
        if (iVar1 != 0) {
            __this_00 = (OnInventoryChangedEventArgs) new OnInventoryChangedEventArgs();
            new OnInventoryChangedEventArgs();
            __this_00.inventory = this;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),__this_00,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A8C Offset: 0x3A8C VA: 0x3A8C
    public static void add_OnItemUIEndDragChanged(Action<OnItemUIChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnItemUIEndDragChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnItemUIChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x34,iVar2,param1);
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
    // RVA: 0x3A8D Offset: 0x3A8D VA: 0x3A8D
    public static void remove_OnItemUIEndDragChanged(Action<OnItemUIChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnItemUIEndDragChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnItemUIChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x34,iVar2,param1);
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

    // RVA: 0x3A8E Offset: 0x3A8E VA: 0x3A8E
    public static void CallItemUIEndDragChangedEvent(ItemUI itemUI)
    {
        OnItemUIChangedEventArgs @this = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnItemUIEndDragChanged;
        if (iVar1 != 0) {
            this = (OnItemUIChangedEventArgs)new OnItemUIChangedEventArgs();
            new OnItemUIChangedEventArgs();
            this.itemUI = itemUI;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),this,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A8F Offset: 0x3A8F VA: 0x3A8F
    public static void add_OnItemUIHoverChanged(Action<OnItemUIChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnItemUIHoverChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnItemUIChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x38,iVar2,param1);
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
    // RVA: 0x3A90 Offset: 0x3A90 VA: 0x3A90
    public static void remove_OnItemUIHoverChanged(Action<OnItemUIChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnItemUIHoverChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnItemUIChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x38,iVar2,param1);
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

    // RVA: 0x3A91 Offset: 0x3A91 VA: 0x3A91
    public static void CallItemUIHoverChangedEvent(ItemUI itemUI)
    {
        OnItemUIChangedEventArgs @this = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnItemUIHoverChanged;
        if (iVar1 != 0) {
            this = (OnItemUIChangedEventArgs)new OnItemUIChangedEventArgs();
            new OnItemUIChangedEventArgs();
            this.itemUI = itemUI;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),this,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A92 Offset: 0x3A92 VA: 0x3A92
    public static void add_OnItemUIClickChanged(Action<OnItemUIChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnItemUIClickChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnItemUIChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x3c,iVar2,param1);
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
    // RVA: 0x3A93 Offset: 0x3A93 VA: 0x3A93
    public static void remove_OnItemUIClickChanged(Action<OnItemUIChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnItemUIClickChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_OnItemUIChangedEventArgs_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x3c,iVar2,param1);
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

    // RVA: 0x3A94 Offset: 0x3A94 VA: 0x3A94
    public static void CallItemUIClickChangedEvent(ItemUI itemUI)
    {
        OnItemUIChangedEventArgs @this = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnItemUIClickChanged;
        if (iVar1 != 0) {
            this = (OnItemUIChangedEventArgs)new OnItemUIChangedEventArgs();
            new OnItemUIChangedEventArgs();
            this.itemUI = itemUI;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),this,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A95 Offset: 0x3A95 VA: 0x3A95
    public static void add_OnHotBarScrollChanged(Action<OnInventoryItemChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnHotBarScrollChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = unnamed_function_1112 (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x40,iVar2,param1);
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
    // RVA: 0x3A96 Offset: 0x3A96 VA: 0x3A96
    public static void remove_OnHotBarScrollChanged(Action<OnInventoryItemChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnHotBarScrollChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = unnamed_function_1112 (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x40,iVar2,param1);
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

    // RVA: 0x3A97 Offset: 0x3A97 VA: 0x3A97
    public static void CallHotBarScrollChangedEvent(InventoryItem inventoryItem)
    {
        OnInventoryItemChangedEventArgs @this = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnHotBarScrollChanged;
        if (iVar1 != 0) {
            this = (OnInventoryItemChangedEventArgs) new OnInventoryItemChangedEventArgs();
            new OnInventoryItemChangedEventArgs();
            this.inventoryItem = inventoryItem;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),this,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A98 Offset: 0x3A98 VA: 0x3A98
    public static void add_OnMoveItemToHotBar(Action<OnInventoryItemChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnMoveItemToHotBar;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = unnamed_function_1112 (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x44,iVar2,param1);
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
    // RVA: 0x3A99 Offset: 0x3A99 VA: 0x3A99
    public static void remove_OnMoveItemToHotBar(Action<OnInventoryItemChangedEventArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnMoveItemToHotBar;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = unnamed_function_1112 (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x44,iVar2,param1);
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

    // RVA: 0x3A9A Offset: 0x3A9A VA: 0x3A9A
    public static void CallMoveItemToHotBarEvent(InventoryItem inventoryItem)
    {
        OnInventoryItemChangedEventArgs @this = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnMoveItemToHotBar;
        if (iVar1 != 0) {
            this = (OnInventoryItemChangedEventArgs) new OnInventoryItemChangedEventArgs();
            new OnInventoryItemChangedEventArgs();
            this.inventoryItem = inventoryItem;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),this,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    [CompilerGenerated]
    // RVA: 0x3A9B Offset: 0x3A9B VA: 0x3A9B
    public static void add_OnInstructionChanged(Action<string, int, bool> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnInstructionChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_string__int__bool__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_string__int__bool_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x48,iVar2,param1);
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
    // RVA: 0x3A9C Offset: 0x3A9C VA: 0x3A9C
    public static void remove_OnInstructionChanged(Action<string, int, bool> value)
    {
        bool bVar1 = default;
        int param2 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;

        param1 = StaticEventHandler.OnInstructionChanged;
        while( true ) {
            iVar2 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_string__int__bool__TypeInfo;
            if ((param1_00 != 0) && (iVar2 = (param1_00 as System_Action_string__int__bool_), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x48,iVar2,param1);
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

    // RVA: 0x3A9D Offset: 0x3A9D VA: 0x3A9D
    public static void CallInstructionChangedEvent(string instructionText, int displayCount = -1, bool isActive = True)
    {
        uint in_register_20000021 = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnInstructionChanged;
        if (iVar1 != 0) {
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),instructionText,displayCount, CONCAT31(in_register_20000021,isActive),Raw.Read<int>(iVar1 + 0x14));
        }
    }
}
