// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/AnimatePlayer.c by tools/c2cs.py
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

public class AnimatePlayer : MonoBehaviour // TypeDefIndex: 5547
{
    // Fields
    private Player player; // 0x10
    private DieEvent dieEvent; // 0x14
    private Coroutine attackAnimationCoroutine; // 0x18
    private bool isAttacking; // 0x1C

    // Methods

    // RVA: 0x36B5 Offset: 0x36B5 VA: 0x36B5
    private void Awake()
    {
        Player pPVar1 = default;
        DieEvent pDVar2 = default;
        Animator param1 = default;

        pPVar1 = (Player)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ef0);
        this.player = pPVar1;
        param1 = pPVar1.animator;
        unnamed_function_45420(param1,Settings.aimDown,1,0);
        pDVar2 = (DieEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e74);
        this.dieEvent = pDVar2;
    }

    // RVA: 0x36B6 Offset: 0x36B6 VA: 0x36B6
    private void OnEnable()
    {
        bool bVar1 = default;
        Action pAVar2 = default;
        int iVar3 = default;
        int uVar4 = default;
        int iVar5 = default;
        Action pAVar6 = default;
        System.Action.IdleEvent value = default;
        System.Action.MovementByVelocityEvent.MovementByVelocityArgs value_00 = default;
        int iVar7 = default;
        AnimateEvent pAVar8 = default;
        IdleEvent __this_00 = default;
        MovementByVelocityEvent __this_01 = default;
        AttackEvent pAVar9 = default;
        DestroyedEvent pDVar10 = default;
        DieEvent pDVar11 = default;
        int uVar12 = default;

        pAVar8 = this.player.animateEvent;
        uVar4 = new System_Action_AnimateEvent__AnimateEventArgs_();
        System.Action<object, object>.__ctor(uVar4,this,DAT_ram_00566dd4,0);
        pAVar2 = pAVar8.OnAnimate;
        do {
            iVar3 = 0;
            iVar5 = System.Delegate.Combine(pAVar2,uVar4,0);
            uVar12 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
            if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,System_Action_AnimateEvent__AnimateEventArgs__TypeInfo), iVar3 == 0)) {
                unnamed_function_1116(iVar5,uVar12);
                do {
                    throw null;
                } while( true );
            }
            pAVar6 = (Action)unnamed_function_1144(&pAVar8.OnAnimate,iVar3,pAVar2);
            bVar1 = pAVar2 != pAVar6;
            pAVar2 = pAVar6;
        } while (bVar1);
        __this_00 = this.player.idleEvent;
        value = (System.Action.IdleEvent)new System_Action_IdleEvent_();
        System.Action<object>.__ctor(value,this,DAT_ram_00566de8,0);
        __this_00.add_OnIdle(value);
        __this_01 = this.player.movementByVelocityEvent;
        value_00 = (System.Action.MovementByVelocityEvent.MovementByVelocityArgs) unnamed_function_95402 (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
        System.Action<object, object>.__ctor(value_00,this,DAT_ram_00566dec,0);
        __this_01.add_OnMovementByVelocity(value_00);
        pAVar9 = this.player.attackEvent;
        uVar4 = new System_Action_AttackEvent_();
        System.Action<object>.__ctor(uVar4,this,DAT_ram_00566dd8,0);
        pAVar2 = pAVar9.OnAttack;
        do {
            iVar3 = 0;
            iVar5 = System.Delegate.Combine(pAVar2,uVar4,0);
            uVar12 = System_Action_AttackEvent__TypeInfo;
            if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,System_Action_AttackEvent__TypeInfo), iVar3 == 0)) {
                unnamed_function_1116(iVar5,uVar12);
                do {
                    throw null;
                } while( true );
            }
            pAVar6 = (Action)unnamed_function_1144(&pAVar9.OnAttack,iVar3,pAVar2);
            bVar1 = pAVar2 != pAVar6;
            pAVar2 = pAVar6;
        } while (bVar1);
        pDVar10 = this.player.destroyedEvent;
        uVar4 = new System_Action_DestroyedEvent__DestroyedEventArgs_();
        System.Action<object, object>.__ctor(uVar4,this,DAT_ram_00566ddc,0);
        pAVar2 = pDVar10.OnDestroyed;
        do {
            iVar3 = 0;
            iVar5 = System.Delegate.Combine(pAVar2,uVar4,0);
            uVar12 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
            if ((iVar5 != 0) && (iVar3 = unnamed_function_1112 (iVar5,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo), iVar3 == 0)) {
                unnamed_function_1116(iVar5,uVar12);
                do {
                    throw null;
                } while( true );
            }
            pAVar6 = (Action)unnamed_function_1144(&pDVar10.OnDestroyed,iVar3,pAVar2);
            bVar1 = pAVar2 != pAVar6;
            pAVar2 = pAVar6;
        } while (bVar1);
        pDVar11 = this.dieEvent;
        uVar4 = new System_Action_DieEvent_();
        System.Action<object>.__ctor(uVar4,this,DAT_ram_00566de0,0);
        pAVar2 = pDVar11.OnDie;
        do {
            iVar3 = 0;
            iVar5 = System.Delegate.Combine(pAVar2,uVar4,0);
            uVar12 = System_Action_DieEvent__TypeInfo;
            if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,System_Action_DieEvent__TypeInfo), iVar3 == 0)) {
                unnamed_function_1116(iVar5,uVar12);
                do {
                    throw null;
                } while( true );
            }
            pAVar6 = (Action)unnamed_function_1144(&pDVar11.OnDie,iVar3,pAVar2);
            bVar1 = pAVar2 != pAVar6;
            pAVar2 = pAVar6;
        } while (bVar1);
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar5 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        uVar12 = Raw.Read<int>(iVar5 + 0x20);
        uVar4 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar4,this,DAT_ram_00566de4,0);
        iVar3 = System.Delegate.Combine(uVar12,uVar4,0);
        uVar4 = System_Action_GameState__TypeInfo;
        if (iVar3 != 0) {
            iVar7 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
            if (iVar7 == 0) {
                unnamed_function_1116(iVar3,uVar4);
                do {
                    throw null;
                } while( true );
            }
            Raw.Write<int>(iVar5 + 0x20, iVar7);
            uVar4 = System_Action_GameState__TypeInfo;
            iVar5 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
            if (iVar5 != 0) {
                return;
            }
            unnamed_function_1116(iVar3,uVar4);
            do {
                throw null;
            } while( true );
        }
        Raw.Write<int>(iVar5 + 0x20, 0);
    }

    // RVA: 0x36B7 Offset: 0x36B7 VA: 0x36B7
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
        System.Action.MovementByVelocityEvent.MovementByVelocityArgs value_00 = default;
        AnimateEvent pAVar8 = default;
        IdleEvent __this_00 = default;
        MovementByVelocityEvent __this_01 = default;
        AttackEvent pAVar9 = default;
        DieEvent pDVar10 = default;
        DestroyedEvent pDVar11 = default;

        pAVar8 = this.player.animateEvent;
        uVar5 = new System_Action_AnimateEvent__AnimateEventArgs_();
        System.Action<object, object>.__ctor(uVar5,this,DAT_ram_00566dd4,0);
        pAVar3 = pAVar8.OnAnimate;
        while( true ) {
            iVar4 = 0;
            iVar6 = System.Delegate.Remove(pAVar3,uVar5,0);
            uVar2 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
            if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,System_Action_AnimateEvent__AnimateEventArgs__TypeInfo), iVar4 == 0)) break;
            pAVar7 = (Action)unnamed_function_1144(&pAVar8.OnAnimate,iVar4,pAVar3);
            bVar1 = pAVar3 == pAVar7;
            pAVar3 = pAVar7;
            if (bVar1) {
                __this_00 = this.player.idleEvent;
                value = (System.Action.IdleEvent) new System_Action_IdleEvent_();
                System.Action<object>.__ctor(value,this,DAT_ram_00566de8,0);
                __this_00.remove_OnIdle(value);
                __this_01 = this.player.movementByVelocityEvent;
                value_00 = (System.Action.MovementByVelocityEvent.MovementByVelocityArgs) unnamed_function_95402 (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
                System.Action<object, object>.__ctor(value_00,this,DAT_ram_00566dec,0);
                __this_01.remove_OnMovementByVelocity(value_00);
                pAVar9 = this.player.attackEvent;
                uVar5 = new System_Action_AttackEvent_();
                System.Action<object>.__ctor(uVar5,this,DAT_ram_00566dd8,0);
                pAVar3 = pAVar9.OnAttack;
                while( true ) {
                    iVar4 = 0;
                    iVar6 = System.Delegate.Remove(pAVar3,uVar5,0);
                    uVar2 = System_Action_AttackEvent__TypeInfo;
                    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,System_Action_AttackEvent__TypeInfo), iVar4 == 0)) break;
                    pAVar7 = (Action)unnamed_function_1144(&pAVar9.OnAttack,iVar4,pAVar3);
                    bVar1 = pAVar3 == pAVar7;
                    pAVar3 = pAVar7;
                    if (bVar1) {
                        pDVar10 = this.dieEvent;
                        uVar5 = new System_Action_DieEvent_();
                        System.Action<object>.__ctor(uVar5,this,DAT_ram_00566de0,0);
                        pAVar3 = pDVar10.OnDie;
                        while( true ) {
                            iVar4 = 0;
                            iVar6 = System.Delegate.Remove(pAVar3,uVar5,0);
                            uVar2 = System_Action_DieEvent__TypeInfo;
                            if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,System_Action_DieEvent__TypeInfo), iVar4 == 0)) break;
                            pAVar7 = (Action)unnamed_function_1144(&pDVar10.OnDie,iVar4,pAVar3);
                            bVar1 = pAVar3 == pAVar7;
                            pAVar3 = pAVar7;
                            if (bVar1) {
                                pDVar11 = this.player.destroyedEvent;
                                uVar5 = unnamed_function_95402 (System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
                                System.Action<object, object>.__ctor(uVar5,this,DAT_ram_00566ddc,0);
                                pAVar3 = pDVar11.OnDestroyed;
                                while( true ) {
                                    iVar4 = 0;
                                    iVar6 = System.Delegate.Remove(pAVar3,uVar5,0);
                                    uVar2 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
                                    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112 (iVar6, System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo), iVar4 == 0)) break;
                                    pAVar7 = (Action)unnamed_function_1144(&pDVar11.OnDestroyed,iVar4,pAVar3);
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

    // RVA: 0x36B8 Offset: 0x36B8 VA: 0x36B8
    private void GameStateChanged_OnPlayer(GameState gameState)
    {
        bool bVar1 = default;
        MethodInfo param1 = default;
        Action pAVar2 = default;
        int iVar3 = default;
        System.Action.IdleEvent pSVar4 = default;
        System.Action.MovementByVelocityEvent.MovementByVelocityArgs pSVar5 = default;
        int uVar6 = default;
        int iVar7 = default;
        Action pAVar8 = default;
        MethodInfo method_00 = default;
        int iVar9 = default;
        IdleEvent pIVar10 = default;
        MovementByVelocityEvent pMVar11 = default;
        AttackEvent pAVar12 = default;
        DestroyedEvent pDVar13 = default;
        Animator param1_00 = default;
        int uVar14 = default;

        if (gameState == Intro) {
            pIVar10 = this.player.idleEvent;
            pSVar4 = (System.Action.IdleEvent)new System_Action_IdleEvent_();
            System.Action<object>.__ctor(pSVar4,this,DAT_ram_00566de8,0);
            pIVar10.remove_OnIdle(pSVar4);
            pMVar11 = this.player.movementByVelocityEvent;
            pSVar5 = (System.Action.MovementByVelocityEvent.MovementByVelocityArgs) unnamed_function_95402 (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
            System.Action<object, object>.__ctor(pSVar5,this,DAT_ram_00566dec,0);
            pMVar11.remove_OnMovementByVelocity(pSVar5);
            pAVar12 = this.player.attackEvent;
            uVar6 = new System_Action_AttackEvent_();
            System.Action<object>.__ctor(uVar6,this,DAT_ram_00566dd8,0);
            pAVar2 = pAVar12.OnAttack;
            while( true ) {
                iVar3 = 0;
                iVar7 = System.Delegate.Remove(pAVar2,uVar6,0);
                uVar14 = System_Action_AttackEvent__TypeInfo;
                if ((iVar7 != 0) && (iVar3 = unnamed_function_1112(iVar7,System_Action_AttackEvent__TypeInfo), iVar3 == 0)) break;
                pAVar8 = (Action)unnamed_function_1144(&pAVar12.OnAttack,iVar3,pAVar2);
                bVar1 = pAVar2 == pAVar8;
                pAVar2 = pAVar8;
                if (bVar1) {
                    pDVar13 = this.player.destroyedEvent;
                    uVar6 = new System_Action_DestroyedEvent__DestroyedEventArgs_();
                    System.Action<object, object>.__ctor(uVar6,this,DAT_ram_00566ddc,0);
                    param1 = pDVar13.OnDestroyed;
                    while( true ) {
                        iVar3 = 0;
                        iVar7 = System.Delegate.Remove(param1,uVar6,0);
                        uVar14 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
                        if ((iVar7 != 0) && (iVar3 = unnamed_function_1112 (iVar7,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo), iVar3 == 0)) break;
                        method_00 = unnamed_function_1144(&pDVar13.OnDestroyed,iVar3,param1);
                        bVar1 = param1 == method_00;
                        param1 = method_00;
                        if (bVar1) {
                            this.InitializeStateAnimationParameters(method_00);
                            param1_00 = this.player.animator;
                            unnamed_function_45420 (param1_00,Settings.isFaint,1,0);
                            return;
                        }
                    }
                    unnamed_function_1116(iVar7,uVar14);
                    do {
                        throw null;
                    } while( true );
                }
            }
            unnamed_function_1116(iVar7,uVar14);
            do {
                throw null;
            } while( true );
        }
        if ((gameState != Begin) && (gameState == Instruct)) {
            pIVar10 = this.player.idleEvent;
            pSVar4 = (System.Action.IdleEvent)new System_Action_IdleEvent_();
            System.Action<object>.__ctor(pSVar4,this,DAT_ram_00566de8,0);
            pIVar10.add_OnIdle(pSVar4);
            pMVar11 = this.player.movementByVelocityEvent;
            pSVar5 = (System.Action.MovementByVelocityEvent.MovementByVelocityArgs) unnamed_function_95402 (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
            System.Action<object, object>.__ctor(pSVar5,this,DAT_ram_00566dec,0);
            pMVar11.add_OnMovementByVelocity(pSVar5);
            pAVar12 = this.player.attackEvent;
            uVar6 = new System_Action_AttackEvent_();
            System.Action<object>.__ctor(uVar6,this,DAT_ram_00566dd8,0);
            pAVar2 = pAVar12.OnAttack;
            do {
                iVar3 = 0;
                iVar7 = System.Delegate.Combine(pAVar2,uVar6,0);
                uVar14 = System_Action_AttackEvent__TypeInfo;
                if ((iVar7 != 0) && (iVar3 = unnamed_function_1112(iVar7,System_Action_AttackEvent__TypeInfo), iVar3 == 0)) {
                    unnamed_function_1116(iVar7,uVar14);
                    do {
                        throw null;
                    } while( true );
                }
                pAVar8 = (Action)unnamed_function_1144(&pAVar12.OnAttack,iVar3,pAVar2);
                bVar1 = pAVar2 != pAVar8;
                pAVar2 = pAVar8;
            } while (bVar1);
            pDVar13 = this.player.destroyedEvent;
            uVar6 = new System_Action_DestroyedEvent__DestroyedEventArgs_();
            System.Action<object, object>.__ctor(uVar6,this,DAT_ram_00566ddc,0);
            pAVar2 = pDVar13.OnDestroyed;
            do {
                iVar3 = 0;
                iVar7 = System.Delegate.Combine(pAVar2,uVar6,0);
                uVar14 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
                if ((iVar7 != 0) && (iVar3 = unnamed_function_1112 (iVar7,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo), iVar3 == 0)) {
                    unnamed_function_1116(iVar7,uVar14);
                    do {
                        throw null;
                    } while( true );
                }
                pAVar8 = (Action)unnamed_function_1144(&pDVar13.OnDestroyed,iVar3,pAVar2);
                bVar1 = pAVar2 != pAVar8;
                pAVar2 = pAVar8;
            } while (bVar1);
            iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = unnamed_function_95087(iVar3);
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = unnamed_function_95087(iVar3);
            }
            iVar7 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
            uVar14 = Raw.Read<int>(iVar7 + 0x20);
            uVar6 = new System_Action_GameState_();
            System.Action<Int32Enum>.__ctor(uVar6,this,DAT_ram_00566de4,0);
            iVar3 = System.Delegate.Remove(uVar14,uVar6,0);
            uVar6 = System_Action_GameState__TypeInfo;
            if (iVar3 == 0) {
                Raw.Write<int>(iVar7 + 0x20, 0);
                return;
            }
            iVar9 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
            if (iVar9 == 0) {
                unnamed_function_1116(iVar3,uVar6);
                do {
                    throw null;
                } while( true );
            }
            Raw.Write<int>(iVar7 + 0x20, iVar9);
            uVar6 = System_Action_GameState__TypeInfo;
            iVar7 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
            if (iVar7 == 0) {
                unnamed_function_1116(iVar3,uVar6);
                do {
                    throw null;
                } while( true );
            }
        }
    }

    // RVA: 0x36B9 Offset: 0x36B9 VA: 0x36B9
    private void AnimatePlayer_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs)
    {
        this.InitializeAimAnimationParameters();
        this.SetAimAnimationParameters(animateEventArgs.aimDirection);
    }

    // RVA: 0x36BA Offset: 0x36BA VA: 0x36BA
    private void IdleEvent_OnIdle(IdleEvent idleEvent)
    {
        Animator param1 = default;

        if (this.attackAnimationCoroutine == (Coroutine)0x0) {
            this.InitializeStateAnimationParameters();
            param1 = this.player.animator;
            unnamed_function_45420(param1,Raw.Deref(Raw.Read<object>(Settings_TypeInfo + 0x5c)),1,0);
        }
    }

    // RVA: 0x36BB Offset: 0x36BB VA: 0x36BB
    private void MovementByVelocityEvent_OnMovementByVelocity(MovementByVelocityEvent movementByVelocityEvent, MovementByVelocityArgs movementByVelocityArgs)
    {
        Animator param1 = default;

        if (this.attackAnimationCoroutine == (Coroutine)0x0) {
            this.InitializeStateAnimationParameters();
            param1 = this.player.animator;
            unnamed_function_45420(param1,Settings.isMoving,1,0);
        }
    }

    // RVA: 0x36BC Offset: 0x36BC VA: 0x36BC
    private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
    {
        bool bVar1 = default;
        int param2 = default;
        MethodInfo param1 = default;
        int param2_00 = default;
        System.Action.IdleEvent value = default;
        System.Action.MovementByVelocityEvent.MovementByVelocityArgs value_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        MethodInfo method_00 = default;
        IdleEvent __this_00 = default;
        MovementByVelocityEvent __this_01 = default;
        AttackEvent pAVar2 = default;
        Animator param1_02 = default;

        __this_00 = this.player.idleEvent;
        value = (System.Action.IdleEvent)new System_Action_IdleEvent_();
        System.Action<object>.__ctor(value,this,DAT_ram_00566de8,0);
        __this_00.remove_OnIdle(value);
        __this_01 = this.player.movementByVelocityEvent;
        value_00 = (System.Action.MovementByVelocityEvent.MovementByVelocityArgs) unnamed_function_95402 (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
        System.Action<object, object>.__ctor(value_00,this,DAT_ram_00566dec,0);
        __this_01.remove_OnMovementByVelocity(value_00);
        pAVar2 = this.player.attackEvent;
        param1_00 = new System_Action_AttackEvent_();
        System.Action<object>.__ctor(param1_00,this,DAT_ram_00566dd8,0);
        param1 = pAVar2.OnAttack;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_AttackEvent__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112(param1_01,System_Action_AttackEvent__TypeInfo), param2_00 == 0)) break;
            method_00 = unnamed_function_1144(&pAVar2.OnAttack,param2_00,param1);
            bVar1 = param1 == method_00;
            param1 = method_00;
            if (bVar1) {
                this.InitializeStateAnimationParameters(method_00);
                param1_02 = this.player.animator;
                unnamed_function_45420 (param1_02,Settings.isFaint,1,0);
                return;
            }
        }
        unnamed_function_1116(param1_01,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x36BD Offset: 0x36BD VA: 0x36BD
    private void AttackEvent_OnAttack(AttackEvent attackEvent)
    {
        int param2 = default;
        Coroutine pCVar1 = default;
        Animator param1 = default;

        this.InitializeStateAnimationParameters();
        param1 = this.player.animator;
        unnamed_function_45420(param1,Settings.isAttack,1,0);
        if (this.attackAnimationCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackAnimationCoroutine,0);
        }
        param2 = new AnimatePlayer__PlayAttackAnimationCoroutine_d__18();
        Raw.Write<object>(param2 + 0x10 /* player */, this);
        Raw.Write<int>(param2 + 8, 0);
        pCVar1 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
        this.attackAnimationCoroutine = pCVar1;
    }

    // RVA: 0x36BE Offset: 0x36BE VA: 0x36BE
    private void DieEvent_OnDie(DieEvent dieEvent)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        System.Action.IdleEvent value = default;
        System.Action.MovementByVelocityEvent.MovementByVelocityArgs value_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        IdleEvent __this_00 = default;
        MovementByVelocityEvent __this_01 = default;
        AttackEvent pAVar3 = default;

        __this_00 = this.player.idleEvent;
        value = (System.Action.IdleEvent)new System_Action_IdleEvent_();
        System.Action<object>.__ctor(value,this,DAT_ram_00566de8,0);
        __this_00.add_OnIdle(value);
        __this_01 = this.player.movementByVelocityEvent;
        value_00 = (System.Action.MovementByVelocityEvent.MovementByVelocityArgs) unnamed_function_95402 (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
        System.Action<object, object>.__ctor(value_00,this,DAT_ram_00566dec,0);
        __this_01.add_OnMovementByVelocity(value_00);
        pAVar3 = this.player.attackEvent;
        param1_00 = new System_Action_AttackEvent_();
        System.Action<object>.__ctor(param1_00,this,DAT_ram_00566dd8,0);
        param1 = pAVar3.OnAttack;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_AttackEvent__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112(param1_01,System_Action_AttackEvent__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&pAVar3.OnAttack,param2_00,param1);
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

    // RVA: 0x36BF Offset: 0x36BF VA: 0x36BF
    private void InitializeAimAnimationParameters()
    {
        Animator param1 = default;

        param1 = this.player.animator;
        unnamed_function_45420(param1,Settings.aimUp,0,0);
        unnamed_function_45420 (this.player.animator,Settings.aimUpRight,0,0 );
        unnamed_function_45420 (this.player.animator,Settings.aimUpLeft,0,0 );
        unnamed_function_45420 (this.player.animator,Settings.aimRight,0,0 );
        unnamed_function_45420 (this.player.animator,Settings.aimLeft,0,0 );
        unnamed_function_45420 (this.player.animator,Settings.aimDown,0,0 );
        unnamed_function_45420 (this.player.animator,Settings.aimDownRight,0,0 );
        unnamed_function_45420 (this.player.animator,Settings.aimDownLeft,0,0 );
    }

    // RVA: 0x36C0 Offset: 0x36C0 VA: 0x36C0
    private void InitializeStateAnimationParameters()
    {
        Animator param1 = default;

        param1 = this.player.animator;
        unnamed_function_45420(param1,Raw.Deref(Raw.Read<object>(Settings_TypeInfo + 0x5c)),0,0);
        unnamed_function_45420 (this.player.animator,Settings.isMoving,0,0);
        unnamed_function_45420 (this.player.animator,Settings.isAttack,0,0);
        unnamed_function_45420 (this.player.animator,Settings.isFaint,0,0);
    }

    // RVA: 0x36C1 Offset: 0x36C1 VA: 0x36C1
    private void SetAimAnimationParameters(AimDirection aimDirection)
    {
        int iVar1 = default;
        Animator param1 = default;
        int iVar2 = default;

        if (aimDirection == Up) {
            param1 = this.player.animator;
            iVar1 = 0x10;
            iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
        }
        else if (aimDirection == UpRight) {
            param1 = this.player.animator;
            iVar1 = 0x1c;
            iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
        }
        else if (aimDirection == UpLeft) {
            param1 = this.player.animator;
            iVar1 = 0x20;
            iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
        }
        else if (aimDirection == Right) {
            param1 = this.player.animator;
            iVar1 = 0x24;
            iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
        }
        else if (aimDirection == Left) {
            param1 = this.player.animator;
            iVar1 = 0x28;
            iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
        }
        else if (aimDirection == Down) {
            param1 = this.player.animator;
            iVar1 = 0x18;
            iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
        }
        else if (aimDirection == DownRight) {
            param1 = this.player.animator;
            iVar1 = 0x2c;
            iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
        }
        else {
            if (aimDirection != DownLeft) {
                return;
            }
            param1 = this.player.animator;
            iVar1 = 0x30;
            iVar2 = Raw.Read<int>(Settings_TypeInfo + 0x74);
        }
        if (iVar2 == 0) {
        }
        unnamed_function_45420(param1,Raw.Read<int>(Raw.Read<int>(Settings_TypeInfo + 0x5c) + iVar1),1,0);
    }

    // RVA: 0x36C2 Offset: 0x36C2 VA: 0x36C2
    private void PlayAttackAnimation()
    {
        int param2 = default;
        Coroutine pCVar1 = default;

        if (this.attackAnimationCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackAnimationCoroutine,0);
        }
        param2 = new AnimatePlayer__PlayAttackAnimationCoroutine_d__18();
        Raw.Write<object>(param2 + 0x10 /* player */, this);
        Raw.Write<int>(param2 + 8, 0);
        pCVar1 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
        this.attackAnimationCoroutine = pCVar1;
    }

    [IteratorStateMachine(typeof(AnimatePlayer._PlayAttackAnimationCoroutine_d__18))]
    // RVA: 0x36C3 Offset: 0x36C3 VA: 0x36C3
    private IEnumerator PlayAttackAnimationCoroutine()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new AnimatePlayer__PlayAttackAnimationCoroutine_d__18();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x36C4 Offset: 0x36C4 VA: 0x36C4
    public AnimatePlayer()
    {
        unnamed_function_44622(this,0);
    }
}
