// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/NoteUI.c by tools/c2cs.py
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

public class NoteUI : MonoBehaviour // TypeDefIndex: 5686
{
    // Fields
    private TextMeshProUGUI textMeshPro; // 0x10
    private Image Image; // 0x14

    // Methods

    // RVA: 0x398F Offset: 0x398F VA: 0x398F
    private void Awake()
    {
        TextMeshProUGUI pTVar1 = default;
        Image pIVar2 = default;
        System.Action.OnNoteOpenedEventArgs value = default;

        pTVar1 = (TextMeshProUGUI)UnityEngine.Component.GetComponentInChildren<object>(this,DAT_ram_00567f78);
        this.textMeshPro = pTVar1;
        pIVar2 = (Image)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ea8);
        this.Image = pIVar2;
        value = (System.Action.OnNoteOpenedEventArgs) new System_Action_OnNoteOpenedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_0056b4a0,0);
        StaticEventHandler.add_OnNoteOpened(value);
    }

    // RVA: 0x3990 Offset: 0x3990 VA: 0x3990
    private void Start()
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
    }

    // RVA: 0x3991 Offset: 0x3991 VA: 0x3991
    private void OnEnable()
    {
        ulong uVar1 = default;
        float fVar2 = default;
        int uVar3 = default;
        int iVar4 = default;
        TextMeshProUGUI pTVar5 = default;
        float local_10 = default;
        float local_8 = default;
        long local_30 = default;
        ulong local_28 = default;
        long local_20 = default;
        long local_18 = default;

        _local_8 = 0x3f800000;
        _local_10 = 0x3f8000003f800000;
        iVar4 = this.Image._opaque;
        local_18 = 0x3f800000;
        local_20 = 0x3f8000003f800000;
        Raw.VCall((ulong)Raw.Read<uint>(iVar4 + 0x178) * 4) /* virtual */ (this.Image,&local_20,Raw.Read<int>(iVar4 + 0x17c));
        pTVar5 = this.textMeshPro;
        Raw.VCall((ulong)Raw.Read<uint>(pTVar5._opaque + 0x170) * 4) /* virtual */ (&local_10,pTVar5,Raw.Read<int>(pTVar5._opaque + 0x174));
        fVar2 = local_10;
        iVar4 = this.textMeshPro._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar4 + 0x170) * 4) /* virtual */ (&local_10,this.textMeshPro,Raw.Read<int>(iVar4 + 0x174));
        uVar1 = _local_10 >> 0x20;
        iVar4 = this.textMeshPro._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar4 + 0x170) * 4) /* virtual */ (&local_10,this.textMeshPro,Raw.Read<int>(iVar4 + 0x174));
        _local_8 = _local_8 & 0xffffffff;
        _local_10 = CONCAT44((int)uVar1,fVar2);
        local_28 = _local_8;
        local_30 = _local_10;
        Raw.VCall((ulong)Raw.Read<uint>(pTVar5._opaque + 0x178) * 4) /* virtual */ (pTVar5,&local_30,Raw.Read<int>(pTVar5._opaque + 0x17c));
        uVar3 = DG.Tweening.DOTweenModuleUI.DOFade(this.Image,1.0,1.0,0);
        DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar3,4,DAT_ram_0056d374);
        uVar3 = DG.Tweening.DOTweenModuleUI.DOFade(this.textMeshPro,1.0,1.0,0);
        DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar3,4,DAT_ram_0056d374);
    }

    // RVA: 0x3992 Offset: 0x3992 VA: 0x3992
    private void OnDestroy()
    {
        int param1 = default;
        System.Action.OnNoteOpenedEventArgs value = default;

        param1 = UnityEngine.Component.get_transform(this,0);
        DG.Tweening.DOTween.Kill(param1,0,0);
        value = (System.Action.OnNoteOpenedEventArgs) new System_Action_OnNoteOpenedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_0056b4a0,0);
        StaticEventHandler.remove_OnNoteOpened(value);
    }

    // RVA: 0x3993 Offset: 0x3993 VA: 0x3993
    private void OnNoteOpened(OnNoteOpenedEventArgs onNoteOpenedEventArgs)
    {
        bool bVar1 = default;
        int param1 = default;
        int iVar2 = default;

        bVar1 = onNoteOpenedEventArgs.isOpening;
        param1 = UnityEngine.Component.get_gameObject(this,0);
        if (bVar1 == false) {
            UnityEngine.GameObject.SetActive(param1,0,0);
            return;
        }
        UnityEngine.GameObject.SetActive(param1,1,0);
        iVar2 = this.textMeshPro._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x2d0) * 4) /* virtual */ (this.textMeshPro,onNoteOpenedEventArgs.note,Raw.Read<int>(iVar2 + 0x2d4));
    }

    // RVA: 0x3994 Offset: 0x3994 VA: 0x3994
    public NoteUI()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
