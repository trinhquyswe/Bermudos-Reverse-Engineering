// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/DealDamage.c by tools/c2cs.py
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

public class DealDamage : MonoBehaviour // TypeDefIndex: 5550
{
    // Fields
    [SerializeField]
    private LayerMask enemyLayer; // 0x10
    private ContactFilter2D contactFilter2D; // 0x14
    private Weapon weapon; // 0x30
    [SerializeField]
    public int damage; // 0x34
    private int attackCost; // 0x38

    // Methods

    // RVA: 0x36DA Offset: 0x36DA VA: 0x36DA
    private void Awake()
    {
        Weapon pWVar1 = default;

        UnityEngine.ContactFilter2D.SetLayerMask(&this.contactFilter2D,this.enemyLayer.m_Mask,0);
        pWVar1 = (Weapon)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f60);
        this.weapon = pWVar1;
        this.contactFilter2D.useTriggers = false;
        this.contactFilter2D.useLayerMask = true;
    }

    // RVA: 0x36DB Offset: 0x36DB VA: 0x36DB
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
        iVar3 = Raw.Read<int>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x10) + 0x28);
        param1_00 = new System_Action_DealDamageEvent__DealDamageEventAgrs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568904,0);
        param1 = Raw.Read<int>(iVar3 + 0x10);
        while( true ) {
            iVar2 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo;
            if ((param1_01 != 0) && (iVar2 = unnamed_function_1112 (param1_01,System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo), iVar2 == 0)) break;
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

    // RVA: 0x36DC Offset: 0x36DC VA: 0x36DC
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
        iVar3 = Raw.Read<int>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x10) + 0x28);
        param1_00 = new System_Action_DealDamageEvent__DealDamageEventAgrs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568904,0);
        param1 = Raw.Read<int>(iVar3 + 0x10);
        while( true ) {
            iVar2 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo;
            if ((param1_01 != 0) && (iVar2 = unnamed_function_1112 (param1_01,System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo), iVar2 == 0)) break;
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

    // RVA: 0x36DD Offset: 0x36DD VA: 0x36DD
    private void DealDamageEvent_OnDealDamage(DealDamageEvent dealDamageEvent, DealDamageEventAgrs dealDamageEventAgrs)
    {
        int param1 = default;
        MethodInfo pMVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        MethodInfo pMVar5 = default;
        SoundEffectManager __this_00 = default;
        UnityEngine.Collider2D collision = default;
        float fVar6 = default;
        float fVar7 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        float local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        float local_8 = default;

        this.weapon.GetWeaponCollider();
        iVar4 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        pMVar5 = *(MethodInfo)(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar4 + 0x5c)) + 0x10) + 0x40);
        if (0.0 < *(object)&pMVar5.field_0x14) {
            iVar4 = this.attackCost;
            fVar7 = *(object)&pMVar5.field_0x14 - (float)iVar4;
            *(object)&pMVar5.field_0x14 = fVar7;
            (Raw.Read<object>(*(object)&pMVar5.field_0x18 + 0x3c)).CallStaminaChangedEvent(fVar7 / (float)*(object)&pMVar5.field_0x10, fVar7, (float)iVar4, pMVar5);
        }
        iVar4 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        __this_00 = (SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar4 + 0x5c));
        iVar4 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        pMVar5 = null;
        __this_00.PlaySoundEffect(Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar4 + 0x5c)) + 0x10) + 100));
        iVar4 = unnamed_function_1050(UnityEngine_Collider2D___TypeInfo,1);
        param1 = UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e58);
        local_8 = this.contactFilter2D.maxNormalAngle;
        local_10._0_4_ = this.contactFilter2D.maxDepth;
        local_10._4_4_ = this.contactFilter2D.minNormalAngle;
        local_18._0_4_ = this.contactFilter2D.layerMask;
        local_18._4_4_ = this.contactFilter2D.minDepth;
        local_20._0_1_ = this.contactFilter2D.useTriggers;
        local_20._1_1_ = this.contactFilter2D.useLayerMask;
        local_20._2_1_ = this.contactFilter2D.useDepth;
        local_20._3_1_ = this.contactFilter2D.useOutsideDepth;
        local_20._4_1_ = this.contactFilter2D.useNormalAngle;
        local_20._5_1_ = this.contactFilter2D.useOutsideNormalAngle;
        local_20._6_1_ = this.contactFilter2D.pad_6[0];
        local_20._7_1_ = this.contactFilter2D.pad_6[1];
        local_28 = local_8;
        local_30 = local_10;
        local_38 = local_18;
        local_40 = local_20;
        pMVar1 = /* candidates: UnityEngine.Physics2D.OverlapCollider | UnityEngine.PhysicsScene2D.OverlapCollider */ unnamed_function_16341(param1,&local_40,iVar4,0);
        if (0 < (int)pMVar1) {
            do {
                collision = Raw.Read<object>(iVar4 + (int)pMVar5 * 4 + 0x10);
                iVar2 = (collision != null);
                if (iVar2 != 0) {
                    iVar2 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                    if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
                    }
                    iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
                    if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
                    }
                    iVar2 = Raw.Read<int>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar2 + 0x5c)) + 0x10) + 0x4c);
                    fVar7 = Raw.Read<float>(iVar2 + 0x14) + 1.0;
                    Raw.Write<float>(iVar2 + 0x14, fVar7);
                    fVar6 = Raw.Read<float>(iVar2 + 0x10);
                    if (fVar6 < fVar7) {
                        Raw.Write<float>(iVar2 + 0x14, fVar6);
                        fVar7 = fVar6;
                    }
                    iVar2 = Raw.Deref(Raw.Read<object>(RageEvent_TypeInfo + 0x5c));
                    if (iVar2 != 0) {
                        iVar3 = new RageEventArgs();
                        Raw.Write<float>(iVar3 + 0x10, fVar6);
                        Raw.Write<float>(iVar3 + 0xc, fVar6);
                        Raw.Write<float>(iVar3 + 8, fVar7 / fVar6);
                        Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar2 + 0x20),iVar3,Raw.Read<int>(iVar2 + 0x14));
                    }
                    this.DealDamageHandle(collision, pMVar5);
                }
                pMVar5 = ((int)&pMVar5._opaque0 + 1);
            } while (pMVar5 != pMVar1);
        }
    }

    // RVA: 0x36DE Offset: 0x36DE VA: 0x36DE
    private void DealDamageHandle(Collider2D collision)
    {
        sbyte cVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        GameResources pGVar4 = default;
        int param1 = default;
        BossEffect __this_00 = default;
        EnemyEffect __this_01 = default;
        int param1_00 = default;
        Material pMVar5 = default;
        Material pMVar6 = default;
        int iVar7 = default;
        Vector3 local_30 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        uVar2 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e78);
        iVar3 = (uVar2 != null);
        if (iVar3 == 0) {
            uVar2 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e30);
            iVar3 = (uVar2 != null);
            if (iVar3 != 0) {
                __this_00 = (BossEffect)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e34);
                iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                }
                iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                }
                uVar2 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x10),0);
                UnityEngine.Transform.get_position(&local_10,uVar2,0);
                local_20.z = local_10.z;
                local_20.x = local_10.x;
                local_20.y = local_10.y;
                __this_00.PushBossByWeapon(&local_20);
                iVar3 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567f04);
                if (Raw.Read<sbyte>(iVar3 + 0x18) == '\0') {
                    iVar7 = this.damage;
                    if (0 < Raw.Read<int>(iVar3 + 0x10)) {
                        iVar7 = Raw.Read<int>(iVar3 + 0x10);
                    }
                    (Raw.Read<object>(iVar3 + 0x14)).TakeDamage(iVar7);
                }
                iVar3 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e34);
                cVar1 = Raw.Read<sbyte>(iVar3 + 0x3c);
                uVar2 = Raw.Read<int>(iVar3 + 0x40);
                iVar3 = 0x6c;
                if (cVar1 == '\0') {
                    iVar3 = 0x38;
                }
                /* candidates: UnityEngine.Animator.SetTrigger | UnityEngine.Animator.SetTriggerID */ unnamed_function_45425(uVar2,Raw.Read<int>(Raw.Read<int>(Settings_TypeInfo + 0x5c) + iVar3),0);
            }
        }
        else {
            iVar3 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e78);
            if (iVar3 != 0) {
                __this_01 = Raw.Read<object>(iVar3 + 0x24);
                iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                }
                iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                }
                uVar2 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x10),0);
                UnityEngine.Transform.get_position(&local_10,uVar2,0);
                local_30.z = local_10.z;
                local_30.x = local_10.x;
                local_30.y = local_10.y;
                __this_01.PushEnemyByWeapon(&local_30);
            }
            iVar3 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567f04);
            if (Raw.Read<sbyte>(iVar3 + 0x18) == '\0') {
                iVar7 = this.damage;
                if (0 < Raw.Read<int>(iVar3 + 0x10)) {
                    iVar7 = Raw.Read<int>(iVar3 + 0x10);
                }
                (Raw.Read<object>(iVar3 + 0x14)).TakeDamage(iVar7);
            }
            iVar3 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e78);
            param1_00 = Raw.Read<int>(iVar3 + 0x24);
            pGVar4 = GameResources.Instance;
            pMVar5 = pGVar4.damegeFlashMaterial;
            pGVar4 = GameResources.Instance;
            pMVar6 = pGVar4.litMaterial;
            uVar2 = UnityEngine.Component.GetComponents<object>(collision,DAT_ram_00567fb4);
            param1 = UnityEngine.Component.get_gameObject(param1_00,0);
            iVar3 = UnityEngine.GameObject.get_activeSelf(param1,0);
            if (iVar3 != 0) {
                iVar3 = new EnemyEffect__DamageFlashCoroutine_d__9();
                Raw.Write<int>(iVar3 + 0x18, param1_00);
                Raw.Write<int>(iVar3 + 8, 0);
                Raw.Write<object>(iVar3 + 0x1c, pMVar6);
                Raw.Write<object>(iVar3 + 0x14, pMVar5);
                Raw.Write<int>(iVar3 + 0x10, uVar2);
                UnityEngine.MonoBehaviour.StartCoroutine(param1_00,iVar3,0);
            }
            iVar3 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e78);
            UnityEngine.ParticleSystem.Play(Raw.Read<int>(Raw.Read<int>(iVar3 + 0x24) + 0x38),0);
        }
    }

    // RVA: 0x36DF Offset: 0x36DF VA: 0x36DF
    public DealDamage()
    {
        this.damage = 10;
        this.attackCost = 10;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
