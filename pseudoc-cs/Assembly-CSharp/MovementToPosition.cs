// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MovementToPosition.c by tools/c2cs.py
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

public class MovementToPosition : MonoBehaviour // TypeDefIndex: 5679
{
    // Fields
    private Rigidbody2D rigidBody2D; // 0x10
    private MovementToPositionEvent movementToPositionEvent; // 0x14

    // Methods

    // RVA: 0x396A Offset: 0x396A VA: 0x396A
    private void Awake()
    {
        Rigidbody2D pRVar1 = default;
        MovementToPositionEvent pMVar2 = default;

        pRVar1 = (Rigidbody2D)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f18);
        this.rigidBody2D = pRVar1;
        pMVar2 = (MovementToPositionEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ed8);
        this.movementToPositionEvent = pMVar2;
    }

    // RVA: 0x396B Offset: 0x396B VA: 0x396B
    private void OnEnable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        MovementToPositionEvent pMVar3 = default;

        pMVar3 = this.movementToPositionEvent;
        param1_00 = unnamed_function_95402 (System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo);
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056b18c,0);
        param1 = pMVar3.OnMovementToPosition;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01, System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo ), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&pMVar3.OnMovementToPosition,param2_00,param1);
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

    // RVA: 0x396C Offset: 0x396C VA: 0x396C
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        MovementToPositionEvent pMVar3 = default;

        pMVar3 = this.movementToPositionEvent;
        param1_00 = unnamed_function_95402 (System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo);
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056b18c,0);
        param1 = pMVar3.OnMovementToPosition;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01, System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo ), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&pMVar3.OnMovementToPosition,param2_00,param1);
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

    // RVA: 0x396D Offset: 0x396D VA: 0x396D
    private void MovementToPositionEvent_OnMovementToPosition(MovementToPositionEvent movementToPositionEvent, MovementToPositionArgs movementToPositionArgs)
    {
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        local_10.z = movementToPositionArgs.movePosition.z;
        local_10.x = movementToPositionArgs.movePosition.x;
        local_10.y = movementToPositionArgs.movePosition.y;
        local_20.z = movementToPositionArgs.currentPosition.z;
        local_20.x = movementToPositionArgs.currentPosition.x;
        local_20.y = movementToPositionArgs.currentPosition.y;
        this.MoveRigidBody(&local_10, &local_20, movementToPositionArgs.moveSpeed);
    }

    // RVA: 0x396E Offset: 0x396E VA: 0x396E
    private void MoveRigidBody(Vector3 movePosition, Vector3 currentPosition, float moveSpeed)
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        float fVar6 = default;
        Rigidbody2D param2 = default;
        long local_18 = default;
        long local_10 = default;

        byte[] local_8 = new byte[8];
        fVar1 = currentPosition.z;
        fVar2 = movePosition.z;
        fVar3 = currentPosition.y;
        fVar4 = movePosition.y;
        fVar5 = currentPosition.x;
        fVar6 = movePosition.x;
        fVar2 = fVar2 - fVar1;
        fVar4 = fVar4 - fVar3;
        fVar6 = fVar6 - fVar5;
        fVar1 = Mathf.Sqrt(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2);
        if (1e-05 < fVar1) {
            fVar4 = fVar4 / fVar1;
            fVar6 = fVar6 / fVar1;
        }
        else {
            fVar4 = (Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c))[1];
            fVar6 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        }
        param2 = this.rigidBody2D;
        UnityEngine.Rigidbody2D.get_position(local_8,param2,0);
        fVar1 = UnityEngine.Time.get_fixedDeltaTime(0);
        local_18 = CONCAT44(fVar4 * moveSpeed * fVar1 + local_8._4_4_, fVar6 * moveSpeed * fVar1 + local_8._0_4_);
        local_10 = local_18;
        unnamed_function_16388(param2,&local_18,0);
    }

    // RVA: 0x396F Offset: 0x396F VA: 0x396F
    public MovementToPosition()
    {
        unnamed_function_44622(this,0);
    }
}
