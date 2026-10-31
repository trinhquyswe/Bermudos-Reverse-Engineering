// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Replace
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Replace : Action // TypeDefIndex: 5963
{
	// Fields
	[Tooltip("The target string")]
	public SharedString targetString; // 0x2C
	[Tooltip("The old replace")]
	public SharedString oldString; // 0x30
	[Tooltip("The new string")]
	public SharedString newString; // 0x34
	[RequiredField]
	[Tooltip("The stored result")]
	public SharedString storeResult; // 0x38

	// Methods

	// RVA: 0x3E45 Offset: 0x3E45 VA: 0x3E45 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E46 Offset: 0x3E46 VA: 0x3E46 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E47 Offset: 0x3E47 VA: 0x3E47
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Replace$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Replace__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Replace_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Replace__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Replace_o *__this,MethodInfo *method
               )

{
  undefined4 uVar1;
  undefined4 param2;
  undefined4 param3;
  undefined4 param1;
  
  if (DAT_ram_00664c81 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664c81 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x38);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  param3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d0c);
  uVar1 = unnamed_function_81528(uVar1,param2,param3,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565d10);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Replace$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Replace__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Replace_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Replace__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Replace_o *__this,
               MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664c82 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664c82 = '\x01';
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
  __this->oldString = pBVar2;
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
  __this->newString = pBVar2;
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Replace$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Replace___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Replace_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

