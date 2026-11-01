// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MeleeSkills.c by tools/c2cs.py
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

public class MeleeSkills : MonoBehaviour // TypeDefIndex: 5695
{
    // Fields
    private Boss boss; // 0x10
    private Weapon weapon; // 0x14
    public float minDistance; // 0x18
    [SerializeField]
    private LayerMask playerLayer; // 0x1C
    private MovementToPositionEvent movementToPositionEvent; // 0x20
    private ContactFilter2D contactFilter2D; // 0x24
    private Coroutine activeSkillCoroutine; // 0x40
    private WaitForFixedUpdate waitForFixedUpdate; // 0x44
    [SerializeField]
    private SoundEffectSO slashSoundEffect; // 0x48
    public bool isAttacking; // 0x4C
    public float speed; // 0x50
    public float cooldown; // 0x54
    private float previousDistance; // 0x58
    private int count; // 0x5C

    // Methods

    // RVA: 0x39C5 Offset: 0x39C5 VA: 0x39C5
    private void Awake()
    {
        Boss pBVar1 = default;
        Weapon pWVar2 = default;
        MovementToPositionEvent pMVar3 = default;

        pBVar1 = (Boss)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e30);
        this.boss = pBVar1;
        pWVar2 = (Weapon)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f60);
        this.weapon = pWVar2;
        pMVar3 = (MovementToPositionEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ed8);
        this.movementToPositionEvent = pMVar3;
    }

    // RVA: 0x39C6 Offset: 0x39C6 VA: 0x39C6
    private void Start()
    {
        this.isAttacking = false;
        UnityEngine.ContactFilter2D.SetLayerMask(&this.contactFilter2D,this.playerLayer.m_Mask,0);
        this.contactFilter2D.useTriggers = true;
        this.contactFilter2D.useLayerMask = true;
    }

    // RVA: 0x39C7 Offset: 0x39C7 VA: 0x39C7
    public void DealDamage(int damage)
    {
        int iVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        ReceiveDamage __this_00 = default;
        PlayerEffect pPVar4 = default;
        int param2 = default;
        GameResources pGVar5 = default;
        UnityEngine.SpriteRenderer.arr spriteRenderers = default;
        int iVar6 = default;
        MethodInfo method_00 = default;
        PolygonCollider2D param1 = default;
        int param1_00 = default;
        UnityEngine.Material damageFlash = default;
        UnityEngine.Material defaultMaterial = default;
        Vector2 local_50 = default;
        Vector2 local_48 = default;
        long local_40 = default;
        long local_38 = default;
        float local_30 = default;
        Vector2 local_28 = default;
        Vector2 local_20 = default;
        long local_18 = default;
        long local_10 = default;
        float local_8 = default;

        this.weapon.GetWeaponCollider();
        iVar6 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar6 + 0xbd) & 1) == 0) {
        }
        method_00 = *(MethodInfo)(Raw.Read<int>(iVar6 + 0x60) + 8);
        if ((method_00[5].field_0x1d & 1) == 0) {
            method_00 = unnamed_function_95087(method_00);
        }
        ((SoundEffectManager)**(object)&method_00[2].field_0x1c).PlaySoundEffect(this.slashSoundEffect, method_00);
        iVar6 = unnamed_function_1050(UnityEngine_Collider2D___TypeInfo,1);
        param1 = this.weapon.polygonCollider2D;
        local_8 = this.contactFilter2D.maxNormalAngle;
        local_10._0_4_ = this.contactFilter2D.maxDepth;
        local_10._4_4_ = this.contactFilter2D.minNormalAngle;
        local_18._0_4_ = this.contactFilter2D.layerMask;
        local_18._4_4_ = this.contactFilter2D.minDepth;
        local_20 = *(Vector2)&this.contactFilter2D;
        local_30 = local_8;
        local_38 = local_10;
        local_40 = local_18;
        local_48 = local_20;
        iVar2 = /* candidates: UnityEngine.Physics2D.OverlapCollider | UnityEngine.PhysicsScene2D.OverlapCollider */ unnamed_function_16341(param1,&local_48,iVar6,0);
        if (0 < iVar2) {
            iVar1 = 0;
            do {
                param1_00 = Raw.Read<int>(iVar6 + iVar1 * 4 + 0x10);
                iVar3 = (param1_00 != null);
                if (iVar3 != 0) {
                    __this_00 = (ReceiveDamage)UnityEngine.Component.GetComponent<object>(param1_00,DAT_ram_00567f04);
                    if (__this_00 != (ReceiveDamage)0x0) {
                        __this_00.TakeDamage(damage);
                    }
                    pPVar4 = (PlayerEffect)UnityEngine.Component.GetComponent<object>(param1_00,DAT_ram_00567ef4);
                    if (pPVar4 != (PlayerEffect)0x0) {
                        param2 = UnityEngine.Component.get_transform(this,0);
                        UnityEngine.Transform.get_position(&local_20,param2,0);
                        local_28 = local_20;
                        local_50 = local_20;
                        pPVar4.DamagePushEfect(&local_50);
                    }
                    pPVar4 = (PlayerEffect)UnityEngine.Component.GetComponent<object>(param1_00,DAT_ram_00567ef4);
                    if (pPVar4 != (PlayerEffect)0x0) {
                        pGVar5 = GameResources.Instance;
                        damageFlash = (UnityEngine.Material)pGVar5.damegeFlashMaterial;
                        pGVar5 = GameResources.Instance;
                        defaultMaterial = (UnityEngine.Material)pGVar5.litMaterial;
                        spriteRenderers = (UnityEngine.SpriteRenderer.arr) UnityEngine.Component.GetComponentsInChildren<object>(param1_00,DAT_ram_00567fe8);
                        pPVar4.CallDamageFlashEffect(damageFlash, defaultMaterial, spriteRenderers);
                    }
                }
                iVar1 = iVar1 + 1;
            } while (iVar1 != iVar2);
        }
    }

    // RVA: 0x39C8 Offset: 0x39C8 VA: 0x39C8
    public void PlayActiveSkill(int skill)
    {
        int param2 = default;
        Coroutine pCVar1 = default;

        if (this.activeSkillCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.activeSkillCoroutine,0);
        }
        param2 = new MeleeSkills__ActiveSkill_d__18();
        Raw.Write<int>(param2 + 0x14 /* weapon */, skill);
        Raw.Write<object>(param2 + 0x10 /* boss */, this);
        Raw.Write<int>(param2 + 8, 0);
        pCVar1 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
        this.activeSkillCoroutine = pCVar1;
    }

    [IteratorStateMachine(typeof(MeleeSkills._ActiveSkill_d__18))]
    // RVA: 0x39C9 Offset: 0x39C9 VA: 0x39C9
    private IEnumerator ActiveSkill(int skill)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new MeleeSkills__ActiveSkill_d__18();
        pSVar1[5]._opaque = skill;
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x39CA Offset: 0x39CA VA: 0x39CA
    private void StopActiveSkillRoutine()
    {
        if (this.activeSkillCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.activeSkillCoroutine,0);
        }
    }

    // RVA: 0x39CB Offset: 0x39CB VA: 0x39CB
    private void OnCollisionEnter2D(Collision2D collision)
    {
        int param1 = default;
        int iVar1 = default;
        int iVar2 = default;

        param1 = UnityEngine.Collision2D.get_gameObject(collision,0);
        iVar1 = UnityEngine.GameObject.get_layer(param1,0);
        iVar2 = UnityEngine.LayerMask.NameToLayer("Player",0);
        if (iVar1 != iVar2) {
            if (this.activeSkillCoroutine != (Coroutine)0x0) {
                UnityEngine.MonoBehaviour.StopCoroutine(this,this.activeSkillCoroutine,0);
            }
            this.isAttacking = true;
        }
    }

    // RVA: 0x39CC Offset: 0x39CC VA: 0x39CC
    public MeleeSkills()
    {
        WaitForFixedUpdate pWVar1 = default;

        this.minDistance = 2.0;
        pWVar1 = (WaitForFixedUpdate)new UnityEngine_WaitForFixedUpdate();
        this.waitForFixedUpdate = pWVar1;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
