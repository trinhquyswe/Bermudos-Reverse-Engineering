// Assembly-CSharp :: TMPro.TMP_TextEventHandler
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
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
	public TMP_TextEventHandler.CharacterSelectionEvent get_onCharacterSelection() { }

	// RVA: 0x3ACC Offset: 0x3ACC VA: 0x3ACC
	public void set_onCharacterSelection(TMP_TextEventHandler.CharacterSelectionEvent value) { }

	// RVA: 0x3ACD Offset: 0x3ACD VA: 0x3ACD
	public TMP_TextEventHandler.SpriteSelectionEvent get_onSpriteSelection() { }

	// RVA: 0x3ACE Offset: 0x3ACE VA: 0x3ACE
	public void set_onSpriteSelection(TMP_TextEventHandler.SpriteSelectionEvent value) { }

	// RVA: 0x3ACF Offset: 0x3ACF VA: 0x3ACF
	public TMP_TextEventHandler.WordSelectionEvent get_onWordSelection() { }

	// RVA: 0x3AD0 Offset: 0x3AD0 VA: 0x3AD0
	public void set_onWordSelection(TMP_TextEventHandler.WordSelectionEvent value) { }

	// RVA: 0x3AD1 Offset: 0x3AD1 VA: 0x3AD1
	public TMP_TextEventHandler.LineSelectionEvent get_onLineSelection() { }

	// RVA: 0x3AD2 Offset: 0x3AD2 VA: 0x3AD2
	public void set_onLineSelection(TMP_TextEventHandler.LineSelectionEvent value) { }

	// RVA: 0x3AD3 Offset: 0x3AD3 VA: 0x3AD3
	public TMP_TextEventHandler.LinkSelectionEvent get_onLinkSelection() { }

	// RVA: 0x3AD4 Offset: 0x3AD4 VA: 0x3AD4
	public void set_onLinkSelection(TMP_TextEventHandler.LinkSelectionEvent value) { }

	// RVA: 0x3AD5 Offset: 0x3AD5 VA: 0x3AD5
	private void Awake() { }

	// RVA: 0x3AD6 Offset: 0x3AD6 VA: 0x3AD6
	private void LateUpdate() { }

	// RVA: 0x3AD7 Offset: 0x3AD7 VA: 0x3AD7 Slot: 4
	public void OnPointerEnter(PointerEventData eventData) { }

	// RVA: 0x3AD8 Offset: 0x3AD8 VA: 0x3AD8 Slot: 5
	public void OnPointerExit(PointerEventData eventData) { }

	// RVA: 0x3AD9 Offset: 0x3AD9 VA: 0x3AD9
	private void SendOnCharacterSelection(char character, int characterIndex) { }

	// RVA: 0x3ADA Offset: 0x3ADA VA: 0x3ADA
	private void SendOnSpriteSelection(char character, int characterIndex) { }

	// RVA: 0x3ADB Offset: 0x3ADB VA: 0x3ADB
	private void SendOnWordSelection(string word, int charIndex, int length) { }

	// RVA: 0x3ADC Offset: 0x3ADC VA: 0x3ADC
	private void SendOnLineSelection(string line, int charIndex, int length) { }

	// RVA: 0x3ADD Offset: 0x3ADD VA: 0x3ADD
	private void SendOnLinkSelection(string linkID, string linkText, int linkIndex) { }

	// RVA: 0x3ADE Offset: 0x3ADE VA: 0x3ADE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.TMP_TextEventHandler$$get_onCharacterSelection ----
// C#: TMPro_TMP_TextEventHandler_CharacterSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onCharacterSelection (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method);

TMPro_TMP_TextEventHandler_CharacterSelectionEvent_o *
TMPro_TMP_TextEventHandler__get_onCharacterSelection
          (TMPro_TMP_TextEventHandler_o *__this,MethodInfo *method)

{
  return (TMPro_TMP_TextEventHandler_CharacterSelectionEvent_o *)__this->m_OnCharacterSelection;
}

