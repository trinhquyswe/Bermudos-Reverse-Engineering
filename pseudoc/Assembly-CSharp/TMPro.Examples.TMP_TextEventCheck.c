// Assembly-CSharp :: TMPro.Examples.TMP_TextEventCheck
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TMP_TextEventCheck : MonoBehaviour // TypeDefIndex: 5778
{
	// Fields
	public TMP_TextEventHandler TextEventHandler; // 0x10
	private TMP_Text m_TextComponent; // 0x14

	// Methods

	// RVA: 0x3B58 Offset: 0x3B58 VA: 0x3B58
	private void OnEnable() { }

	// RVA: 0x3B59 Offset: 0x3B59 VA: 0x3B59
	private void OnDisable() { }

	// RVA: 0x3B5A Offset: 0x3B5A VA: 0x3B5A
	private void OnCharacterSelection(char c, int index) { }

	// RVA: 0x3B5B Offset: 0x3B5B VA: 0x3B5B
	private void OnSpriteSelection(char c, int index) { }

	// RVA: 0x3B5C Offset: 0x3B5C VA: 0x3B5C
	private void OnWordSelection(string word, int firstCharacterIndex, int length) { }

	// RVA: 0x3B5D Offset: 0x3B5D VA: 0x3B5D
	private void OnLineSelection(string lineText, int firstCharacterIndex, int length) { }

	// RVA: 0x3B5E Offset: 0x3B5E VA: 0x3B5E
	private void OnLinkSelection(string linkID, string linkText, int linkIndex) { }

	// RVA: 0x3B5F Offset: 0x3B5F VA: 0x3B5F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TMP_TextEventCheck$$OnEnable ----
// C#: void TMPro_Examples_TMP_TextEventCheck__OnEnable (TMPro_Examples_TMP_TextEventCheck_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_TextEventCheck__OnEnable
               (TMPro_Examples_TMP_TextEventCheck_o *__this,MethodInfo *method)

{
  int iVar1;
  TMP_Text_o *pTVar2;
  undefined4 uVar3;
  TMPro_TMP_TextEventHandler_o *param1;
  TMP_TextEventHandler_CharacterSelectionEvent_o *param1_00;
  TMP_TextEventHandler_SpriteSelectionEvent_o *param1_01;
  TMP_TextEventHandler_WordSelectionEvent_o *param1_02;
  TMP_TextEventHandler_LineSelectionEvent_o *param1_03;
  TMP_TextEventHandler_LinkSelectionEvent_o *param1_04;
  
  if (DAT_ram_00664885 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f3c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056ce44);
    unnamed_function_1099(&DAT_ram_0056ce48);
    unnamed_function_1099(&DAT_ram_0056ce4c);
    unnamed_function_1099(&DAT_ram_0056ce50);
    unnamed_function_1099(&DAT_ram_0056ce54);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_char__int__TypeInfo);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_string__int__int__TypeInfo);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_string__string__int__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566838);
    unnamed_function_1099(&DAT_ram_0056686c);
    unnamed_function_1099(&DAT_ram_0056685c);
    DAT_ram_00664885 = '\x01';
  }
  param1 = __this->TextEventHandler;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,0,0);
  if (iVar1 != 0) {
    pTVar2 = (TMP_Text_o *)unnamed_function_65370(__this->TextEventHandler,DAT_ram_00567f3c);
    __this->m_TextComponent = pTVar2;
    param1_00 = __this->TextEventHandler->m_OnCharacterSelection;
    uVar3 = unnamed_function_95402(UnityEngine_Events_UnityAction_char__int__TypeInfo);
    unnamed_function_71910(uVar3,__this,DAT_ram_0056ce44,0);
    unnamed_function_71954(param1_00,uVar3,DAT_ram_00566838);
    param1_01 = __this->TextEventHandler->m_OnSpriteSelection;
    uVar3 = unnamed_function_95402(UnityEngine_Events_UnityAction_char__int__TypeInfo);
    unnamed_function_71910(uVar3,__this,DAT_ram_0056ce50,0);
    unnamed_function_71954(param1_01,uVar3,DAT_ram_00566838);
    param1_02 = __this->TextEventHandler->m_OnWordSelection;
    uVar3 = unnamed_function_95402(UnityEngine_Events_UnityAction_string__int__int__TypeInfo);
    unnamed_function_71917(uVar3,__this,DAT_ram_0056ce54,0);
    unnamed_function_71972(param1_02,uVar3,DAT_ram_0056685c);
    param1_03 = __this->TextEventHandler->m_OnLineSelection;
    uVar3 = unnamed_function_95402(UnityEngine_Events_UnityAction_string__int__int__TypeInfo);
    unnamed_function_71917(uVar3,__this,DAT_ram_0056ce48,0);
    unnamed_function_71972(param1_03,uVar3,DAT_ram_0056685c);
    param1_04 = __this->TextEventHandler->m_OnLinkSelection;
    uVar3 = unnamed_function_95402(UnityEngine_Events_UnityAction_string__string__int__TypeInfo);
    unnamed_function_71918(uVar3,__this,DAT_ram_0056ce4c,0);
    unnamed_function_71972(param1_04,uVar3,DAT_ram_0056686c);
  }
  return;
}

