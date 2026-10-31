// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TMP_ExampleScript_01.c by tools/c2cs.py
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

public class TMP_ExampleScript_01 : MonoBehaviour // TypeDefIndex: 5775
{
    // Fields
    public TMP_ExampleScript_01.objectType ObjectType; // 0x10
    public bool isStatic; // 0x14
    private TMP_Text m_text; // 0x18
    private const string k_label = "The count is <#0080ff>{0}</color>";
    private int count; // 0x1C

    // Methods

    // RVA: 0x3B50 Offset: 0x3B50 VA: 0x3B50
    private void Awake()
    {
        TMP_Text pTVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        if (this.ObjectType == TextMeshPro) {
            pTVar1 = (TMP_Text)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f44);
            if (pTVar1 == (TMP_Text)0x0) {
                uVar2 = UnityEngine.Component.get_gameObject(this,0);
                pTVar1 = (TMP_Text)UnityEngine.GameObject.AddComponent<object>(uVar2,DAT_ram_00569a24);
            }
        }
        else {
            pTVar1 = (TMP_Text)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f48);
            if (pTVar1 == (TMP_Text)0x0) {
                uVar2 = UnityEngine.Component.get_gameObject(this,0);
                pTVar1 = (TMP_Text)UnityEngine.GameObject.AddComponent<object>(uVar2,DAT_ram_00569a2c);
            }
        }
        this.m_text = pTVar1;
        uVar2 = UnityEngine.Resources.Load<object>("Fonts & Materials/Anton SDF",DAT_ram_0056bfb8);
        TMPro.TMP_Text.set_font(pTVar1,uVar2,0);
        pTVar1 = this.m_text;
        uVar2 = UnityEngine.Resources.Load<object>("Fonts & Materials/Anton SDF - Drop Shadow",DAT_ram_0056bfac);
        iVar3 = pTVar1._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0x2e0) * 4) /* virtual */ (pTVar1,uVar2,Raw.Read<int>(iVar3 + 0x2e4));
        TMPro.TMP_Text.set_fontSize(this.m_text,120.0,0);
        iVar3 = this.m_text._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0x2d0) * 4) /* virtual */ (this.m_text,"A <#0080ff>simple</color> line of text.",Raw.Read<int>(iVar3 + 0x2d4));
        TMPro.TMP_Text.GetPreferredValues(&local_8,this.m_text,INFINITY,INFINITY,0);
        uVar2 = TMPro.TMP_Text.get_rectTransform(this.m_text,0);
        local_10 = local_8;
        local_18 = local_8;
        unnamed_function_44939(uVar2,&local_18,0);
    }

    // RVA: 0x3B51 Offset: 0x3B51 VA: 0x3B51
    private void Update()
    {
        if (this.isStatic == false) {
            TMPro.TMP_Text.SetText(this.m_text,"The count is <#0080ff>{0}</color>",(float)(this.count % 1000),0);
            this.count = this.count + 1;
        }
    }

    // RVA: 0x3B52 Offset: 0x3B52 VA: 0x3B52
    public TMP_ExampleScript_01()
    {
        unnamed_function_44622(this,0);
    }
}
