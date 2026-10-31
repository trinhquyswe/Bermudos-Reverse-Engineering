// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.Benchmark01_UGUI.c by tools/c2cs.py
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

public class Benchmark01_UGUI : MonoBehaviour // TypeDefIndex: 5749
{
    // Fields
    public int BenchmarkType; // 0x10
    public Canvas canvas; // 0x14
    public TMP_FontAsset TMProFont; // 0x18
    public Font TextMeshFont; // 0x1C
    private TextMeshProUGUI m_textMeshPro; // 0x20
    private Text m_textMesh; // 0x24
    private const string label01 = "The <#0050FF>count is: </color>";
    private const string label02 = "The <color=#0050FF>count is: </color>";
    private Material m_material01; // 0x28
    private Material m_material02; // 0x2C

    // Methods

    [IteratorStateMachine(typeof(Benchmark01_UGUI._Start_d__10))]
    // RVA: 0x3AEC Offset: 0x3AEC VA: 0x3AEC
    private IEnumerator Start()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new TMPro_Examples_Benchmark01_UGUI__Start_d__10();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3AED Offset: 0x3AED VA: 0x3AED
    public Benchmark01_UGUI()
    {
        unnamed_function_44622(this,0);
    }
}
