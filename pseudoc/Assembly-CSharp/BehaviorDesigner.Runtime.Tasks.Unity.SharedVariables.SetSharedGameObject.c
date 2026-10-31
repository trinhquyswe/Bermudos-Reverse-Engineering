// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedGameObject
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedGameObject : Action // TypeDefIndex: 5988
{
	// Fields
	[Tooltip("The value to set the SharedGameObject to. If null the variable will be set to the current GameObject")]
	public SharedGameObject targetValue; // 0x2C
	[Tooltip("The SharedGameObject to set")]
	[RequiredField]
	public SharedGameObject targetVariable; // 0x30
	[Tooltip("Can the target value be null?")]
	public SharedBool valueCanBeNull; // 0x34

	// Methods

	// RVA: 0x3E94 Offset: 0x3E94 VA: 0x3E94 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E95 Offset: 0x3E95 VA: 0x3E95 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E96 Offset: 0x3E96 VA: 0x3E96
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedGameObject$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObject__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObject_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObject__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObject_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param1;
  
  if (DAT_ram_00664ca3 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664ca3 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44679(uVar1,0,0);
  if ((iVar2 == 0) &&
     (iVar2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78), iVar2 == 0)) {
    uVar1 = *(undefined4 *)(__ret + 8);
  }
  else {
    uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  }
  unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedGameObject$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObject__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObject_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObject__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObject_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->targetValue = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->targetVariable = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->valueCanBeNull = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedGameObject$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObject___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObject_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

