// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TMP_TextEventCheck.c by tools/c2cs.py
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

public class TMP_TextEventCheck : MonoBehaviour // TypeDefIndex: 5778
{
    // Fields
    public TMP_TextEventHandler TextEventHandler; // 0x10
    private TMP_Text m_TextComponent; // 0x14

    // Methods

    // RVA: 0x3B58 Offset: 0x3B58 VA: 0x3B58
    private void OnEnable()
    {
        int iVar1 = default;
        TMP_Text pTVar2 = default;
        int uVar3 = default;
        TMPro_TMP_TextEventHandler param1 = default;
        TMP_TextEventHandler_CharacterSelectionEvent param1_00 = default;
        TMP_TextEventHandler_SpriteSelectionEvent param1_01 = default;
        TMP_TextEventHandler_WordSelectionEvent param1_02 = default;
        TMP_TextEventHandler_LineSelectionEvent param1_03 = default;
        TMP_TextEventHandler_LinkSelectionEvent param1_04 = default;

        param1 = this.TextEventHandler;
        iVar1 = (param1 != null);
        if (iVar1 != 0) {
            pTVar2 = (TMP_Text)UnityEngine.Component.GetComponent<object>(this.TextEventHandler,DAT_ram_00567f3c);
            this.m_TextComponent = pTVar2;
            param1_00 = this.TextEventHandler.m_OnCharacterSelection;
            uVar3 = new UnityEngine_Events_UnityAction_char__int_();
            UnityEngine.Events.UnityAction<char, int>.__ctor(uVar3,this,DAT_ram_0056ce44,0);
            unnamed_function_71954(param1_00,uVar3,DAT_ram_00566838);
            param1_01 = this.TextEventHandler.m_OnSpriteSelection;
            uVar3 = new UnityEngine_Events_UnityAction_char__int_();
            UnityEngine.Events.UnityAction<char, int>.__ctor(uVar3,this,DAT_ram_0056ce50,0);
            unnamed_function_71954(param1_01,uVar3,DAT_ram_00566838);
            param1_02 = this.TextEventHandler.m_OnWordSelection;
            uVar3 = new UnityEngine_Events_UnityAction_string__int__int_();
            UnityEngine.Events.UnityAction<object, int, int>.__ctor(uVar3,this,DAT_ram_0056ce54,0);
            unnamed_function_71972(param1_02,uVar3,DAT_ram_0056685c);
            param1_03 = this.TextEventHandler.m_OnLineSelection;
            uVar3 = new UnityEngine_Events_UnityAction_string__int__int_();
            UnityEngine.Events.UnityAction<object, int, int>.__ctor(uVar3,this,DAT_ram_0056ce48,0);
            unnamed_function_71972(param1_03,uVar3,DAT_ram_0056685c);
            param1_04 = this.TextEventHandler.m_OnLinkSelection;
            uVar3 = new UnityEngine_Events_UnityAction_string__string__int_();
            UnityEngine.Events.UnityAction<object, object, int>.__ctor(uVar3,this,DAT_ram_0056ce4c,0);
            unnamed_function_71972(param1_04,uVar3,DAT_ram_0056686c);
        }
    }

