// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BossHealthBar.c by tools/c2cs.py
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

public class BossHealthBar : MonoBehaviour // TypeDefIndex: 5614
{
    // Fields
    [SerializeField]
    private Slider healthBar; // 0x10
    [SerializeField]
    private Slider easeHealthBar; // 0x14
    private float lerpSpeed; // 0x18
    private HealthEvent healthEvent; // 0x1C

    // Methods

    // RVA: 0x380B Offset: 0x380B VA: 0x380B
    private void OnEnable()
    {
        System.Action.OnBossChangedEventArgs value = default;

        value = (System.Action.OnBossChangedEventArgs) new System_Action_OnBossChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_00567898,0);
        StaticEventHandler.add_OnBossChanged(value);
    }

    // RVA: 0x380C Offset: 0x380C VA: 0x380C
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        System.Action.OnBossChangedEventArgs value = default;
        int iVar2 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar3 = default;
        HealthEvent pHVar4 = default;

        value = (System.Action.OnBossChangedEventArgs) new System_Action_OnBossChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_00567898,0);
        StaticEventHandler.remove_OnBossChanged(value);
        pHVar4 = this.healthEvent;
        iVar2 = (pHVar4 != null);
        if (iVar2 != 0) {
            pHVar4 = this.healthEvent;
            param1_00 = new System_Action_HealthEvent__HealthEventArgs_();
            System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00567894,0);
            param1 = pHVar4.OnHealthChanged;
            do {
                iVar2 = 0;
                param1_01 = System.Delegate.Remove(param1,param1_00,0);
                param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
                if ((param1_01 != 0) && (iVar2 = unnamed_function_1112 (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo), iVar2 == 0)) {
                    unnamed_function_1116(param1_01,param2);
                    do {
                        throw null;
                    } while( true );
                }
                pAVar3 = (Action)Interlocked.CompareExchange(ref pHVar4.OnHealthChanged, iVar2, param1);
                bVar1 = param1 != pAVar3;
                param1 = pAVar3;
            } while (bVar1);
        }
    }

    // RVA: 0x380D Offset: 0x380D VA: 0x380D
    private void StaticEventHandler_OnBossChanged(OnBossChangedEventArgs onBossChangedEventArgs)
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        HealthEvent pHVar3 = default;

        pHVar3 = onBossChangedEventArgs.boss.healthEvent;
        this.healthEvent = pHVar3;
        param1_00 = new System_Action_HealthEvent__HealthEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00567894,0);
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

    // RVA: 0x380E Offset: 0x380E VA: 0x380E
    private void HealthEvent_OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
    {
        int iVar1 = default;

        iVar1 = this.healthBar._opaque;
        Raw.VCall(iVar1, 47) /* virtual */ (this.healthBar,healthEventArgs.healthPercent,Raw.Read<int>(iVar1 + 0x23c));
    }

    // RVA: 0x380F Offset: 0x380F VA: 0x380F
    private void Update()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        Slider pSVar4 = default;
        int iVar5 = default;
        float fVar6 = default;
        float fVar7 = default;

        iVar5 = this.healthBar._opaque;
        fVar1 = (float)Raw.VCall(iVar5, 46) /* virtual */ (this.healthBar,Raw.Read<int>(iVar5 + 0x234));
        iVar5 = this.easeHealthBar._opaque;
        fVar2 = (float)Raw.VCall(iVar5, 46) /* virtual */ (this.easeHealthBar,Raw.Read<int>(iVar5 + 0x234));
        if (fVar1 != fVar2) {
            pSVar4 = this.easeHealthBar;
            fVar2 = (float)Raw.VCall(pSVar4._opaque, 46) /* virtual */ (pSVar4,Raw.Read<int>(pSVar4._opaque + 0x234));
            iVar5 = this.healthBar._opaque;
            fVar3 = (float)Raw.VCall(iVar5, 46) /* virtual */ (this.healthBar,Raw.Read<int>(iVar5 + 0x234));
            fVar7 = this.lerpSpeed;
            fVar1 = fVar7;
            if (1.0 <= fVar7) {
                fVar1 = 1.0;
            }
            fVar6 = 0.0;
            if (0.0 <= fVar7) {
                fVar6 = fVar1;
            }
            Raw.VCall(pSVar4._opaque, 47) /* virtual */ (pSVar4,fVar2 + (fVar3 - fVar2) * fVar6,Raw.Read<int>(pSVar4._opaque + 0x23c));
        }
    }

    // RVA: 0x3810 Offset: 0x3810 VA: 0x3810
    public BossHealthBar()
    {
        this.lerpSpeed = 0.05;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
