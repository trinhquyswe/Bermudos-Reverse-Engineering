// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MainMenu.c by tools/c2cs.py
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

public class MainMenu : MonoBehaviour // TypeDefIndex: 5658
{
    // Fields
    [SerializeField]
    private Button newGameBtn; // 0x10
    [SerializeField]
    private Button continueGameBtn; // 0x14
    [SerializeField]
    private Button settingsBtn; // 0x18
    [SerializeField]
    private Button exitGameBtn; // 0x1C
    [SerializeField]
    private Image SettingPanel; // 0x20
    [SerializeField]
    private Image controlsPanel; // 0x24
    [SerializeField]
    private Image audioPanel; // 0x28
    [SerializeField]
    private Intro intro; // 0x2C
    private SaveFileSetup saveFileSetup; // 0x30
    private bool isfirstTime; // 0x34

    // Methods

    // RVA: 0x390D Offset: 0x390D VA: 0x390D
    private void Awake()
    {
        SaveFileSetup pSVar1 = default;

        pSVar1 = (SaveFileSetup)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f1c);
        this.saveFileSetup = pSVar1;
    }

    // RVA: 0x390E Offset: 0x390E VA: 0x390E
    private void Start()
    {
        int uVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        byte local_2 = default;
        byte local_1 = default;

        uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(this.saveFileSetup,0);
        iVar2 = Esper.ESave.SaveFile.HasData(uVar1,"FirstTime",0);
        uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(this.saveFileSetup,0);
        if (iVar2 == 0) {
            Esper.ESave.SaveFile.AddOrUpdateData<bool>(uVar1,"FirstTime",1,DAT_ram_0056c19c);
            uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(this.saveFileSetup,0);
            Esper.ESave.SaveFile.Save(uVar1,0,0);
            this.isfirstTime = true;
            iVar2 = UnityEngine.PlayerPrefs.HasKey("FirstTime",0);
            if (iVar2 == 0) {
                local_2 = this.isfirstTime;
                uVar1 = unnamed_function_1113(bool_TypeInfo,&local_2);
                uVar1 = UnityEngine.JsonUtility.ToJson(uVar1,0);
                UnityEngine.PlayerPrefs.SetString("FirstTime",uVar1,0);
                UnityEngine.PlayerPrefs.Save(0);
            }
            else {
                uVar1 = UnityEngine.PlayerPrefs.GetString("FirstTime",0);
                uVar1 = UnityEngine.JsonUtility.FromJson<bool>(uVar1,DAT_ram_0056ab34);
                this.isfirstTime = SUB41(uVar1,0);
            }
        }
        else {
            Esper.ESave.SaveFile.AddOrUpdateData<bool>(uVar1,"FirstTime",0,DAT_ram_0056c19c);
            uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(this.saveFileSetup,0);
            Esper.ESave.SaveFile.Save(uVar1,0,0);
            this.isfirstTime = false;
            iVar2 = UnityEngine.PlayerPrefs.HasKey("FirstTime",0);
            if (iVar2 == 0) {
                local_1 = this.isfirstTime;
                uVar1 = unnamed_function_1113(bool_TypeInfo,&local_1);
                uVar1 = UnityEngine.JsonUtility.ToJson(uVar1,0);
                UnityEngine.PlayerPrefs.SetString("FirstTime",uVar1,0);
                UnityEngine.PlayerPrefs.Save(0);
            }
            else {
                uVar1 = UnityEngine.PlayerPrefs.GetString("FirstTime",0);
                uVar1 = UnityEngine.JsonUtility.FromJson<bool>(uVar1,DAT_ram_0056ab34);
                this.isfirstTime = SUB41(uVar1,0);
            }
        }
        uVar3 = Raw.Read<int>(this.newGameBtn + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056ad68,0);
        UnityEngine.Events.UnityEvent.AddListener(uVar3,uVar1,0);
        uVar3 = Raw.Read<int>(this.continueGameBtn + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056ad60,0);
        UnityEngine.Events.UnityEvent.AddListener(uVar3,uVar1,0);
        uVar3 = Raw.Read<int>(this.settingsBtn + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056ad6c,0);
        UnityEngine.Events.UnityEvent.AddListener(uVar3,uVar1,0);
        uVar3 = Raw.Read<int>(this.exitGameBtn + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056ad64,0);
        UnityEngine.Events.UnityEvent.AddListener(uVar3,uVar1,0);
    }

    // RVA: 0x390F Offset: 0x390F VA: 0x390F
    private void OnNewGameClick()
    {
        GameResources pGVar1 = default;
        int param1 = default;
        int param1_00 = default;
        MethodInfo method_00 = default;
        SoundEffectManager __this_00 = default;

        param1_00 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(param1_00 + 0xbd) & 1) == 0) {
            param1_00 = unnamed_function_95087(param1_00);
        }
        method_00 = *(MethodInfo)(Raw.Read<int>(param1_00 + 0x60) + 8);
        if ((method_00[5].field_0x1d & 1) == 0) {
            method_00 = unnamed_function_95087(method_00);
        }
        __this_00 = (SoundEffectManager)**(object)&method_00[2].field_0x1c;
        pGVar1 = GameResources.Instance;
        __this_00.PlaySoundEffect(pGVar1.clickButton, method_00);
        param1 = UnityEngine.Component.get_gameObject(this.intro,0);
        UnityEngine.GameObject.SetActive(param1,1,0);
    }

    // RVA: 0x3910 Offset: 0x3910 VA: 0x3910
    private void OnContinueGameClick()
    {
        int param1 = default;
        GameResources pGVar1 = default;
        int param1_00 = default;
        MethodInfo method_00 = default;
        SoundEffectManager __this_00 = default;

        if (this.isfirstTime == false) {
            UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene",0);
            param1 = new UnityEngine_Events_UnityAction_Scene__LoadSceneMode_();
            UnityEngine.Events.UnityAction<Scene, Int32Enum>.__ctor(param1,this,DAT_ram_0056ad5c,0);
            UnityEngine.SceneManagement.SceneManager.add_sceneLoaded(param1,0);
            param1_00 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
            if ((Raw.Read<byte>(param1_00 + 0xbd) & 1) == 0) {
                param1_00 = unnamed_function_95087(param1_00);
            }
            method_00 = *(MethodInfo)(Raw.Read<int>(param1_00 + 0x60) + 8);
            if ((method_00[5].field_0x1d & 1) == 0) {
                method_00 = unnamed_function_95087(method_00);
            }
            __this_00 = (SoundEffectManager)**(object)&method_00[2].field_0x1c;
            pGVar1 = GameResources.Instance;
            __this_00.PlaySoundEffect(pGVar1.clickButton, method_00);
        }
    }

    // RVA: 0x3911 Offset: 0x3911 VA: 0x3911
    private void LoadContineGameScene(Scene scene, LoadSceneMode mode)
    {
        int uVar1 = default;
        int iVar2 = default;

        UnityEngine.SceneManagement.Scene[] local_8 = new UnityEngine.SceneManagement.Scene[2];
        local_8[0] = scene;
        uVar1 = UnityEngine.SceneManagement.Scene.get_name(local_8,0);
        iVar2 = unnamed_function_81494(uVar1,"MainScene",0);
        if ((iVar2 != 0) && (iVar2 = UnityEngine.SceneManagement.Scene.get_isLoaded(local_8,0), iVar2 != 0)) {
            iVar2 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = unnamed_function_95087(iVar2);
            }
            iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = unnamed_function_95087(iVar2);
            }
            ((GameManager)Raw.Deref(Raw.Read<object>(iVar2 + 0x5c))).TransitionToGame();
            uVar1 = new UnityEngine_Events_UnityAction_Scene__LoadSceneMode_();
            UnityEngine.Events.UnityAction<Scene, Int32Enum>.__ctor(uVar1,this,DAT_ram_0056ad5c,0);
            UnityEngine.SceneManagement.SceneManager.remove_sceneLoaded(uVar1,0);
        }
    }

    // RVA: 0x3912 Offset: 0x3912 VA: 0x3912
    private void OnSettingsClick()
    {
        int uVar1 = default;
        GameResources pGVar2 = default;
        int param1 = default;
        MethodInfo method_00 = default;
        SoundEffectManager __this_00 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.SettingPanel,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.controlsPanel,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.audioPanel,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        param1 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(param1 + 0xbd) & 1) == 0) {
            param1 = unnamed_function_95087(param1);
        }
        method_00 = *(MethodInfo)(Raw.Read<int>(param1 + 0x60) + 8);
        if ((method_00[5].field_0x1d & 1) == 0) {
            method_00 = unnamed_function_95087(method_00);
        }
        __this_00 = (SoundEffectManager)**(object)&method_00[2].field_0x1c;
        pGVar2 = GameResources.Instance;
        __this_00.PlaySoundEffect(pGVar2.clickButton, method_00);
    }

    // RVA: 0x3913 Offset: 0x3913 VA: 0x3913
    private void OnExitGameClick()
    {
        GameResources pGVar1 = default;
        int param1 = default;
        MethodInfo method_00 = default;
        SoundEffectManager __this_00 = default;

        param1 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(param1 + 0xbd) & 1) == 0) {
            param1 = unnamed_function_95087(param1);
        }
        method_00 = *(MethodInfo)(Raw.Read<int>(param1 + 0x60) + 8);
        if ((method_00[5].field_0x1d & 1) == 0) {
            method_00 = unnamed_function_95087(method_00);
        }
        __this_00 = (SoundEffectManager)**(object)&method_00[2].field_0x1c;
        pGVar1 = GameResources.Instance;
        __this_00.PlaySoundEffect(pGVar1.clickButton, method_00);
        UnityEngine.Application.Quit(0);
    }

    // RVA: 0x3914 Offset: 0x3914 VA: 0x3914
    public MainMenu()
    {
        this.isfirstTime = true;
        unnamed_function_44622(this,0);
    }
}
