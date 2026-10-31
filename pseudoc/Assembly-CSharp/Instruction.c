// Assembly-CSharp :: Instruction
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Instruction : MonoBehaviour // TypeDefIndex: 5654
{
	// Fields
	[SerializeField]
	private TextMeshProUGUI instructionText; // 0x10
	[SerializeField]
	private TextMeshProUGUI displayCount; // 0x14

	// Methods

	// RVA: 0x38F8 Offset: 0x38F8 VA: 0x38F8
	private void Start() { }

	// RVA: 0x38F9 Offset: 0x38F9 VA: 0x38F9
	private void OnEnable() { }

	// RVA: 0x38FA Offset: 0x38FA VA: 0x38FA
	private void OnDestroy() { }

	// RVA: 0x38FB Offset: 0x38FB VA: 0x38FB
	private void OnInstructionChanged(string instruction, int displayCount = -1, bool isActive = True) { }

	// RVA: 0x38FC Offset: 0x38FC VA: 0x38FC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Instruction$$Start ----
// C#: void Instruction__Start (Instruction_o* __this, const MethodInfo* method);

void Instruction__Start(Instruction_o *__this,MethodInfo *method)

{
  undefined4 param1;
  System_Action_string__int__bool__o *value;
  
  if (DAT_ram_006648e8 == '\0') {
    unnamed_function_1099(&System_Action_string__int__bool__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a718);
    DAT_ram_006648e8 = '\x01';
  }
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,0,0);
  value = (System_Action_string__int__bool__o *)
          unnamed_function_95402(System_Action_string__int__bool__TypeInfo);
  unnamed_function_60359(value,__this,DAT_ram_0056a718,0);
  StaticEventHandler__add_OnInstructionChanged(value,(MethodInfo *)__this);
  return;
}

// ---- Instruction$$OnEnable ----
// C#: void Instruction__OnEnable (Instruction_o* __this, const MethodInfo* method);

void Instruction__OnEnable(Instruction_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  float local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_006648e9 == '\0') {
    unnamed_function_1099(&DAT_ram_0056d380);
    DAT_ram_006648e9 = '\x01';
  }
  uVar1 = unnamed_function_44643(__this,0);
  if (DAT_ram_00662a53 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00662a53 = '\x01';
  }
  iVar2 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_18 = *(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x14);
  local_c = (float4)(*(float *)(iVar2 + 0x10) + *(float *)(iVar2 + 0x10));
  local_10 = (float4)(*(float *)(iVar2 + 0xc) + *(float *)(iVar2 + 0xc));
  local_20 = CONCAT44(local_c,local_10);
  local_8 = (float4)local_18;
  unnamed_function_44982(uVar1,&local_20,0);
  uVar1 = unnamed_function_44643(__this,0);
  if (DAT_ram_00662a53 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00662a53 = '\x01';
  }
  local_28 = *(undefined4 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x14);
  local_30 = *(undefined8 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0xc);
  uVar1 = unnamed_function_13884(uVar1,&local_30,0.3,0);
  unnamed_function_70031(uVar1,0x1b,DAT_ram_0056d380);
  return;
}

// ---- Instruction$$OnDestroy ----
// C#: void Instruction__OnDestroy (Instruction_o* __this, const MethodInfo* method);

void Instruction__OnDestroy(Instruction_o *__this,MethodInfo *method)

{
  System_Action_string__int__bool__o *value;
  undefined4 param1;
  
  if (DAT_ram_006648ea == '\0') {
    unnamed_function_1099(&System_Action_string__int__bool__TypeInfo);
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a718);
    DAT_ram_006648ea = '\x01';
  }
  value = (System_Action_string__int__bool__o *)
          unnamed_function_95402(System_Action_string__int__bool__TypeInfo);
  unnamed_function_60359(value,__this,DAT_ram_0056a718,0);
  StaticEventHandler__remove_OnInstructionChanged(value,(MethodInfo *)__this);
  param1 = unnamed_function_44643(__this,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(param1,0,0);
  return;
}

// ---- Instruction$$OnInstructionChanged ----
// C#: void Instruction__OnInstructionChanged (Instruction_o* __this, System_String_o* instruction, int32_t displayCount, bool isActive, const MethodInfo* method);

void Instruction__OnInstructionChanged
               (Instruction_o *__this,System_String_o *instruction,int displayCount,bool isActive,
               MethodInfo *method)

{
  undefined3 in_register_20000031;
  undefined4 uVar1;
  int iVar2;
  TextMeshProUGUI_o *pTVar3;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  float local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  int local_4;
  
  local_4 = displayCount;
  if (DAT_ram_006648eb == '\0') {
    unnamed_function_1099(&DAT_ram_0056d380);
    unnamed_function_1099(&DAT_ram_0056d3e0);
    unnamed_function_1099(&StringLiteral_905 /* "/3" */);
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_006648eb = '\x01';
  }
  if (displayCount == -1) {
    uVar1 = unnamed_function_44644(__this,0);
    unnamed_function_44686(uVar1,1,0);
    iVar2 = __this->instructionText->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
              (__this->instructionText,instruction,*(undefined4 *)(iVar2 + 0x2d4));
    iVar2 = __this->displayCount->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
              (__this->displayCount,StringLiteral_1 /* "" */,*(undefined4 *)(iVar2 + 0x2d4));
  }
  else {
    if ((uint)displayCount < 3) {
      uVar1 = unnamed_function_44643(__this,0);
      if (DAT_ram_00662a53 == '\0') {
        unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
        DAT_ram_00662a53 = '\x01';
      }
      iVar2 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
      local_18 = *(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x14);
      local_c = (float4)(*(float *)(iVar2 + 0x10) + *(float *)(iVar2 + 0x10));
      local_10 = (float4)(*(float *)(iVar2 + 0xc) + *(float *)(iVar2 + 0xc));
      local_20 = CONCAT44(local_c,local_10);
      local_8 = (float4)local_18;
      unnamed_function_44982(uVar1,&local_20,0);
      uVar1 = unnamed_function_44643(__this,0);
      if (DAT_ram_00662a53 == '\0') {
        unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
        DAT_ram_00662a53 = '\x01';
      }
      local_28 = *(undefined4 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x14);
      local_30 = *(undefined8 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0xc);
      uVar1 = unnamed_function_13884(uVar1,&local_30,0.3,0);
      uVar1 = unnamed_function_70031(uVar1,0x1b,DAT_ram_0056d380);
      unnamed_function_70051(uVar1,1,DAT_ram_0056d3e0);
      uVar1 = unnamed_function_44644(__this,0);
      unnamed_function_44686(uVar1,1,0);
      iVar2 = __this->instructionText->_opaque;
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
                (__this->instructionText,instruction,*(undefined4 *)(iVar2 + 0x2d4));
      uVar1 = unnamed_function_83644(&local_4,0);
      pTVar3 = __this->displayCount;
      uVar1 = unnamed_function_81364(uVar1,StringLiteral_905 /* "/3" */,0);
      iVar2 = pTVar3->_opaque;
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
                (pTVar3,uVar1,*(undefined4 *)(iVar2 + 0x2d4));
    }
    else {
      uVar1 = unnamed_function_44644(__this,0);
      unnamed_function_44686(uVar1,0,0);
    }
    if (CONCAT31(in_register_20000031,isActive) == 0) {
      uVar1 = unnamed_function_44644(__this,0);
      unnamed_function_44686(uVar1,0,0);
    }
  }
  return;
}

// ---- Instruction$$.ctor ----
// C#: void Instruction___ctor (Instruction_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

