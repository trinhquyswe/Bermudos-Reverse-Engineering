// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/StunBar.c by tools/c2cs.py
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

public class StunBar : MonoBehaviour // TypeDefIndex: 5597
{
    // Fields
    private PoiseEvent poiseEvent; // 0x10
    private Slider stunBar; // 0x14
    private float stunTime; // 0x18

    // Methods

    // RVA: 0x37D8 Offset: 0x37D8 VA: 0x37D8
    private void Awake()
    {
        PoiseEvent pPVar1 = default;
        Slider pSVar2 = default;

        pPVar1 = (PoiseEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567efc);
        this.poiseEvent = pPVar1;
        pSVar2 = (Slider)UnityEngine.Component.GetComponentInChildren<object>(this,DAT_ram_00567f70);
        this.stunBar = pSVar2;
    }

    // RVA: 0x37D9 Offset: 0x37D9 VA: 0x37D9
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

        pPVar3 = this.poiseEvent;
        param1_00 = new System_Action_PoiseEvent__PoiseEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056cbd0,0);
        param1 = pPVar3.OnPoise;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&pPVar3.OnPoise,param2_00,param1);
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

    // RVA: 0x37DA Offset: 0x37DA VA: 0x37DA
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

        pPVar3 = this.poiseEvent;
        param1_00 = new System_Action_PoiseEvent__PoiseEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_0056cbd0,0);
        param1 = pPVar3.OnPoise;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)unnamed_function_1144(&pPVar3.OnPoise,param2_00,param1);
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

    // RVA: 0x37DB Offset: 0x37DB VA: 0x37DB
    private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
    {
        float param2 = default;
        int iVar1 = default;

        if (poiseEventArgs.currentPoise <= 0.0) {
            param2 = poiseEventArgs.stunTime;
            this.stunTime = param2;
            UnityEngine.UI.Slider.set_maxValue(this.stunBar,param2,0);
            iVar1 = this.stunBar._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x238) * 4) /* virtual */ (this.stunBar,this.stunTime,Raw.Read<int>(iVar1 + 0x23c));
        }
    }

    // RVA: 0x37DC Offset: 0x37DC VA: 0x37DC
    private void Update()
    {
        float fVar1 = default;
        float fVar2 = default;
        Slider pSVar3 = default;
        int iVar4 = default;

        iVar4 = this.stunBar._opaque;
        fVar1 = (float)Raw.VCall((ulong)Raw.Read<uint>(iVar4 + 0x230) * 4) /* virtual */ (this.stunBar,Raw.Read<int>(iVar4 + 0x234));
        if (0.0 < fVar1) {
            pSVar3 = this.stunBar;
            fVar1 = (float)Raw.VCall((ulong)Raw.Read<uint>(pSVar3._opaque + 0x230) * 4) /* virtual */ (pSVar3,Raw.Read<int>(pSVar3._opaque + 0x234));
            fVar2 = UnityEngine.Time.get_deltaTime(0);
            Raw.VCall((ulong)Raw.Read<uint>(pSVar3._opaque + 0x238) * 4) /* virtual */ (pSVar3,fVar1 - fVar2,Raw.Read<int>(pSVar3._opaque + 0x23c));
        }
    }

    // RVA: 0x37DD Offset: 0x37DD VA: 0x37DD
    public StunBar()
    {
        unnamed_function_44622(this,0);
    }
}
