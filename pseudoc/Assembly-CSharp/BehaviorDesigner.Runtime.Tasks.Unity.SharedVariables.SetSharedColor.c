// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedColor
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedColor : Action // TypeDefIndex: 5986
{
	// Fields
	[Tooltip("The value to set the SharedColor to")]
	public SharedColor targetValue; // 0x2C
	[Tooltip("The SharedColor to set")]
	[RequiredField]
	public SharedColor targetVariable; // 0x30

	// Methods

	// RVA: 0x3E8E Offset: 0x3E8E VA: 0x3E8E Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E8F Offset: 0x3E8F VA: 0x3E8F Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E90 Offset: 0x3E90 VA: 0x3E90
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedColor$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedColor__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedColor__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedColor_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664ca1 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c90);
    unnamed_function_1099(&DAT_ram_00565c94);
    DAT_ram_00664ca1 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c90);
  local_18 = local_8;
  local_20 = local_10;
  unnamed_function_61198(param1,&local_20,DAT_ram_00565c94);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedColor$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedColor__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedColor__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedColor_o *__this,
               MethodInfo *method)

{
  Color_o *pCVar1;
  Color_o local_40;
  Color_o local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_8 = 0x3f80000000000000;
  local_30.b = 0.0;
  local_30.a = 1.0;
  local_10 = 0;
  local_30.r = 0.0;
  local_30.g = 0.0;
  pCVar1 = BehaviorDesigner_Runtime_SharedColor__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->targetValue = (BehaviorDesigner_Runtime_SharedColor_o *)pCVar1;
  local_18 = 0x3f80000000000000;
  local_40.b = 0.0;
  local_40.a = 1.0;
  local_20 = 0;
  local_40.r = 0.0;
  local_40.g = 0.0;
  pCVar1 = BehaviorDesigner_Runtime_SharedColor__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->targetVariable = (BehaviorDesigner_Runtime_SharedColor_o *)pCVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedColor$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedColor___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedColor_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