// ---- TMPro.TMP_TextEventHandler$$set_onCharacterSelection ----
// C#: void TMPro_TMP_TextEventHandler__set_onCharacterSelection (TMPro_TMP_TextEventHandler_o* __this, TMPro_TMP_TextEventHandler_CharacterSelectionEvent_o* value, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__set_onCharacterSelection
               (TMPro_TMP_TextEventHandler_o *__this,
               TMPro_TMP_TextEventHandler_CharacterSelectionEvent_o *value,MethodInfo *method)

{
  __this->m_OnCharacterSelection = (TMP_TextEventHandler_CharacterSelectionEvent_o *)value;
  return;
}

// ---- TMPro.TMP_TextEventHandler$$get_onSpriteSelection ----
// C#: TMPro_TMP_TextEventHandler_SpriteSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onSpriteSelection (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method);

TMPro_TMP_TextEventHandler_SpriteSelectionEvent_o *
TMPro_TMP_TextEventHandler__get_onSpriteSelection
          (TMPro_TMP_TextEventHandler_o *__this,MethodInfo *method)

{
  return (TMPro_TMP_TextEventHandler_SpriteSelectionEvent_o *)__this->m_OnSpriteSelection;
}

// ---- TMPro.TMP_TextEventHandler$$set_onSpriteSelection ----
// C#: void TMPro_TMP_TextEventHandler__set_onSpriteSelection (TMPro_TMP_TextEventHandler_o* __this, TMPro_TMP_TextEventHandler_SpriteSelectionEvent_o* value, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__set_onSpriteSelection
               (TMPro_TMP_TextEventHandler_o *__this,
               TMPro_TMP_TextEventHandler_SpriteSelectionEvent_o *value,MethodInfo *method)

{
  __this->m_OnSpriteSelection = (TMP_TextEventHandler_SpriteSelectionEvent_o *)value;
  return;
}

// ---- TMPro.TMP_TextEventHandler$$get_onWordSelection ----
// C#: TMPro_TMP_TextEventHandler_WordSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onWordSelection (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method);

TMPro_TMP_TextEventHandler_WordSelectionEvent_o *
TMPro_TMP_TextEventHandler__get_onWordSelection
          (TMPro_TMP_TextEventHandler_o *__this,MethodInfo *method)

{
  return (TMPro_TMP_TextEventHandler_WordSelectionEvent_o *)__this->m_OnWordSelection;
}

// ---- TMPro.TMP_TextEventHandler$$set_onWordSelection ----
// C#: void TMPro_TMP_TextEventHandler__set_onWordSelection (TMPro_TMP_TextEventHandler_o* __this, TMPro_TMP_TextEventHandler_WordSelectionEvent_o* value, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__set_onWordSelection
               (TMPro_TMP_TextEventHandler_o *__this,
               TMPro_TMP_TextEventHandler_WordSelectionEvent_o *value,MethodInfo *method)

{
  __this->m_OnWordSelection = (TMP_TextEventHandler_WordSelectionEvent_o *)value;
  return;
}

// ---- TMPro.TMP_TextEventHandler$$get_onLineSelection ----
// C#: TMPro_TMP_TextEventHandler_LineSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onLineSelection (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method);

TMPro_TMP_TextEventHandler_LineSelectionEvent_o *
TMPro_TMP_TextEventHandler__get_onLineSelection
          (TMPro_TMP_TextEventHandler_o *__this,MethodInfo *method)

{
  return (TMPro_TMP_TextEventHandler_LineSelectionEvent_o *)__this->m_OnLineSelection;
}

// ---- TMPro.TMP_TextEventHandler$$set_onLineSelection ----
// C#: void TMPro_TMP_TextEventHandler__set_onLineSelection (TMPro_TMP_TextEventHandler_o* __this, TMPro_TMP_TextEventHandler_LineSelectionEvent_o* value, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__set_onLineSelection
               (TMPro_TMP_TextEventHandler_o *__this,
               TMPro_TMP_TextEventHandler_LineSelectionEvent_o *value,MethodInfo *method)

