// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BossManager.c by tools/c2cs.py
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

public class BossManager : MonoBehaviour // TypeDefIndex: 5559
{
    // Fields
    [SerializeField]
    private RectTransform backgroundrectTransform; // 0x10
    [SerializeField]
    private GameObject bossUI; // 0x14
    [SerializeField]
    private GameObject boss; // 0x18
    [SerializeField]
    private GameObject bossContainer; // 0x1C
    [SerializeField]
    private GameObject bossHealthBar; // 0x20

    // Methods

    // RVA: 0x3708 Offset: 0x3708 VA: 0x3708
    private void Start()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param1 = default;
        long local_10 = default;
        long local_8 = default;

        iVar1 = UnityEngine.PlayerPrefs.HasKey("isBossDefeated",0);
        if ((iVar1 == 0) || (iVar1 = UnityEngine.PlayerPrefs.GetInt("isBossDefeated",0), iVar1 != 1)) {
            local_8 = 0x4416000045098000;
            local_10 = 0x4416000045098000;
            uVar2 = DG.Tweening.DOTweenModuleUI.DOSizeDelta(this.backgroundrectTransform,&local_10,1.0,0,0);
            uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar2,0x1b,DAT_ram_0056d37c);
            param1 = new DG_Tweening_TweenCallback();
            DG.Tweening.TweenCallback.__ctor(param1,this,DAT_ram_0056789c,0);
            DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar2,param1,DAT_ram_0056d340);
        }
        else {
            UnityEngine.GameObject.SetActive(this.bossHealthBar,0,0);
            iVar1 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
            }
            iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
            }
            iVar1 = Raw.Deref(Raw.Read<object>(iVar1 + 0x5c));
            Raw.Write<int>(iVar1 + 0x1c, 3);
            uVar2 = UnityEngine.Component.GetComponent<object>(Raw.Read<int>(iVar1 + 0x10),DAT_ram_00567f18);
            UnityEngine.Rigidbody2D.set_mass(uVar2,0.5,0);
            iVar1 = Raw.Read<int>(iVar1 + 0x20);
            if (iVar1 != 0) {
                Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),3,Raw.Read<int>(iVar1 + 0x14));
            }
            uVar2 = UnityEngine.Component.get_gameObject(this,0);
            UnityEngine.GameObject.SetActive(uVar2,0,0);
        }
    }

    // RVA: 0x3709 Offset: 0x3709 VA: 0x3709
    private void SpawnBoss()
    {
        int param4 = default;
        GameObject param1 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        int local_8 = default;

        param1 = this.boss;
        local_18 = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_20 = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        param4 = UnityEngine.GameObject.get_transform(this.bossContainer,0);
        local_28 = 0;
        local_8 = 0;
        local_38 = local_18;
        local_30 = 0x4170000041600000;
        local_40 = local_20;
        local_10 = 0x4170000041600000;
        unnamed_function_86955(param1,&local_30,&local_40,param4,DAT_ram_0056b554);
    }

    // RVA: 0x370A Offset: 0x370A VA: 0x370A
    private int GetBossState()
    {
        int iVar1 = default;

        iVar1 = UnityEngine.PlayerPrefs.HasKey("isBossDefeated",0);
        if (iVar1 != 0) {
            UnityEngine.PlayerPrefs.GetInt("isBossDefeated",0);
        }
    }

    // RVA: 0x370B Offset: 0x370B VA: 0x370B
    private void OnDestroy()
    {
        RectTransform param1 = default;

        param1 = this.backgroundrectTransform;
        DG.Tweening.DOTween.Kill(param1,0,0);
    }

    // RVA: 0x370C Offset: 0x370C VA: 0x370C
    public BossManager()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x370D Offset: 0x370D VA: 0x370D
    private void _Start_b__5_0() { }

    [CompilerGenerated]
    // RVA: 0x370E Offset: 0x370E VA: 0x370E
    private void _Start_b__5_1() { }

    [CompilerGenerated]
    // RVA: 0x370F Offset: 0x370F VA: 0x370F
    private void _Start_b__5_2() { }

    // methods without a dump.cs skeleton stub
    public void _Start_b__5_0()
    {
        int uVar1 = default;
        int param1 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar1 = UnityEngine.GameObject.get_transform(this.bossUI,0);
        local_8 = 0;
        local_18 = 0;
        local_10 = 0xc130000042480000;
        local_20 = 0xc130000042480000;
        uVar1 = DG.Tweening.ShortcutExtensions.DOLocalMove(uVar1,&local_20,1.0,0,0);
        uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,0x1b,DAT_ram_0056d380);
        param1 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1,this,DAT_ram_005678a0,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar1,param1,DAT_ram_0056d344);
    }
    public void _Start_b__5_1()
    {
        int uVar1 = default;
        int param1 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        long local_18 = default;
        int local_10 = default;
        long local_8 = default;

        local_8 = 0x44fa000045098000;
        local_20 = 0x44fa000045098000;
        uVar1 = DG.Tweening.DOTweenModuleUI.DOSizeDelta(this.backgroundrectTransform,&local_20,1.0,0,0);
        DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,0x1a,DAT_ram_0056d37c);
        uVar1 = UnityEngine.GameObject.get_transform(this.bossUI,0);
        local_10 = 0;
        local_28 = 0;
        local_18 = 0xc3c1800044e38000;
        local_30 = 0xc3c1800044e38000;
        uVar1 = DG.Tweening.ShortcutExtensions.DOLocalMove(uVar1,&local_30,1.0,0,0);
        uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,0x1a,DAT_ram_0056d380);
        param1 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1,this,DAT_ram_005678a4,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar1,param1,DAT_ram_0056d344);
    }
    public void _Start_b__5_2()
    {
        int param1 = default;

        this.SpawnBoss();
        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
    }
}