    // RVA: 0x3B59 Offset: 0x3B59 VA: 0x3B59
    private void OnDisable()
    {
        int iVar1 = default;
        int uVar2 = default;
        TMPro_TMP_TextEventHandler param1 = default;
        TMP_TextEventHandler_CharacterSelectionEvent param1_00 = default;
        TMP_TextEventHandler_SpriteSelectionEvent param1_01 = default;
        TMP_TextEventHandler_WordSelectionEvent param1_02 = default;
        TMP_TextEventHandler_LineSelectionEvent param1_03 = default;
        TMP_TextEventHandler_LinkSelectionEvent param1_04 = default;

        param1 = this.TextEventHandler;
        iVar1 = (param1 != null);
        if (iVar1 != 0) {
            param1_00 = this.TextEventHandler.m_OnCharacterSelection;
            uVar2 = new UnityEngine_Events_UnityAction_char__int_();
            UnityEngine.Events.UnityAction<char, int>.__ctor(uVar2,this,DAT_ram_0056ce44,0);
            unnamed_function_71923(param1_00,uVar2,DAT_ram_00566840);
            param1_01 = this.TextEventHandler.m_OnSpriteSelection;
            uVar2 = new UnityEngine_Events_UnityAction_char__int_();
            UnityEngine.Events.UnityAction<char, int>.__ctor(uVar2,this,DAT_ram_0056ce50,0);
            unnamed_function_71923(param1_01,uVar2,DAT_ram_00566840);
            param1_02 = this.TextEventHandler.m_OnWordSelection;
            uVar2 = new UnityEngine_Events_UnityAction_string__int__int_();
            UnityEngine.Events.UnityAction<object, int, int>.__ctor(uVar2,this,DAT_ram_0056ce54,0);
            unnamed_function_71923(param1_02,uVar2,DAT_ram_00566864);
            param1_03 = this.TextEventHandler.m_OnLineSelection;
            uVar2 = new UnityEngine_Events_UnityAction_string__int__int_();
            UnityEngine.Events.UnityAction<object, int, int>.__ctor(uVar2,this,DAT_ram_0056ce48,0);
            unnamed_function_71923(param1_03,uVar2,DAT_ram_00566864);
            param1_04 = this.TextEventHandler.m_OnLinkSelection;
            uVar2 = new UnityEngine_Events_UnityAction_string__string__int_();
            UnityEngine.Events.UnityAction<object, object, int>.__ctor(uVar2,this,DAT_ram_0056ce4c,0);
            unnamed_function_71923(param1_04,uVar2,DAT_ram_00566874);
        }
    }

    // RVA: 0x3B5A Offset: 0x3B5A VA: 0x3B5A
    private void OnCharacterSelection(char c, int index)
    {
        int param1 = default;
        int uVar1 = default;
        int local_8 = default;
        ushort local_2 = default;

        local_8 = index;
        local_2 = c;
        param1 = unnamed_function_1050(string___TypeInfo,5);
        Raw.Write<object>(param1 + 0x10 /* TextEventHandler */, "Character [");
        uVar1 = System.Char.ToString(&local_2,0);
        Raw.Write<int>(param1 + 0x14 /* m_TextComponent */, uVar1);
        Raw.Write<object>(param1 + 0x18, "] at Index: ");
        uVar1 = System.Int32.ToString(&local_8,0);
        Raw.Write<int>(param1 + 0x1c, uVar1);
        Raw.Write<object>(param1 + 0x20, " has been selected.");
        uVar1 = System.String.Concat(param1,0);
        UnityEngine.Debug.Log(uVar1,0);
    }

    // RVA: 0x3B5B Offset: 0x3B5B VA: 0x3B5B
    private void OnSpriteSelection(char c, int index)
    {
        int param1 = default;
        int uVar1 = default;
        int local_8 = default;
        ushort local_2 = default;

        local_8 = index;
        local_2 = c;
        param1 = unnamed_function_1050(string___TypeInfo,5);
        Raw.Write<object>(param1 + 0x10 /* TextEventHandler */, "Sprite [");
        uVar1 = System.Char.ToString(&local_2,0);
        Raw.Write<int>(param1 + 0x14 /* m_TextComponent */, uVar1);
        Raw.Write<object>(param1 + 0x18, "] at Index: ");
        uVar1 = System.Int32.ToString(&local_8,0);
        Raw.Write<int>(param1 + 0x1c, uVar1);
        Raw.Write<object>(param1 + 0x20, " has been selected.");
        uVar1 = System.String.Concat(param1,0);
        UnityEngine.Debug.Log(uVar1,0);
    }

