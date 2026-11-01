// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Beam.c by tools/c2cs.py
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

public class Beam : MonoBehaviour // TypeDefIndex: 5693
{
    // Fields
    private bool isColliding; // 0x10
    private int damageBeam; // 0x14
    private Animator animator; // 0x18
    private LayerMask enemyLayerMask; // 0x1C
    private LayerMask bossLayerMask; // 0x20
    private LayerMask playerLayerMask; // 0x24
    private LayerMask bashAmmoLayerMask; // 0x28
    [HideInInspector]
    public float amountScaleY; // 0x2C
    [SerializeField]
    private SoundEffectSO beamSoundEffect; // 0x30
    [SerializeField]
    private SoundEffectSO beamPlayerSoundEffect; // 0x34

    // Methods

    // RVA: 0x39BF Offset: 0x39BF VA: 0x39BF
    private void Awake()
    {
        Animator pAVar1 = default;
        int iVar2 = default;

        pAVar1 = (Animator)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e18);
        this.animator = pAVar1;
        iVar2 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar2 + 0x10, "Enemy");
        iVar2 = UnityEngine.LayerMask.GetMask(iVar2,0);
        this.enemyLayerMask.m_Mask = iVar2;
        iVar2 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar2 + 0x10, "Boss");
        iVar2 = UnityEngine.LayerMask.GetMask(iVar2,0);
        this.bossLayerMask.m_Mask = iVar2;
        iVar2 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar2 + 0x10, "Player");
        iVar2 = UnityEngine.LayerMask.GetMask(iVar2,0);
        this.playerLayerMask.m_Mask = iVar2;
        iVar2 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar2 + 0x10, "BashAmmo");
        iVar2 = UnityEngine.LayerMask.GetMask(iVar2,0);
        this.bashAmmoLayerMask.m_Mask = iVar2;
    }

    // RVA: 0x39C0 Offset: 0x39C0 VA: 0x39C0
    private void LateUpdate()
    {
        long uVar1 = default;
        int param1 = default;
        int uVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        float fVar6 = default;
        long local_80 = default;
        float local_78 = default;
        float local_70 = default;
        float local_6c = default;
        float local_68 = default;
        float local_60 = default;
        float local_58 = default;
        long local_50 = default;
        long local_48 = default;
        long local_40 = default;
        long local_38 = default;
        int local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        int local_8 = default;

        UnityEngine.Animator.GetCurrentAnimatorStateInfo(&local_50,this.animator,0,0);
        local_8 = local_30;
        local_10 = local_38;
        local_18 = local_40;
        local_20 = local_48;
        uVar1 = local_20;
        local_28 = local_50;
        local_20._4_4_ = (float)((ulong)local_48 >> 0x20);
        fVar5 = local_20._4_4_;
        local_20 = uVar1;
        param1 = UnityEngine.Component.get_transform(this,0);
        uVar2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_localScale(&local_60,uVar2,0);
        fVar3 = this.amountScaleY;
        uVar2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_localScale(&local_60,uVar2,0);
        local_68 = local_58;
        local_78 = local_58;
        fVar5 = fVar5 / 1.5;
        fVar6 = fVar5;
        if (1.0 <= fVar5) {
            fVar6 = 1.0;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar5) {
            fVar4 = fVar6 + 0.0;
        }
        local_6c = (float)(fVar3 * fVar4);
        local_70 = local_60;
        local_80 = CONCAT44(local_6c,local_60);
        /* candidates: UnityEngine.Transform.set_localScale | UnityEngine.Transform.set_localScale_Injected */ unnamed_function_44982(param1,&local_80,0);
    }

    // RVA: 0x39C1 Offset: 0x39C1 VA: 0x39C1
    private void Start()
    {
        int param1 = default;
        uint uVar1 = default;
        uint uVar2 = default;
        int iVar3 = default;
        MethodInfo method_00 = default;

        uVar2 = this.bashAmmoLayerMask.m_Mask;
        param1 = UnityEngine.Component.get_gameObject(this,0);
        uVar1 = UnityEngine.GameObject.get_layer(param1,0);
        iVar3 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((int)(uVar2 & 1 << (uVar1 & 0x1f)) < 1) {
            if ((Raw.Read<ushort>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            method_00 = &this.beamSoundEffect;
        }
        else {
            if ((Raw.Read<ushort>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            method_00 = &this.beamPlayerSoundEffect;
        }
        ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar3 + 0x5c))).PlaySoundEffect((SoundEffectSO)method_00._opaque0, method_00);
    }

    // RVA: 0x39C2 Offset: 0x39C2 VA: 0x39C2
    public void EyeAttackEnd()
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.Object.Destroy(param1,0);
    }

    // RVA: 0x39C3 Offset: 0x39C3 VA: 0x39C3
    private void OnTriggerEnter2D(Collider2D collision)
    {
        int uVar1 = default;
        uint uVar2 = default;
        PlayerEffect pPVar3 = default;
        ReceiveDamage __this_00 = default;
        EnemyEffect pEVar4 = default;
        GameResources pGVar5 = default;
        UnityEngine.SpriteRenderer.arr pUVar6 = default;
        BossEffect pBVar7 = default;
        uint uVar8 = default;
        UnityEngine.Material pUVar9 = default;
        UnityEngine.Material pUVar10 = default;
        Vector2 local_40 = default;
        float local_38 = default;
        Vector2 local_30 = default;
        float local_28 = default;
        Vector2 local_20 = default;
        Vector2 local_18 = default;
        Vector2 local_10 = default;
        float local_8 = default;

        if (this.isColliding == false) {
            uVar8 = this.playerLayerMask.m_Mask;
            uVar1 = UnityEngine.Component.get_gameObject(collision,0);
            uVar2 = UnityEngine.GameObject.get_layer(uVar1,0);
            if (0 < (int)(uVar8 & 1 << (uVar2 & 0x1f))) {
                pPVar3 = (PlayerEffect)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567ef4);
                uVar1 = UnityEngine.Component.get_transform(this,0);
                UnityEngine.Transform.get_position(&local_10,uVar1,0);
                local_18 = local_10;
                local_20 = local_10;
                pPVar3.DamagePushEfect(&local_20);
                pPVar3 = (PlayerEffect)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567ef4);
                pGVar5 = GameResources.Instance;
                pUVar9 = (UnityEngine.Material)pGVar5.damegeFlashMaterial;
                pGVar5 = GameResources.Instance;
                pUVar10 = (UnityEngine.Material)pGVar5.litMaterial;
                pUVar6 = (UnityEngine.SpriteRenderer.arr) UnityEngine.Component.GetComponentsInChildren<object>(collision,DAT_ram_00567fe8);
                pPVar3.CallDamageFlashEffect(pUVar9, pUVar10, pUVar6);
            }
            __this_00 = (ReceiveDamage)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567f04);
            if (__this_00 != (ReceiveDamage)0x0) {
                __this_00.TakeDamage(this.damageBeam);
            }
            uVar8 = this.enemyLayerMask.m_Mask;
            uVar1 = UnityEngine.Component.get_gameObject(collision,0);
            uVar2 = UnityEngine.GameObject.get_layer(uVar1,0);
            if (0 < (int)(uVar8 & 1 << (uVar2 & 0x1f))) {
                pEVar4 = (EnemyEffect)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e84);
                if (pEVar4 != (EnemyEffect)0x0) {
                    uVar1 = UnityEngine.Component.get_transform(this,0);
                    UnityEngine.Transform.get_position(&local_10,uVar1,0);
                    local_28 = local_8;
                    local_30 = local_10;
                    pEVar4.DamagePushEfect((Vector3)&local_30);
                }
                pEVar4 = (EnemyEffect)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e84);
                if (pEVar4 != (EnemyEffect)0x0) {
                    pGVar5 = GameResources.Instance;
                    pUVar9 = (UnityEngine.Material)pGVar5.damegeFlashMaterial;
                    pGVar5 = GameResources.Instance;
                    pUVar10 = (UnityEngine.Material)pGVar5.litMaterial;
                    pUVar6 = (UnityEngine.SpriteRenderer.arr) UnityEngine.Component.GetComponentsInChildren<object>(collision,DAT_ram_00567fe8);
                    pEVar4.CallDamageFlashEffect(pUVar9, pUVar10, pUVar6);
                }
            }
            uVar8 = this.bossLayerMask.m_Mask;
            uVar1 = UnityEngine.Component.get_gameObject(collision,0);
            uVar2 = UnityEngine.GameObject.get_layer(uVar1,0);
            if (0 < (int)(uVar8 & 1 << (uVar2 & 0x1f))) {
                pBVar7 = (BossEffect)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e34);
                if (pBVar7 != (BossEffect)0x0) {
                    uVar1 = UnityEngine.Component.get_transform(this,0);
                    UnityEngine.Transform.get_position(&local_10,uVar1,0);
                    local_38 = local_8;
                    local_40 = local_10;
                    pBVar7.PushBossByWeapon((Vector3)&local_40);
                }
                pBVar7 = (BossEffect)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e34);
                if (pBVar7 != (BossEffect)0x0) {
                    pBVar7.OuchEffect();
                }
            }
            this.isColliding = true;
        }
    }

    // RVA: 0x39C4 Offset: 0x39C4 VA: 0x39C4
    public Beam()
    {
        this.damageBeam = 0x14;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
