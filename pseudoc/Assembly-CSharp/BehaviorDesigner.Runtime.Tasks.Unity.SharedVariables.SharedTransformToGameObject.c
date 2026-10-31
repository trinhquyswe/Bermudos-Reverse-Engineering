// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedTransformToGameObject
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedTransformToGameObject : Action // TypeDefIndex: 6004
{
	// Fields
	[Tooltip("The Transform component")]
	public SharedTransform sharedTransform; // 0x2C
	[RequiredField]
	[Tooltip("The GameObject to set")]
	public SharedGameObject sharedGameObject; // 0x30

	// Methods

	// RVA: 0x3EC6 Offset: 0x3EC6 VA: 0x3EC6 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3EC7 Offset: 0x3EC7 VA: 0x3EC7 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3EC8 Offset: 0x3EC8 VA: 0x3EC8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedTransformToGameObject$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformToGameObject__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformToGameObject_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformToGameObject__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformToGameObject_o
               *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param1;
  
  if (DAT_ram_00664cb6 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d18);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664cb6 = '\x01';
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d18);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44710(uVar1,0,0);
  if (iVar2 == 0) {
    param1 = *(undefined4 *)(__ret + 0x30);
    uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d18);
    uVar1 = unnamed_function_44644(uVar1,0);
    unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedTransformToGameObject$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformToGameObject__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformToGameObject_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedTransformToGameObject$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformToGameObject___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformToGameObject_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

