// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/SettingManager.c by tools/c2cs.py
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

public class SettingManager : MonoBehaviour // TypeDefIndex: 5660
{
    // Fields
    [SerializeField]
    private Button controlsBtn; // 0x10
    [SerializeField]
    private Button audioBtn; // 0x14
    [SerializeField]
    private Button backBtn; // 0x18
    private TextMeshProUGUI controlsText; // 0x1C
    private TextMeshProUGUI audioText; // 0x20
    [SerializeField]
    private Image controlsPanel; // 0x24
    [SerializeField]
    private Image audioPanel; // 0x28
    private float aplha; // 0x2C
    private float startFontSize; // 0x30

    // Methods

    // RVA: 0x3915 Offset: 0x3915 VA: 0x3915
    private void Awake()
    {
        TextMeshProUGUI pTVar1 = default;

        pTVar1 = (TextMeshProUGUI)UnityEngine.Component.GetComponentInChildren<object>(this.controlsBtn,DAT_ram_00567f78);
        this.controlsText = pTVar1;
        pTVar1 = (TextMeshProUGUI)UnityEngine.Component.GetComponentInChildren<object>(this.audioBtn,DAT_ram_00567f78);
        this.audioText = pTVar1;
    }

    // RVA: 0x3916 Offset: 0x3916 VA: 0x3916
    private void Start()
    {
        int uVar1 = default;
        int uVar2 = default;

        uVar2 = Raw.Read<int>(this.controlsBtn + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056c43c,0);
        UnityEngine.Events.UnityEvent.AddListener(uVar2,uVar1,0);
        uVar2 = Raw.Read<int>(this.audioBtn + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056c438,0);
        UnityEngine.Events.UnityEvent.AddListener(uVar2,uVar1,0);
        uVar2 = Raw.Read<int>(this.backBtn + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056c434,0);
        UnityEngine.Events.UnityEvent.AddListener(uVar2,uVar1,0);
        this.aplha = 0.5;
        this.startFontSize = 10.0;
    }

    // RVA: 0x3917 Offset: 0x3917 VA: 0x3917
    private void OnDestroy()
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_transform(this,0);
        DG.Tweening.DOTween.Kill(param1,0,0);
    }

    // RVA: 0x3918 Offset: 0x3918 VA: 0x3918
    private void OpenControls()
    {
        int uVar1 = default;
        GameResources pGVar2 = default;
        int iVar3 = default;
        SoundEffectManager __this_00 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.audioPanel,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.controlsPanel,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        iVar3 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        __this_00 = (SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        pGVar2 = GameResources.Instance;
        __this_00.PlaySoundEffect(pGVar2.clickButton);
        this.Effect((TMPro_TextMeshProUGUI)this.controlsText, (TMPro_TextMeshProUGUI)this.audioText);
    }

    // RVA: 0x3919 Offset: 0x3919 VA: 0x3919
    private void OpenAudio()
    {
        int uVar1 = default;
        GameResources pGVar2 = default;
        int iVar3 = default;
        SoundEffectManager __this_00 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.controlsPanel,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.audioPanel,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        iVar3 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        __this_00 = (SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        pGVar2 = GameResources.Instance;
        __this_00.PlaySoundEffect(pGVar2.clickButton);
        this.Effect((TMPro_TextMeshProUGUI)this.audioText, (TMPro_TextMeshProUGUI)this.controlsText);
    }

    // RVA: 0x391A Offset: 0x391A VA: 0x391A
    private void Effect(TextMeshProUGUI currentText, TextMeshProUGUI previousText)
    {
        int param2 = default;
        int uVar1 = default;
        int param1 = default;
        int iVar2 = default;
        long local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;
        float local_4 = default;

        byte[] local_20 = new byte[8];
        param2 = new SettingManager___c__DisplayClass14_0();
        Raw.Write<int>(param2 + 0xc, (int)currentText);
        TMPro.TMP_Text.set_fontSize(previousText,this.startFontSize,0);
        iVar2 = this.audioText._opaque;
        Raw.VCall(iVar2, 22) /* virtual */ (&local_10,this.audioText,Raw.Read<int>(iVar2 + 0x174));
        iVar2 = this.audioText._opaque;
        Raw.VCall(iVar2, 22) /* virtual */ (&local_10,this.audioText,Raw.Read<int>(iVar2 + 0x174));
        iVar2 = this.audioText._opaque;
        Raw.VCall(iVar2, 22) /* virtual */ (&local_10,this.audioText,Raw.Read<int>(iVar2 + 0x174));
        local_4 = (float)this.aplha;
        local_18 = CONCAT44(local_4,local_8);
        Raw.VCall(previousText._opaque, 23) /* virtual */ (previousText,local_20,Raw.Read<int>(previousText._opaque + 0x17c));
        Raw.Write<int>(param2 + 8, Raw.Read<int>(Raw.Read<int>(param2 + 0xc) + 0x148));
        DG.Tweening.DOTween.KillAll(0,0);
        uVar1 = DG.Tweening.DOTweenModuleUI.DOFade(Raw.Read<int>(param2 + 0xc),1.0,0.5,0);
        DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,0x1d,DAT_ram_0056d374);
        uVar1 = new DG_Tweening_Core_DOGetter_float_();
        DG.Tweening.Core.DOGetter<float>.__ctor(uVar1,param2,DAT_ram_0056f9cc,0);
        param1 = new DG_Tweening_Core_DOSetter_float_();
        DG.Tweening.Core.DOSetter<float>.__ctor(param1,param2,DAT_ram_0056f9d0,0);
        DG.Tweening.DOTween.To(uVar1,param1,12.5,0.5,0);
    }

    // RVA: 0x391B Offset: 0x391B VA: 0x391B
    public SettingManager()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x391C Offset: 0x391C VA: 0x391C
    private void _Start_b__10_0() { }

    // methods without a dump.cs skeleton stub
    public void _Start_b__10_0()
    {
        GameResources pGVar1 = default;
        int param1 = default;
        int param1_00 = default;
        MethodInfo method_00 = default;
        SoundEffectManager __this_00 = default;

        param1_00 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(param1_00 + 0xbd) & 1) == 0) {
        }
        method_00 = *(MethodInfo)(Raw.Read<int>(param1_00 + 0x60) + 8);
        if ((method_00[5].field_0x1d & 1) == 0) {
            method_00 = unnamed_function_95087(method_00);
        }
        __this_00 = (SoundEffectManager)**(object)&method_00[2].field_0x1c;
        pGVar1 = GameResources.Instance;
        __this_00.PlaySoundEffect(pGVar1.clickButton, method_00);
        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
    }
}