{
  __this->m_OnLineSelection = (TMP_TextEventHandler_LineSelectionEvent_o *)value;
  return;
}

// ---- TMPro.TMP_TextEventHandler$$get_onLinkSelection ----
// C#: TMPro_TMP_TextEventHandler_LinkSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onLinkSelection (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method);

TMPro_TMP_TextEventHandler_LinkSelectionEvent_o *
TMPro_TMP_TextEventHandler__get_onLinkSelection
          (TMPro_TMP_TextEventHandler_o *__this,MethodInfo *method)

{
  return (TMPro_TMP_TextEventHandler_LinkSelectionEvent_o *)__this->m_OnLinkSelection;
}

// ---- TMPro.TMP_TextEventHandler$$set_onLinkSelection ----
// C#: void TMPro_TMP_TextEventHandler__set_onLinkSelection (TMPro_TMP_TextEventHandler_o* __this, TMPro_TMP_TextEventHandler_LinkSelectionEvent_o* value, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__set_onLinkSelection
               (TMPro_TMP_TextEventHandler_o *__this,
               TMPro_TMP_TextEventHandler_LinkSelectionEvent_o *value,MethodInfo *method)

{
  __this->m_OnLinkSelection = (TMP_TextEventHandler_LinkSelectionEvent_o *)value;
  return;
}

// ---- TMPro.TMP_TextEventHandler$$Awake ----
// C#: void TMPro_TMP_TextEventHandler__Awake (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__Awake(TMPro_TMP_TextEventHandler_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  TMP_Text_o *param1;
  undefined4 param1_00;
  int iVar2;
  Canvas_o *param1_01;
  Camera_o *pCVar3;
  
  if (DAT_ram_0066484b == '\0') {
    unnamed_function_1099(&DAT_ram_00569b48);
    unnamed_function_1099(&DAT_ram_00569b18);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&TMPro_TextMeshProUGUI_var);
    unnamed_function_1099(&System_Type_TypeInfo);
    DAT_ram_0066484b = '\x01';
  }
  uVar1 = unnamed_function_44644(__this,0);
  param1 = (TMP_Text_o *)unnamed_function_73836(uVar1,DAT_ram_00569b18);
  __this->m_TextComponent = param1;
  param1_00 = unnamed_function_82118(param1);
  uVar1 = TMPro_TextMeshProUGUI_var;
  if (*(int *)(System_Type_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Type_TypeInfo);
  }
  uVar1 = unnamed_function_83913(uVar1,0);
  iVar2 = unnamed_function_7515(param1_00,uVar1,0);
  if (iVar2 == 0) {
    pCVar3 = (Camera_o *)unnamed_function_52349(0);
  }
  else {
    uVar1 = unnamed_function_44644(__this,0);
    param1_01 = (Canvas_o *)unnamed_function_73853(uVar1,DAT_ram_00569b48);
    __this->m_Canvas = param1_01;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    pCVar3 = (Camera_o *)0x0;
    iVar2 = unnamed_function_44679(param1_01,0,0);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = unnamed_function_16257(__this->m_Canvas,0);
    if (iVar2 != 0) {
      pCVar3 = (Camera_o *)unnamed_function_16288(__this->m_Canvas,0);
    }
  }
  __this->m_Camera = pCVar3;
  return;
}

