// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Enemy.c by tools/c2cs.py
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

public class Enemy : MonoBehaviour // TypeDefIndex: 5586
{
    // Fields
    [HideInInspector]
    public AnimateEvent animateEvent; // 0x10
    [HideInInspector]
    public HealthEvent healthEvent; // 0x14
    [HideInInspector]
    public EnemyStateEvent enemyStateEvent; // 0x18
    [HideInInspector]
    public Animator animator; // 0x1C
    [HideInInspector]
    public Health health; // 0x20
    [HideInInspector]
    public EnemyEffect enemyEffect; // 0x24
    [HideInInspector]
    public PoiseEvent poiseEvent; // 0x28
    [HideInInspector]
    private SpriteRenderer spriteRenderer; // 0x2C
    [HideInInspector]
    public IdleEvent idleEvent; // 0x30
    [HideInInspector]
    public MoveByEnemyAIEvent moveByEnemyAIEvent; // 0x34
    [HideInInspector]
    public AttackEvent attackEvent; // 0x38
    [HideInInspector]
    public EnemyAI enemyAI; // 0x3C
    public AnimationEnemyType animationEnemyType; // 0x40
    [HideInInspector]
    public string mapKey; // 0x44
    [HideInInspector]
    public int enemyID; // 0x48

    // Methods

    // RVA: 0x379D Offset: 0x379D VA: 0x379D
    private void Awake()
    {
        AnimateEvent pAVar1 = default;
        HealthEvent pHVar2 = default;
        EnemyStateEvent pEVar3 = default;
        PoiseEvent pPVar4 = default;
        Animator pAVar5 = default;
        Health pHVar6 = default;
        EnemyEffect pEVar7 = default;
        SpriteRenderer pSVar8 = default;
        IdleEvent pIVar9 = default;
        MoveByEnemyAIEvent pMVar10 = default;
        EnemyAI pEVar11 = default;
        AttackEvent pAVar12 = default;

        pAVar1 = (AnimateEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e14);
        this.animateEvent = pAVar1;
        pHVar2 = (HealthEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e9c);
        this.healthEvent = pHVar2;
        pEVar3 = (EnemyStateEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e8c);
        this.enemyStateEvent = pEVar3;
        pPVar4 = (PoiseEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567efc);
        this.poiseEvent = pPVar4;
        pAVar5 = (Animator)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e18);
        this.animator = pAVar5;
        pHVar6 = (Health)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e98);
        this.health = pHVar6;
        pEVar7 = (EnemyEffect)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e84);
        this.enemyEffect = pEVar7;
        pSVar8 = (SpriteRenderer)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f24);
        this.spriteRenderer = pSVar8;
        pIVar9 = (IdleEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ea4);
        this.idleEvent = pIVar9;
        pMVar10 = (MoveByEnemyAIEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ed0);
        this.moveByEnemyAIEvent = pMVar10;
        pEVar11 = (EnemyAI)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e7c);
        this.enemyAI = pEVar11;
        pAVar12 = (AttackEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e20);
        this.attackEvent = pAVar12;
    }

    // RVA: 0x379E Offset: 0x379E VA: 0x379E
    private void OnEnable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        HealthEvent pHVar3 = default;

        pHVar3 = this.healthEvent;
        param1_00 = new System_Action_HealthEvent__HealthEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568eac,0);
        param1 = pHVar3.OnHealthChanged;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pHVar3.OnHealthChanged, param2_00, param1);
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

    // RVA: 0x379F Offset: 0x379F VA: 0x379F
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        HealthEvent pHVar3 = default;

        pHVar3 = this.healthEvent;
        param1_00 = new System_Action_HealthEvent__HealthEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568eac,0);
        param1 = pHVar3.OnHealthChanged;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pHVar3.OnHealthChanged, param2_00, param1);
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

    // RVA: 0x37A0 Offset: 0x37A0 VA: 0x37A0
    public void InitializeEnemy(string mapName, int enemyID)
    {
        this.enemyID = enemyID;
        this.mapKey = (string)mapName;
    }

    // RVA: 0x37A1 Offset: 0x37A1 VA: 0x37A1
    private void HealthEvent_OnHealthLost(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
    {
        if (healthEventArgs.healthAmount < 1) {
            this.EnemyDestroyed();
        }
    }

    // RVA: 0x37A2 Offset: 0x37A2 VA: 0x37A2
    private void EnemyDestroyed()
    {
        int iVar1 = default;
        int iVar2 = default;
        int iVar3 = default;

        iVar1 = UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e70);
        iVar2 = new DestroyedEventArgs();
        Raw.Write<byte>(iVar2 + 8, 0);
        iVar3 = Raw.Read<int>(iVar1 + 0x10);
        if (iVar3 != 0) {
            Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar3 + 0x20),iVar1,iVar2,Raw.Read<int>(iVar3 + 0x14));
        }
    }

    // RVA: 0x37A3 Offset: 0x37A3 VA: 0x37A3
    public Enemy()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
