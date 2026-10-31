// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Player.c by tools/c2cs.py
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

public class Player : MonoBehaviour // TypeDefIndex: 5688
{
    // Fields
    [HideInInspector]
    public MovementByVelocityEvent movementByVelocityEvent; // 0x10
    [HideInInspector]
    public MovementToPositionEvent movementToPositionEvent; // 0x14
    public MovementDetailsSO movementDetails; // 0x18
    [HideInInspector]
    public IdleEvent idleEvent; // 0x1C
    [HideInInspector]
    public AnimateEvent animateEvent; // 0x20
    [HideInInspector]
    public AttackEvent attackEvent; // 0x24
    [HideInInspector]
    public DealDamageEvent dealDamageEvent; // 0x28
    [HideInInspector]
    public HealthEvent healthEvent; // 0x2C
    [HideInInspector]
    public DestroyedEvent destroyedEvent; // 0x30
    [HideInInspector]
    public BashEvent bashEvent; // 0x34
    [HideInInspector]
    public DashEvent dashEvent; // 0x38
    [HideInInspector]
    public StaminaEvent staminaEvent; // 0x3C
    [HideInInspector]
    public Stamina stamina; // 0x40
    [HideInInspector]
    public Animator animator; // 0x44
    [HideInInspector]
    public PlayerEffect playerEffect; // 0x48
    [HideInInspector]
    public Rage rage; // 0x4C
    [HideInInspector]
    public InventoryManager inventoryManager; // 0x50
    private DieEvent dieEvent; // 0x54
    [HideInInspector]
    public Vector2[] spawnPosition; // 0x58
    public SoundEffectSO runSoundEffect; // 0x5C
    public SoundEffectSO dashSoundEffect; // 0x60
    public SoundEffectSO attackSoundEffect; // 0x64
    public SoundEffectSO dieSoundEffect; // 0x68
    private bool isDead; // 0x6C

    // Methods