// ---- TMPro.TMP_TextEventHandler$$LateUpdate ----
// C#: void TMPro_TMP_TextEventHandler__LateUpdate (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__LateUpdate(TMPro_TMP_TextEventHandler_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 param2;
  undefined4 uVar4;
  Camera_o *pCVar5;
  TMP_Text_o *pTVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int param2_00;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_0066484c == '\0') {
    unnamed_function_1099(&char___TypeInfo);
    unnamed_function_1099(&TMPro_TMP_TextUtilities_TypeInfo);
    DAT_ram_0066484c = '\x01';
  }
  local_8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  uVar2 = unnamed_function_23147(__this->m_TextComponent,0);
  unnamed_function_12103(&local_40,0);
  pCVar5 = __this->m_Camera;
  if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
  }
  local_48 = local_38;
  local_50 = local_40;
  iVar3 = unnamed_function_24186(uVar2,&local_50,pCVar5,0);
  if (iVar3 == 0) {
    __this->m_selectedLink = -1;
    __this->m_lastCharIndex = -1;
    __this->m_lastWordIndex = -1;
    __this->m_lastLineIndex = -1;
  }
  else {
    pTVar6 = __this->m_TextComponent;
    unnamed_function_12103(&local_40,0);
    pCVar5 = __this->m_Camera;
    if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
    }
    local_58 = local_38;
    local_60 = local_40;
    iVar3 = unnamed_function_24187(pTVar6,&local_60,pCVar5,1,0);
    if ((iVar3 != -1) && (iVar3 != __this->m_lastCharIndex)) {
      __this->m_lastCharIndex = iVar3;
      iVar11 = *(int *)(__this->m_TextComponent[0xa8]._opaque + 0x2c) + iVar3 * 0x164;
      puVar7 = (ushort *)(iVar11 + 0x10);
      iVar11 = *(int *)(iVar11 + 0x1c);
      if (iVar11 == 0) {
        uVar1 = *puVar7;
        if (DAT_ram_0066484d == '\0') {
          unnamed_function_1099(&DAT_ram_0056683c);
          DAT_ram_0066484d = '\x01';
        }
        if (__this->m_OnCharacterSelection != (TMP_TextEventHandler_CharacterSelectionEvent_o *)0x0)
        {
          unnamed_function_71958(__this->m_OnCharacterSelection,(uint)uVar1,iVar3,DAT_ram_0056683c);
        }
      }
      else if (iVar11 == 1) {
        uVar1 = *puVar7;
        if (DAT_ram_0066484e == '\0') {
          unnamed_function_1099(&DAT_ram_0056683c);
          DAT_ram_0066484e = '\x01';
        }
        if (__this->m_OnSpriteSelection != (TMP_TextEventHandler_SpriteSelectionEvent_o *)0x0) {
          unnamed_function_71958(__this->m_OnSpriteSelection,(uint)uVar1,iVar3,DAT_ram_0056683c);
        }
      }
    }
    pTVar6 = __this->m_TextComponent;
    unnamed_function_12103(&local_40,0);
    pCVar5 = __this->m_Camera;
    if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
    }
    local_68 = local_38;
    local_70 = local_40;
    iVar3 = unnamed_function_24188(pTVar6,&local_70,pCVar5,0);
    if ((iVar3 != -1) && (iVar3 != __this->m_lastWordIndex)) {
      __this->m_lastWordIndex = iVar3;
      iVar3 = *(int *)(__this->m_TextComponent[0xa8]._opaque + 0x30) + iVar3 * 0x10;
      local_10 = *(undefined8 *)(iVar3 + 0x10);
      local_8 = *(undefined8 *)(iVar3 + 0x18);
      param2 = unnamed_function_23503(&local_10,0);
      uVar4 = local_8._4_4_;
      uVar2 = local_10._4_4_;
      if (DAT_ram_0066484f == '\0') {
        unnamed_function_1099(&DAT_ram_00566860);
        DAT_ram_0066484f = '\x01';
      }
      if (__this->m_OnWordSelection != (TMP_TextEventHandler_WordSelectionEvent_o *)0x0) {
        unnamed_function_71976(__this->m_OnWordSelection,param2,uVar2,uVar4,DAT_ram_00566860);
      }
    }
    pTVar6 = __this->m_TextComponent;
    unnamed_function_12103(&local_40,0);
    pCVar5 = __this->m_Camera;
    if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
    }
    local_78 = local_38;
    local_80 = local_40;
    iVar3 = unnamed_function_24190(pTVar6,&local_80,pCVar5,0);
    if ((iVar3 != -1) && (iVar3 != __this->m_lastLineIndex)) {
      __this->m_lastLineIndex = iVar3;
      iVar3 = *(int *)(__this->m_TextComponent[0xa8]._opaque + 0x38) + iVar3 * 0x5c;
      iVar11 = *(int *)(iVar3 + 0x24);
      param2_00 = *(int *)(iVar3 + 0x14);
      iVar3 = unnamed_function_1050(char___TypeInfo,param2_00);
      if (0 < param2_00) {
        iVar8 = *(int *)(__this->m_TextComponent[0xa8]._opaque + 0x2c);
        iVar9 = *(int *)(iVar8 + 0xc);
        if (iVar9 < 1) {
          iVar9 = 0;
        }
        iVar10 = 0;
        do {
          if (iVar10 == iVar9) break;
          *(undefined2 *)(iVar3 + iVar10 * 2 + 0x10) =
               *(undefined2 *)(iVar8 + (iVar10 + iVar11) * 0x164 + 0x10);
          iVar10 = iVar10 + 1;
        } while (iVar10 != param2_00);
      }
      uVar2 = unnamed_function_81471(0,iVar3,0);
      if (DAT_ram_00664850 == '\0') {
        unnamed_function_1099(&DAT_ram_00566860);
        DAT_ram_00664850 = '\x01';
      }
      if (__this->m_OnLineSelection != (TMP_TextEventHandler_LineSelectionEvent_o *)0x0) {
        unnamed_function_71976(__this->m_OnLineSelection,uVar2,iVar11,param2_00,DAT_ram_00566860);
      }
    }
    pTVar6 = __this->m_TextComponent;
    unnamed_function_12103(&local_40,0);
    pCVar5 = __this->m_Camera;
    if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
    }
    local_88 = local_38;
    local_90 = local_40;
    iVar3 = unnamed_function_24191(pTVar6,&local_90,pCVar5,0);
    if ((iVar3 != -1) && (iVar3 != __this->m_selectedLink)) {
      __this->m_selectedLink = iVar3;
      iVar11 = *(int *)(__this->m_TextComponent[0xa8]._opaque + 0x34) + iVar3 * 0x1c;
      local_30 = *(undefined8 *)(iVar11 + 0x10);
      local_28 = *(undefined8 *)(iVar11 + 0x18);
      local_20 = *(undefined8 *)(iVar11 + 0x20);
      local_18 = *(undefined4 *)(iVar11 + 0x28);
      uVar2 = unnamed_function_23500(&local_30,0);
      uVar4 = unnamed_function_23498(&local_30,0);
      if (DAT_ram_00664851 == '\0') {
        unnamed_function_1099(&DAT_ram_00566870);
        DAT_ram_00664851 = '\x01';
      }
      if (__this->m_OnLinkSelection != (TMP_TextEventHandler_LinkSelectionEvent_o *)0x0) {
        unnamed_function_71979(__this->m_OnLinkSelection,uVar2,uVar4,iVar3,DAT_ram_00566870);
      }
    }
  }
  return;
}

