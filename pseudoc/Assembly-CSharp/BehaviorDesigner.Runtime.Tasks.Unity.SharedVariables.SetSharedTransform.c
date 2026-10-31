// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedTransform
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedTransform : Action // TypeDefIndex: 5996
{
	// Fields
	[Tooltip("The value to set the SharedTransform to. If null the variable will be set to the current Transform")]
	public SharedTransform targetValue; // 0x2C
	[RequiredField]
	[Tooltip("The SharedTransform to set")]
	public SharedTransform targetVariable; // 0x30

	// Methods

	// RVA: 0x3EAC Offset: 0x3EAC VA: 0x3EAC Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3EAD Offset: 0x3EAD VA: 0x3EAD Slot: 16
	public override void OnReset() { }

	// RVA: 0x3EAE Offset: 0x3EAE VA: 0x3EAE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedTransform$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransform__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransform_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransform__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransform_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param1;
  
  if (DAT_ram_00664cac == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d18);
    unnamed_function_1099(&DAT_ram_00565d1c);
    DAT_ram_00664cac = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d18);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44679(uVar1,0,0);
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(__ret + 0xc);
  }
  else {
    uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d18);
  }
  unnamed_function_61204(param1,uVar1,DAT_ram_00565d1c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedTransform$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransform__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransform_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedTransform$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransform___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransform_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

