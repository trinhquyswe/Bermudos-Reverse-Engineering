// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BossEffect.c by tools/c2cs.py
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

public class BossEffect : Effect // TypeDefIndex: 5575
{
    // Fields
    [HideInInspector]
    public bool isPhase2; // 0x3C
    private Animator animator; // 0x40
    private PoiseEvent poiseEvent; // 0x44

    // Methods

    // RVA: 0x374F Offset: 0x374F VA: 0x374F
    private void Awake()
    {
        int uVar1 = default;
        Animator pAVar2 = default;
        PoiseEvent pPVar3 = default;

        uVar1 = UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f18);
        Raw.Write<int>(this.pad_8 + 0x18, uVar1);
        pAVar2 = (Animator)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e18);
        this.animator = pAVar2;
        pPVar3 = (PoiseEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567efc);
        this.poiseEvent = pPVar3;
    }

    // RVA: 0x3750 Offset: 0x3750 VA: 0x3750
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
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00567890,0);
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

    // RVA: 0x3751 Offset: 0x3751 VA: 0x3751
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
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00567890,0);
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

    // RVA: 0x3752 Offset: 0x3752 VA: 0x3752
    private void PoiseEvent_onPoiseEvent(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
    {
        int[] local_8 = new int[2];
        if (poiseEventArgs.currentPoise <= 0.0) {
            local_8[0] = Raw.Read<int>(this.pad_8 + 0x2c);
            unnamed_function_86779(local_8,poiseEventArgs.stunTime,0);
            UnityEngine.ParticleSystem.Play(Raw.Read<int>(this.pad_8 + 0x2c),0);
        }
    }

    // RVA: 0x3753 Offset: 0x3753 VA: 0x3753
    public void PushBossByWeapon(Vector3 playerPosition)
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        int uVar4 = default;
        int param2 = default;
        float fVar5 = default;
        float fVar6 = default;
        float fVar7 = default;
        float fVar8 = default;
        float fVar9 = default;
        object pfVar10 = default; // float*
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        uVar4 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar4,0);
        fVar3 = local_8;
        fVar2 = local_c;
        fVar1 = local_10;
        fVar5 = Raw.Read<float>(this.pad_8 + 0x24);
        uVar4 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar4,0);
        fVar6 = playerPosition.z;
        fVar7 = playerPosition.y;
        fVar8 = playerPosition.x;
        fVar6 = (float)local_8 - fVar6;
        fVar7 = (float)local_c - fVar7;
        fVar8 = (float)local_10 - fVar8;
        fVar9 = Mathf.Sqrt(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
        if (1e-05 < fVar9) {
            fVar6 = fVar6 / fVar9;
            fVar7 = fVar7 / fVar9;
            fVar8 = fVar8 / fVar9;
        }
        else {
            pfVar10 = Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c);
            fVar6 = pfVar10[2];
            fVar7 = pfVar10[1];
            fVar8 = *pfVar10;
        }
        param2 = new BossEffect__PushEnemyByWeaponCoroutine_d__8();
        Raw.Write<float>(param2 + 0x1c, (float)fVar3 + fVar5 * fVar6);
        Raw.Write<float>(param2 + 0x18, (float)fVar2 + fVar5 * fVar7);
        Raw.Write<float>(param2 + 0x14, (float)fVar1 + fVar5 * fVar8);
        Raw.Write<object>(param2 + 0x10, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    [IteratorStateMachine(typeof(BossEffect._PushEnemyByWeaponCoroutine_d__8))]
    // RVA: 0x3754 Offset: 0x3754 VA: 0x3754
    private IEnumerator PushEnemyByWeaponCoroutine(Vector3 targetPosition)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new BossEffect__PushEnemyByWeaponCoroutine_d__8();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        Raw.Write<long>(pSVar1 + 5, Raw.Read<long>(targetPosition));
        pSVar1[7]._opaque = (int)targetPosition.z;
        return pSVar1;
    }

    // RVA: 0x3755 Offset: 0x3755 VA: 0x3755
    public void OuchEffect()
    {
        bool bVar1 = default;
        Animator param1 = default;
        int iVar2 = default;

        bVar1 = this.isPhase2;
        param1 = this.animator;
        iVar2 = 0x6c;
        if (bVar1 == false) {
            iVar2 = 0x38;
        }
        unnamed_function_45425(param1,Raw.Read<int>(Raw.Read<int>(Settings_TypeInfo + 0x5c) + iVar2),0);
    }

    // RVA: 0x3756 Offset: 0x3756 VA: 0x3756
    public BossEffect()
    {
        int uVar1 = default;

        uVar1 = new UnityEngine_WaitForFixedUpdate();
        this.pad_8[0x28] = 0;
        this.pad_8[0x29] = 0;
        this.pad_8[0x2a] = 0x80;
        this.pad_8[0x2b] = 0x3e;
        Raw.Write<int>(this.pad_8 + 0x20, uVar1);
        unnamed_function_44622(this,0);
    }
}
