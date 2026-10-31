// Assembly-CSharp :: ChatController
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ChatController : MonoBehaviour // TypeDefIndex: 5732
{
	// Fields
	public TMP_InputField ChatInputField; // 0x10
	public TMP_Text ChatDisplayOutput; // 0x14
	public Scrollbar ChatScrollbar; // 0x18

	// Methods

	// RVA: 0x3AB6 Offset: 0x3AB6 VA: 0x3AB6
	private void OnEnable() { }

	// RVA: 0x3AB7 Offset: 0x3AB7 VA: 0x3AB7
	private void OnDisable() { }

	// RVA: 0x3AB8 Offset: 0x3AB8 VA: 0x3AB8
	private void AddToChatOutput(string newText) { }

	// RVA: 0x3AB9 Offset: 0x3AB9 VA: 0x3AB9
	public void .ctor() { }
}

===== C# end =====
*/

// ---- ChatController$$OnEnable ----
// C#: void ChatController__OnEnable (ChatController_o* __this, const MethodInfo* method);

void ChatController__OnEnable(ChatController_o *__this,MethodInfo *method)

{
  undefined4 param1;
  int param1_00;
  
  if (DAT_ram_00664840 == '\0') {
    unnamed_function_1099(&DAT_ram_00567b4c);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_string__TypeInfo);
    unnamed_function_1099(&DAT_ram_005667f8);
    DAT_ram_00664840 = '\x01';
  }
  param1_00 = __this->ChatInputField[0x4b]._opaque;
  param1 = unnamed_function_95402(UnityEngine_Events_UnityAction_string__TypeInfo);
  unnamed_function_71904(param1,__this,DAT_ram_00567b4c,0);
  unnamed_function_71922(param1_00,param1,DAT_ram_005667f8);
  return;
}

// ---- ChatController$$OnDisable ----
// C#: void ChatController__OnDisable (ChatController_o* __this, const MethodInfo* method);

void ChatController__OnDisable(ChatController_o *__this,MethodInfo *method)

{
  undefined4 param1;
  int param1_00;
  
  if (DAT_ram_00664841 == '\0') {
    unnamed_function_1099(&DAT_ram_00567b4c);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_string__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566800);
    DAT_ram_00664841 = '\x01';
  }
  param1_00 = __this->ChatInputField[0x4b]._opaque;
  param1 = unnamed_function_95402(UnityEngine_Events_UnityAction_string__TypeInfo);
  unnamed_function_71904(param1,__this,DAT_ram_00567b4c,0);
  unnamed_function_71923(param1_00,param1,DAT_ram_00566800);
  return;
}

// ---- ChatController$$AddToChatOutput ----
// C#: void ChatController__AddToChatOutput (ChatController_o* __this, System_String_o* newText, const MethodInfo* method);

void ChatController__AddToChatOutput
               (ChatController_o *__this,System_String_o *newText,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TMP_Text_o *pTVar4;
  int iVar5;
  undefined4 local_c;
  undefined8 local_8;
  
  if (DAT_ram_00664842 == '\0') {
    unnamed_function_1099(&System_DateTime_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&string_TypeInfo);
    unnamed_function_1099(&StringLiteral_43 /* "\n" */);
    unnamed_function_1099(&StringLiteral_1220 /* "</color>] " */);
    unnamed_function_1099(&StringLiteral_10542 /* "d2" */);
    unnamed_function_1099(&StringLiteral_1161 /* ":" */);
    unnamed_function_1099(&StringLiteral_8996 /* "[<#FFFF80>" */);
    DAT_ram_00664842 = '\x01';
  }
  unnamed_function_23750(__this->ChatInputField,**(undefined4 **)(string_TypeInfo + 0x5c),0);
  if (*(int *)(System_DateTime_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_DateTime_TypeInfo);
  }
  local_8 = unnamed_function_82222(0);
  iVar1 = unnamed_function_1050(string___TypeInfo,8);
  *(undefined4 *)(iVar1 + 0x10) = StringLiteral_8996 /* "[<#FFFF80>" */;
  local_c = unnamed_function_82210(&local_8,0);
  uVar2 = unnamed_function_83646(&local_c,StringLiteral_10542 /* "d2" */,0);
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = StringLiteral_1161 /* ":" */;
  local_c = unnamed_function_82218(&local_8,0);
  uVar2 = unnamed_function_83646(&local_c,StringLiteral_10542 /* "d2" */,0);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x20) = StringLiteral_1161 /* ":" */;
  local_c = unnamed_function_82224(&local_8,0);
  uVar2 = unnamed_function_83646(&local_c,StringLiteral_10542 /* "d2" */,0);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  uVar2 = StringLiteral_1220 /* "</color>] " */;
  *(System_String_o **)(iVar1 + 0x2c) = newText;
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  uVar2 = unnamed_function_81509(iVar1,0);
  pTVar4 = __this->ChatDisplayOutput;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(pTVar4,0,0);
  if (iVar1 != 0) {
    iVar1 = __this->ChatDisplayOutput->_opaque;
    uVar3 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2c8) * 4))
                      (__this->ChatDisplayOutput,*(undefined4 *)(iVar1 + 0x2cc));
    iVar1 = unnamed_function_81494(uVar3,**(undefined4 **)(string_TypeInfo + 0x5c),0);
    pTVar4 = __this->ChatDisplayOutput;
    iVar5 = pTVar4->_opaque;
    if (iVar1 == 0) {
      uVar3 = (**(code **)((ulonglong)*(uint *)(iVar5 + 0x2c8) * 4))
                        (pTVar4,*(undefined4 *)(iVar5 + 0x2cc));
      uVar2 = unnamed_function_81504(uVar3,StringLiteral_43 /* "\n" */,uVar2,0);
      (**(code **)((ulonglong)*(uint *)(pTVar4->_opaque + 0x2d0) * 4))
                (pTVar4,uVar2,*(undefined4 *)(pTVar4->_opaque + 0x2d4));
    }
    else {
      (**(code **)((ulonglong)*(uint *)(iVar5 + 0x2d0) * 4))
                (pTVar4,uVar2,*(undefined4 *)(iVar5 + 0x2d4));
    }
  }
  unnamed_function_23915(__this->ChatInputField,0);
  unnamed_function_45642(__this->ChatScrollbar,0.0,0);
  return;
}

// ---- ChatController$$.ctor ----
// C#: void ChatController___ctor (ChatController_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

