// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MovementToPositionEvent.c by tools/c2cs.py
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

public class MovementToPositionEvent : MonoBehaviour // TypeDefIndex: 5680
{
    // Fields
    [CompilerGenerated]
    private Action<MovementToPositionEvent, MovementToPositionArgs> OnMovementToPosition; // 0x10

    // Methods

    [CompilerGenerated]
    // RVA: 0x3970 Offset: 0x3970 VA: 0x3970
    public void add_OnMovementToPosition(Action<MovementToPositionEvent, MovementToPositionArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnMovementToPosition;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Combine(param1,value,0);
            param2 = System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = unnamed_function_1112 (param1_00, System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo ), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref this.OnMovementToPosition, param2_00, param1);
            bVar1 = param1 == pAVar2;
            param1 = pAVar2;
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
    // RVA: 0x3971 Offset: 0x3971 VA: 0x3971
    public void remove_OnMovementToPosition(Action<MovementToPositionEvent, MovementToPositionArgs> value)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        Action pAVar2 = default;

        param1 = this.OnMovementToPosition;
        while( true ) {
            param2_00 = 0;
            param1_00 = System.Delegate.Remove(param1,value,0);
            param2 = System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo;
            if ((param1_00 != 0) && (param2_00 = unnamed_function_1112 (param1_00, System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo ), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref this.OnMovementToPosition, param2_00, param1);
            bVar1 = param1 == pAVar2;
            param1 = pAVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3972 Offset: 0x3972 VA: 0x3972
    public void CallMovementToPositionEvent(Vector3 movePosition, Vector3 currentPosition, float moveSpeed, Vector2 moveDirection, bool isDashing = False)
    {
        int iVar1 = default;
        Action pAVar2 = default;
        Vector2 VVar3 = default;

        pAVar2 = this.OnMovementToPosition;
        if (pAVar2 != (Action)0x0) {
            iVar1 = new MovementToPositionArgs();
            Raw.Write<float>(iVar1 + 0x10, movePosition.z);
            Raw.Write<long>(iVar1 + 8, Raw.Read<long>(movePosition));
            Raw.Write<long>(iVar1 + 0x14, Raw.Read<long>(currentPosition));
            Raw.Write<float>(iVar1 + 0x1c, currentPosition.z);
            Raw.Write<float>(iVar1 + 0x20, moveSpeed);
            VVar3 = *moveDirection;
            Raw.Write<bool>(iVar1 + 0x2c, isDashing);
            Raw.Write<Vector2>(iVar1 + 0x24, VVar3);
            Raw.DelegateInvoke(pAVar2) /* delegate invoke */ (pAVar2[8]._opaque,this,iVar1,pAVar2[5]._opaque);
        }
    }

    // RVA: 0x3973 Offset: 0x3973 VA: 0x3973
    public MovementToPositionEvent()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
