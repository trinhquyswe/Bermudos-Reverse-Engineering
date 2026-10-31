// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.TMP_TextEventHandler.c by tools/c2cs.py
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

public class TMP_TextEventHandler : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler // TypeDefIndex: 5745
{
    // Fields
    [SerializeField]
    private TMP_TextEventHandler.CharacterSelectionEvent m_OnCharacterSelection; // 0x10
    [SerializeField]
    private TMP_TextEventHandler.SpriteSelectionEvent m_OnSpriteSelection; // 0x14
    [SerializeField]
    private TMP_TextEventHandler.WordSelectionEvent m_OnWordSelection; // 0x18
    [SerializeField]
    private TMP_TextEventHandler.LineSelectionEvent m_OnLineSelection; // 0x1C
    [SerializeField]
    private TMP_TextEventHandler.LinkSelectionEvent m_OnLinkSelection; // 0x20
    private TMP_Text m_TextComponent; // 0x24
    private Camera m_Camera; // 0x28
    private Canvas m_Canvas; // 0x2C
    private int m_selectedLink; // 0x30
    private int m_lastCharIndex; // 0x34
    private int m_lastWordIndex; // 0x38
    private int m_lastLineIndex; // 0x3C

    // Properties
    public TMP_TextEventHandler.CharacterSelectionEvent onCharacterSelection { get; set; }
    public TMP_TextEventHandler.SpriteSelectionEvent onSpriteSelection { get; set; }
    public TMP_TextEventHandler.WordSelectionEvent onWordSelection { get; set; }
    public TMP_TextEventHandler.LineSelectionEvent onLineSelection { get; set; }
    public TMP_TextEventHandler.LinkSelectionEvent onLinkSelection { get; set; }

    // Methods

    // RVA: 0x3ACB Offset: 0x3ACB VA: 0x3ACB
    public TMP_TextEventHandler.CharacterSelectionEvent get_onCharacterSelection()
    {
        return (TMPro_TMP_TextEventHandler_CharacterSelectionEvent)this.m_OnCharacterSelection;
    }

    // RVA: 0x3ACC Offset: 0x3ACC VA: 0x3ACC
    public void set_onCharacterSelection(TMP_TextEventHandler.CharacterSelectionEvent value)
    {
        this.m_OnCharacterSelection = (TMP_TextEventHandler_CharacterSelectionEvent)value;
    }

    // RVA: 0x3ACD Offset: 0x3ACD VA: 0x3ACD
    public TMP_TextEventHandler.SpriteSelectionEvent get_onSpriteSelection()
    {
        return (TMPro_TMP_TextEventHandler_SpriteSelectionEvent)this.m_OnSpriteSelection;
    }

    // RVA: 0x3ACE Offset: 0x3ACE VA: 0x3ACE
    public void set_onSpriteSelection(TMP_TextEventHandler.SpriteSelectionEvent value)
    {
        this.m_OnSpriteSelection = (TMP_TextEventHandler_SpriteSelectionEvent)value;
    }

    // RVA: 0x3ACF Offset: 0x3ACF VA: 0x3ACF
    public TMP_TextEventHandler.WordSelectionEvent get_onWordSelection()
    {
        return (TMPro_TMP_TextEventHandler_WordSelectionEvent)this.m_OnWordSelection;
    }

    // RVA: 0x3AD0 Offset: 0x3AD0 VA: 0x3AD0
    public void set_onWordSelection(TMP_TextEventHandler.WordSelectionEvent value)
    {
        this.m_OnWordSelection = (TMP_TextEventHandler_WordSelectionEvent)value;
    }

    // RVA: 0x3AD1 Offset: 0x3AD1 VA: 0x3AD1
    public TMP_TextEventHandler.LineSelectionEvent get_onLineSelection()
    {
        return (TMPro_TMP_TextEventHandler_LineSelectionEvent)this.m_OnLineSelection;
    }

    // RVA: 0x3AD2 Offset: 0x3AD2 VA: 0x3AD2
    public void set_onLineSelection(TMP_TextEventHandler.LineSelectionEvent value)
    {
        this.m_OnLineSelection = (TMP_TextEventHandler_LineSelectionEvent)value;
    }

    // RVA: 0x3AD3 Offset: 0x3AD3 VA: 0x3AD3
    public TMP_TextEventHandler.LinkSelectionEvent get_onLinkSelection()
    {
        return (TMPro_TMP_TextEventHandler_LinkSelectionEvent)this.m_OnLinkSelection;
    }

    // RVA: 0x3AD4 Offset: 0x3AD4 VA: 0x3AD4
    public void set_onLinkSelection(TMP_TextEventHandler.LinkSelectionEvent value)
    {
        this.m_OnLinkSelection = (TMP_TextEventHandler_LinkSelectionEvent)value;
    }

