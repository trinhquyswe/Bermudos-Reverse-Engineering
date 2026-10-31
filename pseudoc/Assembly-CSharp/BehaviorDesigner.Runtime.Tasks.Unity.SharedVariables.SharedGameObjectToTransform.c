// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedGameObjectToTransform
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedGameObjectToTransform : Action // TypeDefIndex: 6002
{
	// Fields
	[Tooltip("The GameObject to get the Transform of")]
	public SharedGameObject sharedGameObject; // 0x2C
	[RequiredField]
	[Tooltip("The Transform to set")]
	public SharedTransform sharedTransform; // 0x30

	// Methods

	// RVA: 0x3EBF Offset: 0x3EBF VA: 0x3EBF Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3EC0 Offset: 0x3EC0 VA: 0x3EC0 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3EC1 Offset: 0x3EC1 VA: 0x3EC1
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedGameObjectToTransform$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedGameObjectToTransform__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedGameObjectToTransform_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedGameObjectToTransform__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedGameObjectToTransform_o
               *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param1;
  
  if (DAT_ram_00664cb3 == '\0') {
    unnamed_function_1099(&DAT_ram_00569b30);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d1c);
    DAT_ram_00664cb3 = '\x01';
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44710(uVar1,0,0);
  if (iVar2 == 0) {
    param1 = *(undefined4 *)(__ret + 0x30);
    uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
    uVar1 = unnamed_function_73836(uVar1,DAT_ram_00569b30);
    unnamed_function_61204(param1,uVar1,DAT_ram_00565d1c);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedGameObjectToTransform$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedGameObjectToTransform__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedGameObjectToTransform_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedGameObjectToTransform$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedGameObjectToTransform___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedGameObjectToTransform_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

