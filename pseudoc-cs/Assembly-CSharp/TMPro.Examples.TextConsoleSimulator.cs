// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TextConsoleSimulator.c by tools/c2cs.py
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

public class TextConsoleSimulator : MonoBehaviour // TypeDefIndex: 5767
{
    // Fields
    private TMP_Text m_TextComponent; // 0x10
    private bool hasTextChanged; // 0x14

    // Methods

    // RVA: 0x3B24 Offset: 0x3B24 VA: 0x3B24
    private void Awake()
    {
        int param1 = default;
        TMP_Text pTVar1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        pTVar1 = (TMP_Text)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569b18);
        this.m_TextComponent = pTVar1;
    }

    // RVA: 0x3B25 Offset: 0x3B25 VA: 0x3B25
    private void Start()
    {
        int param2 = default;
        TMP_Text pTVar1 = default;

        pTVar1 = this.m_TextComponent;
        param2 = unnamed_function_95402 (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_TypeInfo);
        Raw.Write<object>(param2 + 0x14 /* hasTextChanged */, this);
        Raw.Write<int>(param2 + 8, 0);
        Raw.Write<object>(param2 + 0x10 /* m_TextComponent */, pTVar1);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    // RVA: 0x3B26 Offset: 0x3B26 VA: 0x3B26
    private void OnEnable()
    {
        int param1 = default;
        int param1_00 = default;

        param1_00 = TMPro.TMPro_EventManager.TEXT_CHANGED_EVENT;
        param1 = new System_Action_Object_();
        System.Action<object>.__ctor(param1,this,DAT_ram_0056cffc,0);
        unnamed_function_75545(param1_00,param1,DAT_ram_00561d98);
    }

    // RVA: 0x3B27 Offset: 0x3B27 VA: 0x3B27
    private void OnDisable()
    {
        int param1 = default;
        int param1_00 = default;

        param1_00 = TMPro.TMPro_EventManager.TEXT_CHANGED_EVENT;
        param1 = new System_Action_Object_();
        System.Action<object>.__ctor(param1,this,DAT_ram_0056cffc,0);
        unnamed_function_75546(param1_00,param1,DAT_ram_00561da0);
    }

    // RVA: 0x3B28 Offset: 0x3B28 VA: 0x3B28
    private void ON_TEXT_CHANGED(Object obj)
    {
        this.hasTextChanged = true;
    }

    [IteratorStateMachine(typeof(TextConsoleSimulator._RevealCharacters_d__7))]
    // RVA: 0x3B29 Offset: 0x3B29 VA: 0x3B29
    private IEnumerator RevealCharacters(TMP_Text textComponent)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) unnamed_function_95402 (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_TypeInfo);
        pSVar1[5]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        pSVar1[4]._opaque = (int)textComponent;
        return pSVar1;
    }

    [IteratorStateMachine(typeof(TextConsoleSimulator._RevealWords_d__8))]
    // RVA: 0x3B2A Offset: 0x3B2A VA: 0x3B2A
    private IEnumerator RevealWords(TMP_Text textComponent)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new TMPro_Examples_TextConsoleSimulator__RevealWords_d__8();
        pSVar1[4]._opaque = (int)textComponent;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3B2B Offset: 0x3B2B VA: 0x3B2B
    public TextConsoleSimulator()
    {
        unnamed_function_44622(this,0);
    }
}