    // RVA: 0x3AD5 Offset: 0x3AD5 VA: 0x3AD5
    private void Awake()
    {
        int uVar1 = default;
        TMP_Text param1 = default;
        int param1_00 = default;
        int iVar2 = default;
        Canvas param1_01 = default;
        Camera pCVar3 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this,0);
        param1 = (TMP_Text)UnityEngine.GameObject.GetComponent<object>(uVar1,DAT_ram_00569b18);
        this.m_TextComponent = param1;
        param1_00 = unnamed_function_82118(param1);
        uVar1 = TMPro_TextMeshProUGUI_var;
        uVar1 = System.Type.GetTypeFromHandle(uVar1,0);
        iVar2 = unnamed_function_7515(param1_00,uVar1,0);
        if (iVar2 == 0) {
            pCVar3 = (Camera)UnityEngine.Camera.get_main(0);
        }
        else {
            uVar1 = UnityEngine.Component.get_gameObject(this,0);
            param1_01 = (Canvas)UnityEngine.GameObject.GetComponentInParent<object>(uVar1,DAT_ram_00569b48);
            this.m_Canvas = param1_01;
            pCVar3 = (Camera)0x0;
            iVar2 = (param1_01 != null);
            if (iVar2 == 0) {
                return;
            }
            iVar2 = UnityEngine.Canvas.get_renderMode(this.m_Canvas,0);
            if (iVar2 != 0) {
                pCVar3 = (Camera)UnityEngine.Canvas.get_worldCamera(this.m_Canvas,0);
            }
        }
        this.m_Camera = pCVar3;
    }

    // RVA: 0x3AD6 Offset: 0x3AD6 VA: 0x3AD6
    private void LateUpdate()
    {
        ushort uVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        int param2 = default;
        int uVar4 = default;
        Camera pCVar5 = default;
        TMP_Text pTVar6 = default;
        object puVar7 = default; // ushort*
        int iVar8 = default;
        int iVar9 = default;
        int iVar10 = default;
        int iVar11 = default;
        int param2_00 = default;
        long local_90 = default;
        int local_88 = default;
        long local_80 = default;
        int local_78 = default;
        long local_70 = default;
        int local_68 = default;
        long local_60 = default;
        int local_58 = default;
        long local_50 = default;
        int local_48 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        long local_8 = default;

        local_8 = 0;
        local_10 = 0;
        local_18 = 0;
        local_20 = 0;
        local_28 = 0;
        local_30 = 0;
        uVar2 = TMPro.TMP_Text.get_rectTransform(this.m_TextComponent,0);
        UnityEngine.Input.get_mousePosition(&local_40,0);
        pCVar5 = this.m_Camera;
        local_48 = local_38;
        local_50 = local_40;
        iVar3 = TMPro.TMP_TextUtilities.IsIntersectingRectTransform(uVar2,&local_50,pCVar5,0);
        if (iVar3 == 0) {
            this.m_selectedLink = -1;
            this.m_lastCharIndex = -1;
            this.m_lastWordIndex = -1;
            this.m_lastLineIndex = -1;
        }
        else {
            pTVar6 = this.m_TextComponent;
            UnityEngine.Input.get_mousePosition(&local_40,0);
            pCVar5 = this.m_Camera;
            local_58 = local_38;
            local_60 = local_40;
            iVar3 = TMPro.TMP_TextUtilities.FindIntersectingCharacter(pTVar6,&local_60,pCVar5,1,0);
            if ((iVar3 != -1) && (iVar3 != this.m_lastCharIndex)) {
                this.m_lastCharIndex = iVar3;
                iVar11 = Raw.Read<int>(this.m_TextComponent[0xa8]._opaque + 0x2c) + iVar3 * 0x164;
                puVar7 = (object)(iVar11 + 0x10);
                iVar11 = Raw.Read<int>(iVar11 + 0x1c);
                if (iVar11 == 0) {
                    uVar1 = *puVar7;
                    if (this.m_OnCharacterSelection != (TMP_TextEventHandler_CharacterSelectionEvent)0x0) {
                        UnityEngine.Events.UnityEvent<char, int>.Invoke(this.m_OnCharacterSelection,(uint)uVar1,iVar3,DAT_ram_0056683c);
                    }
                }
                else if (iVar11 == 1) {
                    uVar1 = *puVar7;
                    if (this.m_OnSpriteSelection != (TMP_TextEventHandler_SpriteSelectionEvent)0x0) {
                        UnityEngine.Events.UnityEvent<char, int>.Invoke(this.m_OnSpriteSelection,(uint)uVar1,iVar3,DAT_ram_0056683c);
                    }
                }
            }
            pTVar6 = this.m_TextComponent;
            UnityEngine.Input.get_mousePosition(&local_40,0);
            pCVar5 = this.m_Camera;
            local_68 = local_38;
            local_70 = local_40;
            iVar3 = TMPro.TMP_TextUtilities.FindIntersectingWord(pTVar6,&local_70,pCVar5,0);
            if ((iVar3 != -1) && (iVar3 != this.m_lastWordIndex)) {
                this.m_lastWordIndex = iVar3;
                iVar3 = Raw.Read<int>(this.m_TextComponent[0xa8]._opaque + 0x30) + iVar3 * 0x10;
                local_10 = Raw.Read<long>(iVar3 + 0x10);
                local_8 = Raw.Read<long>(iVar3 + 0x18);
                param2 = TMPro.TMP_WordInfo.GetWord(&local_10,0);
                uVar4 = local_8._4_4_;
                uVar2 = local_10._4_4_;
                if (this.m_OnWordSelection != (TMP_TextEventHandler_WordSelectionEvent)0x0) {
                    UnityEngine.Events.UnityEvent<object, int, int>.Invoke(this.m_OnWordSelection,param2,uVar2,uVar4,DAT_ram_00566860);
                }
            }
            pTVar6 = this.m_TextComponent;
            UnityEngine.Input.get_mousePosition(&local_40,0);
            pCVar5 = this.m_Camera;
            local_78 = local_38;
            local_80 = local_40;
            iVar3 = TMPro.TMP_TextUtilities.FindIntersectingLine(pTVar6,&local_80,pCVar5,0);
            if ((iVar3 != -1) && (iVar3 != this.m_lastLineIndex)) {
                this.m_lastLineIndex = iVar3;
                iVar3 = Raw.Read<int>(this.m_TextComponent[0xa8]._opaque + 0x38) + iVar3 * 0x5c;
                iVar11 = Raw.Read<int>(iVar3 + 0x24);
                param2_00 = Raw.Read<int>(iVar3 + 0x14);
                iVar3 = unnamed_function_1050(char___TypeInfo,param2_00);
                if (0 < param2_00) {
                    iVar8 = Raw.Read<int>(this.m_TextComponent[0xa8]._opaque + 0x2c);
                    iVar9 = Raw.Read<int>(iVar8 + 0xc);
                    if (iVar9 < 1) {
                        iVar9 = 0;
                    }
                    iVar10 = 0;
                    do {
                        if (iVar10 == iVar9) break;
                        Raw.Write<ushort>(iVar3 + iVar10 * 2 + 0x10, Raw.Read<ushort>(iVar8 + (iVar10 + iVar11) * 0x164 + 0x10));
                        iVar10 = iVar10 + 1;
                    } while (iVar10 != param2_00);
                }
                uVar2 = System.String.CreateString(0,iVar3,0);
                if (this.m_OnLineSelection != (TMP_TextEventHandler_LineSelectionEvent)0x0) {
                    UnityEngine.Events.UnityEvent<object, int, int>.Invoke(this.m_OnLineSelection,uVar2,iVar11,param2_00,DAT_ram_00566860);
                }
            }
            pTVar6 = this.m_TextComponent;
            UnityEngine.Input.get_mousePosition(&local_40,0);
            pCVar5 = this.m_Camera;
            local_88 = local_38;
            local_90 = local_40;
            iVar3 = TMPro.TMP_TextUtilities.FindIntersectingLink(pTVar6,&local_90,pCVar5,0);
            if ((iVar3 != -1) && (iVar3 != this.m_selectedLink)) {
                this.m_selectedLink = iVar3;
                iVar11 = Raw.Read<int>(this.m_TextComponent[0xa8]._opaque + 0x34) + iVar3 * 0x1c;
                local_30 = Raw.Read<long>(iVar11 + 0x10);
                local_28 = Raw.Read<long>(iVar11 + 0x18);
                local_20 = Raw.Read<long>(iVar11 + 0x20);
                local_18 = Raw.Read<int>(iVar11 + 0x28);
                uVar2 = TMPro.TMP_LinkInfo.GetLinkID(&local_30,0);
                uVar4 = TMPro.TMP_LinkInfo.GetLinkText(&local_30,0);
                if (this.m_OnLinkSelection != (TMP_TextEventHandler_LinkSelectionEvent)0x0) {
                    UnityEngine.Events.UnityEvent<object, object, int>.Invoke(this.m_OnLinkSelection,uVar2,uVar4,iVar3,DAT_ram_00566870);
                }
            }
        }
    }

    // RVA: 0x3AD7 Offset: 0x3AD7 VA: 0x3AD7 Slot: 4
    public void OnPointerEnter(PointerEventData eventData)
    {

    }

    // RVA: 0x3AD8 Offset: 0x3AD8 VA: 0x3AD8 Slot: 5
    public void OnPointerExit(PointerEventData eventData)
    {

    }

    // RVA: 0x3AD9 Offset: 0x3AD9 VA: 0x3AD9
    private void SendOnCharacterSelection(char character, int characterIndex)
    {
        ushort in_register_20000012 = default;

        if (this.m_OnCharacterSelection != (TMP_TextEventHandler_CharacterSelectionEvent)0x0) {
            UnityEngine.Events.UnityEvent<char, int>.Invoke(this.m_OnCharacterSelection,CONCAT22(in_register_20000012,character), characterIndex,DAT_ram_0056683c);
        }
    }

    // RVA: 0x3ADA Offset: 0x3ADA VA: 0x3ADA
    private void SendOnSpriteSelection(char character, int characterIndex)
    {
        ushort in_register_20000012 = default;

        if (this.m_OnSpriteSelection != (TMP_TextEventHandler_SpriteSelectionEvent)0x0) {
            UnityEngine.Events.UnityEvent<char, int>.Invoke(this.m_OnSpriteSelection,CONCAT22(in_register_20000012,character),characterIndex, DAT_ram_0056683c);
        }
    }

    // RVA: 0x3ADB Offset: 0x3ADB VA: 0x3ADB
    private void SendOnWordSelection(string word, int charIndex, int length)
    {
        if (this.m_OnWordSelection != (TMP_TextEventHandler_WordSelectionEvent)0x0) {
            UnityEngine.Events.UnityEvent<object, int, int>.Invoke(this.m_OnWordSelection,word,charIndex,length,DAT_ram_00566860);
        }
    }

    // RVA: 0x3ADC Offset: 0x3ADC VA: 0x3ADC
    private void SendOnLineSelection(string line, int charIndex, int length)
    {
        if (this.m_OnLineSelection != (TMP_TextEventHandler_LineSelectionEvent)0x0) {
            UnityEngine.Events.UnityEvent<object, int, int>.Invoke(this.m_OnLineSelection,line,charIndex,length,DAT_ram_00566860);
        }
    }

    // RVA: 0x3ADD Offset: 0x3ADD VA: 0x3ADD
    private void SendOnLinkSelection(string linkID, string linkText, int linkIndex)
    {
        if (this.m_OnLinkSelection != (TMP_TextEventHandler_LinkSelectionEvent)0x0) {
            UnityEngine.Events.UnityEvent<object, object, int>.Invoke(this.m_OnLinkSelection,linkID,linkText,linkIndex,DAT_ram_00566870);
        }
    }

    // RVA: 0x3ADE Offset: 0x3ADE VA: 0x3ADE
    public TMP_TextEventHandler()
    {
        TMP_TextEventHandler_CharacterSelectionEvent param1 = default;
        TMP_TextEventHandler_SpriteSelectionEvent param1_00 = default;
        TMP_TextEventHandler_WordSelectionEvent param1_01 = default;
        TMP_TextEventHandler_LineSelectionEvent param1_02 = default;
        TMP_TextEventHandler_LinkSelectionEvent param1_03 = default;

        param1 = (TMP_TextEventHandler_CharacterSelectionEvent) new TMPro_TMP_TextEventHandler_CharacterSelectionEvent();
        unnamed_function_71921(param1,DAT_ram_00566834);
        this.m_OnCharacterSelection = param1;
        param1_00 = (TMP_TextEventHandler_SpriteSelectionEvent) new TMPro_TMP_TextEventHandler_SpriteSelectionEvent();
        unnamed_function_71921(param1_00,DAT_ram_00566834);
        this.m_OnSpriteSelection = param1_00;
        param1_01 = (TMP_TextEventHandler_WordSelectionEvent) new TMPro_TMP_TextEventHandler_WordSelectionEvent();
        unnamed_function_71921(param1_01,DAT_ram_00566858);
        this.m_OnWordSelection = param1_01;
        param1_02 = (TMP_TextEventHandler_LineSelectionEvent) new TMPro_TMP_TextEventHandler_LineSelectionEvent();
        unnamed_function_71921(param1_02,DAT_ram_00566858);
        this.m_OnLineSelection = param1_02;
        param1_03 = (TMP_TextEventHandler_LinkSelectionEvent) new TMPro_TMP_TextEventHandler_LinkSelectionEvent();
        unnamed_function_71921(param1_03,DAT_ram_00566868);
        this.m_selectedLink = -1;
        this.m_lastCharIndex = -1;
        this.m_OnLinkSelection = param1_03;
        this.m_lastWordIndex = -1;
        this.m_lastLineIndex = -1;
        unnamed_function_44622(this,0);
    }
}
