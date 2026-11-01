// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/GameManager.c by tools/c2cs.py
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

public class GameManager : SingletonMonobehaviour<GameManager> // TypeDefIndex: 5612
{
    // Fields
    [HideInInspector]
    public Player player; // 0x10
    public EnemyManagerDetailsSO[] enemyManagerDetailsSO; // 0x14
    [HideInInspector]
    public SaveFileSetup saveFileSetup; // 0x18
    public GameState gameState; // 0x1C
    [HideInInspector]
    public Action<GameState> OnGameStateChange; // 0x20
    [SerializeField]
    public Image beginSreen; // 0x24
    [SerializeField]
    private Image wonPanel; // 0x28
    [SerializeField]
    private Image wonScreen; // 0x2C
    [SerializeField]
    private TextMeshProUGUI wonText; // 0x30
    [SerializeField]
    private GameObject healthBar; // 0x34
    [SerializeField]
    private GameObject staminaBar; // 0x38
    [SerializeField]
    private GameObject skillBar; // 0x3C

    // Methods

    // RVA: 0x37F1 Offset: 0x37F1 VA: 0x37F1
    private void OnEnable()
    {
        System.Action.OnPlayerChangedEventArgs value = default;
        System.Action value_00 = default;

        value = (System.Action.OnPlayerChangedEventArgs) new System_Action_OnPlayerChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_00569994,0);
        StaticEventHandler.add_OnPlayerChanged(value);
        value_00 = (System.Action)new System_Action();
        System.Action.__ctor(value_00,this,DAT_ram_00569998,0);
        StaticEventHandler.add_OnRestInBonfire(value_00);
    }

    // RVA: 0x37F2 Offset: 0x37F2 VA: 0x37F2
    private void OnDisable()
    {
        System.Action.OnPlayerChangedEventArgs value = default;
        System.Action value_00 = default;

        value = (System.Action.OnPlayerChangedEventArgs) new System_Action_OnPlayerChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_00569994,0);
        StaticEventHandler.remove_OnPlayerChanged(value);
        value_00 = (System.Action)new System_Action();
        System.Action.__ctor(value_00,this,DAT_ram_00569998,0);
        StaticEventHandler.remove_OnRestInBonfire(value_00);
    }

    // RVA: 0x37F3 Offset: 0x37F3 VA: 0x37F3
    private void StaticEventHandler_OnPlayerChanged(OnPlayerChangedEventArgs onPlayerChangedEventArgs)
    {
        this.player = onPlayerChangedEventArgs.player;
    }

    // RVA: 0x37F4 Offset: 0x37F4 VA: 0x37F4
    private void StaticEventHandler_OnRestInBonfire()
    {
        this.InitializeEnemyManagerData();
    }

    // RVA: 0x37F5 Offset: 0x37F5 VA: 0x37F5 Slot: 4
    protected override void Awake()
    {
        SaveFileSetup pSVar1 = default;

        SingletonMonobehaviour<object>.Awake(this,DAT_ram_00565d74);
        pSVar1 = (SaveFileSetup)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f1c);
        this.saveFileSetup = pSVar1;
    }

    // RVA: 0x37F6 Offset: 0x37F6 VA: 0x37F6
    public void TransitionToGame()
    {
        int uVar1 = default;
        int iVar2 = default;
        GameResources pGVar3 = default;
        int param1 = default;
        object puVar4 = default; // int*
        MethodInfo local_60 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        long local_8 = default;

        uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(this.saveFileSetup,0);
        iVar2 = Esper.ESave.SaveFile.HasData(uVar1,"Checkpoint",0);
        if (iVar2 != 0) {
            uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(this.saveFileSetup,0);
            uVar1 = Esper.ESave.SaveFile.GetData<object>(uVar1,"Checkpoint",0,DAT_ram_0056c1c8);
            iVar2 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(uVar1,"Coast",0);
            if (iVar2 == 0) {
                iVar2 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(uVar1,"The Forest",0);
                if (iVar2 == 0) goto code_r0x81a53cbf;
                uVar1 = UnityEngine.Component.get_transform(this.player,0);
                local_40 = Raw.Read<long>((int)this.player.spawnPosition.x + 0x18);
                local_28 = 0;
                local_38 = 0;
                local_30 = local_40;
                /* candidates: UnityEngine.Transform.set_position | UnityEngine.Transform.set_position_Injected */ unnamed_function_44962(uVar1,&local_40,0);
                puVar4 = &"The Forest";
                iVar2 = Raw.Read<int>(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74);
            }
            else {
                uVar1 = UnityEngine.Component.get_transform(this.player,0);
                local_60._16_8_ = Raw.Read<long>((int)this.player.spawnPosition.x + 0x10);
                local_18 = 0;
                local_60._24_4_ = 0;
                local_20 = local_60._16_8_;
                /* candidates: UnityEngine.Transform.set_position | UnityEngine.Transform.set_position_Injected */ unnamed_function_44962(uVar1,&local_60.field_0x10,0);
                puVar4 = &"Coast";
                iVar2 = Raw.Read<int>(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74);
            }
            if (iVar2 == 0) {
            }
            UnityEngine.SceneManagement.SceneManager.LoadScene(*puVar4,1,0);
        }
        code_r0x81a53cbf: pGVar3 = GameResources.get_Instance(&local_60);
        UnityEngine.Material.SetFloat(pGVar3.beginUI,"_FadeAmount",0.0,0);
        local_8 = 0x3f80000000000000;
        local_10 = 0;
        iVar2 = this.beginSreen._opaque;
        local_60._8_8_ = 0x3f80000000000000;
        local_60._opaque0 = 0;
        local_60._opaque1 = 0;
        Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x178) * 4) /* virtual */ (this.beginSreen,&local_60,Raw.Read<int>(iVar2 + 0x17c));
        uVar1 = UnityEngine.Component.get_gameObject(this.beginSreen,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = DG.Tweening.DOTweenModuleUI.DOFade(this.beginSreen,0.0,1.5,0);
        uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,4,DAT_ram_0056d374);
        param1 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1,this,DAT_ram_00569984,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar1,param1,DAT_ram_0056d338);
    }

    // RVA: 0x37F7 Offset: 0x37F7 VA: 0x37F7
    public void HandleGameState(GameState gameState)
    {
        int uVar1 = default;
        GameResources pGVar2 = default;
        int iVar3 = default;
        MusicManager __this_00 = default;
        Action pAVar4 = default;

        this.gameState = gameState;
        if (gameState == Intro) {
            UnityEngine.PlayerPrefs.SetInt("isBossDefeated",0,0);
            this.Intro();
        }
        else if (gameState != Begin) {
            if (gameState == Instruct) {
                UnityEngine.GameObject.SetActive(this.healthBar,1,0);
                UnityEngine.GameObject.SetActive(this.staminaBar,1,0);
                UnityEngine.GameObject.SetActive(this.skillBar,1,0);
            }
            else if (gameState == Play) {
                uVar1 = UnityEngine.Component.GetComponent<object>(this.player,DAT_ram_00567f18);
                UnityEngine.Rigidbody2D.set_mass(uVar1,0.5,0);
            }
            else if (gameState == EngagedBoss) {
                uVar1 = UnityEngine.Component.GetComponent<object>(this.player,DAT_ram_00567f18);
                UnityEngine.Rigidbody2D.set_mass(uVar1,1e+06,0);
                iVar3 = Raw.Read<int>(DAT_ram_00565d58 + 0x10);
                if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                }
                iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                }
                ((MusicManager)Raw.Deref(Raw.Read<object>(iVar3 + 0x5c))).StopPlayingBackgroundMusic();
                iVar3 = Raw.Read<int>(DAT_ram_00565d58 + 0x10);
                if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                }
                iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                }
                __this_00 = (MusicManager)Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
                pGVar2 = GameResources.Instance;
                __this_00.PlayMusic(pGVar2.musicTrack_Bossfight, 0.5, 0.5);
            }
            else if (gameState == Won) {
                UnityEngine.PlayerPrefs.SetInt("isBossDefeated",1,0);
                this.WonScene();
            }
        }
        pAVar4 = this.OnGameStateChange;
        if (pAVar4 != (Action)0x0) {
            Raw.VCall((ulong)(uint)pAVar4[3]._opaque * 4) /* virtual */ (pAVar4[8]._opaque,gameState,pAVar4[5]._opaque);
        }
    }

    // RVA: 0x37F8 Offset: 0x37F8 VA: 0x37F8
    private void SaveBossState(int isBossDefeated)
    {
        UnityEngine.PlayerPrefs.SetInt("isBossDefeated",isBossDefeated,0);
    }

    // RVA: 0x37F9 Offset: 0x37F9 VA: 0x37F9
    private void WonScene()
    {
        int uVar1 = default;
        int param1 = default;
        int iVar2 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync("North Of The Forest",0);
        uVar1 = UnityEngine.Component.get_gameObject(this.wonPanel,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        local_8 = 0;
        local_10 = 0;
        iVar2 = this.wonPanel._opaque;
        local_18 = 0;
        local_20 = 0;
        Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x178) * 4) /* virtual */ (this.wonPanel,&local_20,Raw.Read<int>(iVar2 + 0x17c));
        uVar1 = DG.Tweening.DOTweenModuleUI.DOFade(this.wonPanel,1.0,1.0,0);
        param1 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1,this,DAT_ram_00569988,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar1,param1,DAT_ram_0056d338);
    }

    // RVA: 0x37FA Offset: 0x37FA VA: 0x37FA
    private void Instruct()
    {
        UnityEngine.GameObject.SetActive(this.healthBar,1,0);
        UnityEngine.GameObject.SetActive(this.staminaBar,1,0);
        UnityEngine.GameObject.SetActive(this.skillBar,1,0);
    }

    // RVA: 0x37FB Offset: 0x37FB VA: 0x37FB
    public void Intro()
    {
        GameResources pGVar1 = default;
        int uVar2 = default;
        int param1 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        UnityEngine.GameObject.SetActive(this.healthBar,0,0);
        UnityEngine.GameObject.SetActive(this.staminaBar,0,0);
        UnityEngine.GameObject.SetActive(this.skillBar,0,0);
        pGVar1 = GameResources.Instance;
        UnityEngine.Material.SetFloat(pGVar1.beginUI,"_FadeAmount",0.0,0);
        uVar2 = UnityEngine.Component.get_gameObject(this.beginSreen,0);
        UnityEngine.GameObject.SetActive(uVar2,1,0);
        local_8 = 0x3f80000000000000;
        local_18 = 0x3f80000000000000;
        local_10 = 0;
        local_20 = 0;
        uVar2 = DG.Tweening.DOTweenModuleUI.DOColor(this.beginSreen,&local_20,3.0,0);
        param1 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1,this,DAT_ram_0056997c,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar2,param1,DAT_ram_0056d338);
    }

    // RVA: 0x37FC Offset: 0x37FC VA: 0x37FC
    public void Play()
    {
        int param1 = default;

        param1 = UnityEngine.Component.GetComponent<object>(this.player,DAT_ram_00567f18);
        UnityEngine.Rigidbody2D.set_mass(param1,0.5,0);
    }

    // RVA: 0x37FD Offset: 0x37FD VA: 0x37FD
    public void EngagedBoss()
    {
        int param1 = default;

        param1 = UnityEngine.Component.GetComponent<object>(this.player,DAT_ram_00567f18);
        UnityEngine.Rigidbody2D.set_mass(param1,1e+06,0);
    }

    // RVA: 0x37FE Offset: 0x37FE VA: 0x37FE
    private void Start()
    {
        this.InitializeEnemyManagerData();
    }

    // RVA: 0x37FF Offset: 0x37FF VA: 0x37FF
    public void InitializeEnemyManagerData()
    {
        EnemyManagerData method_00 = default;
        List param1 = default;
        int uVar1 = default;
        EnemyManagerDetailsSO pEVar2 = default;
        int iVar3 = default;
        string psVar4 = default;
        int iVar5 = default;
        int iVar6 = default;

        iVar6 = 0;
        pEVar2 = this.enemyManagerDetailsSO;
        if (0 < (int)pEVar2.enemyPrefab) {
            do {
                iVar3 = Raw.Read<int>(pEVar2.pad_8 + iVar6 * 4 + 8);
                psVar4 = Raw.Read<object>(iVar3 + 0x10);
                iVar5 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x14) + 0xc);
                method_00 = (EnemyManagerData)new EnemyManagerData();
                param1 = (List)new System_Collections_Generic_List_bool_();
                /* candidates: System.Collections.Generic.List<AdditionalLightsShadowCasterPass.ShadowResolutionRequest>..ctor | System.Collections.Generic.List<AnimationOutputWeightProcessor.WeightInfo>..ctor (+167) */ unnamed_function_5132(param1,DAT_ram_00562b48);
                method_00.enemieStateList = param1;
                method_00.enemyCount = iVar5;
                method_00.enemyName = psVar4;
                method_00.GetEnemyList(-1);
                uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(this.saveFileSetup,0);
                Esper.ESave.SaveFile.AddOrUpdateData<object>(uVar1,Raw.Read<int>(iVar3 + 0x18),method_00,DAT_ram_0056c1a0);
                uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(this.saveFileSetup,0);
                Esper.ESave.SaveFile.Save(uVar1,0,0);
                iVar6 = iVar6 + 1;
            } while (iVar6 < (int)pEVar2.enemyPrefab);
        }
    }

    // RVA: 0x3800 Offset: 0x3800 VA: 0x3800
    public GameManager()
    {
        new AmmoAnimation(DAT_ram_00565d70);
    }

    [CompilerGenerated]
    // RVA: 0x3801 Offset: 0x3801 VA: 0x3801
    private void _TransitionToGame_b__17_0() { }

    [CompilerGenerated]
    // RVA: 0x3802 Offset: 0x3802 VA: 0x3802
    private void _WonScene_b__20_0() { }

    [CompilerGenerated]
    // RVA: 0x3803 Offset: 0x3803 VA: 0x3803
    private void _WonScene_b__20_1(TMPWriter tMP) { }

    [CompilerGenerated]
    // RVA: 0x3804 Offset: 0x3804 VA: 0x3804
    private void _WonScene_b__20_2() { }

    [CompilerGenerated]
    // RVA: 0x3805 Offset: 0x3805 VA: 0x3805
    private void _Intro_b__22_0() { }

    [CompilerGenerated]
    // RVA: 0x3806 Offset: 0x3806 VA: 0x3806
    private void _Intro_b__22_1() { }

    // methods without a dump.cs skeleton stub
    public void _TransitionToGame_b__17_0()
    {
        int uVar1 = default;
        Action pAVar2 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.beginSreen,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        this.gameState = Play;
        uVar1 = UnityEngine.Component.GetComponent<object>(this.player,DAT_ram_00567f18);
        UnityEngine.Rigidbody2D.set_mass(uVar1,0.5,0);
        pAVar2 = this.OnGameStateChange;
        if (pAVar2 != (Action)0x0) {
            Raw.VCall((ulong)(uint)pAVar2[3]._opaque * 4) /* virtual */(pAVar2[8]._opaque,3,pAVar2[5]._opaque);
        }
    }
    public void _WonScene_b__20_0()
    {
        int uVar1 = default;
        int iVar2 = default;
        int param1 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.wonText,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        iVar2 = UnityEngine.Component.GetComponent<object>(this.wonText,DAT_ram_00567f34);
        UnityEngine.Events.UnityEventBase.RemoveAllListeners(Raw.Read<int>(iVar2 + 0x34),0);
        param1 = Raw.Read<int>(iVar2 + 0x34);
        uVar1 = new UnityEngine_Events_UnityAction_TMPWriter_();
        UnityEngine.Events.UnityAction<object>.__ctor(uVar1,this,DAT_ram_0056998c,0);
        /* candidates: UnityEngine.Events.UnityEvent<Color>.AddListener | UnityEngine.Events.UnityEvent<InputAction.CallbackContext>.AddListener (+6) */ unnamed_function_71922(param1,uVar1,DAT_ram_00566810);
    }
    public void _WonScene_b__20_1(TMPEffects_Components_TMPWriter_o tMP)
    {
        int param1 = default;
        int param1_00 = default;

        param1 = DG.Tweening.DOTweenModuleUI.DOFade(this.wonText,0.0,3.0,0);
        param1_00 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1_00,this,DAT_ram_00569990,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(param1,param1_00,DAT_ram_0056d338);
    }
    public void _WonScene_b__20_2()
    {
        int uVar1 = default;
        int param1 = default;
        int param2 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.wonText,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.wonScreen,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = UnityEngine.Component.get_transform(this.wonScreen,0);
        uVar1 = DG.Tweening.ShortcutExtensions.DOScale(uVar1,0.0,3.0,0);
        param1 = Raw.Read<int>(Raw.Read<int>(GameManager___c_TypeInfo + 0x5c) + 4);
        if (param1 == 0) {
            param2 = Raw.Deref(Raw.Read<object>(GameManager___c_TypeInfo + 0x5c));
            param1 = new DG_Tweening_TweenCallback();
            DG.Tweening.TweenCallback.__ctor(param1,param2,DAT_ram_0056f268,0);
            Raw.Write<int>(Raw.Read<int>(GameManager___c_TypeInfo + 0x5c) + 4, param1);
        }
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar1,param1,DAT_ram_0056d344);
    }
    public void _Intro_b__22_0()
    {
        int uVar1 = default;
        GameResources pGVar2 = default;
        int param1 = default;

        UnityEngine.SceneManagement.SceneManager.LoadScene("Coast",1,0);
        uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(this.saveFileSetup,0);
        Esper.ESave.SaveFile.AddOrUpdateData<object>(uVar1,"Checkpoint","Coast",DAT_ram_0056c1b0);
        uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(this.saveFileSetup,0);
        Esper.ESave.SaveFile.Save(uVar1,0,0);
        uVar1 = UnityEngine.JsonUtility.ToJson("Coast",0);
        UnityEngine.PlayerPrefs.SetString("Checkpoint",uVar1,0);
        UnityEngine.PlayerPrefs.Save(0);
        pGVar2 = GameResources.Instance;
        uVar1 = DG.Tweening.ShortcutExtensions.DOFloat(pGVar2.beginUI,1.0,"_FadeAmount",2.0,0);
        param1 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1,this,DAT_ram_00569980,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar1,param1,DAT_ram_0056d33c);
    }
    public void _Intro_b__22_1()
    {
        int param1 = default;
        Action pAVar1 = default;

        param1 = UnityEngine.Component.get_gameObject(this.beginSreen,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
        this.gameState = Begin;
        pAVar1 = this.OnGameStateChange;
        if (pAVar1 != (Action)0x0) {
            Raw.VCall((ulong)(uint)pAVar1[3]._opaque * 4) /* virtual */(pAVar1[8]._opaque,1,pAVar1[5]._opaque);
        }
    }
}
