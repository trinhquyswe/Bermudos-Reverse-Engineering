// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/StaminaBar.c by tools/c2cs.py
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

public class StaminaBar : MonoBehaviour // TypeDefIndex: 5631
{
    // Fields
    [SerializeField]
    private Slider staminaBar; // 0x10
    [SerializeField]
    private Slider easeStaminaBar; // 0x14
    private float lerpSpeed; // 0x18

    // Methods

    // RVA: 0x384F Offset: 0x384F VA: 0x384F
    private void OnEnable()
    {
        bool bVar1 = default;
        int param2 = default;
        int iVar2 = default;
        int param1 = default;
        int param1_00 = default;
        int param1_01 = default;
        int iVar3 = default;

        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x10) + 0x3c);
        param1_00 = new System_Action_StaminaEvent__StaminaEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056c9cc,0);
        param1 = Raw.Read<int>(iVar3 + 0x10);
        while( true ) {
            iVar2 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_StaminaEvent__StaminaEventArgs__TypeInfo;
            if ((param1_01 != 0) && (iVar2 = unnamed_function_1112 (param1_01,System_Action_StaminaEvent__StaminaEventArgs__TypeInfo), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(iVar3 + 0x10,iVar2,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_01,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3850 Offset: 0x3850 VA: 0x3850
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        int iVar2 = default;
        int param1 = default;
        int param1_00 = default;
        int param1_01 = default;
        int iVar3 = default;

        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x10) + 0x3c);
        param1_00 = new System_Action_StaminaEvent__StaminaEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056c9cc,0);
        param1 = Raw.Read<int>(iVar3 + 0x10);
        while( true ) {
            iVar2 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_StaminaEvent__StaminaEventArgs__TypeInfo;
            if ((param1_01 != 0) && (iVar2 = unnamed_function_1112 (param1_01,System_Action_StaminaEvent__StaminaEventArgs__TypeInfo), iVar2 == 0)) break;
            iVar2 = unnamed_function_1144(iVar3 + 0x10,iVar2,param1);
            bVar1 = param1 == iVar2;
            param1 = iVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_01,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3851 Offset: 0x3851 VA: 0x3851
    private void StaminaEvent_OnStaminaChanged(StaminaEvent staminaEvent, StaminaEventArgs staminaEventArgs)
    {
        int iVar1 = default;

        iVar1 = this.healthBar._opaque;
        Raw.VCall(iVar1, 47) /* virtual */ (this.healthBar,healthEventArgs.healthPercent,Raw.Read<int>(iVar1 + 0x23c));
    }

    // RVA: 0x3852 Offset: 0x3852 VA: 0x3852
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

    // RVA: 0x3853 Offset: 0x3853 VA: 0x3853
    public StaminaBar()
    {
        this.lerpSpeed = 0.05;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
