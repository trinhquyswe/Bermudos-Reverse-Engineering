// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetSubstring
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetSubstring : Action // TypeDefIndex: 5961
{
	// Fields
	[Tooltip("The target string")]
	public SharedString targetString; // 0x2C
	[Tooltip("The start substring index")]
	public SharedInt startIndex; // 0x30
	[Tooltip("The length of the substring. Don't use if -1")]
	public SharedInt length; // 0x34
	[Tooltip("The stored result")]
	[RequiredField]
	public SharedString storeResult; // 0x38

	// Methods

	// RVA: 0x3E3F Offset: 0x3E3F VA: 0x3E3F Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E40 Offset: 0x3E40 VA: 0x3E40 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E41 Offset: 0x3E41 VA: 0x3E41
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetSubstring$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param2;
  undefined4 param3;
  undefined4 param1;
  
  if (DAT_ram_00664c7d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664c7d = '\x01';
  }
  iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
  param1 = *(undefined4 *)(__ret + 0x38);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
  if (iVar1 == -1) {
    uVar2 = unnamed_function_81543(uVar2,param2,0);
  }
  else {
    param3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
    uVar2 = unnamed_function_81526(uVar2,param2,param3,0);
  }
  unnamed_function_61204(param1,uVar2,DAT_ram_00565d10);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetSubstring$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring_o *__this,
               MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  BehaviorDesigner_Runtime_SharedInt_o *pBVar3;
  
  if (DAT_ram_00664c7e == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664c7e = '\x01';
  }
  pvVar1 = StringLiteral_1 /* "" */;
  if (DAT_ram_00664b8c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedString_TypeInfo);
    DAT_ram_00664b8c = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedString_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedString_TypeInfo);
  if (DAT_ram_00664b8d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d08);
    DAT_ram_00664b8d = '\x01';
  }
  pBVar2[4].monitor = pvVar1;
  __this->targetString = pBVar2;
  if (DAT_ram_00664b7e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedInt_TypeInfo);
    DAT_ram_00664b7e = '\x01';
  }
  pBVar3 = (BehaviorDesigner_Runtime_SharedInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedInt_TypeInfo);
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  pBVar3[4].monitor = (void *)0x0;
  __this->startIndex = pBVar3;
  if (DAT_ram_00664b7e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedInt_TypeInfo);
    DAT_ram_00664b7e = '\x01';
  }
  pBVar3 = (BehaviorDesigner_Runtime_SharedInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedInt_TypeInfo);
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  pBVar3[4].monitor = (void *)0xffffffff;
  __this->length = pBVar3;
  pvVar1 = StringLiteral_1 /* "" */;
  if (DAT_ram_00664b8c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedString_TypeInfo);
    DAT_ram_00664b8c = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedString_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedString_TypeInfo);
  if (DAT_ram_00664b8d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d08);
    DAT_ram_00664b8d = '\x01';
  }
  pBVar2[4].monitor = pvVar1;
  __this->storeResult = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetSubstring$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetSubstring_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  if (DAT_ram_00664b7e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedInt_TypeInfo);
    DAT_ram_00664b7e = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedInt_TypeInfo);
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  pBVar1[4].monitor = (void *)0x0;
  __this->startIndex = pBVar1;
  if (DAT_ram_00664b7e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedInt_TypeInfo);
    DAT_ram_00664b7e = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedInt_TypeInfo);
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  pBVar1[4].monitor = (void *)0xffffffff;
  __this->length = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