// ---- TMPro.Examples.TMP_TextEventCheck$$OnDisable ----
// C#: void TMPro_Examples_TMP_TextEventCheck__OnDisable (TMPro_Examples_TMP_TextEventCheck_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_TextEventCheck__OnDisable
               (TMPro_Examples_TMP_TextEventCheck_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  TMPro_TMP_TextEventHandler_o *param1;
  TMP_TextEventHandler_CharacterSelectionEvent_o *param1_00;
  TMP_TextEventHandler_SpriteSelectionEvent_o *param1_01;
  TMP_TextEventHandler_WordSelectionEvent_o *param1_02;
  TMP_TextEventHandler_LineSelectionEvent_o *param1_03;
  TMP_TextEventHandler_LinkSelectionEvent_o *param1_04;
  
  if (DAT_ram_00664886 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056ce44);
    unnamed_function_1099(&DAT_ram_0056ce48);
    unnamed_function_1099(&DAT_ram_0056ce4c);
    unnamed_function_1099(&DAT_ram_0056ce50);
    unnamed_function_1099(&DAT_ram_0056ce54);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_char__int__TypeInfo);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_string__int__int__TypeInfo);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_string__string__int__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566840);
    unnamed_function_1099(&DAT_ram_00566864);
    unnamed_function_1099(&DAT_ram_00566874);
    DAT_ram_00664886 = '\x01';
  }
  param1 = __this->TextEventHandler;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,0,0);
  if (iVar1 != 0) {
    param1_00 = __this->TextEventHandler->m_OnCharacterSelection;
    uVar2 = unnamed_function_95402(UnityEngine_Events_UnityAction_char__int__TypeInfo);
    unnamed_function_71910(uVar2,__this,DAT_ram_0056ce44,0);
    unnamed_function_71923(param1_00,uVar2,DAT_ram_00566840);
    param1_01 = __this->TextEventHandler->m_OnSpriteSelection;
    uVar2 = unnamed_function_95402(UnityEngine_Events_UnityAction_char__int__TypeInfo);
    unnamed_function_71910(uVar2,__this,DAT_ram_0056ce50,0);
    unnamed_function_71923(param1_01,uVar2,DAT_ram_00566840);
    param1_02 = __this->TextEventHandler->m_OnWordSelection;
    uVar2 = unnamed_function_95402(UnityEngine_Events_UnityAction_string__int__int__TypeInfo);
    unnamed_function_71917(uVar2,__this,DAT_ram_0056ce54,0);
    unnamed_function_71923(param1_02,uVar2,DAT_ram_00566864);
    param1_03 = __this->TextEventHandler->m_OnLineSelection;
    uVar2 = unnamed_function_95402(UnityEngine_Events_UnityAction_string__int__int__TypeInfo);
    unnamed_function_71917(uVar2,__this,DAT_ram_0056ce48,0);
    unnamed_function_71923(param1_03,uVar2,DAT_ram_00566864);
    param1_04 = __this->TextEventHandler->m_OnLinkSelection;
    uVar2 = unnamed_function_95402(UnityEngine_Events_UnityAction_string__string__int__TypeInfo);
    unnamed_function_71918(uVar2,__this,DAT_ram_0056ce4c,0);
    unnamed_function_71923(param1_04,uVar2,DAT_ram_00566874);
  }
  return;
}

// ---- TMPro.Examples.TMP_TextEventCheck$$OnCharacterSelection ----
// C#: void TMPro_Examples_TMP_TextEventCheck__OnCharacterSelection (TMPro_Examples_TMP_TextEventCheck_o* __this, uint16_t c, int32_t index, const MethodInfo* method);

void TMPro_Examples_TMP_TextEventCheck__OnCharacterSelection
               (TMPro_Examples_TMP_TextEventCheck_o *__this,ushort c,int index,MethodInfo *method)

