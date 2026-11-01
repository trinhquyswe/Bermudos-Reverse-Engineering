// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EnemyMovement.c by tools/c2cs.py
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

public class EnemyMovement : MonoBehaviour // TypeDefIndex: 5594
{
    // Fields
    private Vector2 startPosition; // 0x10
    private Vector2 roamingPosition; // 0x18
    [HideInInspector]
    public NavMeshAgent navMeshAgent; // 0x20
    private bool hasInitializedRoamingPosition; // 0x24
    private Enemy enemy; // 0x28
    private float maxDistance; // 0x2C

    // Methods

    // RVA: 0x37C0 Offset: 0x37C0 VA: 0x37C0
    private void Awake()
    {
        Enemy pEVar1 = default;
        NavMeshAgent pNVar2 = default;

        pEVar1 = (Enemy)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e78);
        this.enemy = pEVar1;
        pNVar2 = (NavMeshAgent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567edc);
        this.navMeshAgent = pNVar2;
    }

    // RVA: 0x37C1 Offset: 0x37C1 VA: 0x37C1
    private void OnEnable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        PoiseEvent pPVar3 = default;

        pPVar3 = this.enemy.poiseEvent;
        param1_00 = new System_Action_PoiseEvent__PoiseEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568ec0,0);
        param1 = pPVar3.OnPoise;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pPVar3.OnPoise, param2_00, param1);
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

    // RVA: 0x37C2 Offset: 0x37C2 VA: 0x37C2
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        PoiseEvent pPVar3 = default;

        pPVar3 = this.enemy.poiseEvent;
        param1_00 = new System_Action_PoiseEvent__PoiseEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568ec0,0);
        param1 = pPVar3.OnPoise;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pPVar3.OnPoise, param2_00, param1);
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

    // RVA: 0x37C3 Offset: 0x37C3 VA: 0x37C3
    private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
    {
        int param2 = default;
        float fVar1 = default;

        if (poiseEventArgs.currentPoise <= 0.0) {
            fVar1 = poiseEventArgs.stunTime;
            ((AttackEvent)this.enemy.idleEvent).CallAttackEvent();
            param2 = new EnemyMovement__StopEnemyCoroutine_d__19();
            Raw.Write<float>(param2 + 0x14, fVar1);
            Raw.Write<object>(param2 + 0x10 /* startPosition */, this);
            Raw.Write<int>(param2 + 8, 0);
            UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
        }
    }

    // RVA: 0x37C4 Offset: 0x37C4 VA: 0x37C4
    private void Start()
    {
        int param2 = default;

        Vector2[] local_10 = new Vector2[2];
        UnityEngine.AI.NavMeshAgent.set_updateRotation(this.navMeshAgent,0,0);
        UnityEngine.AI.NavMeshAgent.set_updateUpAxis(this.navMeshAgent,0,0);
        UnityEngine.AI.NavMeshAgent.set_speed(this.navMeshAgent,3.0,0);
        param2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(local_10,param2,0);
        this.startPosition = local_10[0];
    }

    // RVA: 0x37C5 Offset: 0x37C5 VA: 0x37C5
    public void MoveRoamingPosition()
    {
        float fVar1 = default;
        int param2 = default;
        float fVar2 = default;
        Vector2 VVar3 = default;
        float fVar4 = default;
        float local_20 = default;
        Vector2 local_30 = default;
        int local_28 = default;
        Vector2 local_10 = default;
        int local_8 = default;

        if (this.hasInitializedRoamingPosition == false) {
            ((Vector2)&local_20).GetRoamingPosition(this);
            local_30.y = (float)local_20;
            local_30.x = (float)local_20;
            this.hasInitializedRoamingPosition = true;
            this.roamingPosition = local_30;
        }
        else {
            local_30 = this.roamingPosition;
        }
        local_8 = 0;
        local_28 = 0;
        local_10 = local_30;
        /* candidates: UnityEngine.AI.NavMeshAgent.SetDestination | UnityEngine.AI.NavMeshAgent.SetDestination_Injected */ unnamed_function_51259(this.navMeshAgent,&local_30,0);
        UnityEngine.AI.NavMeshAgent.set_stoppingDistance(this.navMeshAgent,1.0,0);
        param2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_20,param2,0);
        fVar4 = (float)local_20;
        fVar1 = local_20;
        VVar3 = this.roamingPosition;
        fVar2 = (float)fVar1 - VVar3.x;
        fVar4 = fVar4 - VVar3.y;
        if (Mathf.Sqrt(fVar2 * fVar2 + fVar4 * fVar4) <= 1.0) {
            ((Vector2)&local_20).GetRoamingPosition(this);
            VVar3.y = (float)local_20;
            VVar3.x = (float)local_20;
            this.roamingPosition = VVar3;
        }
    }

    // RVA: 0x37C6 Offset: 0x37C6 VA: 0x37C6
    public void FindPlayer()
    {
        float fVar1 = default;
        float fVar2 = default;
        int uVar3 = default;
        int iVar4 = default;
        float local_10 = default;
        float local_c = default;

        iVar4 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        uVar3 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar4 + 0x5c)) + 0x10),0);
        UnityEngine.Transform.get_position(&local_10,uVar3,0);
        fVar2 = local_c;
        fVar1 = local_10;
        uVar3 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar3,0);
        if (Mathf.Sqrt(((float)fVar1 - (float)local_10) * ((float)fVar1 - (float)local_10) + ((float)fVar2 - (float)local_c) * ((float)fVar2 - (float)local_c)) < 5.0) {
            this.enemy.enemyStateEvent.CallEnemyStateEvent(Chasing);
        }
    }

    // RVA: 0x37C7 Offset: 0x37C7 VA: 0x37C7
    public void MoveToPlayer()
    {
        int iVar1 = default;
        int uVar2 = default;
        NavMeshAgent param1 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        iVar1 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
        }
        iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
        }
        uVar2 = Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar1 + 0x5c)) + 0x10);
        iVar1 = (uVar2 != null);
        if ((iVar1 != 0) && (iVar1 = UnityEngine.AI.NavMeshAgent.get_isOnNavMesh(this.navMeshAgent,0), iVar1 != 0)) {
            UnityEngine.AI.NavMeshAgent.set_stoppingDistance(this.navMeshAgent,2.0,0);
            param1 = this.navMeshAgent;
            iVar1 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
            }
            iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
            }
            uVar2 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar1 + 0x5c)) + 0x10),0);
            UnityEngine.Transform.get_position(&local_10,uVar2,0);
            local_18 = local_8;
            local_20 = local_10;
            /* candidates: UnityEngine.AI.NavMeshAgent.SetDestination | UnityEngine.AI.NavMeshAgent.SetDestination_Injected */ unnamed_function_51259(param1,&local_20,0);
        }
    }

    // RVA: 0x37C8 Offset: 0x37C8 VA: 0x37C8
    public void GetDistanceToStartPosition()
    {
        int param2 = default;
        Vector2 VVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        float local_10 = default;
        float local_c = default;

        this.maxDistance = 15.0;
        param2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,param2,0);
        VVar1 = this.startPosition;
        fVar2 = (float)local_10 - VVar1.x;
        fVar3 = (float)local_c - VVar1.y;
        if (this.maxDistance < Mathf.Sqrt(fVar2 * fVar2 + fVar3 * fVar3)) {
            this.enemy.enemyStateEvent.CallEnemyStateEvent(GoBackToStart);
        }
    }

    // RVA: 0x37C9 Offset: 0x37C9 VA: 0x37C9
    public void GoBackToStartPosition()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        int iVar5 = default;
        int uVar6 = default;
        float fVar7 = default;
        Vector2 VVar8 = default;
        float fVar9 = default;
        Vector2 local_30 = default;
        int local_28 = default;
        float local_20 = default;
        float local_1c = default;
        Vector2 local_10 = default;
        int local_8 = default;

        iVar5 = UnityEngine.AI.NavMeshAgent.get_isOnNavMesh(this.navMeshAgent,0);
        if (iVar5 != 0) {
            UnityEngine.AI.NavMeshAgent.set_stoppingDistance(this.navMeshAgent,2.0,0);
            local_30 = this.startPosition;
            local_8 = 0;
            local_28 = 0;
            local_10 = local_30;
            /* candidates: UnityEngine.AI.NavMeshAgent.SetDestination | UnityEngine.AI.NavMeshAgent.SetDestination_Injected */ unnamed_function_51259(this.navMeshAgent,&local_30,0);
            iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            uVar6 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10),0);
            UnityEngine.Transform.get_position(&local_20,uVar6,0);
            fVar3 = local_1c;
            fVar1 = local_20;
            uVar6 = UnityEngine.Component.get_transform(this,0);
            UnityEngine.Transform.get_position(&local_20,uVar6,0);
            fVar4 = local_1c;
            fVar2 = local_20;
            if (Mathf.Sqrt(((float)fVar1 - (float)fVar2) * ((float)fVar1 - (float)fVar2) + ((float)fVar3 - (float)fVar4) * ((float)fVar3 - (float)fVar4)) <= 5.0) {
                VVar8 = this.startPosition;
                uVar6 = UnityEngine.Component.get_transform(this,0);
                UnityEngine.Transform.get_position(&local_20,uVar6,0);
                fVar2 = local_1c;
                fVar1 = local_20;
                fVar7 = VVar8.x - (float)fVar1;
                fVar9 = VVar8.y - (float)fVar2;
                if (Mathf.Sqrt(fVar7 * fVar7 + fVar9 * fVar9) <= this.maxDistance + -5.0) {
                    this.enemy.enemyStateEvent.CallEnemyStateEvent(Chasing);
                }
            }
            uVar6 = UnityEngine.Component.get_transform(this,0);
            UnityEngine.Transform.get_position(&local_20,uVar6,0);
            VVar8 = this.startPosition;
            fVar7 = (float)local_20 - VVar8.x;
            fVar9 = (float)local_1c - VVar8.y;
            if (Mathf.Sqrt(fVar7 * fVar7 + fVar9 * fVar9) < 2.0) {
                this.enemy.enemyStateEvent.CallEnemyStateEvent(Roaming);
            }
        }
    }

    // RVA: 0x37CA Offset: 0x37CA VA: 0x37CA
    public Vector2 GetRoamingPosition()
    {
        int iVar1 = default;
        float fVar2 = default;
        Vector2 VVar3 = default;
        Vector2 VVar4 = default;
        long local_58 = default;
        int local_50 = default;
        float local_38 = default;
        float local_34 = default;
        int local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        int local_8 = default;

        Vector2[] local_48 = new Vector2[2];
        local_8 = 0;
        local_10 = 0;
        local_18 = 0;
        local_20 = 0;
        local_28 = 0;
        iVar1 = UnityEngine.AI.NavMeshAgent.get_isOnNavMesh(this.navMeshAgent,0);
        if (iVar1 == 0) {
            *__ret = this.roamingPosition;
        }
        else {
            VVar3 = this.startPosition;
            HelperUtilities.GetRandomDirection(local_48);
            VVar4 = local_48[0];
            fVar2 = UnityEngine.Random.Range(1.0,5.0,0);
            local_34 = (float)(fVar2 * VVar4.y + VVar3.y);
            local_38 = (float)(fVar2 * VVar4.x + VVar3.x);
            VVar4.y = (float)local_34;
            VVar4.x = (float)local_38;
            this.roamingPosition = VVar4;
            local_30 = 0;
            local_50 = 0;
            local_58 = CONCAT44(local_34,local_38);
            /* candidates: UnityEngine.AI.NavMesh.SamplePosition | UnityEngine.AI.NavMesh.SamplePosition_Injected */ unnamed_function_51304(&local_58,&local_28,10.0,1,0);
            /* candidates: System.Collections.Generic.KeyValuePair<Regex.CachedCodeEntryKey, object>.get_Key | System.Collections.Generic.KeyValuePair<TMPEffectTagIndices, object>.get_Key (+26) */ unnamed_function_15207(local_48,&local_28,0);
            *__ret = local_48[0];
        }
        return;
    }

    // RVA: 0x37CB Offset: 0x37CB VA: 0x37CB
    public void GetAimDirection(bool isPlayerDir)
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        AimDirection aimDirection = default;
        uint in_register_20000011 = default;
        int uVar4 = default;
        float fVar5 = default;
        Vector2 VVar6 = default;
        int iVar7 = default;
        float local_20 = default;
        float local_1c = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        byte[] local_30 = new byte[16];
        if (CONCAT31(in_register_20000011,isPlayerDir) == 0) {
            VVar6 = this.roamingPosition;
            uVar4 = UnityEngine.Component.get_transform(this,0);
            UnityEngine.Transform.get_position(&local_10,uVar4,0);
            local_1c = (float)(VVar6.y - (float)local_c);
            local_20 = (float)(VVar6.x - (float)local_10);
            local_30._8_4_ = 0.0 - (float)local_8;
        }
        else {
            iVar7 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar7 + 0xbd) & 1) == 0) {
            }
            iVar7 = Raw.Read<int>(Raw.Read<int>(iVar7 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar7 + 0xbd) & 1) == 0) {
            }
            uVar4 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar7 + 0x5c)) + 0x10),0);
            UnityEngine.Transform.get_position(&local_10,uVar4,0);
            fVar3 = local_8;
            fVar2 = local_c;
            fVar1 = local_10;
            uVar4 = UnityEngine.Component.get_transform(this,0);
            UnityEngine.Transform.get_position(&local_10,uVar4,0);
            local_1c = (float)((float)fVar2 - (float)local_c);
            local_20 = (float)((float)fVar1 - (float)local_10);
            local_30._8_4_ = (float)fVar3 - (float)local_8;
        }
        local_30._4_4_ = (int)local_1c;
        local_30._0_4_ = (int)local_20;
        aimDirection = Up;
        local_18 = (float)local_30._8_4_;
        fVar5 = HelperUtilities.GetAngleFromVector((Vector3)local_30);
        if (fVar5 <= 45.0 || 135.0 < fVar5) {
            aimDirection = Left;
            if (((180.0 < fVar5 || fVar5 <= 135.0) && (aimDirection = Left, -155.0 < fVar5 || fVar5 <= -180.0)) && ((fVar5 <= -155.0 || (aimDirection = Down, -45.0 < fVar5)))) {
                if (fVar5 <= -45.0) {
                    return;
                }
                aimDirection = Right;
                if (45.0 < fVar5) {
                    return;
                }
            }
        }
        this.enemy.animateEvent.CallAnimateEvent(aimDirection);
    }

    // RVA: 0x37CC Offset: 0x37CC VA: 0x37CC
    private void StopEnemy(float stunTime)
    {
        int param2 = default;

        ((AttackEvent)this.enemy.idleEvent).CallAttackEvent();
        param2 = new EnemyMovement__StopEnemyCoroutine_d__19();
        Raw.Write<float>(param2 + 0x14, stunTime);
        Raw.Write<object>(param2 + 0x10 /* startPosition */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    [IteratorStateMachine(typeof(EnemyMovement._StopEnemyCoroutine_d__19))]
    // RVA: 0x37CD Offset: 0x37CD VA: 0x37CD
    private IEnumerator StopEnemyCoroutine(float stunTime)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new EnemyMovement__StopEnemyCoroutine_d__19();
        pSVar1[5]._opaque = (int)stunTime;
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x37CE Offset: 0x37CE VA: 0x37CE
    public EnemyMovement()
    {
        this.maxDistance = 15.0;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
