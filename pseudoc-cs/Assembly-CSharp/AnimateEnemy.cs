// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/AnimateEnemy.c by tools/c2cs.py
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

public class AnimateEnemy : MonoBehaviour // TypeDefIndex: 5543
{
    // Fields
    private Enemy enemy; // 0x10
    private AimDirection aimDirection; // 0x14
    private Coroutine attackAnimationCoroutine; // 0x18

    // Methods

    // RVA: 0x369D Offset: 0x369D VA: 0x369D
    private void Awake()
    {
        Enemy pEVar1 = default;

        pEVar1 = (Enemy)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e78);
        this.enemy = pEVar1;
    }

    // RVA: 0x369E Offset: 0x369E VA: 0x369E
    private void Start()
    {
        bool bVar1 = default;
        int uVar2 = default;
        Action pAVar3 = default;
        int iVar4 = default;
        int uVar5 = default;
        int iVar6 = default;
        Action pAVar7 = default;
        System.Action.IdleEvent value = default;
        System.Action.MoveByEnemyAIEvent value_00 = default;
        AnimateEvent pAVar8 = default;
        IdleEvent __this_00 = default;
        MoveByEnemyAIEvent __this_01 = default;
        AttackEvent pAVar9 = default;

        pAVar8 = this.enemy.animateEvent;
        uVar5 = new System_Action_AnimateEvent__AnimateEventArgs_();
        System.Action<object, object>.__ctor(uVar5,this,DAT_ram_00566dc4,0);
        pAVar3 = pAVar8.OnAnimate;
        while( true ) {
            iVar4 = 0;
            iVar6 = System.Delegate.Combine(pAVar3,uVar5,0);
            uVar2 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
            if ((iVar6 != 0) && (iVar4 = (iVar6 as System_Action_AnimateEvent__AnimateEventArgs_), iVar4 == 0)) break;
            pAVar7 = (Action)Interlocked.CompareExchange(ref pAVar8.OnAnimate, iVar4, pAVar3);
            bVar1 = pAVar3 == pAVar7;
            pAVar3 = pAVar7;
            if (bVar1) {
                __this_00 = this.enemy.idleEvent;
                value = (System.Action.IdleEvent) new System_Action_IdleEvent_();
                System.Action<object>.__ctor(value,this,DAT_ram_00566dcc,0);
                __this_00.add_OnIdle(value);
                __this_01 = this.enemy.moveByEnemyAIEvent;
                value_00 = (System.Action.MoveByEnemyAIEvent) new System_Action_MoveByEnemyAIEvent_();
                System.Action<object>.__ctor(value_00,this,DAT_ram_00566dd0,0);
                __this_01.add_OnMoveByEnemyAI(value_00);
                pAVar9 = this.enemy.attackEvent;
                uVar5 = new System_Action_AttackEvent_();
                System.Action<object>.__ctor(uVar5,this,DAT_ram_00566dc8,0);
                pAVar3 = pAVar9.OnAttack;
                while( true ) {
                    iVar4 = 0;
                    iVar6 = System.Delegate.Combine(pAVar3,uVar5,0);
                    uVar2 = System_Action_AttackEvent__TypeInfo;
                    if ((iVar6 != 0) && (iVar4 = (iVar6 as System_Action_AttackEvent_), iVar4 == 0)) break;
                    pAVar7 = (Action)Interlocked.CompareExchange(ref pAVar9.OnAttack, iVar4, pAVar3);
                    bVar1 = pAVar3 == pAVar7;
                    pAVar3 = pAVar7;
                    if (bVar1) {
                        return;
                    }
                }
                unnamed_function_1116(iVar6,uVar2);
                do {
                    throw null;
                } while( true );
            }
        }
        unnamed_function_1116(iVar6,uVar2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x369F Offset: 0x369F VA: 0x369F
    private void OnDisable()
    {
        bool bVar1 = default;
        int uVar2 = default;
        Action pAVar3 = default;
        int iVar4 = default;
        int uVar5 = default;
        int iVar6 = default;
        Action pAVar7 = default;
        System.Action.IdleEvent value = default;
        System.Action.MoveByEnemyAIEvent value_00 = default;
        AnimateEvent pAVar8 = default;
        IdleEvent __this_00 = default;
        MoveByEnemyAIEvent __this_01 = default;
        AttackEvent pAVar9 = default;

        pAVar8 = this.enemy.animateEvent;
        uVar5 = new System_Action_AnimateEvent__AnimateEventArgs_();
        System.Action<object, object>.__ctor(uVar5,this,DAT_ram_00566dc4,0);
        pAVar3 = pAVar8.OnAnimate;
        while( true ) {
            iVar4 = 0;
            iVar6 = System.Delegate.Remove(pAVar3,uVar5,0);
            uVar2 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
            if ((iVar6 != 0) && (iVar4 = (iVar6 as System_Action_AnimateEvent__AnimateEventArgs_), iVar4 == 0)) break;
            pAVar7 = (Action)Interlocked.CompareExchange(ref pAVar8.OnAnimate, iVar4, pAVar3);
            bVar1 = pAVar3 == pAVar7;
            pAVar3 = pAVar7;
            if (bVar1) {
                __this_00 = this.enemy.idleEvent;
                value = (System.Action.IdleEvent) new System_Action_IdleEvent_();
                System.Action<object>.__ctor(value,this,DAT_ram_00566dcc,0);
                __this_00.remove_OnIdle(value);
                __this_01 = this.enemy.moveByEnemyAIEvent;
                value_00 = (System.Action.MoveByEnemyAIEvent) new System_Action_MoveByEnemyAIEvent_();
                System.Action<object>.__ctor(value_00,this,DAT_ram_00566dd0,0);
                __this_01.remove_OnMoveByEnemyAI(value_00);
                pAVar9 = this.enemy.attackEvent;
                uVar5 = new System_Action_AttackEvent_();
                System.Action<object>.__ctor(uVar5,this,DAT_ram_00566dc8,0);
                pAVar3 = pAVar9.OnAttack;
                while( true ) {
                    iVar4 = 0;
                    iVar6 = System.Delegate.Remove(pAVar3,uVar5,0);
                    uVar2 = System_Action_AttackEvent__TypeInfo;
                    if ((iVar6 != 0) && (iVar4 = (iVar6 as System_Action_AttackEvent_), iVar4 == 0)) break;
                    pAVar7 = (Action)Interlocked.CompareExchange(ref pAVar9.OnAttack, iVar4, pAVar3);
                    bVar1 = pAVar3 == pAVar7;
                    pAVar3 = pAVar7;
                    if (bVar1) {
                        return;
                    }
                }
                unnamed_function_1116(iVar6,uVar2);
                do {
                    throw null;
                } while( true );
            }
        }
        unnamed_function_1116(iVar6,uVar2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x36A0 Offset: 0x36A0 VA: 0x36A0
    private void MoveByEnemyAIEvent_OnMoveByEnemyAI(MoveByEnemyAIEvent moveByEnemyAIEvent)
    {
        Animator param1 = default;

        if ((this.attackAnimationCoroutine == (Coroutine)0x0) && (this.enemy.animationEnemyType - IdleAndRun < 2)) {
            this.InitializeStateAnimationParameters();
            param1 = this.enemy.animator;
            /* candidates: UnityEngine.Animator.SetBool | UnityEngine.Animator.SetBoolID */ unnamed_function_45420(param1,Settings.isMoving,1,0);
        }
    }

    // RVA: 0x36A1 Offset: 0x36A1 VA: 0x36A1
    private void IdleEvent_OnIdle(IdleEvent idleEvent)
    {
        Animator param1 = default;

        if (this.enemy.animationEnemyType - IdleAndRun < 2) {
            this.InitializeStateAnimationParameters();
            param1 = this.enemy.animator;
            /* candidates: UnityEngine.Animator.SetBool | UnityEngine.Animator.SetBoolID */ unnamed_function_45420(param1,Raw.Deref(Raw.Read<object>(Settings_TypeInfo + 0x5c)),1,0);
        }
    }

    // RVA: 0x36A2 Offset: 0x36A2 VA: 0x36A2
    private void AttackEvent_OnAttack(AttackEvent attackEvent)
    {
        int param2 = default;
        Coroutine pCVar1 = default;
        Animator param1 = default;

        if (this.enemy.animationEnemyType == IdleRunAndAttack) {
            if (this.attackAnimationCoroutine != (Coroutine)0x0) {
                UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackAnimationCoroutine,0);
            }
            param2 = new AnimateEnemy__PlayAttackAnimationCoroutine_d__10();
            Raw.Write<object>(param2 + 0x10 /* enemy */, this);
            Raw.Write<int>(param2 + 8, 0);
            pCVar1 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
            this.attackAnimationCoroutine = pCVar1;
            this.InitializeStateAnimationParameters();
            param1 = this.enemy.animator;
            /* candidates: UnityEngine.Animator.SetTrigger | UnityEngine.Animator.SetTriggerID */ unnamed_function_45425(param1,Settings.isAttack,0);
        }
    }

    // RVA: 0x36A3 Offset: 0x36A3 VA: 0x36A3
    private void PlayAttackAnimation()
    {
        int param2 = default;
        Coroutine pCVar1 = default;

        if (this.attackAnimationCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackAnimationCoroutine,0);
        }
        param2 = new AnimateEnemy__PlayAttackAnimationCoroutine_d__10();
        Raw.Write<object>(param2 + 0x10 /* enemy */, this);
        Raw.Write<int>(param2 + 8, 0);
        pCVar1 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
        this.attackAnimationCoroutine = pCVar1;
    }

    [IteratorStateMachine(typeof(AnimateEnemy._PlayAttackAnimationCoroutine_d__10))]
    // RVA: 0x36A4 Offset: 0x36A4 VA: 0x36A4
    private IEnumerator PlayAttackAnimationCoroutine()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new AnimateEnemy__PlayAttackAnimationCoroutine_d__10();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x36A5 Offset: 0x36A5 VA: 0x36A5
    private void InitializeStateAnimationParameters()
    {
        Animator param1 = default;
        object puVar1 = default; // int*
        int iVar2 = default;

        param1 = this.enemy.animator;
        if (this.enemy.animationEnemyType == IdleRunAndAttack) {
            /* candidates: UnityEngine.Animator.SetBool | UnityEngine.Animator.SetBoolID */ unnamed_function_45420(param1,Raw.Deref(Raw.Read<object>(Settings_TypeInfo + 0x5c)),0,0);
            puVar1 = (object)(Raw.Read<int>(Settings_TypeInfo + 0x5c) + 4);
            param1 = this.enemy.animator;
            iVar2 = 8;
        }
        else {
            puVar1 = Raw.Read<object>(Settings_TypeInfo + 0x5c);
            iVar2 = 4;
        }
        /* candidates: UnityEngine.Animator.SetBool | UnityEngine.Animator.SetBoolID */ unnamed_function_45420(param1,*puVar1,0,0);
        /* candidates: UnityEngine.Animator.SetBool | UnityEngine.Animator.SetBoolID */ unnamed_function_45420 (this.enemy.animator,Raw.Read<int>(Raw.Read<int>(Settings_TypeInfo + 0x5c) + iVar2),0,0 );
    }

    // RVA: 0x36A6 Offset: 0x36A6 VA: 0x36A6
    private void AnimateEnemy_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs)
    {
        this.InitializeAnimationParameters();
        this.SetAimAnimationParameters(animateEventArgs.aimDirection);
        this.aimDirection = animateEventArgs.aimDirection;
    }

    // RVA: 0x36A7 Offset: 0x36A7 VA: 0x36A7
    private void InitializeAnimationParameters()
    {
        Animator param1 = default;

        param1 = this.enemy.animator;
        /* candidates: UnityEngine.Animator.SetBool | UnityEngine.Animator.SetBoolID */ unnamed_function_45420(param1,Settings.aimDown,0,0);
        /* candidates: UnityEngine.Animator.SetBool | UnityEngine.Animator.SetBoolID */ unnamed_function_45420 (this.enemy.animator,Settings.aimUp,0,0);
        /* candidates: UnityEngine.Animator.SetBool | UnityEngine.Animator.SetBoolID */ unnamed_function_45420 (this.enemy.animator,Settings.aimRight,0,0);
        /* candidates: UnityEngine.Animator.SetBool | UnityEngine.Animator.SetBoolID */ unnamed_function_45420 (this.enemy.animator,Settings.aimLeft,0,0);
    }

    // RVA: 0x36A8 Offset: 0x36A8 VA: 0x36A8
    private void SetAimAnimationParameters(AimDirection aimDirection)
    {
        int iVar1 = default;
        Animator param1 = default;
        int iVar2 = default;

        if (aimDirection == Up) {
            param1 = this.enemy.animator;
            iVar1 = 0x10;
            iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
        }
        else {
            if (aimDirection == UpRight) {
                return;
            }
            if (aimDirection == UpLeft) {
                return;
            }
            if (aimDirection == Right) {
                param1 = this.enemy.animator;
                iVar1 = 0x24;
                iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
            }
            else if (aimDirection == Left) {
                param1 = this.enemy.animator;
                iVar1 = 0x28;
                iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
            }
            else {
                if (aimDirection != Down) {
                    return;
                }
                param1 = this.enemy.animator;
                iVar1 = 0x18;
                iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
            }
        }
        if (iVar2 == 0) {
        }
        /* candidates: UnityEngine.Animator.SetBool | UnityEngine.Animator.SetBoolID */ unnamed_function_45420(param1,Raw.Read<int>(Raw.Read<int>(Settings_TypeInfo + 0x5c) + iVar1),1,0);
    }

    // RVA: 0x36A9 Offset: 0x36A9 VA: 0x36A9
    public AnimateEnemy()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