// ---- TMPro.TMP_TextEventHandler$$OnPointerEnter ----
// C#: void TMPro_TMP_TextEventHandler__OnPointerEnter (TMPro_TMP_TextEventHandler_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__OnPointerEnter
               (TMPro_TMP_TextEventHandler_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  return;
}

// ---- TMPro.TMP_TextEventHandler$$OnPointerExit ----
// C#: void TMPro_TMP_TextEventHandler__OnPointerExit (TMPro_TMP_TextEventHandler_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__OnPointerEnter
               (TMPro_TMP_TextEventHandler_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  return;
}

// ---- TMPro.TMP_TextEventHandler$$SendOnCharacterSelection ----
// C#: void TMPro_TMP_TextEventHandler__SendOnCharacterSelection (TMPro_TMP_TextEventHandler_o* __this, uint16_t character, int32_t characterIndex, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__SendOnCharacterSelection
               (TMPro_TMP_TextEventHandler_o *__this,ushort character,int characterIndex,
               MethodInfo *method)

{
  undefined2 in_register_20000012;
  
  if (DAT_ram_0066484d == '\0') {
    unnamed_function_1099(&DAT_ram_0056683c);
    DAT_ram_0066484d = '\x01';
  }
  if (__this->m_OnCharacterSelection != (TMP_TextEventHandler_CharacterSelectionEvent_o *)0x0) {
    unnamed_function_71958
              (__this->m_OnCharacterSelection,CONCAT22(in_register_20000012,character),
               characterIndex,DAT_ram_0056683c);
  }
  return;
}

