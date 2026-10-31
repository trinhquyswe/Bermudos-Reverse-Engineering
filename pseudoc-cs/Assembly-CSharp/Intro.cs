// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Intro.c by tools/c2cs.py
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

public class Intro : MonoBehaviour // TypeDefIndex: 5656
{
    // Fields
    [SerializeField]
    private IntroSO[] introSOList; // 0x10
    [SerializeField]
    private Image introImage; // 0x14
    [SerializeField]
    private Image map; // 0x18
    private TextMeshProUGUI introText; // 0x1C
    private Button nextBtn; // 0x20
    private int introIndex; // 0x24
    private TMPWriter tmpWriter; // 0x28

    // Methods

    // RVA: 0x38FD Offset: 0x38FD VA: 0x38FD
    private void Awake()
    {
        TMPWriter pTVar1 = default;
        TextMeshProUGUI pTVar2 = default;
        HID_Button param1 = default;
        int param1_00 = default;

        pTVar1 = (TMPWriter)UnityEngine.Component.GetComponentInChildren<object>(this,DAT_ram_00567f74);
        this.tmpWriter = pTVar1;
        pTVar2 = (TextMeshProUGUI)UnityEngine.Component.GetComponentInChildren<object>(this,DAT_ram_00567f78);
        this.introText = pTVar2;
        param1 = UnityEngine.Component.GetComponentInChildren<object>(this,DAT_ram_00567f64);
        this.nextBtn = param1;
        param1_00 = UnityEngine.Component.get_gameObject(param1,0);
        UnityEngine.GameObject.SetActive(param1_00,0,0);
        UnityEngine.Behaviour.set_enabled(this.introImage,0,0);
    }

    // RVA: 0x38FE Offset: 0x38FE VA: 0x38FE
    private void OnDestroy()
    {
        int uVar1 = default;
        int param1 = default;
        int param1_00 = default;

        param1 = this.tmpWriter[0xd]._opaque;
        uVar1 = new UnityEngine_Events_UnityAction_TMPWriter_();
        UnityEngine.Events.UnityAction<object>.__ctor(uVar1,this,DAT_ram_0056a754,0);
        unnamed_function_71923(param1,uVar1,DAT_ram_00566818);
        param1_00 = Raw.Read<int>(this.nextBtn + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056a758,0);
        UnityEngine.Events.UnityEvent.RemoveListener(param1_00,uVar1,0);
        uVar1 = UnityEngine.Component.get_transform(this,0);
        DG.Tweening.DOTween.Kill(uVar1,0,0);
    }

    // RVA: 0x38FF Offset: 0x38FF VA: 0x38FF
    private void Start()
    {
        int uVar1 = default;
        int param1 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.map,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.map,0);
        uVar1 = UnityEngine.GameObject.get_transform(uVar1,0);
        local_8 = 0x41000000;
        local_18 = 0x41000000;
        local_10 = 0x4100000041000000;
        local_20 = 0x4100000041000000;
        uVar1 = DG.Tweening.ShortcutExtensions.DOScale(uVar1,&local_20,2.5,0);
        uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,1,DAT_ram_0056d380);
        param1 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1,this,DAT_ram_0056a750,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar1,param1,DAT_ram_0056d344);
    }

    // RVA: 0x3900 Offset: 0x3900 VA: 0x3900
    private void OnFinishWriter(TMPWriter tmpWriter)
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_gameObject(this.nextBtn,0);
        UnityEngine.GameObject.SetActive(param1,1,0);
    }

    // RVA: 0x3901 Offset: 0x3901 VA: 0x3901
    private void OnNextBtnClick()
    {
        int uVar1 = default;
        int iVar2 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        local_8 = 0x3f800000;
        local_10 = 0x3f8000003f800000;
        iVar2 = this.introImage._opaque;
        local_18 = 0x3f800000;
        local_20 = 0x3f8000003f800000;
        Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x178) * 4) /* virtual */ (this.introImage,&local_20,Raw.Read<int>(iVar2 + 0x17c));
        uVar1 = UnityEngine.Component.get_gameObject(this.nextBtn,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        if (this.introIndex < (int)this.introSOList.introSprite) {
            UnityEngine.UI.Image.set_sprite(this.introImage, Raw.Read<int>(Raw.Read<int>(this.introSOList.pad_8 + this.introIndex * 4 + 8) + 0xc),0);
            if (this.introImage != (Image)0x0) {
                DG.Tweening.DOTweenModuleUI.DOFade(this.introImage,1.0,2.0,0);
            }
            iVar2 = this.introText._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x2d0) * 4) /* virtual */ (this.introText, Raw.Read<int>(Raw.Read<int>(this.introSOList.pad_8 + this.introIndex * 4 + 8) + 0x10), Raw.Read<int>(iVar2 + 0x2d4));
        }
        else {
            UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene",0);
            uVar1 = new UnityEngine_Events_UnityAction_Scene__LoadSceneMode_();
            UnityEngine.Events.UnityAction<Scene, Int32Enum>.__ctor(uVar1,this,DAT_ram_0056a75c,0);
            UnityEngine.SceneManagement.SceneManager.add_sceneLoaded(uVar1,0);
        }
        this.introIndex = this.introIndex + 1;
    }

    // RVA: 0x3902 Offset: 0x3902 VA: 0x3902
    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
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
            ((GameManager)Raw.Deref(Raw.Read<object>(iVar2 + 0x5c))).HandleGameState(Intro);
            uVar1 = new UnityEngine_Events_UnityAction_Scene__LoadSceneMode_();
            UnityEngine.Events.UnityAction<Scene, Int32Enum>.__ctor(uVar1,this,DAT_ram_0056a75c,0);
            UnityEngine.SceneManagement.SceneManager.remove_sceneLoaded(uVar1,0);
        }
    }

    [IteratorStateMachine(typeof(Intro._WaitUntilIntroEnable_d__13))]
    // RVA: 0x3903 Offset: 0x3903 VA: 0x3903
    private IEnumerator WaitUntilIntroEnable()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new Intro__WaitUntilIntroEnable_d__13();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3904 Offset: 0x3904 VA: 0x3904
    public Intro()
    {
        IntroSO pIVar1 = default;

        pIVar1 = (IntroSO)unnamed_function_1050(IntroSO___TypeInfo,4);
        this.introSOList = pIVar1;
        unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x3905 Offset: 0x3905 VA: 0x3905
    private void _Start_b__9_0() { }

    // methods without a dump.cs skeleton stub
    public void _Start_b__9_0()
    {
        int uVar1 = default;
        int iVar2 = default;
        int param1 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.map,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        iVar2 = this.tmpWriter[0xd]._opaque;
        uVar1 = new UnityEngine_Events_UnityAction_TMPWriter_();
        UnityEngine.Events.UnityAction<object>.__ctor(uVar1,this,DAT_ram_0056a754,0);
        unnamed_function_71922(iVar2,uVar1,DAT_ram_00566810);
        iVar2 = new Intro__WaitUntilIntroEnable_d__13();
        Raw.Write<object>(iVar2 + 0x10, this);
        Raw.Write<int>(iVar2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,iVar2,0);
        param1 = Raw.Read<int>(this.nextBtn + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056a758,0);
        UnityEngine.Events.UnityEvent.AddListener(param1,uVar1,0);
        UnityEngine.Behaviour.set_enabled(this.introImage,1,0);
    }
}
