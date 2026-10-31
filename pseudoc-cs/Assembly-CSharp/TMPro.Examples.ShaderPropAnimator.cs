// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.ShaderPropAnimator.c by tools/c2cs.py
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

public class ShaderPropAnimator : MonoBehaviour // TypeDefIndex: 5759
{
    // Fields
    private Renderer m_Renderer; // 0x10
    private Material m_Material; // 0x14
    public AnimationCurve GlowCurve; // 0x18
    public float m_frame; // 0x1C

    // Methods

    // RVA: 0x3B03 Offset: 0x3B03 VA: 0x3B03
    private void Awake()
    {
        Renderer param1 = default;
        Material pMVar1 = default;

        param1 = (Renderer)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f10);
        this.m_Renderer = param1;
        pMVar1 = (Material)unnamed_function_52793(param1,0);
        this.m_Material = pMVar1;
    }

    // RVA: 0x3B04 Offset: 0x3B04 VA: 0x3B04
    private void Start()
    {
        int param2 = default;

        param2 = unnamed_function_95402 (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_TypeInfo);
        Raw.Write<object>(param2 + 0x10 /* m_Renderer */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    [IteratorStateMachine(typeof(ShaderPropAnimator._AnimateProperties_d__6))]
    // RVA: 0x3B05 Offset: 0x3B05 VA: 0x3B05
    private IEnumerator AnimateProperties()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) unnamed_function_95402 (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_TypeInfo);
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3B06 Offset: 0x3B06 VA: 0x3B06
    public ShaderPropAnimator()
    {
        unnamed_function_44622(this,0);
    }
}