// ---- TMPro.TMP_TextEventHandler$$SendOnSpriteSelection ----
// C#: void TMPro_TMP_TextEventHandler__SendOnSpriteSelection (TMPro_TMP_TextEventHandler_o* __this, uint16_t character, int32_t characterIndex, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__SendOnSpriteSelection
               (TMPro_TMP_TextEventHandler_o *__this,ushort character,int characterIndex,
               MethodInfo *method)

{
  undefined2 in_register_20000012;
  
  if (DAT_ram_0066484e == '\0') {
    unnamed_function_1099(&DAT_ram_0056683c);
    DAT_ram_0066484e = '\x01';
  }
  if (__this->m_OnSpriteSelection != (TMP_TextEventHandler_SpriteSelectionEvent_o *)0x0) {
    unnamed_function_71958
              (__this->m_OnSpriteSelection,CONCAT22(in_register_20000012,character),characterIndex,
               DAT_ram_0056683c);
  }
  return;
}

// ---- TMPro.TMP_TextEventHandler$$SendOnWordSelection ----
// C#: void TMPro_TMP_TextEventHandler__SendOnWordSelection (TMPro_TMP_TextEventHandler_o* __this, System_String_o* word, int32_t charIndex, int32_t length, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__SendOnWordSelection
               (TMPro_TMP_TextEventHandler_o *__this,System_String_o *word,int charIndex,int length,
               MethodInfo *method)

{
  if (DAT_ram_0066484f == '\0') {
    unnamed_function_1099(&DAT_ram_00566860);
    DAT_ram_0066484f = '\x01';
  }
  if (__this->m_OnWordSelection != (TMP_TextEventHandler_WordSelectionEvent_o *)0x0) {
    unnamed_function_71976(__this->m_OnWordSelection,word,charIndex,length,DAT_ram_00566860);
  }
  return;
}

// ---- TMPro.TMP_TextEventHandler$$SendOnLineSelection ----
// C#: void TMPro_TMP_TextEventHandler__SendOnLineSelection (TMPro_TMP_TextEventHandler_o* __this, System_String_o* line, int32_t charIndex, int32_t length, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__SendOnLineSelection
               (TMPro_TMP_TextEventHandler_o *__this,System_String_o *line,int charIndex,int length,
               MethodInfo *method)

{
  if (DAT_ram_00664850 == '\0') {
    unnamed_function_1099(&DAT_ram_00566860);
    DAT_ram_00664850 = '\x01';
  }
  if (__this->m_OnLineSelection != (TMP_TextEventHandler_LineSelectionEvent_o *)0x0) {
    unnamed_function_71976(__this->m_OnLineSelection,line,charIndex,length,DAT_ram_00566860);
  }
  return;
}

// ---- TMPro.TMP_TextEventHandler$$SendOnLinkSelection ----
// C#: void TMPro_TMP_TextEventHandler__SendOnLinkSelection (TMPro_TMP_TextEventHandler_o* __this, System_String_o* linkID, System_String_o* linkText, int32_t linkIndex, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__SendOnLinkSelection
               (TMPro_TMP_TextEventHandler_o *__this,System_String_o *linkID,
               System_String_o *linkText,int linkIndex,MethodInfo *method)

{
  if (DAT_ram_00664851 == '\0') {
    unnamed_function_1099(&DAT_ram_00566870);
    DAT_ram_00664851 = '\x01';
  }
  if (__this->m_OnLinkSelection != (TMP_TextEventHandler_LinkSelectionEvent_o *)0x0) {
    unnamed_function_71979(__this->m_OnLinkSelection,linkID,linkText,linkIndex,DAT_ram_00566870);
  }
  return;
}

// ---- TMPro.TMP_TextEventHandler$$.ctor ----
// C#: void TMPro_TMP_TextEventHandler___ctor (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method);

