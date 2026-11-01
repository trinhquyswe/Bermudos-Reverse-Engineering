// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Dash.c by tools/c2cs.py
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

public class Dash : MonoBehaviour // TypeDefIndex: 5705
{
    // Fields
    private Player player; // 0x10
    private Coroutine dashCoroutine; // 0x14
    private WaitForFixedUpdate waitForFixedUpdate; // 0x18
    private float dashCooldownTimer; // 0x1C
    private int dashCost; // 0x20

    // Methods

    // RVA: 0x3A09 Offset: 0x3A09 VA: 0x3A09
    private void Awake()
    {
        Player pPVar1 = default;

        pPVar1 = (Player)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ef0);
        this.player = pPVar1;
    }

    // RVA: 0x3A0A Offset: 0x3A0A VA: 0x3A0A
    private void OnEnable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        DashEvent pDVar3 = default;

        pDVar3 = this.player.dashEvent;
        param1_00 = new System_Action_DashEvent__DashEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_005684e0,0);
        param1 = pDVar3.OnDashEvent;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_DashEvent__DashEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_DashEvent__DashEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pDVar3.OnDashEvent, param2_00, param1);
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

    // RVA: 0x3A0B Offset: 0x3A0B VA: 0x3A0B
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        DashEvent pDVar3 = default;

        pDVar3 = this.player.dashEvent;
        param1_00 = new System_Action_DashEvent__DashEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_005684e0,0);
        param1 = pDVar3.OnDashEvent;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_DashEvent__DashEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_DashEvent__DashEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pDVar3.OnDashEvent, param2_00, param1);
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

    // RVA: 0x3A0C Offset: 0x3A0C VA: 0x3A0C
    private void DashEvent_OnDashEvent(DashEvent dashEvent, DashEventArgs dashEventArgs)
    {
        float fVar1 = default;
        Coroutine pCVar2 = default;
        int iVar3 = default;
        Vector2 VVar4 = default;

        fVar1 = UnityEngine.Time.get_time(0);
        if ((this.dashCooldownTimer < fVar1) && ((float)this.dashCost < this.player.stamina.currentStamina)) {
            iVar3 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar3 + 0x5c))).PlaySoundEffect(this.player.dashSoundEffect);
            VVar4 = dashEventArgs.direction;
            if (this.dashCoroutine != (Coroutine)0x0) {
                UnityEngine.MonoBehaviour.StopCoroutine(this,this.dashCoroutine,0);
            }
            iVar3 = new Dash__DashCoroutine_d__10();
            Raw.Write<Vector2>(iVar3 + 0x14, VVar4);
            Raw.Write<object>(iVar3 + 0x10, this);
            Raw.Write<int>(iVar3 + 8, 0);
            pCVar2 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,iVar3,0);
            this.dashCoroutine = pCVar2;
            this.player.playerEffect.isDashing = true;
            fVar1 = UnityEngine.Time.get_time(0);
            this.dashCooldownTimer = fVar1 + this.player.movementDetails.dashCooldownTime;
            this.player.stamina.UseStamina(this.dashCost);
        }
    }

    // RVA: 0x3A0D Offset: 0x3A0D VA: 0x3A0D
    public void PlayDash(Vector2 direction)
    {
        int param2 = default;
        Coroutine pCVar1 = default;
        Vector2 VVar2 = default;

        if (this.dashCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.dashCoroutine,0);
        }
        VVar2 = *direction;
        param2 = new Dash__DashCoroutine_d__10();
        Raw.Write<Vector2>(param2 + 0x14 /* dashCoroutine */, VVar2);
        Raw.Write<object>(param2 + 0x10 /* player */, this);
        Raw.Write<int>(param2 + 8, 0);
        pCVar1 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
        this.dashCoroutine = pCVar1;
        this.player.playerEffect.isDashing = true;
    }

    [IteratorStateMachine(typeof(Dash._DashCoroutine_d__10))]
    // RVA: 0x3A0E Offset: 0x3A0E VA: 0x3A0E
    private IEnumerator DashCoroutine(Vector2 direction)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new Dash__DashCoroutine_d__10();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        Raw.Write<Vector2>(pSVar1 + 5, *direction);
        return pSVar1;
    }

    // RVA: 0x3A0F Offset: 0x3A0F VA: 0x3A0F
    private void OnCollisionEnter2D(Collision2D collision)
    {
        this.player.playerEffect.isDashing = false;
        if (this.dashCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.dashCoroutine,0);
        }
    }

    // RVA: 0x3A10 Offset: 0x3A10 VA: 0x3A10
    private void OnCollisionStay2D(Collision2D collision)
    {
        this.player.playerEffect.isDashing = false;
        if (this.dashCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.dashCoroutine,0);
        }
    }

    // RVA: 0x3A11 Offset: 0x3A11 VA: 0x3A11
    private void OnTriggerEnter2D(Collider2D collision)
    {
        this.player.playerEffect.isDashing = false;
        if (this.dashCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.dashCoroutine,0);
        }
    }

    // RVA: 0x3A12 Offset: 0x3A12 VA: 0x3A12
    private void StopPlayerDashRoutine()
    {
        if (this.dashCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.dashCoroutine,0);
        }
    }

    // RVA: 0x3A13 Offset: 0x3A13 VA: 0x3A13
    public Dash()
    {
        WaitForFixedUpdate pWVar1 = default;

        pWVar1 = (WaitForFixedUpdate)new UnityEngine_WaitForFixedUpdate();
        this.dashCost = 10;
        this.waitForFixedUpdate = pWVar1;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
