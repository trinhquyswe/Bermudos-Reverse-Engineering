// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Idle.c by tools/c2cs.py
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

public class Idle : MonoBehaviour // TypeDefIndex: 5672
{
    // Fields
    private Rigidbody2D rigidBody2D; // 0x10
    private IdleEvent idleEvent; // 0x14

    // Methods

    // RVA: 0x394C Offset: 0x394C VA: 0x394C
    private void Awake()
    {
        Rigidbody2D pRVar1 = default;
        IdleEvent pIVar2 = default;

        pRVar1 = (Rigidbody2D)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f18);
        this.rigidBody2D = pRVar1;
        pIVar2 = (IdleEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ea4);
        this.idleEvent = pIVar2;
    }

    // RVA: 0x394D Offset: 0x394D VA: 0x394D
    private void OnEnable()
    {
        bool bVar1 = default;
        Action param1 = default;
        int iVar2 = default;
        int uVar3 = default;
        int iVar4 = default;
        Action pAVar5 = default;
        int iVar6 = default;
        IdleEvent pIVar7 = default;
        int uVar8 = default;

        pIVar7 = this.idleEvent;
        uVar3 = new System_Action_IdleEvent_();
        System.Action<object>.__ctor(uVar3,this,DAT_ram_00569f78,0);
        param1 = pIVar7.OnIdle;
        do {
            iVar2 = 0;
            iVar4 = System.Delegate.Combine(param1,uVar3,0);
            uVar8 = System_Action_IdleEvent__TypeInfo;
            if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,System_Action_IdleEvent__TypeInfo), iVar2 == 0)) {
                unnamed_function_1116(iVar4,uVar8);
                do {
                    throw null;
                } while( true );
            }
            pAVar5 = (Action)unnamed_function_1144(&pIVar7.OnIdle,iVar2,param1);
            bVar1 = param1 != pAVar5;
            param1 = pAVar5;
        } while (bVar1);
        iVar2 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        iVar4 = Raw.Deref(Raw.Read<object>(iVar2 + 0x5c));
        uVar8 = Raw.Read<int>(iVar4 + 0x20);
        uVar3 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar3,this,DAT_ram_00569f74,0);
        iVar2 = System.Delegate.Combine(uVar8,uVar3,0);
        uVar3 = System_Action_GameState__TypeInfo;
        if (iVar2 != 0) {
            iVar6 = unnamed_function_1112(iVar2,System_Action_GameState__TypeInfo);
            if (iVar6 == 0) {
                unnamed_function_1116(iVar2,uVar3);
                do {
                    throw null;
                } while( true );
            }
            Raw.Write<int>(iVar4 + 0x20, iVar6);
            uVar3 = System_Action_GameState__TypeInfo;
            iVar4 = unnamed_function_1112(iVar2,System_Action_GameState__TypeInfo);
            if (iVar4 != 0) {
                return;
            }
            unnamed_function_1116(iVar2,uVar3);
            do {
                throw null;
            } while( true );
        }
        Raw.Write<int>(iVar4 + 0x20, 0);
    }

    // RVA: 0x394E Offset: 0x394E VA: 0x394E
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        IdleEvent pIVar3 = default;

        pIVar3 = this.idleEvent;
        param1_00 = new System_Action_IdleEvent_();
        System.Action<object>.__ctor(param1_00,this,DAT_ram_00569f78,0);
        param1 = pIVar3.OnIdle;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_IdleEvent__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112(param1_01,System_Action_IdleEvent__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&pIVar3.OnIdle,param2_00,param1);
            bVar1 = param1 == pAVar2;
            param1 = pAVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_01,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x394F Offset: 0x394F VA: 0x394F
    private void GameStateChanged_OnIdle(GameState gameState)
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int param1 = default;

        if (gameState == Intro) {
            UnityEngine.Rigidbody2D.set_constraints(this.rigidBody2D,7,0);
        }
        else if ((gameState != Begin) && (gameState == Instruct)) {
            UnityEngine.Rigidbody2D.set_constraints(this.rigidBody2D,4,0);
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
            System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_00569f74,0);
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
            if (iVar4 == 0) {
                unnamed_function_1116(iVar3,uVar1);
                do {
                    throw null;
                } while( true );
            }
        }
    }

    // RVA: 0x3950 Offset: 0x3950 VA: 0x3950
    private void IdleEvent_OnIdle(IdleEvent idleEvent)
    {
        Rigidbody2D param1 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = this.rigidBody2D;
        local_10 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        local_8 = local_10;
        unnamed_function_16392(param1,&local_10,0);
    }

    // RVA: 0x3951 Offset: 0x3951 VA: 0x3951
    private void IdleRigidBody()
    {
        Rigidbody2D param1 = default;
        long local_10 = default;
        long local_8 = default;

        param1 = this.rigidBody2D;
        local_10 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        local_8 = local_10;
        unnamed_function_16392(param1,&local_10,0);
    }

    // RVA: 0x3952 Offset: 0x3952 VA: 0x3952
    public Idle()
    {
        unnamed_function_44622(this,0);
    }
}
