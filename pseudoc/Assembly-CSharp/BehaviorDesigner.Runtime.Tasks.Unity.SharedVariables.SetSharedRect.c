// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedRect
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedRect : Action // TypeDefIndex: 5994
{
	// Fields
	[Tooltip("The value to set the SharedRect to")]
	public SharedRect targetValue; // 0x2C
	[RequiredField]
	[Tooltip("The SharedRect to set")]
	public SharedRect targetVariable; // 0x30

	// Methods

	// RVA: 0x3EA6 Offset: 0x3EA6 VA: 0x3EA6 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3EA7 Offset: 0x3EA7 VA: 0x3EA7 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3EA8 Offset: 0x3EA8 VA: 0x3EA8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedRect$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedRect__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedRect_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedRect__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedRect_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664ca9 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cf4);
    unnamed_function_1099(&DAT_ram_00565cf8);
    DAT_ram_00664ca9 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cf4);
  local_18 = local_8;
  local_20 = local_10;
  unnamed_function_61198(param1,&local_20,DAT_ram_00565cf8);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedRect$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedRect__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedRect_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect_o *__this,
               MethodInfo *method)

{
  Rect_o *pRVar1;
  Rect_o local_40;
  Rect_o local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_30.width = 0.0;
  local_30.height = 0.0;
  local_10 = 0;
  local_30.x = 0.0;
  local_30.y = 0.0;
  pRVar1 = BehaviorDesigner_Runtime_SharedRect__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->variable = (BehaviorDesigner_Runtime_SharedRect_o *)pRVar1;
  local_18 = 0;
  local_40.width = 0.0;
  local_40.height = 0.0;
  local_20 = 0;
  local_40.x = 0.0;
  local_40.y = 0.0;
  pRVar1 = BehaviorDesigner_Runtime_SharedRect__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->compareTo = (BehaviorDesigner_Runtime_SharedRect_o *)pRVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedRect$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedRect___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedRect_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

