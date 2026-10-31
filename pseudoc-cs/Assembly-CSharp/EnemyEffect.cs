// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EnemyEffect.c by tools/c2cs.py
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

public class EnemyEffect : Effect // TypeDefIndex: 5580
{
    // Fields
    private PoiseEvent poiseEvent; // 0x3C
    private EnemyMovement enemyMovement; // 0x40
    private Coroutine pushEnemyByAmmoCoroutine; // 0x44

    // Methods

    // RVA: 0x375F Offset: 0x375F VA: 0x375F
    private void Awake()
    {
        int uVar1 = default;
        EnemyMovement pEVar2 = default;
        PoiseEvent pPVar3 = default;

        uVar1 = UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f18);
        Raw.Write<int>(this.pad_8 + 0x18, uVar1);
        pEVar2 = (EnemyMovement)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e88);
        this.enemyMovement = pEVar2;
        pPVar3 = (PoiseEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567efc);
        this.poiseEvent = pPVar3;
    }

    // RVA: 0x3760 Offset: 0x3760 VA: 0x3760
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
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568eb8,0);
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

    // RVA: 0x3761 Offset: 0x3761 VA: 0x3761
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
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568eb8,0);
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

    // RVA: 0x3762 Offset: 0x3762 VA: 0x3762
    private void PoiseEvent_onPoiseEvent(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
    {
        int[] local_8 = new int[2];
        if (poiseEventArgs.currentPoise <= 0.0) {
            local_8[0] = Raw.Read<int>(this.pad_8 + 0x2c);
            unnamed_function_86779(local_8,poiseEventArgs.stunTime,0);
            UnityEngine.ParticleSystem.Play(Raw.Read<int>(this.pad_8 + 0x2c),0);
        }
    }

    // RVA: 0x3763 Offset: 0x3763 VA: 0x3763
    private void Start()
    {
        UnityEngine.ParticleSystem.Stop(Raw.Read<int>(this.pad_8 + 0x30),0);
        UnityEngine.ParticleSystem.Stop(Raw.Read<int>(this.pad_8 + 0x2c),0);
    }

    // RVA: 0x3764 Offset: 0x3764 VA: 0x3764
    public void CallDamageFlashEffect(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
    {
        int param1 = default;
        int iVar1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        iVar1 = UnityEngine.GameObject.get_activeSelf(param1,0);
        if (iVar1 != 0) {
            iVar1 = new EnemyEffect__DamageFlashCoroutine_d__9();
            Raw.Write<object>(iVar1 + 0x18, this);
            Raw.Write<int>(iVar1 + 8, 0);
            Raw.Write<object>(iVar1 + 0x1c, defaultMaterial);
            Raw.Write<object>(iVar1 + 0x14, damageFlash);
            Raw.Write<object>(iVar1 + 0x10, spriteRenderers);
            UnityEngine.MonoBehaviour.StartCoroutine(this,iVar1,0);
        }
    }

    [IteratorStateMachine(typeof(EnemyEffect._DamageFlashCoroutine_d__9))]
    // RVA: 0x3765 Offset: 0x3765 VA: 0x3765
    private IEnumerator DamageFlashCoroutine(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new EnemyEffect__DamageFlashCoroutine_d__9();
        pSVar1[6]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        pSVar1[7]._opaque = (int)defaultMaterial;
        pSVar1[5]._opaque = (int)damageFlash;
        pSVar1[4]._opaque = (int)spriteRenderers;
        return pSVar1;
    }

    // RVA: 0x3766 Offset: 0x3766 VA: 0x3766
    public void DamagePushEfect(Vector3 ammo)
    {
        int param1 = default;
        int iVar2 = default;
        Coroutine pCVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        float fVar6 = default;
        float fVar7 = default;

        byte[] auVar1 = new byte[8];
        byte[] local_8 = new byte[8];
        param1 = UnityEngine.Component.get_gameObject(this,0);
        iVar2 = UnityEngine.GameObject.get_activeSelf(param1,0);
        if (iVar2 != 0) {
            UnityEngine.Rigidbody2D.get_position(local_8,Raw.Read<int>(this.pad_8 + 0x18),0);
            auVar1 = local_8;
            fVar4 = Raw.Read<float>(this.pad_8 + 0x24);
            UnityEngine.Rigidbody2D.get_position(local_8,Raw.Read<int>(this.pad_8 + 0x18),0);
            fVar5 = ammo.x;
            fVar6 = ammo.y;
            fVar5 = local_8._0_4_ - fVar5;
            fVar6 = local_8._4_4_ - fVar6;
            fVar7 = Mathf.Sqrt(fVar5 * fVar5 + fVar6 * fVar6);
            if (1e-05 < fVar7) {
                fVar6 = fVar6 / fVar7;
                fVar5 = fVar5 / fVar7;
            }
            else {
                fVar6 = (Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
                fVar5 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
            }
            iVar2 = new EnemyEffect__PushEnemyByAmmo_d__11();
            Raw.Write<int>(iVar2 + 0x1c, 0);
            Raw.Write<float>(iVar2 + 0x18, fVar4 * fVar6 + auVar1._4_4_);
            Raw.Write<float>(iVar2 + 0x14, fVar4 * fVar5 + auVar1._0_4_);
            Raw.Write<object>(iVar2 + 0x10, this);
            Raw.Write<int>(iVar2 + 8, 0);
            pCVar3 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,iVar2,0);
            this.pushEnemyByAmmoCoroutine = pCVar3;
        }
    }

    [IteratorStateMachine(typeof(EnemyEffect._PushEnemyByAmmo_d__11))]
    // RVA: 0x3767 Offset: 0x3767 VA: 0x3767
    private IEnumerator PushEnemyByAmmo(Vector3 targetPosition)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new EnemyEffect__PushEnemyByAmmo_d__11();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        Raw.Write<long>(pSVar1 + 5, Raw.Read<long>(targetPosition));
        pSVar1[7]._opaque = (int)targetPosition.z;
        return pSVar1;
    }

    // RVA: 0x3768 Offset: 0x3768 VA: 0x3768
    public void PushEnemyByWeapon(Vector3 playerPosition)
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
        param2 = new EnemyEffect__PushEnemyByWeaponCoroutine_d__13();
        Raw.Write<float>(param2 + 0x1c, (float)fVar3 + fVar5 * fVar6);
        Raw.Write<float>(param2 + 0x18, (float)fVar2 + fVar5 * fVar7);
        Raw.Write<float>(param2 + 0x14, (float)fVar1 + fVar5 * fVar8);
        Raw.Write<object>(param2 + 0x10, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    [IteratorStateMachine(typeof(EnemyEffect._PushEnemyByWeaponCoroutine_d__13))]
    // RVA: 0x3769 Offset: 0x3769 VA: 0x3769
    private IEnumerator PushEnemyByWeaponCoroutine(Vector3 targetPosition)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new EnemyEffect__PushEnemyByWeaponCoroutine_d__13();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        Raw.Write<long>(pSVar1 + 5, Raw.Read<long>(targetPosition));
        pSVar1[7]._opaque = (int)targetPosition.z;
        return pSVar1;
    }

    // RVA: 0x376A Offset: 0x376A VA: 0x376A
    public void BloodEffect()
    {
        UnityEngine.ParticleSystem.Play(Raw.Read<int>(this.pad_8 + 0x30),0);
    }

    // RVA: 0x376B Offset: 0x376B VA: 0x376B
    public EnemyEffect()
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
