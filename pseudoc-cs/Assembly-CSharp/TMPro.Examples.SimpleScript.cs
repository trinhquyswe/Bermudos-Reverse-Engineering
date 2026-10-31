// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.SimpleScript.c by tools/c2cs.py
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

public class SimpleScript : MonoBehaviour // TypeDefIndex: 5760
{
    // Fields
    private TextMeshPro m_textMeshPro; // 0x10
    private const string label = "The <#0050FF>count is: </color>{0:2}";
    private float m_frame; // 0x14

    // Methods

    // RVA: 0x3B0D Offset: 0x3B0D VA: 0x3B0D
    private void Start()
    {
        int param1 = default;
        TextMeshPro pTVar1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        pTVar1 = (TextMeshPro)UnityEngine.GameObject.AddComponent<object>(param1,DAT_ram_00569a24);
        this.m_textMeshPro = pTVar1;
        Raw.VCall((ulong)Raw.Read<uint>(pTVar1._opaque + 800) * 4) /* virtual */ (pTVar1,1,Raw.Read<int>(pTVar1._opaque + 0x324));
        TMPro.TMP_Text.set_fontSize(this.m_textMeshPro,48.0,0);
        TMPro.TMP_Text.set_alignment(this.m_textMeshPro,0x202,0);
        TMPro.TMP_Text.set_enableWordWrapping(this.m_textMeshPro,0,0);
    }

    // RVA: 0x3B0E Offset: 0x3B0E VA: 0x3B0E
    private void Update()
    {
        int param2 = default;
        float fVar1 = default;
        TextMeshPro param1 = default;
        float fVar2 = default;

        param2 = "The <#0050FF>count is: </color>{0:2}";
        param1 = this.m_textMeshPro;
        fVar1 = unnamed_function_11008(this.m_frame,1000.0);
        TMPro.TMP_Text.SetText(param1,param2,fVar1,0);
        fVar2 = this.m_frame;
        fVar1 = UnityEngine.Time.get_deltaTime(0);
        this.m_frame = fVar2 + fVar1;
    }

    // RVA: 0x3B0F Offset: 0x3B0F VA: 0x3B0F
    public SimpleScript()
    {
        unnamed_function_44622(this,0);
    }
}
