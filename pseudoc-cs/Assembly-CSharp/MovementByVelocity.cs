// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MovementByVelocity.c by tools/c2cs.py
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

public class MovementByVelocity : MonoBehaviour // TypeDefIndex: 5675
{
    // Fields
    private Rigidbody2D rigidBody2D; // 0x10
    private MovementByVelocityEvent movementByVelocityEvent; // 0x14
    private DestroyedEvent destroyedEvent; // 0x18
    private DieEvent dieEvent; // 0x1C

    // Methods

    // RVA: 0x395B Offset: 0x395B VA: 0x395B
    private void Awake()
    {
        Rigidbody2D pRVar1 = default;
        MovementByVelocityEvent pMVar2 = default;
        DestroyedEvent pDVar3 = default;
        DieEvent pDVar4 = default;

        pRVar1 = (Rigidbody2D)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f18);
        this.rigidBody2D = pRVar1;
        pMVar2 = (MovementByVelocityEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ed4);
        this.movementByVelocityEvent = pMVar2;
        pDVar3 = (DestroyedEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e70);
        this.destroyedEvent = pDVar3;
        pDVar4 = (DieEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e74);
        this.dieEvent = pDVar4;
    }

    // RVA: 0x395C Offset: 0x395C VA: 0x395C
    private void OnEnable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        System.Action.DestroyedEvent.DestroyedEventArgs value = default;
        System.Action.DieEvent value_00 = default;
        MovementByVelocityEvent pMVar3 = default;
        DestroyedEvent __this_00 = default;
        DieEvent __this_01 = default;

        pMVar3 = this.movementByVelocityEvent;
        param1_00 = unnamed_function_95402 (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056b188,0);
        param1 = pMVar3.OnMovementByVelocity;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01, System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo ), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pMVar3.OnMovementByVelocity, param2_00, param1);
            bVar1 = param1 == pAVar2;
            param1 = pAVar2;
            if (bVar1) {
                __this_00 = this.destroyedEvent;
                value = (System.Action.DestroyedEvent.DestroyedEventArgs) new System_Action_DestroyedEvent__DestroyedEventArgs_();
                System.Action<object, object>.__ctor(value,this,DAT_ram_0056b180,0);
                __this_00.add_OnDestroyed(value);
                __this_01 = this.dieEvent;
                value_00 = (System.Action.DieEvent) new System_Action_DieEvent_();
                System.Action<object>.__ctor(value_00,this,DAT_ram_0056b184,0);
                __this_01.add_OnDie(value_00);
                return;
            }
        }
        unnamed_function_1116(param1_01,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x395D Offset: 0x395D VA: 0x395D
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        System.Action.DestroyedEvent.DestroyedEventArgs value = default;
        System.Action.DieEvent value_00 = default;
        MovementByVelocityEvent pMVar3 = default;
        DestroyedEvent __this_00 = default;
        DieEvent __this_01 = default;

        pMVar3 = this.movementByVelocityEvent;
        param1_00 = unnamed_function_95402 (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056b188,0);
        param1 = pMVar3.OnMovementByVelocity;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01, System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo ), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pMVar3.OnMovementByVelocity, param2_00, param1);
            bVar1 = param1 == pAVar2;
            param1 = pAVar2;
            if (bVar1) {
                __this_00 = this.destroyedEvent;
                value = (System.Action.DestroyedEvent.DestroyedEventArgs) new System_Action_DestroyedEvent__DestroyedEventArgs_();
                System.Action<object, object>.__ctor(value,this,DAT_ram_0056b180,0);
                __this_00.remove_OnDestroyed(value);
                __this_01 = this.dieEvent;
                value_00 = (System.Action.DieEvent) new System_Action_DieEvent_();
                System.Action<object>.__ctor(value_00,this,DAT_ram_0056b184,0);
                __this_01.remove_OnDie(value_00);
                return;
            }
        }
        unnamed_function_1116(param1_01,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x395E Offset: 0x395E VA: 0x395E
    private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        MovementByVelocityEvent pMVar3 = default;

        if (destroyedEventArgs.playerDied != false) {
            pMVar3 = this.movementByVelocityEvent;
            param1_00 = unnamed_function_95402 (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
            System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056b188,0);
            if (DAT_ram_00664928 == '\0') {
                unnamed_function_1099 (&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
            }
            param1 = pMVar3.OnMovementByVelocity;
            do {
                param2_00 = 0;
                param1_01 = System.Delegate.Remove(param1,param1_00,0);
                param2 = System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo;
                if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01, System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo ), param2_00 == 0)) {
                    unnamed_function_1116(param1_01,param2);
                    do {
                        throw null;
                    } while( true );
                }
                pAVar2 = (Action)Interlocked.CompareExchange(ref pMVar3.OnMovementByVelocity, param2_00, param1);
                bVar1 = param1 != pAVar2;
                param1 = pAVar2;
            } while (bVar1);
        }
    }

    // RVA: 0x395F Offset: 0x395F VA: 0x395F
    private void DieEvent_OnDie(DieEvent dieEvent)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        MovementByVelocityEvent pMVar3 = default;

        pMVar3 = this.movementByVelocityEvent;
        param1_00 = unnamed_function_95402 (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056b188,0);
        param1 = pMVar3.OnMovementByVelocity;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01, System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo ), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pMVar3.OnMovementByVelocity, param2_00, param1);
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

    // RVA: 0x3960 Offset: 0x3960 VA: 0x3960
    private void MovementByVelocityEvent_OnMovementByVelocity(MovementByVelocityEvent movementByVelocityEvent, MovementByVelocityArgs movementByVelocityArgs)
    {
        long local_10 = default;
        long local_8 = default;

        local_10 = CONCAT44(movementByVelocityArgs.moveSpeed * movementByVelocityArgs.moveDirection.y, movementByVelocityArgs.moveSpeed * movementByVelocityArgs.moveDirection.x);
        local_8 = local_10;
        /* candidates: UnityEngine.Rigidbody2D.set_velocity | UnityEngine.Rigidbody2D.set_velocity_Injected */ unnamed_function_16392(this.rigidBody2D,&local_10,0);
    }

    // RVA: 0x3961 Offset: 0x3961 VA: 0x3961
    private void MoveRigidBody(Vector2 moveDirection, float moveSpeed)
    {
        long local_10 = default;
        long local_8 = default;

        local_10 = CONCAT44((*moveDirection).y * moveSpeed,(*moveDirection).x * moveSpeed);
        local_8 = local_10;
        /* candidates: UnityEngine.Rigidbody2D.set_velocity | UnityEngine.Rigidbody2D.set_velocity_Injected */ unnamed_function_16392(this.rigidBody2D,&local_10,0);
    }

    // RVA: 0x3962 Offset: 0x3962 VA: 0x3962
    public MovementByVelocity()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
