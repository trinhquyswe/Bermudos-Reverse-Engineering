// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Boss.c by tools/c2cs.py
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

public class Boss : MonoBehaviour // TypeDefIndex: 5558
{
    // Fields
    [HideInInspector]
    public HealthEvent healthEvent; // 0x10
    [HideInInspector]
    public DestroyedEvent destroyedEvent; // 0x14
    [HideInInspector]
    public PoiseEvent poiseEvent; // 0x18
    [HideInInspector]
    public Rigidbody2D rb; // 0x1C
    [HideInInspector]
    public BossEffect bossEffect; // 0x20
    [HideInInspector]
    public Animator animator; // 0x24
    [HideInInspector]
    public bool isPhaseTwo; // 0x28

    // Methods

    // RVA: 0x36FA Offset: 0x36FA VA: 0x36FA
    private void Awake()
    {
        HealthEvent pHVar1 = default;
        DestroyedEvent pDVar2 = default;
        PoiseEvent pPVar3 = default;
        BossEffect pBVar4 = default;
        Animator pAVar5 = default;
        Rigidbody2D pRVar6 = default;

        pHVar1 = (HealthEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e9c);
        this.healthEvent = pHVar1;
        pDVar2 = (DestroyedEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e70);
        this.destroyedEvent = pDVar2;
        pPVar3 = (PoiseEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567efc);
        this.poiseEvent = pPVar3;
        pBVar4 = (BossEffect)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e34);
        this.bossEffect = pBVar4;
        pAVar5 = (Animator)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e18);
        this.animator = pAVar5;
        pRVar6 = (Rigidbody2D)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f18);
        this.rb = pRVar6;
    }

    // RVA: 0x36FB Offset: 0x36FB VA: 0x36FB
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
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056788c,0);
        param1 = pHVar3.OnHealthChanged;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&pHVar3.OnHealthChanged,param2_00,param1);
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

    // RVA: 0x36FC Offset: 0x36FC VA: 0x36FC
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
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056788c,0);
        param1 = pHVar3.OnHealthChanged;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&pHVar3.OnHealthChanged,param2_00,param1);
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

    // RVA: 0x36FD Offset: 0x36FD VA: 0x36FD
    private void Start()
    {
        GameResources pGVar1 = default;

        StaticEventHandler.CallBossChangedEvent(this);
        pGVar1 = GameResources.Instance;
        UnityEngine.Material.SetFloat(pGVar1.boss,"_FadeAmount",0.0,0);
    }

    [IteratorStateMachine(typeof(Boss._BossAttack_d__11))]
    // RVA: 0x36FE Offset: 0x36FE VA: 0x36FE
    public IEnumerator BossAttack()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new Boss__BossAttack_d__11();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x36FF Offset: 0x36FF VA: 0x36FF
    private void HealthEvent_OnHealthLost(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
    {
        bool bVar1 = default;
        int param2 = default;
        int param2_00 = default;
        Action param1 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;

        if (healthEventArgs.healthAmount < 1) {
            this.EnemyDestroyed();
            param1_00 = new System_Action_HealthEvent__HealthEventArgs_();
            System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056788c,0);
            param1 = healthEvent.OnHealthChanged;
            do {
                param2_00 = 0;
                param1_01 = System.Delegate.Remove(param1,param1_00,0);
                param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
                if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo), param2_00 == 0)) {
                    unnamed_function_1116(param1_01,param2);
                    do {
                        throw null;
                    } while( true );
                }
                pAVar2 = (Action)unnamed_function_1144(&healthEvent.OnHealthChanged,param2_00,param1);
                bVar1 = param1 != pAVar2;
                param1 = pAVar2;
            } while (bVar1);
        }
    }

    // RVA: 0x3700 Offset: 0x3700 VA: 0x3700
    private void EnemyDestroyed()
    {
        int iVar1 = default;
        int iVar2 = default;
        int iVar3 = default;

        iVar1 = UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e70);
        iVar2 = new DestroyedEventArgs();
        Raw.Write<byte>(iVar2 + 9, 1);
        iVar3 = Raw.Read<int>(iVar1 + 0x10);
        if (iVar3 != 0) {
            Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar3 + 0x20),iVar1,iVar2,Raw.Read<int>(iVar3 + 0x14));
        }
    }

    // RVA: 0x3701 Offset: 0x3701 VA: 0x3701
    public Boss()
    {
        unnamed_function_44622(this,0);
    }
}
