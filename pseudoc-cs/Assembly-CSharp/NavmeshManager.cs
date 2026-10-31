// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/NavmeshManager.c by tools/c2cs.py
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

public class NavmeshManager : MonoBehaviour // TypeDefIndex: 5684
{
    // Fields
    private NavMeshSurface navMeshSurface; // 0x10

    // Methods

    // RVA: 0x3975 Offset: 0x3975 VA: 0x3975
    private void Awake()
    {
        NavMeshSurface pNVar1 = default;

        pNVar1 = (NavMeshSurface)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ee8);
        this.navMeshSurface = pNVar1;
    }

    // RVA: 0x3976 Offset: 0x3976 VA: 0x3976
    private void OnEnable()
    {
        bool bVar1 = default;
        int param1 = default;
        System.Action.MapChangedEventArgs value = default;
        int param1_00 = default;
        object param1_01 = default; // int*
        int iVar2 = default;

        value = (System.Action.MapChangedEventArgs) new System_Action_MapChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_0056b40c,0);
        StaticEventHandler.add_OnMapChanged(value);
        param1_00 = new System_Action();
        System.Action.__ctor(param1_00,this,DAT_ram_0056b410,0);
        param1 = StaticEventHandler.OnRestInBonfire;
        while ((param1_01 = (object)System.Delegate.Combine(param1,param1_00,0), param1_01 == (object)0x0 || (System_Action_TypeInfo == *param1_01))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x28,param1_01,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_01,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3977 Offset: 0x3977 VA: 0x3977
    private void OnDisable()
    {
        bool bVar1 = default;
        int param1 = default;
        System.Action.MapChangedEventArgs value = default;
        int param1_00 = default;
        object param1_01 = default; // int*
        int iVar2 = default;

        value = (System.Action.MapChangedEventArgs) new System_Action_MapChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_0056b40c,0);
        StaticEventHandler.remove_OnMapChanged(value);
        param1_00 = new System_Action();
        System.Action.__ctor(param1_00,this,DAT_ram_0056b410,0);
        param1 = StaticEventHandler.OnRestInBonfire;
        while ((param1_01 = (object)System.Delegate.Remove(param1,param1_00,0), param1_01 == (object)0x0 || (System_Action_TypeInfo == *param1_01))) {
            iVar2 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x28,param1_01,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_01,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3978 Offset: 0x3978 VA: 0x3978
    private void StaticEventHandler_OnMapChanged(MapChangedEventArgs mapChangedEventArgs)
    {
        int param2 = default;

        param2 = new NavmeshManager__BuildNavMeshWhenMapChangedCoroutine_d__5();
        Raw.Write<object>(param2 + 0x10 /* navMeshSurface */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    [IteratorStateMachine(typeof(NavmeshManager._BuildNavMeshWhenMapChangedCoroutine_d__5))]
    // RVA: 0x3979 Offset: 0x3979 VA: 0x3979
    private IEnumerator BuildNavMeshWhenMapChangedCoroutine()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new NavmeshManager__BuildNavMeshWhenMapChangedCoroutine_d__5();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x397A Offset: 0x397A VA: 0x397A
    private void StaticEventHandler_OnRestInBonfire()
    {
        int param2 = default;

        param2 = new NavmeshManager__BuildNavMeshWhenRestCoroutine_d__7();
        Raw.Write<object>(param2 + 0x10 /* navMeshSurface */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    [IteratorStateMachine(typeof(NavmeshManager._BuildNavMeshWhenRestCoroutine_d__7))]
    // RVA: 0x397B Offset: 0x397B VA: 0x397B
    private IEnumerator BuildNavMeshWhenRestCoroutine()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new NavmeshManager__BuildNavMeshWhenRestCoroutine_d__7();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x397C Offset: 0x397C VA: 0x397C
    public NavmeshManager()
    {
        unnamed_function_44622(this,0);
    }
}
