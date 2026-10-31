// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/PlayerEffect.c by tools/c2cs.py
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

public class PlayerEffect : Effect // TypeDefIndex: 5583
{
    // Fields
    private Player player; // 0x3C
    private Coroutine pushPlayerByEnemyCoroutine; // 0x40
    [HideInInspector]
    public bool isDashing; // 0x44
    private float dashEffectDuration; // 0x48

    // Methods

    // RVA: 0x377E Offset: 0x377E VA: 0x377E
    private void OnEnable()
    {
        int param1 = default;

        param1 = new UnityEngine_Events_UnityAction_Scene__LoadSceneMode_();
        UnityEngine.Events.UnityAction<Scene, Int32Enum>.__ctor(param1,this,DAT_ram_0056b930,0);
        UnityEngine.SceneManagement.SceneManager.add_sceneLoaded(param1,0);
    }

    // RVA: 0x377F Offset: 0x377F VA: 0x377F
    private void OnDisable()
    {
        int param1 = default;

        param1 = new UnityEngine_Events_UnityAction_Scene__LoadSceneMode_();
        UnityEngine.Events.UnityAction<Scene, Int32Enum>.__ctor(param1,this,DAT_ram_0056b930,0);
        UnityEngine.SceneManagement.SceneManager.remove_sceneLoaded(param1,0);
    }