    // RVA: 0x3B5C Offset: 0x3B5C VA: 0x3B5C
    private void OnWordSelection(string word, int firstCharacterIndex, int length)
    {
        int param1 = default;
        int uVar1 = default;
        int local_8 = default;
        int local_4 = default;

        local_8 = length;
        local_4 = firstCharacterIndex;
        param1 = unnamed_function_1050(string___TypeInfo,7);
        uVar1 = "Word [";
        Raw.Write<object>(param1 + 0x14 /* m_TextComponent */, word);
        Raw.Write<int>(param1 + 0x10 /* TextEventHandler */, uVar1);
        Raw.Write<object>(param1 + 0x18, "] with first character index of ");
        uVar1 = System.Int32.ToString(&local_4,0);
        Raw.Write<int>(param1 + 0x1c, uVar1);
        Raw.Write<object>(param1 + 0x20, " and length of ");
        uVar1 = System.Int32.ToString(&local_8,0);
        Raw.Write<int>(param1 + 0x24, uVar1);
        Raw.Write<object>(param1 + 0x28, " has been selected.");
        uVar1 = System.String.Concat(param1,0);
        UnityEngine.Debug.Log(uVar1,0);
    }

    // RVA: 0x3B5D Offset: 0x3B5D VA: 0x3B5D
    private void OnLineSelection(string lineText, int firstCharacterIndex, int length)
    {
        int param1 = default;
        int uVar1 = default;
        int local_8 = default;
        int local_4 = default;

        local_8 = length;
        local_4 = firstCharacterIndex;
        param1 = unnamed_function_1050(string___TypeInfo,7);
        uVar1 = "Line [";
        Raw.Write<object>(param1 + 0x14 /* m_TextComponent */, lineText);
        Raw.Write<int>(param1 + 0x10 /* TextEventHandler */, uVar1);
        Raw.Write<object>(param1 + 0x18, "] with first character index of ");
        uVar1 = System.Int32.ToString(&local_4,0);
        Raw.Write<int>(param1 + 0x1c, uVar1);
        Raw.Write<object>(param1 + 0x20, " and length of ");
        uVar1 = System.Int32.ToString(&local_8,0);
        Raw.Write<int>(param1 + 0x24, uVar1);
        Raw.Write<object>(param1 + 0x28, " has been selected.");
        uVar1 = System.String.Concat(param1,0);
        UnityEngine.Debug.Log(uVar1,0);
    }

    // RVA: 0x3B5E Offset: 0x3B5E VA: 0x3B5E
    private void OnLinkSelection(string linkID, string linkText, int linkIndex)
    {
        int param1 = default;
        int uVar1 = default;
        TMP_Text param1_00 = default;
        int local_4 = default;

        local_4 = linkIndex;
        param1_00 = this.m_TextComponent;
        (param1_00 != null);
        param1 = unnamed_function_1050(string___TypeInfo,7);
        Raw.Write<object>(param1 + 0x10 /* TextEventHandler */, "Link Index: ");
        uVar1 = System.Int32.ToString(&local_4,0);
        Raw.Write<int>(param1 + 0x14 /* m_TextComponent */, uVar1);
        uVar1 = " with ID [";
        Raw.Write<object>(param1 + 0x1c, linkID);
        Raw.Write<int>(param1 + 0x18, uVar1);
        uVar1 = "] and Text \"";
        Raw.Write<object>(param1 + 0x24, linkText);
        Raw.Write<int>(param1 + 0x20, uVar1);
        Raw.Write<object>(param1 + 0x28, "\" has been selected.");
        uVar1 = System.String.Concat(param1,0);
        UnityEngine.Debug.Log(uVar1,0);
    }

    // RVA: 0x3B5F Offset: 0x3B5F VA: 0x3B5F
    public TMP_TextEventCheck()
    {
        unnamed_function_44622(this,0);
    }
}