{
  int param1;
  undefined4 uVar1;
  int local_8;
  ushort local_2;
  
  local_8 = index;
  local_2 = c;
  if (DAT_ram_00664887 == '\0') {
    unnamed_function_1099(&char_TypeInfo);
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_213 /* " has been selected." */);
    unnamed_function_1099(&StringLiteral_2633 /* "Character [" */);
    unnamed_function_1099(&StringLiteral_9073 /* "] at Index: " */);
    DAT_ram_00664887 = '\x01';
  }
  param1 = unnamed_function_1050(string___TypeInfo,5);
  *(undefined4 *)(param1 + 0x10 /* TextEventHandler */) = StringLiteral_2633 /* "Character [" */;
  if (*(int *)(char_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(char_TypeInfo);
  }
  uVar1 = unnamed_function_82584(&local_2,0);
  *(undefined4 *)(param1 + 0x14 /* m_TextComponent */) = uVar1;
  *(undefined4 *)(param1 + 0x18) = StringLiteral_9073 /* "] at Index: " */;
  uVar1 = unnamed_function_83644(&local_8,0);
  *(undefined4 *)(param1 + 0x1c) = uVar1;
  *(undefined4 *)(param1 + 0x20) = StringLiteral_213 /* " has been selected." */;
  uVar1 = unnamed_function_81509(param1,0);
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(uVar1,0);
  return;
}

// ---- TMPro.Examples.TMP_TextEventCheck$$OnSpriteSelection ----
// C#: void TMPro_Examples_TMP_TextEventCheck__OnSpriteSelection (TMPro_Examples_TMP_TextEventCheck_o* __this, uint16_t c, int32_t index, const MethodInfo* method);

void TMPro_Examples_TMP_TextEventCheck__OnSpriteSelection
               (TMPro_Examples_TMP_TextEventCheck_o *__this,ushort c,int index,MethodInfo *method)

{
  int param1;
  undefined4 uVar1;
  int local_8;
  ushort local_2;
  
  local_8 = index;
  local_2 = c;
  if (DAT_ram_00664888 == '\0') {
    unnamed_function_1099(&char_TypeInfo);
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_6850 /* "Sprite [" */);
    unnamed_function_1099(&StringLiteral_213 /* " has been selected." */);
    unnamed_function_1099(&StringLiteral_9073 /* "] at Index: " */);
    DAT_ram_00664888 = '\x01';
  }
  param1 = unnamed_function_1050(string___TypeInfo,5);
  *(undefined4 *)(param1 + 0x10 /* TextEventHandler */) = StringLiteral_6850 /* "Sprite [" */;
  if (*(int *)(char_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(char_TypeInfo);
  }
  uVar1 = unnamed_function_82584(&local_2,0);
  *(undefined4 *)(param1 + 0x14 /* m_TextComponent */) = uVar1;
  *(undefined4 *)(param1 + 0x18) = StringLiteral_9073 /* "] at Index: " */;
  uVar1 = unnamed_function_83644(&local_8,0);
  *(undefined4 *)(param1 + 0x1c) = uVar1;
  *(undefined4 *)(param1 + 0x20) = StringLiteral_213 /* " has been selected." */;
  uVar1 = unnamed_function_81509(param1,0);
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(uVar1,0);
  return;
}

// ---- TMPro.Examples.TMP_TextEventCheck$$OnWordSelection ----
// C#: void TMPro_Examples_TMP_TextEventCheck__OnWordSelection (TMPro_Examples_TMP_TextEventCheck_o* __this, System_String_o* word, int32_t firstCharacterIndex, int32_t length, const MethodInfo* method);

void TMPro_Examples_TMP_TextEventCheck__OnWordSelection
               (TMPro_Examples_TMP_TextEventCheck_o *__this,System_String_o *word,
               int firstCharacterIndex,int length,MethodInfo *method)

{
  int param1;
  undefined4 uVar1;
  int local_8;
  int local_4;
  
  local_8 = length;
  local_4 = firstCharacterIndex;
  if (DAT_ram_00664889 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_9083 /* "] with first character index of " */);
    unnamed_function_1099(&StringLiteral_213 /* " has been selected." */);
    unnamed_function_1099(&StringLiteral_170 /* " and length of " */);
    unnamed_function_1099(&StringLiteral_8818 /* "Word [" */);
    DAT_ram_00664889 = '\x01';
  }
  param1 = unnamed_function_1050(string___TypeInfo,7);
  uVar1 = StringLiteral_8818 /* "Word [" */;
  *(System_String_o **)(param1 + 0x14 /* m_TextComponent */) = word;
  *(undefined4 *)(param1 + 0x10 /* TextEventHandler */) = uVar1;
  *(undefined4 *)(param1 + 0x18) = StringLiteral_9083 /* "] with first character index of " */;
  uVar1 = unnamed_function_83644(&local_4,0);
  *(undefined4 *)(param1 + 0x1c) = uVar1;
  *(undefined4 *)(param1 + 0x20) = StringLiteral_170 /* " and length of " */;
  uVar1 = unnamed_function_83644(&local_8,0);
  *(undefined4 *)(param1 + 0x24) = uVar1;
  *(undefined4 *)(param1 + 0x28) = StringLiteral_213 /* " has been selected." */;
  uVar1 = unnamed_function_81509(param1,0);
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(uVar1,0);
  return;
}

