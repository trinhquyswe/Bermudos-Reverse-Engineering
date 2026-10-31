// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Log
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Log : Action // TypeDefIndex: 5827
{
	// Fields
	[Tooltip("Text to output to the log")]
	public SharedString text; // 0x2C
	[Tooltip("Is this text an error?")]
	public SharedBool logError; // 0x30
	[Tooltip("Should the time be included in the log message?")]
	public SharedBool logTime; // 0x34

	// Methods

	// RVA: 0x3BF8 Offset: 0x3BF8 VA: 0x3BF8 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3BF9 Offset: 0x3BF9 VA: 0x3BF9 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3BFA Offset: 0x3BFA VA: 0x3BFA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Log$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Log__OnUpdate (BehaviorDesigner_Runtime_Tasks_Log_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Log__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Log_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float4 local_8;
  float4 local_4;
  
  if (DAT_ram_00664b9e == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&float_TypeInfo);
    unnamed_function_1099(&StringLiteral_13864 /* "{0}: {1}" */);
    DAT_ram_00664b9e = '\x01';
  }
  iVar1 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
  iVar2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      iVar1 = *(int *)(__ret + 0x2c);
    }
    else {
      local_8 = (float4)unnamed_function_44878(0);
      uVar3 = unnamed_function_1113(float_TypeInfo,&local_8);
      uVar3 = unnamed_function_81510(StringLiteral_13864 /* "{0}: {1}" */,uVar3,*(undefined4 *)(__ret + 0x2c),0);
      if (DAT_ram_00664b8c == '\0') {
        unnamed_function_1099(&BehaviorDesigner_Runtime_SharedString_TypeInfo);
        DAT_ram_00664b8c = '\x01';
      }
      iVar1 = unnamed_function_95402(BehaviorDesigner_Runtime_SharedString_TypeInfo);
      if (DAT_ram_00664b8d == '\0') {
        unnamed_function_1099(&DAT_ram_00565d08);
        DAT_ram_00664b8d = '\x01';
      }
      *(undefined4 *)(iVar1 + 0x24) = uVar3;
    }
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52407(iVar1,0);
  }
  else {
    if (iVar2 == 0) {
      iVar1 = *(int *)(__ret + 0x2c);
    }
    else {
      local_4 = (float4)unnamed_function_44878(0);
      uVar3 = unnamed_function_1113(float_TypeInfo,&local_4);
      uVar3 = unnamed_function_81510(StringLiteral_13864 /* "{0}: {1}" */,uVar3,*(undefined4 *)(__ret + 0x2c),0);
      if (DAT_ram_00664b8c == '\0') {
        unnamed_function_1099(&BehaviorDesigner_Runtime_SharedString_TypeInfo);
        DAT_ram_00664b8c = '\x01';
      }
      iVar1 = unnamed_function_95402(BehaviorDesigner_Runtime_SharedString_TypeInfo);
      if (DAT_ram_00664b8d == '\0') {
        unnamed_function_1099(&DAT_ram_00565d08);
        DAT_ram_00664b8d = '\x01';
      }
      *(undefined4 *)(iVar1 + 0x24) = uVar3;
    }
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52411(iVar1,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Log$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Log__OnReset (BehaviorDesigner_Runtime_Tasks_Log_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Log__OnReset
               (BehaviorDesigner_Runtime_Tasks_Log_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar3;
  
  if (DAT_ram_00664b9f == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664b9f = '\x01';
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
  __this->text = pBVar2;
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar3 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar3[4].monitor = 0;
  __this->logError = pBVar3;
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar3 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar3[4].monitor = 0;
  __this->logTime = pBVar3;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Log$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Log___ctor (BehaviorDesigner_Runtime_Tasks_Log_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

