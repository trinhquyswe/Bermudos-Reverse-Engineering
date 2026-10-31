// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EnemyAI.c by tools/c2cs.py
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

public class EnemyAI : MonoBehaviour // TypeDefIndex: 5588
{
    // Fields
    private EnemyMovement enemyMovement; // 0x10
    private EnemyAttack enemyAttack; // 0x14
    private EnemyStateEvent enemyStateEvent; // 0x18
    private Enemy enemy; // 0x1C
    [HideInInspector]
    public EnemyState enemyState; // 0x20
    private Coroutine attackCoroutine; // 0x24
    private bool isAttack; // 0x28

    // Methods

    // RVA: 0x37A4 Offset: 0x37A4 VA: 0x37A4
    private void Awake()
    {
        Enemy pEVar1 = default;
        EnemyStateEvent pEVar2 = default;
        EnemyAttack pEVar3 = default;
        EnemyMovement pEVar4 = default;

        pEVar1 = (Enemy)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e78);
        this.enemy = pEVar1;
        pEVar2 = (EnemyStateEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e8c);
        this.enemyStateEvent = pEVar2;
        pEVar3 = (EnemyAttack)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e80);
        this.enemyAttack = pEVar3;
        pEVar4 = (EnemyMovement)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e88);
        this.enemyMovement = pEVar4;
    }

    // RVA: 0x37A5 Offset: 0x37A5 VA: 0x37A5
    private void OnEnable()
    {
        bool bVar1 = default;
        int param2 = default;
        int uVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        Action pAVar5 = default;
        EnemyStateEvent pEVar6 = default;
        Action pAVar7 = default;
        PoiseEvent pPVar8 = default;

        pEVar6 = this.enemyStateEvent;
        pAVar7 = pEVar6.onEnemyState;
        uVar2 = new System_Action_EnemyStateEvent__EnemyStateEventArgs_();
        System.Action<object, object>.__ctor(uVar2,this,DAT_ram_00568eb0,0);
        iVar3 = System.Delegate.Combine(pAVar7,uVar2,0);
        uVar2 = System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo;
        if (iVar3 == 0) {
            pEVar6.onEnemyState = (Action)0x0;
        }
        else {
            pAVar7 = (Action) unnamed_function_1112 (iVar3,System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
            if (pAVar7 == (Action)0x0) {
                unnamed_function_1116(iVar3,uVar2);
                do {
                    throw null;
                } while( true );
            }
            pEVar6.onEnemyState = pAVar7;
            uVar2 = System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo;
            iVar4 = unnamed_function_1112 (iVar3,System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
            if (iVar4 == 0) {
                unnamed_function_1116(iVar3,uVar2);
                do {
                    throw null;
                } while( true );
            }
        }
        pPVar8 = this.enemy.poiseEvent;
        uVar2 = new System_Action_PoiseEvent__PoiseEventArgs_();
        System.Action<object, object>.__ctor(uVar2,this,DAT_ram_00568eb4,0);
        pAVar7 = pPVar8.OnPoise;
        while( true ) {
            iVar3 = 0;
            iVar4 = System.Delegate.Combine(pAVar7,uVar2,0);
            param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
            if ((iVar4 != 0) && (iVar3 = unnamed_function_1112(iVar4,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo), iVar3 == 0)) break;
            pAVar5 = (Action)unnamed_function_1144(&pPVar8.OnPoise,iVar3,pAVar7);
            bVar1 = pAVar7 == pAVar5;
            pAVar7 = pAVar5;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(iVar4,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x37A6 Offset: 0x37A6 VA: 0x37A6
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        int uVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        Action pAVar5 = default;
        EnemyStateEvent pEVar6 = default;
        Action pAVar7 = default;
        PoiseEvent pPVar8 = default;

        pEVar6 = this.enemyStateEvent;
        pAVar7 = pEVar6.onEnemyState;
        uVar2 = new System_Action_EnemyStateEvent__EnemyStateEventArgs_();
        System.Action<object, object>.__ctor(uVar2,this,DAT_ram_00568eb0,0);
        iVar3 = System.Delegate.Remove(pAVar7,uVar2,0);
        uVar2 = System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo;
        if (iVar3 == 0) {
            pEVar6.onEnemyState = (Action)0x0;
        }
        else {
            pAVar7 = (Action) unnamed_function_1112 (iVar3,System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
            if (pAVar7 == (Action)0x0) {
                unnamed_function_1116(iVar3,uVar2);
                do {
                    throw null;
                } while( true );
            }
            pEVar6.onEnemyState = pAVar7;
            uVar2 = System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo;
            iVar4 = unnamed_function_1112 (iVar3,System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
            if (iVar4 == 0) {
                unnamed_function_1116(iVar3,uVar2);
                do {
                    throw null;
                } while( true );
            }
        }
        pPVar8 = this.enemy.poiseEvent;
        uVar2 = new System_Action_PoiseEvent__PoiseEventArgs_();
        System.Action<object, object>.__ctor(uVar2,this,DAT_ram_00568eb4,0);
        pAVar7 = pPVar8.OnPoise;
        while( true ) {
            iVar3 = 0;
            iVar4 = System.Delegate.Combine(pAVar7,uVar2,0);
            param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
            if ((iVar4 != 0) && (iVar3 = unnamed_function_1112(iVar4,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo), iVar3 == 0)) break;
            pAVar5 = (Action)unnamed_function_1144(&pPVar8.OnPoise,iVar3,pAVar7);
            bVar1 = pAVar7 == pAVar5;
            pAVar7 = pAVar5;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(iVar4,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x37A7 Offset: 0x37A7 VA: 0x37A7
    private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
    {
        int param2 = default;
        float fVar1 = default;

        if (poiseEventArgs.currentPoise <= 0.0) {
            fVar1 = poiseEventArgs.stunTime;
            param2 = new EnemyAI__StopAttackCoroutine_d__14();
            Raw.Write<float>(param2 + 0x14 /* enemyAttack */, fVar1);
            Raw.Write<object>(param2 + 0x10 /* enemyMovement */, this);
            Raw.Write<int>(param2 + 8, 0);
            UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
        }
    }

    // RVA: 0x37A8 Offset: 0x37A8 VA: 0x37A8
    private void OnEnemyState(EnemyStateEvent enemyStateEvent, EnemyStateEventArgs enemyStateEventArgs)
    {
        this.enemyState = enemyStateEventArgs.enemyState;
    }

    // RVA: 0x37A9 Offset: 0x37A9 VA: 0x37A9
    private void Update()
    {
        EnemyState EVar1 = default;
        AttackEvent pAVar2 = default;
        Action pAVar3 = default;

        EVar1 = this.enemyState;
        if (EVar1 == Chasing) {
            ((AttackEvent)this.enemy.moveByEnemyAIEvent).CallAttackEvent();
            this.enemyMovement.MoveToPlayer();
            this.enemyMovement.GetDistanceToStartPosition();
            this.enemyMovement.GetAimDirection(true);
            return;
        }
        if (EVar1 == Attacking) {
            if (this.isAttack != false) {
                pAVar2 = this.enemy.attackEvent;
                pAVar3 = pAVar2.OnAttack;
                if (pAVar3 != (Action)0x0) {
                    Raw.VCall((ulong)(uint)pAVar3[3]._opaque * 4) /* virtual */ (pAVar3[8]._opaque,pAVar2,pAVar3[5]._opaque);
                }
                this.enemyAttack.Shoot();
                this.enemyStateEvent.CallEnemyStateEvent(Chasing);
            }
            return;
        }
        if (EVar1 != Dead) {
            if (EVar1 == GoBackToStart) {
                ((AttackEvent)this.enemy.moveByEnemyAIEvent).CallAttackEvent();
                this.enemyMovement.GoBackToStartPosition();
                this.enemyMovement.GetAimDirection(false);
                return;
            }
            if (EVar1 == None) {
                return;
            }
        }
        ((AttackEvent)this.enemy.moveByEnemyAIEvent).CallAttackEvent();
        this.enemyMovement.MoveRoamingPosition();
        this.enemyMovement.FindPlayer();
        this.enemyMovement.GetAimDirection(false);
    }

    // RVA: 0x37AA Offset: 0x37AA VA: 0x37AA
    private void StopAttack(float stunTime)
    {
        int param2 = default;

        param2 = new EnemyAI__StopAttackCoroutine_d__14();
        Raw.Write<float>(param2 + 0x14 /* enemyAttack */, stunTime);
        Raw.Write<object>(param2 + 0x10 /* enemyMovement */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    [IteratorStateMachine(typeof(EnemyAI._StopAttackCoroutine_d__14))]
    // RVA: 0x37AB Offset: 0x37AB VA: 0x37AB
    private IEnumerator StopAttackCoroutine(float stunTime)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new EnemyAI__StopAttackCoroutine_d__14();
        pSVar1[5]._opaque = (int)stunTime;
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x37AC Offset: 0x37AC VA: 0x37AC
    public EnemyAI()
    {
        this.isAttack = true;
        unnamed_function_44622(this,0);
    }
}
