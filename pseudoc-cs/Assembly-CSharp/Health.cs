// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Health.c by tools/c2cs.py
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

public class Health : MonoBehaviour // TypeDefIndex: 5620
{
    // Fields
    public int currentHealth; // 0x10
    public int startingHealth; // 0x14
    private HealthEvent healthEvent; // 0x18
    private DieEvent dieEvent; // 0x1C

    // Methods

    // RVA: 0x3827 Offset: 0x3827 VA: 0x3827
    private void Awake()
    {
        HealthEvent pHVar1 = default;
        DieEvent pDVar2 = default;

        pHVar1 = (HealthEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e9c);
        this.healthEvent = pHVar1;
        pDVar2 = (DieEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e74);
        this.dieEvent = pDVar2;
    }

    // RVA: 0x3828 Offset: 0x3828 VA: 0x3828
    private void OnEnable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        System.Action value = default;
        int iVar2 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar3 = default;
        DieEvent pDVar4 = default;

        value = (System.Action)new System_Action();
        System.Action.__ctor(value,this,DAT_ram_00569e34,0);
        StaticEventHandler.add_OnRestInBonfire(value);
        pDVar4 = this.dieEvent;
        iVar2 = (pDVar4 != null);
        if (iVar2 != 0) {
            pDVar4 = this.dieEvent;
            param1_00 = new System_Action_DieEvent_();
            System.Action<object>.__ctor(param1_00,this,DAT_ram_00569e30,0);
            param1 = pDVar4.OnDie;
            do {
                iVar2 = 0;
                param1_01 = System.Delegate.Combine(param1,param1_00,0);
                param2 = System_Action_DieEvent__TypeInfo;
                if ((param1_01 != 0) && (iVar2 = (param1_01 as System_Action_DieEvent_), iVar2 == 0)) {
                    unnamed_function_1116(param1_01,param2);
                    do {
                        throw null;
                    } while( true );
                }
                pAVar3 = (Action)Interlocked.CompareExchange(ref pDVar4.OnDie, iVar2, param1);
                bVar1 = param1 != pAVar3;
                param1 = pAVar3;
            } while (bVar1);
        }
    }

    // RVA: 0x3829 Offset: 0x3829 VA: 0x3829
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        System.Action value = default;
        int iVar2 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar3 = default;
        DieEvent pDVar4 = default;

        value = (System.Action)new System_Action();
        System.Action.__ctor(value,this,DAT_ram_00569e34,0);
        StaticEventHandler.remove_OnRestInBonfire(value);
        pDVar4 = this.dieEvent;
        iVar2 = (pDVar4 != null);
        if (iVar2 != 0) {
            pDVar4 = this.dieEvent;
            param1_00 = new System_Action_DieEvent_();
            System.Action<object>.__ctor(param1_00,this,DAT_ram_00569e30,0);
            param1 = pDVar4.OnDie;
            do {
                iVar2 = 0;
                param1_01 = System.Delegate.Remove(param1,param1_00,0);
                param2 = System_Action_DieEvent__TypeInfo;
                if ((param1_01 != 0) && (iVar2 = (param1_01 as System_Action_DieEvent_), iVar2 == 0)) {
                    unnamed_function_1116(param1_01,param2);
                    do {
                        throw null;
                    } while( true );
                }
                pAVar3 = (Action)Interlocked.CompareExchange(ref pDVar4.OnDie, iVar2, param1);
                bVar1 = param1 != pAVar3;
                param1 = pAVar3;
            } while (bVar1);
        }
    }

    // RVA: 0x382A Offset: 0x382A VA: 0x382A
    private void StaticEventHandler_OnRestInBonfire()
    {
        int healthAmount = default;

        healthAmount = this.startingHealth;
        this.currentHealth = healthAmount;
        this.healthEvent.CallHealthChangedEvent((float)healthAmount / (float)healthAmount, healthAmount, 0);
    }

    // RVA: 0x382B Offset: 0x382B VA: 0x382B
    private void DieEvent_OnDie(DieEvent dieEvent)
    {
        int healthAmount = default;

        healthAmount = this.startingHealth;
        this.currentHealth = healthAmount;
        this.healthEvent.CallHealthChangedEvent((float)healthAmount / (float)healthAmount, healthAmount, 0);
    }

    // RVA: 0x382C Offset: 0x382C VA: 0x382C
    private void Start()
    {
        int healthAmount = default;

        healthAmount = this.startingHealth;
        this.currentHealth = healthAmount;
        this.healthEvent.CallHealthChangedEvent((float)healthAmount / (float)healthAmount, healthAmount, 0);
    }

    // RVA: 0x382D Offset: 0x382D VA: 0x382D
    public void TakeDamage(int damageAmount)
    {
        int param1 = default;
        int iVar1 = default;
        GameResources pGVar2 = default;
        int param1_00 = default;
        SoundEffectManager __this_00 = default;
        SoundEffectSO ppSVar3 = default;

        this.currentHealth = this.currentHealth - damageAmount;
        param1 = UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ef0);
        iVar1 = (param1 != null);
        param1_00 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if (iVar1 == 0) {
            if ((Raw.Read<ushort>(param1_00 + 0xbd) & 1) == 0) {
            }
            iVar1 = Raw.Read<int>(Raw.Read<int>(param1_00 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
            }
            __this_00 = (SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar1 + 0x5c));
            pGVar2 = GameResources.Instance;
            ppSVar3 = &pGVar2.getHurtEnemy;
        }
        else {
            if ((Raw.Read<ushort>(param1_00 + 0xbd) & 1) == 0) {
            }
            iVar1 = Raw.Read<int>(Raw.Read<int>(param1_00 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
            }
            __this_00 = (SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar1 + 0x5c));
            pGVar2 = GameResources.Instance;
            ppSVar3 = &pGVar2.getHurtPlayer;
        }
        __this_00.PlaySoundEffect(*ppSVar3);
        this.healthEvent.CallHealthChangedEvent((float)this.currentHealth / (float)this.startingHealth, this.currentHealth, damageAmount);
    }

    // RVA: 0x382E Offset: 0x382E VA: 0x382E
    public void IncreaseHealth(int healthAmount)
    {
        int iVar1 = default;
        int healthAmount_00 = default;
        int iVar2 = default;

        iVar1 = this.startingHealth;
        iVar2 = this.currentHealth + healthAmount;
        healthAmount_00 = iVar1;
        if (iVar2 <= iVar1) {
            healthAmount_00 = iVar2;
        }
        this.currentHealth = healthAmount_00;
        this.healthEvent.CallHealthChangedEvent((float)healthAmount_00 / (float)iVar1, healthAmount_00, 0);
    }

    // RVA: 0x382F Offset: 0x382F VA: 0x382F
    public Health()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
