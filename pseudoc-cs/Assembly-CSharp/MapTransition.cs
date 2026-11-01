// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MapTransition.c by tools/c2cs.py
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

public class MapTransition : MonoBehaviour // TypeDefIndex: 5665
{
    // Fields
    private Image image; // 0x10
    private TextMeshProUGUI text; // 0x14
    private bool isLoadedMap; // 0x18
    public float transitonTime; // 0x1C

    // Methods

    // RVA: 0x393A Offset: 0x393A VA: 0x393A
    private void Awake()
    {
        bool bVar1 = default;
        int param1 = default;
        Image pIVar2 = default;
        TextMeshProUGUI pTVar3 = default;
        int param1_00 = default;
        object param1_01 = default; // int*
        int iVar4 = default;

        pIVar2 = (Image)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ea8);
        this.image = pIVar2;
        pTVar3 = (TextMeshProUGUI)UnityEngine.Component.GetComponentInChildren<object>(this,DAT_ram_00567f78);
        this.text = pTVar3;
        param1_00 = new System_Action();
        System.Action.__ctor(param1_00,this,DAT_ram_0056ad9c,0);
        param1 = StaticEventHandler.OnMapTransition;
        while ((param1_01 = (object)System.Delegate.Combine(param1,param1_00,0), param1_01 == (object)0x0 || (System_Action_TypeInfo == *param1_01))) {
            iVar4 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 4,param1_01,param1);
            bVar1 = param1 == iVar4;
            param1 = iVar4;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_01,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x393B Offset: 0x393B VA: 0x393B
    private void Start()
    {
        int uVar1 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.restImage,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.restText,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
    }

    // RVA: 0x393C Offset: 0x393C VA: 0x393C
    private void OnDestroy()
    {
        bool bVar1 = default;
        int param1 = default;
        int uVar2 = default;
        object param1_00 = default; // int*
        int iVar3 = default;

        uVar2 = UnityEngine.Component.get_transform(this,0);
        DG.Tweening.DOTween.Kill(uVar2,0,0);
        uVar2 = new System_Action();
        System.Action.__ctor(uVar2,this,DAT_ram_0056ad9c,0);
        param1 = StaticEventHandler.OnMapTransition;
        while ((param1_00 = (object)System.Delegate.Remove(param1,uVar2,0), param1_00 == (object)0x0 || (System_Action_TypeInfo == *param1_00))) {
            iVar3 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 4,param1_00,param1);
            bVar1 = param1 == iVar3;
            param1 = iVar3;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_00,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x393D Offset: 0x393D VA: 0x393D
    private void OnMapTransition()
    {
        int uVar1 = default;
        int uVar2 = default;
        int uVar3 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.image,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.text,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = DG.Tweening.DOTween.Sequence(0);
        uVar2 = DG.Tweening.DOTweenModuleUI.DOFade(this.image,1.0,this.transitonTime * 0.5,0);
        uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar2,4,DAT_ram_0056d374);
        uVar2 = DG.Tweening.TweenSettingsExtensions.Append(uVar1,uVar2,0);
        uVar3 = DG.Tweening.DOTweenModuleUI.DOFade(this.text,1.0,this.transitonTime * 0.5,0);
        uVar3 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar3,4,DAT_ram_0056d374);
        DG.Tweening.TweenSettingsExtensions.Join(uVar2,uVar3,0);
        uVar2 = DG.Tweening.DOTweenModuleUI.DOFade(this.image,0.0,this.transitonTime * 0.5,0);
        uVar1 = DG.Tweening.TweenSettingsExtensions.Append(uVar1,uVar2,0);
        uVar2 = DG.Tweening.DOTweenModuleUI.DOFade(this.text,0.0,this.transitonTime * 0.5,0);
        uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar2,4,DAT_ram_0056d374);
        uVar1 = DG.Tweening.TweenSettingsExtensions.Join(uVar1,uVar2,0);
        uVar2 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(uVar2,this,DAT_ram_0056ad98,0);
        DG.Tweening.TweenSettingsExtensions.AppendCallback(uVar1,uVar2,0);
    }

    // RVA: 0x393E Offset: 0x393E VA: 0x393E
    public MapTransition()
    {
        this.transitonTime = 0.5;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x393F Offset: 0x393F VA: 0x393F
    private void _OnMapTransition_b__7_0() { }

    // methods without a dump.cs skeleton stub
    public void _OnMapTransition_b__7_0()
    {
        int uVar1 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.restImage,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.restText,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
    }
}