void TMPro_TMP_TextEventHandler___ctor(TMPro_TMP_TextEventHandler_o *__this,MethodInfo *method)

{
  TMP_TextEventHandler_CharacterSelectionEvent_o *param1;
  TMP_TextEventHandler_SpriteSelectionEvent_o *param1_00;
  TMP_TextEventHandler_WordSelectionEvent_o *param1_01;
  TMP_TextEventHandler_LineSelectionEvent_o *param1_02;
  TMP_TextEventHandler_LinkSelectionEvent_o *param1_03;
  
  if (DAT_ram_00664852 == '\0') {
    unnamed_function_1099(&TMPro_TMP_TextEventHandler_CharacterSelectionEvent_TypeInfo);
    unnamed_function_1099(&TMPro_TMP_TextEventHandler_LineSelectionEvent_TypeInfo);
    unnamed_function_1099(&TMPro_TMP_TextEventHandler_LinkSelectionEvent_TypeInfo);
    unnamed_function_1099(&TMPro_TMP_TextEventHandler_SpriteSelectionEvent_TypeInfo);
    unnamed_function_1099(&TMPro_TMP_TextEventHandler_WordSelectionEvent_TypeInfo);
    DAT_ram_00664852 = '\x01';
  }
  param1 = (TMP_TextEventHandler_CharacterSelectionEvent_o *)
           unnamed_function_95402(TMPro_TMP_TextEventHandler_CharacterSelectionEvent_TypeInfo);
  if (DAT_ram_00664853 == '\0') {
    unnamed_function_1099(&DAT_ram_00566834);
    DAT_ram_00664853 = '\x01';
  }
  unnamed_function_71921(param1,DAT_ram_00566834);
  __this->m_OnCharacterSelection = param1;
  param1_00 = (TMP_TextEventHandler_SpriteSelectionEvent_o *)
              unnamed_function_95402(TMPro_TMP_TextEventHandler_SpriteSelectionEvent_TypeInfo);
  if (DAT_ram_00664854 == '\0') {
    unnamed_function_1099(&DAT_ram_00566834);
    DAT_ram_00664854 = '\x01';
  }
  unnamed_function_71921(param1_00,DAT_ram_00566834);
  __this->m_OnSpriteSelection = param1_00;
  param1_01 = (TMP_TextEventHandler_WordSelectionEvent_o *)
              unnamed_function_95402(TMPro_TMP_TextEventHandler_WordSelectionEvent_TypeInfo);
  if (DAT_ram_00664855 == '\0') {
    unnamed_function_1099(&DAT_ram_00566858);
    DAT_ram_00664855 = '\x01';
  }
  unnamed_function_71921(param1_01,DAT_ram_00566858);
  __this->m_OnWordSelection = param1_01;
  param1_02 = (TMP_TextEventHandler_LineSelectionEvent_o *)
              unnamed_function_95402(TMPro_TMP_TextEventHandler_LineSelectionEvent_TypeInfo);
  if (DAT_ram_00664856 == '\0') {
    unnamed_function_1099(&DAT_ram_00566858);
    DAT_ram_00664856 = '\x01';
  }
  unnamed_function_71921(param1_02,DAT_ram_00566858);
  __this->m_OnLineSelection = param1_02;
  param1_03 = (TMP_TextEventHandler_LinkSelectionEvent_o *)
              unnamed_function_95402(TMPro_TMP_TextEventHandler_LinkSelectionEvent_TypeInfo);
  if (DAT_ram_00664857 == '\0') {
    unnamed_function_1099(&DAT_ram_00566868);
    DAT_ram_00664857 = '\x01';
  }
  unnamed_function_71921(param1_03,DAT_ram_00566868);
  __this->m_selectedLink = -1;
  __this->m_lastCharIndex = -1;
  __this->m_OnLinkSelection = param1_03;
  __this->m_lastWordIndex = -1;
  __this->m_lastLineIndex = -1;
  unnamed_function_44622(__this,0);
  return;
}

