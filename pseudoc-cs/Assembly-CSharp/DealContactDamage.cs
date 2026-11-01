// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/DealContactDamage.c by tools/c2cs.py
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

public class DealContactDamage : MonoBehaviour // TypeDefIndex: 5549
{
    // Fields
    private PoiseEvent poiseEvent; // 0x10
    [Tooltip("The contact damage to deal (is overridden by the receiver)")]
    [Header("DEAL DAMAGE")]
    [Space(10)]
    public int contactDamageAmount; // 0x14
    [Tooltip("Specify what layers objects should be on to receive contact damage")]
    private LayerMask playerlayerMask; // 0x18
    private bool isColliding; // 0x1C
    private float stunTime; // 0x20
    public bool isRemoved; // 0x24

    // Methods

    // RVA: 0x36CF Offset: 0x36CF VA: 0x36CF
    private void Awake()
    {
        PoiseEvent pPVar1 = default;

        pPVar1 = (PoiseEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567efc);
        this.poiseEvent = pPVar1;
    }

    // RVA: 0x36D0 Offset: 0x36D0 VA: 0x36D0
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
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568900,0);
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

    // RVA: 0x36D1 Offset: 0x36D1 VA: 0x36D1
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
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568900,0);
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

    // RVA: 0x36D2 Offset: 0x36D2 VA: 0x36D2
    private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
    {
        if (poiseEventArgs.currentPoise <= 0.0) {
            this.stunTime = poiseEventArgs.stunTime;
        }
    }

    // RVA: 0x36D3 Offset: 0x36D3 VA: 0x36D3
    private void Start()
    {
        int iVar1 = default;

        iVar1 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar1 + 0x10, "Player");
        iVar1 = UnityEngine.LayerMask.GetMask(iVar1,0);
        this.playerlayerMask.m_Mask = iVar1;
    }

    // RVA: 0x36D4 Offset: 0x36D4 VA: 0x36D4
    private void Update()
    {
        float fVar1 = default;
        float fVar2 = default;

        fVar2 = this.stunTime;
        if (0.0 < fVar2) {
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            this.stunTime = fVar2 - fVar1;
        }
    }

    // RVA: 0x36D5 Offset: 0x36D5 VA: 0x36D5
    private void OnTriggerEnter2D(Collider2D collision)
    {
        int uVar1 = default;
        uint uVar2 = default;
        GameResources pGVar3 = default;
        int uVar4 = default;
        int param1 = default;
        int iVar5 = default;
        Material pMVar6 = default;
        Material pMVar7 = default;

        if (((this.isRemoved == false) && (this.isColliding == false)) && (this.stunTime <= 0.0)) {
            uVar1 = UnityEngine.Component.get_gameObject(collision,0);
            uVar2 = UnityEngine.GameObject.get_layer(uVar1,0);
            if (((uint)this.playerlayerMask.m_Mask >> (uVar2 & 0x1f) & 1) != 0) {
                this.ContactDamage(collision);
                uVar1 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567ef4);
                pGVar3 = GameResources.Instance;
                pMVar6 = pGVar3.damegeFlashMaterial;
                pGVar3 = GameResources.Instance;
                pMVar7 = pGVar3.litMaterial;
                uVar4 = UnityEngine.Component.GetComponentsInChildren<object>(collision,DAT_ram_00567fe8);
                param1 = UnityEngine.Component.get_gameObject(uVar1,0);
                iVar5 = UnityEngine.GameObject.get_activeSelf(param1,0);
                if (iVar5 != 0) {
                    iVar5 = new PlayerEffect__DamageFlashCoroutine_d__10();
                    Raw.Write<int>(iVar5 + 0x18, uVar1);
                    Raw.Write<int>(iVar5 + 8, 0);
                    Raw.Write<object>(iVar5 + 0x1c, pMVar7);
                    Raw.Write<object>(iVar5 + 0x14, pMVar6);
                    Raw.Write<int>(iVar5 + 0x10, uVar4);
                    UnityEngine.MonoBehaviour.StartCoroutine(uVar1,iVar5,0);
                }
            }
        }
    }

    // RVA: 0x36D6 Offset: 0x36D6 VA: 0x36D6
    private void OnTriggerStay2D(Collider2D collision)
    {
        int uVar1 = default;
        uint uVar2 = default;
        GameResources pGVar3 = default;
        int uVar4 = default;
        int param1 = default;
        int iVar5 = default;
        Material pMVar6 = default;
        Material pMVar7 = default;

        if (((this.isRemoved == false) && (this.isColliding == false)) && (this.stunTime <= 0.0)) {
            uVar1 = UnityEngine.Component.get_gameObject(collision,0);
            uVar2 = UnityEngine.GameObject.get_layer(uVar1,0);
            if (((uint)this.playerlayerMask.m_Mask >> (uVar2 & 0x1f) & 1) != 0) {
                this.ContactDamage(collision);
                uVar1 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567ef4);
                pGVar3 = GameResources.Instance;
                pMVar6 = pGVar3.damegeFlashMaterial;
                pGVar3 = GameResources.Instance;
                pMVar7 = pGVar3.litMaterial;
                uVar4 = UnityEngine.Component.GetComponentsInChildren<object>(collision,DAT_ram_00567fe8);
                param1 = UnityEngine.Component.get_gameObject(uVar1,0);
                iVar5 = UnityEngine.GameObject.get_activeSelf(param1,0);
                if (iVar5 != 0) {
                    iVar5 = new PlayerEffect__DamageFlashCoroutine_d__10();
                    Raw.Write<int>(iVar5 + 0x18, uVar1);
                    Raw.Write<int>(iVar5 + 8, 0);
                    Raw.Write<object>(iVar5 + 0x1c, pMVar7);
                    Raw.Write<object>(iVar5 + 0x14, pMVar6);
                    Raw.Write<int>(iVar5 + 0x10, uVar4);
                    UnityEngine.MonoBehaviour.StartCoroutine(uVar1,iVar5,0);
                }
            }
        }
    }

    // RVA: 0x36D7 Offset: 0x36D7 VA: 0x36D7
    private void ContactDamage(Collider2D collision)
    {
        int param1 = default;
        int param1_00 = default;
        int iVar1 = default;
        MethodInfo damageAmount = default;
        MethodInfo method_00 = default;

        param1 = UnityEngine.Component.get_gameObject(collision,0);
        param1_00 = UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569ae0);
        iVar1 = (param1_00 != null);
        if (iVar1 != 0) {
            this.isColliding = true;
            UnityEngine.MonoBehaviour.Invoke(this,"ResetContactCollision",0.5,0);
            method_00 = *(MethodInfo)(param1_00 + 0x10);
            damageAmount = this.contactDamageAmount;
            if (0 < (int)method_00) {
                damageAmount = method_00;
            }
            (Raw.Read<object>(param1_00 + 0x14)).TakeDamage((int)damageAmount, method_00);
        }
    }

    // RVA: 0x36D8 Offset: 0x36D8 VA: 0x36D8
    private void ResetContactCollision()
    {
        this.isColliding = false;
    }

    // RVA: 0x36D9 Offset: 0x36D9 VA: 0x36D9
    public DealContactDamage()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
