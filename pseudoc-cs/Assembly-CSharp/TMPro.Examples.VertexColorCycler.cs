// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.VertexColorCycler.c by tools/c2cs.py
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

public class VertexColorCycler : MonoBehaviour // TypeDefIndex: 5785
{
    // Fields
    private TMP_Text m_TextComponent; // 0x10

    // Methods

    // RVA: 0x3B76 Offset: 0x3B76 VA: 0x3B76
    private void Awake()
    {
        TMP_Text pTVar1 = default;

        pTVar1 = (TMP_Text)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f3c);
        this.m_TextComponent = pTVar1;
    }

    // RVA: 0x3B77 Offset: 0x3B77 VA: 0x3B77
    private void Start()
    {
        int param2 = default;

        param2 = unnamed_function_95402 (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_TypeInfo);
        Raw.Write<object>(param2 + 0x10 /* m_TextComponent */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    [IteratorStateMachine(typeof(VertexColorCycler._AnimateVertexColors_d__3))]
    // RVA: 0x3B78 Offset: 0x3B78 VA: 0x3B78
    private IEnumerator AnimateVertexColors()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) unnamed_function_95402 (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_TypeInfo);
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3B79 Offset: 0x3B79 VA: 0x3B79
    public VertexColorCycler()
    {
        unnamed_function_44622(this,0);
    }
}
