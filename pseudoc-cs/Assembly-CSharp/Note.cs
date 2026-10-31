// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Note.c by tools/c2cs.py
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

public class Note : MonoBehaviour // TypeDefIndex: 5685
{
    // Fields
    private LayerMask playerLayer; // 0x10
    private SpriteRenderer spriteRenderer; // 0x14
    [TextArea]
    public string noteText; // 0x18

    // Methods

    // RVA: 0x3989 Offset: 0x3989 VA: 0x3989
    private void Awake()
    {
        int iVar1 = default;
        SpriteRenderer pSVar2 = default;

        iVar1 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar1 + 0x10, "Player");
        iVar1 = UnityEngine.LayerMask.GetMask(iVar1,0);
        this.playerLayer.m_Mask = iVar1;
        pSVar2 = (SpriteRenderer)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f24);
        this.spriteRenderer = pSVar2;
    }

    // RVA: 0x398A Offset: 0x398A VA: 0x398A
    private void Start()
    {
        int uVar1 = default;

        uVar1 = DG.Tweening.DOTweenModuleSprite.DOFade(this.spriteRenderer,0.3,1.5,0);
        uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,4,DAT_ram_0056d374);
        DG.Tweening.TweenSettingsExtensions.SetLoops<object>(uVar1,0xffffffff,1,DAT_ram_0056d390);
    }

    // RVA: 0x398B Offset: 0x398B VA: 0x398B
    private void OnCollisionStay2D(Collision2D collision)
    {
        int param1 = default;
        uint uVar1 = default;
        OnNoteOpenedEventArgs __this_00 = default;
        uint uVar2 = default;
        string psVar3 = default;
        int iVar4 = default;

        uVar2 = this.playerLayer.m_Mask;
        param1 = UnityEngine.Collision2D.get_gameObject(collision,0);
        uVar1 = UnityEngine.GameObject.get_layer(param1,0);
        if (0 < (int)(uVar2 & 1 << (uVar1 & 0x1f))) {
            psVar3 = this.noteText;
            iVar4 = StaticEventHandler.OnNoteOpened;
            if (iVar4 != 0) {
                __this_00 = (OnNoteOpenedEventArgs)new OnNoteOpenedEventArgs();
                new OnNoteOpenedEventArgs();
                __this_00.note = psVar3;
                __this_00.isOpening = true;
                Raw.VCall((ulong)Raw.Read<uint>(iVar4 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar4 + 0x20),__this_00,Raw.Read<int>(iVar4 + 0x14));
            }
        }
    }

    // RVA: 0x398C Offset: 0x398C VA: 0x398C
    private void OnDestroy()
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_transform(this,0);
        DG.Tweening.DOTween.Kill(param1,0,0);
    }

    // RVA: 0x398D Offset: 0x398D VA: 0x398D
    private void OnCollisionExit2D(Collision2D collision)
    {
        int param1 = default;
        uint uVar1 = default;
        OnNoteOpenedEventArgs __this_00 = default;
        uint uVar2 = default;
        string psVar3 = default;
        int iVar4 = default;

        uVar2 = this.playerLayer.m_Mask;
        param1 = UnityEngine.Collision2D.get_gameObject(collision,0);
        uVar1 = UnityEngine.GameObject.get_layer(param1,0);
        if (0 < (int)(uVar2 & 1 << (uVar1 & 0x1f))) {
            psVar3 = this.noteText;
            iVar4 = StaticEventHandler.OnNoteOpened;
            if (iVar4 != 0) {
                __this_00 = (OnNoteOpenedEventArgs)new OnNoteOpenedEventArgs();
                new OnNoteOpenedEventArgs();
                __this_00.note = psVar3;
                __this_00.isOpening = false;
                Raw.VCall((ulong)Raw.Read<uint>(iVar4 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar4 + 0x20),__this_00,Raw.Read<int>(iVar4 + 0x14));
            }
        }
    }

    // RVA: 0x398E Offset: 0x398E VA: 0x398E
    public Note()
    {
        unnamed_function_44622(this,0);
    }
}
