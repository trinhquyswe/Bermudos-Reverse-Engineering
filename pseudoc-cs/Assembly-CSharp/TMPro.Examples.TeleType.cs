// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TeleType.c by tools/c2cs.py
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

public class TeleType : MonoBehaviour // TypeDefIndex: 5764
{
    // Fields
    private string label01; // 0x10
    private string label02; // 0x14
    private TMP_Text m_textMeshPro; // 0x18

    // Methods

    // RVA: 0x3B1B Offset: 0x3B1B VA: 0x3B1B
    private void Awake()
    {
        TMP_Text pTVar1 = default;

        pTVar1 = (TMP_Text)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f3c);
        this.m_textMeshPro = pTVar1;
        Raw.VCall((ulong)Raw.Read<uint>(pTVar1._opaque + 0x2d0) * 4) /* virtual */ (pTVar1,this.label01,Raw.Read<int>(pTVar1._opaque + 0x2d4));
        TMPro.TMP_Text.set_enableWordWrapping(this.m_textMeshPro,1,0);
        TMPro.TMP_Text.set_alignment(this.m_textMeshPro,0x102,0);
    }

    [IteratorStateMachine(typeof(TeleType._Start_d__4))]
    // RVA: 0x3B1C Offset: 0x3B1C VA: 0x3B1C
    private IEnumerator Start()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new TMPro_Examples_TeleType__Start_d__4();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3B1D Offset: 0x3B1D VA: 0x3B1D
    public TeleType()
    {
        this.label01 = "Example <sprite=2> of using <sprite=7> <#ffa000>Graphics Inline</color> <sprite=5> with Text in <font=\"Bangers SDF\" material=\"Bangers SDF - Drop Shadow\">TextMesh<#40a0ff>Pro</color></font><sprite=0> and Unity<sprite=1>";
        this.label02 = "Example <sprite=2> of using <sprite=7> <#ffa000>Graphics Inline</color> <sprite=5> with Text in <font=\"Bangers SDF\" material=\"Bangers SDF - Drop Shadow\">TextMesh<#40a0ff>Pro</color></font><sprite=0> and Unity<sprite=2>";
        unnamed_function_44622(this,0);
    }
}