    // RVA: 0x3995 Offset: 0x3995 VA: 0x3995
    private void Awake()
    {
        MovementByVelocityEvent pMVar1 = default;
        MovementToPositionEvent pMVar2 = default;
        IdleEvent pIVar3 = default;
        AnimateEvent pAVar4 = default;
        AttackEvent pAVar5 = default;
        DealDamageEvent pDVar6 = default;
        HealthEvent pHVar7 = default;
        DestroyedEvent pDVar8 = default;
        BashEvent pBVar9 = default;
        DashEvent pDVar10 = default;
        StaminaEvent pSVar11 = default;
        Stamina pSVar12 = default;
        Animator pAVar13 = default;
        PlayerEffect pPVar14 = default;
        Rage pRVar15 = default;
        InventoryManager pIVar16 = default;
        DieEvent pDVar17 = default;

        pMVar1 = (MovementByVelocityEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ed4);
        this.movementByVelocityEvent = pMVar1;
        pMVar2 = (MovementToPositionEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ed8);
        this.movementToPositionEvent = pMVar2;
        pIVar3 = (IdleEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ea4);
        this.idleEvent = pIVar3;
        pAVar4 = (AnimateEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e14);
        this.animateEvent = pAVar4;
        pAVar5 = (AttackEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e20);
        this.attackEvent = pAVar5;
        pDVar6 = (DealDamageEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e64);
        this.dealDamageEvent = pDVar6;
        pHVar7 = (HealthEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e9c);
        this.healthEvent = pHVar7;
        pDVar8 = (DestroyedEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e70);
        this.destroyedEvent = pDVar8;
        pBVar9 = (BashEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e28);
        this.bashEvent = pBVar9;
        pDVar10 = (DashEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e60);
        this.dashEvent = pDVar10;
        pSVar11 = (StaminaEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f2c);
        this.staminaEvent = pSVar11;
        pSVar12 = (Stamina)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f28);
        this.stamina = pSVar12;
        pAVar13 = (Animator)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e18);
        this.animator = pAVar13;
        pPVar14 = (PlayerEffect)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ef4);
        this.playerEffect = pPVar14;
        pRVar15 = (Rage)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f00);
        this.rage = pRVar15;
        pIVar16 = (InventoryManager)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567eb4);
        this.inventoryManager = pIVar16;
        pDVar17 = (DieEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e74);
        this.dieEvent = pDVar17;
    }

    // RVA: 0x3996 Offset: 0x3996 VA: 0x3996
    private void OnEnable()
    {
        OnPlayerChangedEventArgs __this_00 = default;
        System.Action.HealthEvent.HealthEventArgs value = default;
        int uVar1 = default;
        int iVar2 = default;
        System.Action.DieEvent value_00 = default;
        int iVar3 = default;
        HealthEvent __this_01 = default;
        int iVar4 = default;
        int param1 = default;
        DieEvent __this_02 = default;

        iVar3 = StaticEventHandler.OnPlayerChanged;
        if (iVar3 != 0) {
            __this_00 = (OnPlayerChangedEventArgs) new OnPlayerChangedEventArgs();
            new OnPlayerChangedEventArgs();
            __this_00.player = this;
            Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar3 + 0x20),__this_00,Raw.Read<int>(iVar3 + 0x14));
        }
        __this_01 = this.healthEvent;
        value = (System.Action.HealthEvent.HealthEventArgs) new System_Action_HealthEvent__HealthEventArgs_();
        System.Action<object, object>.__ctor(value,this,DAT_ram_0056b8e4,0);
        __this_01.add_OnHealthChanged(value);
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar4 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        param1 = Raw.Read<int>(iVar4 + 0x20);
        uVar1 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_0056b8e0,0);
        iVar3 = System.Delegate.Combine(param1,uVar1,0);
        uVar1 = System_Action_GameState__TypeInfo;
        if (iVar3 == 0) {
            Raw.Write<int>(iVar4 + 0x20, 0);
        }
        else {
            iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
            if (iVar2 == 0) {
                unnamed_function_1116(iVar3,uVar1);
                do {
                    throw null;
                } while( true );
            }
            Raw.Write<int>(iVar4 + 0x20, iVar2);
            uVar1 = System_Action_GameState__TypeInfo;
            iVar4 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
            if (iVar4 == 0) {
                unnamed_function_1116(iVar3,uVar1);
                do {
                    throw null;
                } while( true );
            }
        }
        __this_02 = this.dieEvent;
        value_00 = (System.Action.DieEvent)new System_Action_DieEvent_();
        System.Action<object>.__ctor(value_00,this,DAT_ram_0056b8dc,0);
        __this_02.add_OnDie(value_00);
    }

    // RVA: 0x3997 Offset: 0x3997 VA: 0x3997
    private void OnDisable()
    {
        System.Action.HealthEvent.HealthEventArgs value = default;
        System.Action.DieEvent value_00 = default;
        HealthEvent __this_00 = default;
        DieEvent __this_01 = default;

        __this_00 = this.healthEvent;
        value = (System.Action.HealthEvent.HealthEventArgs) new System_Action_HealthEvent__HealthEventArgs_();
        System.Action<object, object>.__ctor(value,this,DAT_ram_0056b8e4,0);
        __this_00.remove_OnHealthChanged(value);
        __this_01 = this.dieEvent;
        value_00 = (System.Action.DieEvent)new System_Action_DieEvent_();
        System.Action<object>.__ctor(value_00,this,DAT_ram_0056b8dc,0);
        __this_01.remove_OnDie(value_00);
    }

    // RVA: 0x3998 Offset: 0x3998 VA: 0x3998
    public Vector2 GetPlayerPosition()
    {
        int param2 = default;

        Vector2[] local_10 = new Vector2[2];
        param2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(local_10,param2,0);
        return local_10[0];
    }

    // RVA: 0x3999 Offset: 0x3999 VA: 0x3999
    private void DieEvent_OnDie(DieEvent dieEvent)
    {
        int uVar1 = default;
        GameResources pGVar2 = default;
        int iVar3 = default;
        object puVar4 = default; // int*
        object piVar5 = default; // int*
        int param2 = default;
        MethodInfo MStack_70 = default;
        int local_50 = default;
        long local_48 = default;
        int local_40 = default;
        long local_38 = default;
        int local_30 = default;
        long local_28 = default;
        int local_20 = default;
        long local_10 = default;
        long local_8 = default;

        int[] local_18 = new int[2];
        local_18[0] = 0;
        iVar3 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar3 + 0x5c))).PlaySoundEffect(this.dieSoundEffect, &MStack_70);
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x18),0);
        iVar3 = Esper.ESave.SaveFile.HasData(uVar1,"Checkpoint",0);
        if (iVar3 != 0) {
            iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = unnamed_function_95087(iVar3);
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = unnamed_function_95087(iVar3);
            }
            uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x18),0);
            uVar1 = Esper.ESave.SaveFile.GetData<object>(uVar1,"Checkpoint",0,DAT_ram_0056c1c8);
            iVar3 = unnamed_function_81494(uVar1,"Coast",0);
            if (iVar3 == 0) {
                iVar3 = unnamed_function_81494(uVar1,"The Forest",0);
                if (iVar3 == 0) goto code_r0x81a3cbf5;
                uVar1 = UnityEngine.Component.get_transform(this,0);
                local_48 = Raw.Read<long>((int)this.spawnPosition.x + 0x18);
                local_30 = 0;
                local_40 = 0;
                local_38 = local_48;
                unnamed_function_44962(uVar1,&local_48,0);
                puVar4 = &"The Forest";
                iVar3 = Raw.Read<int>(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74);
            }
            else {
                uVar1 = UnityEngine.Component.get_transform(this,0);
                MStack_70._24_8_ = Raw.Read<long>((int)this.spawnPosition.x + 0x10);
                local_20 = 0;
                local_50 = 0;
                local_28 = MStack_70._24_8_;
                unnamed_function_44962(uVar1,&MStack_70.field_0x18,0);
                puVar4 = &"Coast";
                iVar3 = Raw.Read<int>(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74);
            }
            if (iVar3 == 0) {
            }
            UnityEngine.SceneManagement.SceneManager.GetSceneAt(1,0);
            local_18[0] = UnityEngine.SceneManagement.SceneManager.GetSceneAt(1,0);
            uVar1 = UnityEngine.SceneManagement.Scene.get_name(local_18,0);
            UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync(uVar1,0);
            UnityEngine.SceneManagement.SceneManager.LoadScene(*puVar4,1,0);
        }
        code_r0x81a3cbf5: pGVar2 = GameResources.Instance;
        UnityEngine.Material.SetFloat(pGVar2.beginUI,"_FadeAmount",0.0,0);
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        piVar5 = Raw.Read<object>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x24);
        local_8 = 0x3f80000000000000;
        local_10 = 0;
        iVar3 = *piVar5;
        MStack_70._16_8_ = 0x3f80000000000000;
        MStack_70._8_8_ = 0;
        Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0x178) * 4) /* virtual */ (piVar5,&MStack_70.field_0x8,Raw.Read<int>(iVar3 + 0x17c));
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        uVar1 = UnityEngine.Component.get_gameObject(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x24),0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        uVar1 = DG.Tweening.DOTweenModuleUI.DOFade(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x24),0.0,2.0,0);
        uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,4,DAT_ram_0056d374);
        iVar3 = Raw.Read<int>(Raw.Read<int>(Player___c_TypeInfo + 0x5c) + 4);
        if (iVar3 == 0) {
            param2 = Raw.Deref(Raw.Read<object>(Player___c_TypeInfo + 0x5c));
            iVar3 = new DG_Tweening_TweenCallback();
            DG.Tweening.TweenCallback.__ctor(iVar3,param2,DAT_ram_0056f6f0,0);
            Raw.Write<int>(Raw.Read<int>(Player___c_TypeInfo + 0x5c) + 4, iVar3);
        }
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar1,iVar3,DAT_ram_0056d338);
    }

    // RVA: 0x399A Offset: 0x399A VA: 0x399A
    private void HealthEvent_OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
    {
        DestroyedEventArgs __this_00 = default;
        bool bVar1 = default;
        DestroyedEvent __this_01 = default;

        if (healthEventArgs.healthAmount < 1) {
            if (this.isDead == false) {
                return;
            }
            __this_01 = this.destroyedEvent;
            __this_00 = (DestroyedEventArgs)new DestroyedEventArgs();
            new DestroyedEventArgs();
            __this_00.playerDied = true;
            __this_01.CallDestroyedEvent(__this_00);
            bVar1 = false;
        }
        else {
            bVar1 = true;
        }
        this.isDead = bVar1;
    }

    // RVA: 0x399B Offset: 0x399B VA: 0x399B
    private void GameStateChanged_OnPlayer(GameState gameState)
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int param1 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        if (gameState == Intro) {
            uVar1 = UnityEngine.Component.get_gameObject(this,0);
            uVar1 = UnityEngine.GameObject.get_transform(uVar1,0);
            local_20 = Raw.Read<long>((int)this.spawnPosition.x + 0x10);
            local_8 = 0;
            local_18 = 0;
            local_10 = local_20;
            unnamed_function_44962(uVar1,&local_20,0);
            iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = unnamed_function_95087(iVar3);
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = unnamed_function_95087(iVar3);
            }
            iVar4 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
            param1 = Raw.Read<int>(iVar4 + 0x20);
            uVar1 = new System_Action_GameState_();
            System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_0056b8e0,0);
            iVar3 = System.Delegate.Remove(param1,uVar1,0);
            uVar1 = System_Action_GameState__TypeInfo;
            if (iVar3 == 0) {
                Raw.Write<int>(iVar4 + 0x20, 0);
            }
            else {
                iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
                if (iVar2 == 0) {
                    unnamed_function_1116(iVar3,uVar1);
                    do {
                        throw null;
                    } while( true );
                }
                Raw.Write<int>(iVar4 + 0x20, iVar2);
                uVar1 = System_Action_GameState__TypeInfo;
                iVar4 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
                if (iVar4 == 0) {
                    unnamed_function_1116(iVar3,uVar1);
                    do {
                        throw null;
                    } while( true );
                }
            }
        }
    }

    // RVA: 0x399C Offset: 0x399C VA: 0x399C
    private void OnCollisionStay2D(Collision2D collision)
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;

        uVar1 = UnityEngine.Collision2D.get_gameObject(collision,0);
        iVar2 = UnityEngine.GameObject.get_layer(uVar1,0);
        iVar3 = UnityEngine.LayerMask.NameToLayer("Boss",0);
        if (iVar2 == iVar3) {
            uVar1 = UnityEngine.Collision2D.get_gameObject(collision,0);
            iVar2 = UnityEngine.GameObject.GetComponent<object>(uVar1,DAT_ram_00569a5c);
            if (Raw.Read<sbyte>(iVar2 + 0x28) != '\0') {
                UnityEngine.Rigidbody2D.set_constraints(Raw.Read<int>(iVar2 + 0x1c),7,0);
            }
        }
    }

    // RVA: 0x399D Offset: 0x399D VA: 0x399D
    private void OnCollisionExit2D(Collision2D collision)
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;

        uVar1 = UnityEngine.Collision2D.get_gameObject(collision,0);
        iVar2 = UnityEngine.GameObject.get_layer(uVar1,0);
        iVar3 = UnityEngine.LayerMask.NameToLayer("Boss",0);
        if (iVar2 == iVar3) {
            uVar1 = UnityEngine.Collision2D.get_gameObject(collision,0);
            iVar2 = UnityEngine.GameObject.GetComponent<object>(uVar1,DAT_ram_00569a5c);
            if (Raw.Read<sbyte>(iVar2 + 0x28) != '\0') {
                UnityEngine.Rigidbody2D.set_constraints(Raw.Read<int>(iVar2 + 0x1c),4,0);
            }
        }
    }

    // RVA: 0x399E Offset: 0x399E VA: 0x399E
    public Player()
    {
        float fVar1 = default;

        fVar1 = (float)unnamed_function_1050(UnityEngine_Vector2___TypeInfo,2);
        this.spawnPosition.x = fVar1;
        unnamed_function_44622(this,0);
    }
}