// ---- TMPro.Examples.TMP_TextEventCheck$$OnLineSelection ----
// C#: void TMPro_Examples_TMP_TextEventCheck__OnLineSelection (TMPro_Examples_TMP_TextEventCheck_o* __this, System_String_o* lineText, int32_t firstCharacterIndex, int32_t length, const MethodInfo* method);

void TMPro_Examples_TMP_TextEventCheck__OnLineSelection
               (TMPro_Examples_TMP_TextEventCheck_o *__this,System_String_o *lineText,
               int firstCharacterIndex,int length,MethodInfo *method)

{
  int param1;
  undefined4 uVar1;
  int local_8;
  int local_4;
  
  local_8 = length;
  local_4 = firstCharacterIndex;
  if (DAT_ram_0066488a == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_9083 /* "] with first character index of " */);
    unnamed_function_1099(&StringLiteral_213 /* " has been selected." */);
    unnamed_function_1099(&StringLiteral_170 /* " and length of " */);
    unnamed_function_1099(&StringLiteral_5107 /* "Line [" */);
    DAT_ram_0066488a = '\x01';
  }
  param1 = unnamed_function_1050(string___TypeInfo,7);
  uVar1 = StringLiteral_5107 /* "Line [" */;
  *(System_String_o **)(param1 + 0x14 /* m_TextComponent */) = lineText;
  *(undefined4 *)(param1 + 0x10 /* TextEventHandler */) = uVar1;
  *(undefined4 *)(param1 + 0x18) = StringLiteral_9083 /* "] with first character index of " */;
  uVar1 = unnamed_function_83644(&local_4,0);
  *(undefined4 *)(param1 + 0x1c) = uVar1;
  *(undefined4 *)(param1 + 0x20) = StringLiteral_170 /* " and length of " */;
  uVar1 = unnamed_function_83644(&local_8,0);
  *(undefined4 *)(param1 + 0x24) = uVar1;
  *(undefined4 *)(param1 + 0x28) = StringLiteral_213 /* " has been selected." */;
  uVar1 = unnamed_function_81509(param1,0);
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(uVar1,0);
  return;
}

// ---- TMPro.Examples.TMP_TextEventCheck$$OnLinkSelection ----
// C#: void TMPro_Examples_TMP_TextEventCheck__OnLinkSelection (TMPro_Examples_TMP_TextEventCheck_o* __this, System_String_o* linkID, System_String_o* linkText, int32_t linkIndex, const MethodInfo* method);

void TMPro_Examples_TMP_TextEventCheck__OnLinkSelection
               (TMPro_Examples_TMP_TextEventCheck_o *__this,System_String_o *linkID,
               System_String_o *linkText,int linkIndex,MethodInfo *method)

{
  int param1;
  undefined4 uVar1;
  TMP_Text_o *param1_00;
  int local_4;
  
  local_4 = linkIndex;
  if (DAT_ram_0066488b == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_9072 /* "] and Text \"" */);
    unnamed_function_1099(&StringLiteral_5115 /* "Link Index: " */);
    unnamed_function_1099(&StringLiteral_323 /* "\" has been selected." */);
    unnamed_function_1099(&StringLiteral_298 /* " with ID [" */);
    DAT_ram_0066488b = '\x01';
  }
  param1_00 = __this->m_TextComponent;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  unnamed_function_44679(param1_00,0,0);
  param1 = unnamed_function_1050(string___TypeInfo,7);
  *(undefined4 *)(param1 + 0x10 /* TextEventHandler */) = StringLiteral_5115 /* "Link Index: " */;
  uVar1 = unnamed_function_83644(&local_4,0);
  *(undefined4 *)(param1 + 0x14 /* m_TextComponent */) = uVar1;
  uVar1 = StringLiteral_298 /* " with ID [" */;
  *(System_String_o **)(param1 + 0x1c) = linkID;
  *(undefined4 *)(param1 + 0x18) = uVar1;
  uVar1 = StringLiteral_9072 /* "] and Text \"" */;
  *(System_String_o **)(param1 + 0x24) = linkText;
  *(undefined4 *)(param1 + 0x20) = uVar1;
  *(undefined4 *)(param1 + 0x28) = StringLiteral_323 /* "\" has been selected." */;
  uVar1 = unnamed_function_81509(param1,0);
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(uVar1,0);
  return;
}

// ---- TMPro.Examples.TMP_TextEventCheck$$.ctor ----
// C#: void TMPro_Examples_TMP_TextEventCheck___ctor (TMPro_Examples_TMP_TextEventCheck_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

