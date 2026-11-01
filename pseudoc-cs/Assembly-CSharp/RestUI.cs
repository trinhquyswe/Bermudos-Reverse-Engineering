// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/RestUI.c by tools/c2cs.py
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

public class RestUI : MonoBehaviour // TypeDefIndex: 5556
{
    // Fields
    private Image restImage; // 0x10
    private TextMeshProUGUI restText; // 0x14

    // Methods

    // RVA: 0x36F3 Offset: 0x36F3 VA: 0x36F3
    private void Awake()
    {
        TextMeshProUGUI pTVar1 = default;
        Image pIVar2 = default;

        pTVar1 = (TextMeshProUGUI)UnityEngine.Component.GetComponentInChildren<object>(this,DAT_ram_00567f78);
        this.restText = pTVar1;
        pIVar2 = (Image)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ea8);
        this.restImage = pIVar2;
    }

    // RVA: 0x36F4 Offset: 0x36F4 VA: 0x36F4
    private void Start()
    {
        int uVar1 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.restImage,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.restText,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
    }

    // RVA: 0x36F5 Offset: 0x36F5 VA: 0x36F5
    private void OnEnable()
    {
        System.Action value = default;

        value = (System.Action)new System_Action();
        System.Action.__ctor(value,this,DAT_ram_0056bfd4,0);
        StaticEventHandler.add_OnRestInBonfire(value);
    }

    // RVA: 0x36F6 Offset: 0x36F6 VA: 0x36F6
    private void OnDestroy()
    {
        System.Action value = default;

        value = (System.Action)new System_Action();
        System.Action.__ctor(value,this,DAT_ram_0056bfd4,0);
        StaticEventHandler.remove_OnRestInBonfire(value);
    }

    // RVA: 0x36F7 Offset: 0x36F7 VA: 0x36F7
    private void ShowRestUI()
    {
        int uVar1 = default;
        int uVar2 = default;
        int uVar3 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.restImage,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.restText,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = DG.Tweening.DOTween.Sequence(0);
        uVar2 = DG.Tweening.DOTweenModuleUI.DOFade(this.restText,1.0,1.0,0);
        uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar2,4,DAT_ram_0056d374);
        uVar2 = DG.Tweening.TweenSettingsExtensions.Append(uVar1,uVar2,0);
        uVar3 = DG.Tweening.DOTweenModuleUI.DOFade(this.restImage,0.6,1.0,0);
        uVar3 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar3,4,DAT_ram_0056d374);
        DG.Tweening.TweenSettingsExtensions.Join(uVar2,uVar3,0);
        uVar2 = DG.Tweening.DOTweenModuleUI.DOFade(this.restText,0.0,1.0,0);
        uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar2,4,DAT_ram_0056d374);
        uVar1 = DG.Tweening.TweenSettingsExtensions.Append(uVar1,uVar2,0);
        uVar2 = DG.Tweening.DOTweenModuleUI.DOFade(this.restImage,0.0,1.0,0);
        uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar2,4,DAT_ram_0056d374);
        uVar1 = DG.Tweening.TweenSettingsExtensions.Join(uVar1,uVar2,0);
        uVar2 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(uVar2,this,DAT_ram_0056bfd0,0);
        DG.Tweening.TweenSettingsExtensions.AppendCallback(uVar1,uVar2,0);
    }

    // RVA: 0x36F8 Offset: 0x36F8 VA: 0x36F8
    public RestUI()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x36F9 Offset: 0x36F9 VA: 0x36F9
    private void _ShowRestUI_b__6_0() { }

    // methods without a dump.cs skeleton stub
    public void _ShowRestUI_b__6_0()
    {
        int uVar1 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.restImage,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.restText,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
    }
}