    // RVA: 0x3780 Offset: 0x3780 VA: 0x3780
    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (this.pushPlayerByEnemyCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.pushPlayerByEnemyCoroutine,0);
        }
    }

    // RVA: 0x3781 Offset: 0x3781 VA: 0x3781
    private void Awake()
    {
        Player pPVar1 = default;
        int uVar2 = default;

        pPVar1 = (Player)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ef0);
        this.player = pPVar1;
        uVar2 = UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f18);
        Raw.Write<int>(this.pad_8 + 0x18, uVar2);
    }

    // RVA: 0x3782 Offset: 0x3782 VA: 0x3782
    private void Update()
    {
        if (this.isDashing != false) {
            this.DashShadowPlayerEffect();
        }
    }

    // RVA: 0x3783 Offset: 0x3783 VA: 0x3783
    public void CallDamageFlashEffect(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
    {
        int param1 = default;
        int iVar1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        iVar1 = UnityEngine.GameObject.get_activeSelf(param1,0);
        if (iVar1 != 0) {
            iVar1 = new PlayerEffect__DamageFlashCoroutine_d__10();
            Raw.Write<object>(iVar1 + 0x18, this);
            Raw.Write<int>(iVar1 + 8, 0);
            Raw.Write<object>(iVar1 + 0x1c, defaultMaterial);
            Raw.Write<object>(iVar1 + 0x14, damageFlash);
            Raw.Write<object>(iVar1 + 0x10, spriteRenderers);
            UnityEngine.MonoBehaviour.StartCoroutine(this,iVar1,0);
        }
    }

    [IteratorStateMachine(typeof(PlayerEffect._DamageFlashCoroutine_d__10))]
    // RVA: 0x3784 Offset: 0x3784 VA: 0x3784
    private IEnumerator DamageFlashCoroutine(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new PlayerEffect__DamageFlashCoroutine_d__10();
        pSVar1[6]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        pSVar1[7]._opaque = (int)defaultMaterial;
        pSVar1[5]._opaque = (int)damageFlash;
        pSVar1[4]._opaque = (int)spriteRenderers;
        return pSVar1;
    }

    // RVA: 0x3785 Offset: 0x3785 VA: 0x3785
    public void DamagePushEfect(Vector2 damageSource)
    {
        int param1 = default;
        int iVar2 = default;
        Coroutine pCVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        float fVar6 = default;
        float fVar7 = default;
        Vector2 VVar8 = default;

        byte[] auVar1 = new byte[8];
        byte[] local_8 = new byte[8];
        if (this.pushPlayerByEnemyCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.pushPlayerByEnemyCoroutine,0);
        }
        param1 = UnityEngine.Component.get_gameObject(this,0);
        iVar2 = UnityEngine.GameObject.get_activeSelf(param1,0);
        if (iVar2 != 0) {
            UnityEngine.Rigidbody2D.get_position(local_8,Raw.Read<int>(this.pad_8 + 0x18),0);
            auVar1 = local_8;
            fVar4 = Raw.Read<float>(this.pad_8 + 0x24);
            UnityEngine.Rigidbody2D.get_position(local_8,Raw.Read<int>(this.pad_8 + 0x18),0);
            VVar8 = *damageSource;
            fVar5 = local_8._4_4_ - VVar8.y;
            fVar6 = local_8._0_4_ - VVar8.x;
            fVar7 = Mathf.Sqrt(fVar6 * fVar6 + fVar5 * fVar5);
            if (1e-05 < fVar7) {
                fVar5 = fVar5 / fVar7;
                fVar6 = fVar6 / fVar7;
            }
            else {
                fVar5 = (Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
                fVar6 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
            }
            iVar2 = new PlayerEffect__PushPlayerByEnemy_d__12();
            Raw.Write<int>(iVar2 + 0x1c, 0);
            Raw.Write<float>(iVar2 + 0x18, fVar4 * fVar5 + auVar1._4_4_);
            Raw.Write<float>(iVar2 + 0x14, fVar4 * fVar6 + auVar1._0_4_);
            Raw.Write<object>(iVar2 + 0x10, this);
            Raw.Write<int>(iVar2 + 8, 0);
            pCVar3 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,iVar2,0);
            this.pushPlayerByEnemyCoroutine = pCVar3;
        }
    }

    [IteratorStateMachine(typeof(PlayerEffect._PushPlayerByEnemy_d__12))]
    // RVA: 0x3786 Offset: 0x3786 VA: 0x3786
    private IEnumerator PushPlayerByEnemy(Vector3 targetPosition)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new PlayerEffect__PushPlayerByEnemy_d__12();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        Raw.Write<long>(pSVar1 + 5, Raw.Read<long>(targetPosition));
        pSVar1[7]._opaque = (int)targetPosition.z;
        return pSVar1;
    }

    // RVA: 0x3787 Offset: 0x3787 VA: 0x3787
    private void DashShadowPlayerEffect()
    {
        UnityEngine.SpriteRenderer.arr playerSpriteRenderers = default;
        float fVar1 = default;
        GameResources pGVar2 = default;
        int uVar3 = default;
        PlayerShadow __this_00 = default;
        float fVar4 = default;
        int iVar5 = default;
        PoolManager __this_01 = default;
        UnityEngine.GameObject prefab = default;
        MethodInfo local_20 = default;

        byte[] local_40 = new byte[32];
        playerSpriteRenderers = (UnityEngine.SpriteRenderer.arr)UnityEngine.Component.GetComponentsInChildren<object>(this,DAT_ram_00567fe8);
        fVar4 = this.dashEffectDuration;
        if (0.0 < fVar4) {
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            this.dashEffectDuration = fVar4 - fVar1;
        }
        else {
            iVar5 = Raw.Read<int>(DAT_ram_00565d64 + 0x10);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
                iVar5 = unnamed_function_95087(iVar5);
            }
            iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
                iVar5 = unnamed_function_95087(iVar5);
            }
            __this_01 = (PoolManager)Raw.Deref(Raw.Read<object>(iVar5 + 0x5c));
            pGVar2 = GameResources.Instance;
            prefab = (UnityEngine.GameObject)pGVar2.playerShadowPrefab;
            uVar3 = UnityEngine.Component.get_transform(this.player,0);
            UnityEngine.Transform.get_position(&local_20.field_0x10,uVar3,0);
            local_40._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
            local_40._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
            local_40._24_4_ = local_20._24_4_;
            local_40._16_8_ = local_20._16_8_;
            local_20._0_8_ = local_40._0_8_;
            local_20._8_8_ = local_40._8_8_;
            __this_00 = (PlayerShadow) __this_01.ReuseComponent(prefab, (Vector3)(local_40 + 0x10), (Quaternion)local_40);
            if (__this_00 != (PlayerShadow)0x0) {
                if (((uint)Raw.Read<byte>((int)__this_00.klass + 0xb8) < (uint)Raw.Read<byte>(PlayerShadow_TypeInfo + 0xb8)) || (Raw.Read<int>(Raw.Read<int>((int)__this_00.klass + 100) + (uint)Raw.Read<byte>(PlayerShadow_TypeInfo + 0xb8) * 4 + -4) != PlayerShadow_TypeInfo) ) {
                    unnamed_function_1116(__this_00,PlayerShadow_TypeInfo);
                    do {
                        throw null;
                    } while( true );
                }
            }
            uVar3 = UnityEngine.Component.get_gameObject(__this_00,0);
            UnityEngine.GameObject.SetActive(uVar3,1,0);
            __this_00.InitialiseSprite(playerSpriteRenderers);
            this.dashEffectDuration = 0.035;
        }
    }

    // RVA: 0x3788 Offset: 0x3788 VA: 0x3788
    public PlayerEffect()
    {
        int uVar1 = default;

        this.dashEffectDuration = 0.05;
        uVar1 = new UnityEngine_WaitForFixedUpdate();
        this.pad_8[0x28] = 0;
        this.pad_8[0x29] = 0;
        this.pad_8[0x2a] = 0x80;
        this.pad_8[0x2b] = 0x3e;
        Raw.Write<int>(this.pad_8 + 0x20, uVar1);
        unnamed_function_44622(this,0);
    }
}
