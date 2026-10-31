// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.SkewTextExample.c by tools/c2cs.py
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

public class SkewTextExample : MonoBehaviour // TypeDefIndex: 5762
{
    // Fields
    private TMP_Text m_TextComponent; // 0x10
    public AnimationCurve VertexCurve; // 0x14
    public float CurveScale; // 0x18
    public float ShearAmount; // 0x1C

    // Methods

    // RVA: 0x3B10 Offset: 0x3B10 VA: 0x3B10
    private void Awake()
    {
        int param1 = default;
        TMP_Text pTVar1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        pTVar1 = (TMP_Text)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569b18);
        this.m_TextComponent = pTVar1;
    }

    // RVA: 0x3B11 Offset: 0x3B11 VA: 0x3B11
    private void Start()
    {
        int param2 = default;

        param2 = new TMPro_Examples_SkewTextExample__WarpText_d__7();
        Raw.Write<object>(param2 + 0x10 /* m_TextComponent */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    // RVA: 0x3B12 Offset: 0x3B12 VA: 0x3B12
    private AnimationCurve CopyAnimationCurve(AnimationCurve curve)
    {
        UnityEngine.AnimationCurve param1 = default;
        int param2 = default;

        param1 = (UnityEngine.AnimationCurve) new UnityEngine_AnimationCurve();
        UnityEngine.AnimationCurve.__ctor(param1,0);
        param2 = unnamed_function_52212(curve,0);
        unnamed_function_52213(param1,param2,0);
        return param1;
    }

    [IteratorStateMachine(typeof(SkewTextExample._WarpText_d__7))]
    // RVA: 0x3B13 Offset: 0x3B13 VA: 0x3B13
    private IEnumerator WarpText()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new TMPro_Examples_SkewTextExample__WarpText_d__7();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3B14 Offset: 0x3B14 VA: 0x3B14
    public SkewTextExample()
    {
        int param2 = default;
        AnimationCurve param1 = default;
        long local_a0 = default;
        long local_98 = default;
        long local_90 = default;
        int local_88 = default;
        long local_80 = default;
        long local_78 = default;
        long local_70 = default;
        int local_68 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        int local_48 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        int local_8 = default;

        param2 = unnamed_function_1050(UnityEngine_Keyframe___TypeInfo,5);
        local_8 = 0;
        local_10 = 0;
        local_18 = 0;
        local_20 = 0;
        UnityEngine.Keyframe.__ctor(&local_20,0.0,0.0,0);
        Raw.Write<int>(param2 + 0x28, local_8);
        Raw.Write<long>(param2 + 0x20, local_10);
        Raw.Write<long>(param2 + 0x18 /* CurveScale */, local_18);
        Raw.Write<long>(param2 + 0x10 /* m_TextComponent */, local_20);
        local_28 = 0;
        local_30 = 0;
        local_38 = 0;
        local_40 = 0;
        UnityEngine.Keyframe.__ctor(&local_40,0.25,2.0,0);
        Raw.Write<int>(param2 + 0x44, local_28);
        Raw.Write<long>(param2 + 0x3c, local_30);
        Raw.Write<long>(param2 + 0x34, local_38);
        Raw.Write<long>(param2 + 0x2c, local_40);
        local_48 = 0;
        local_50 = 0;
        local_58 = 0;
        local_60 = 0;
        UnityEngine.Keyframe.__ctor(&local_60,0.5,0.0,0);
        Raw.Write<int>(param2 + 0x60, local_48);
        Raw.Write<long>(param2 + 0x58, local_50);
        Raw.Write<long>(param2 + 0x50, local_58);
        Raw.Write<long>(param2 + 0x48, local_60);
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = 0;
        UnityEngine.Keyframe.__ctor(&local_80,0.75,2.0,0);
        Raw.Write<int>(param2 + 0x7c, local_68);
        Raw.Write<long>(param2 + 0x74, local_70);
        Raw.Write<long>(param2 + 0x6c, local_78);
        Raw.Write<long>(param2 + 100, local_80);
        local_88 = 0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        UnityEngine.Keyframe.__ctor(&local_a0,1.0,0.0,0);
        Raw.Write<int>(param2 + 0x98, local_88);
        Raw.Write<long>(param2 + 0x90, local_90);
        Raw.Write<long>(param2 + 0x88, local_98);
        Raw.Write<long>(param2 + 0x80, local_a0);
        param1 = (AnimationCurve)new UnityEngine_AnimationCurve();
        UnityEngine.AnimationCurve.__ctor(param1,param2,0);
        this.CurveScale = 1.0;
        this.ShearAmount = 1.0;
        this.VertexCurve = param1;
        unnamed_function_44622(this,0);
    }
}
