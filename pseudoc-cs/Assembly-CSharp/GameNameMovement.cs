// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/GameNameMovement.c by tools/c2cs.py
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

public class GameNameMovement : MonoBehaviour // TypeDefIndex: 5653
{
    // Fields
    private RectTransform rectTransform; // 0x10
    public float moveDistance; // 0x14
    public float duration; // 0x18
    public Ease easeType; // 0x1C

    // Methods

    // RVA: 0x38F1 Offset: 0x38F1 VA: 0x38F1
    private void Awake()
    {
        RectTransform pRVar1 = default;

        pRVar1 = (RectTransform)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f0c);
        this.rectTransform = pRVar1;
    }

    // RVA: 0x38F2 Offset: 0x38F2 VA: 0x38F2
    private void Start()
    {
        this.GameNameAnimation();
    }

    // RVA: 0x38F3 Offset: 0x38F3 VA: 0x38F3
    private void OnDestroy()
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_transform(this,0);
        DG.Tweening.DOTween.Kill(param1,0,0);
    }

    // RVA: 0x38F4 Offset: 0x38F4 VA: 0x38F4
    private void GameNameAnimation()
    {
        int param2 = default;
        int uVar1 = default;
        int param1 = default;
        float fVar2 = default;

        byte[] local_8 = new byte[8];
        param2 = new GameNameMovement___c__DisplayClass7_0();
        Raw.Write<object>(param2 + 8, this);
        UnityEngine.RectTransform.get_anchoredPosition(local_8,this.rectTransform,0);
        fVar2 = this.moveDistance;
        Raw.Write<int>(param2 + 0x14 /* moveDistance */, 0);
        Raw.Write<int>(param2 + 0xc, local_8._0_4_);
        Raw.Write<float>(param2 + 0x10 /* rectTransform */, local_8._4_4_ - fVar2);
        uVar1 = DG.Tweening.DOTweenModuleUI.DOAnchorPosY(this.rectTransform,fVar2 + local_8._4_4_,this.duration,0,0);
        uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,this.easeType,DAT_ram_0056d37c);
        param1 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1,param2,DAT_ram_0056f26c,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar1,param1,DAT_ram_0056d340);
    }

    // RVA: 0x38F5 Offset: 0x38F5 VA: 0x38F5
    public GameNameMovement()
    {
        this.easeType = InOutSine;
        this.moveDistance = 5.0;
        this.duration = 1.0;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
