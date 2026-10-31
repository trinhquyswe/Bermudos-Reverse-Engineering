// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BossMap.c by tools/c2cs.py
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

public class BossMap : Map // TypeDefIndex: 5663
{
    // Fields
    [SerializeField]
    private GameObject NorthOfTheForestToTheForest; // 0x1C

    // Methods

    // RVA: 0x3930 Offset: 0x3930 VA: 0x3930
    private void Start()
    {
        MapChangedEventArgs __this_00 = default;
        int iVar1 = default;

        iVar1 = Raw.Deref(Raw.Read<object>(StaticEventHandler_TypeInfo + 0x5c));
        if (iVar1 != 0) {
            __this_00 = (MapChangedEventArgs)new MapChangedEventArgs();
            new MapChangedEventArgs();
            *(BossMap)&__this_00.map = this;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar1 + 0x20),__this_00,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    // RVA: 0x3931 Offset: 0x3931 VA: 0x3931
    private void OnEnable()
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int param1 = default;

        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar4 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        param1 = Raw.Read<int>(iVar4 + 0x20);
        uVar1 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_005678a8,0);
        iVar3 = System.Delegate.Combine(param1,uVar1,0);
        uVar1 = System_Action_GameState__TypeInfo;
        if (iVar3 == 0) {
            Raw.Write<int>(iVar4 + 0x20, 0);
            return;
        }
        iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
        if (iVar2 == 0) {
            unnamed_function_1116(iVar3,uVar1);
            do {
                throw null;
            } while( true );
        }
        Raw.Write<int>(iVar4 + 0x20, iVar2);
        uVar1 = System_Action_GameState__TypeInfo;
        iVar4 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
        if (iVar4 != 0) {
            return;
        }
        unnamed_function_1116(iVar3,uVar1);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3932 Offset: 0x3932 VA: 0x3932
    private void OnDisable()
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int param1 = default;

        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar4 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        param1 = Raw.Read<int>(iVar4 + 0x20);
        uVar1 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_005678a8,0);
        iVar3 = System.Delegate.Remove(param1,uVar1,0);
        uVar1 = System_Action_GameState__TypeInfo;
        if (iVar3 == 0) {
            Raw.Write<int>(iVar4 + 0x20, 0);
            return;
        }
        iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
        if (iVar2 == 0) {
            unnamed_function_1116(iVar3,uVar1);
            do {
                throw null;
            } while( true );
        }
        Raw.Write<int>(iVar4 + 0x20, iVar2);
        uVar1 = System_Action_GameState__TypeInfo;
        iVar4 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
        if (iVar4 != 0) {
            return;
        }
        unnamed_function_1116(iVar3,uVar1);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3933 Offset: 0x3933 VA: 0x3933
    private void OnGameStateChanged_Map(GameState gameState)
    {
        int iVar1 = default;
        GameObject param1 = default;
        int param2 = default;

        if (gameState == EngagedBoss) {
            param1 = this.NorthOfTheForestToTheForest;
            iVar1 = (param1 != null);
            if (iVar1 == 0) {
                return;
            }
            iVar1 = UnityEngine.PlayerPrefs.HasKey("isBossDefeated",0);
            if ((iVar1 == 0) || (iVar1 = UnityEngine.PlayerPrefs.GetInt("isBossDefeated",0), iVar1 != 1)) {
                param2 = 0;
            }
            else {
                param2 = 1;
            }
        }
        else {
            if (gameState != Won) {
                return;
            }
            param2 = 1;
        }
        UnityEngine.GameObject.SetActive(this.NorthOfTheForestToTheForest,param2,0);
    }

    // RVA: 0x3934 Offset: 0x3934 VA: 0x3934
    public BossMap()
    {
        this.pad_8[0xc] = 0;
        this.pad_8[0xd] = 0;
        this.pad_8[0xe] = 0x20;
        this.pad_8[0xf] = 0x41;
        unnamed_function_44622(this,0);
    }
}
