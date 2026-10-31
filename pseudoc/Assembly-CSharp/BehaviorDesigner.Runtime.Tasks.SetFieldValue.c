// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.SetFieldValue
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetFieldValue : Action // TypeDefIndex: 5832
{
	// Fields
	[Tooltip("The GameObject to set the field on")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The component to set the field on")]
	public SharedString componentName; // 0x30
	[Tooltip("The name of the field")]
	public SharedString fieldName; // 0x34
	[Tooltip("The value to set")]
	public SharedVariable fieldValue; // 0x38

	// Methods

	// RVA: 0x3C07 Offset: 0x3C07 VA: 0x3C07 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3C08 Offset: 0x3C08 VA: 0x3C08 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3C09 Offset: 0x3C09 VA: 0x3C09
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.SetFieldValue$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_SetFieldValue__OnUpdate (BehaviorDesigner_Runtime_Tasks_SetFieldValue_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_SetFieldValue__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_SetFieldValue_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_ram_00664ba4 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&BehaviorDesigner_Runtime_TaskUtility_TypeInfo);
    unnamed_function_1099(&System_Type_TypeInfo);
    unnamed_function_1099(&StringLiteral_8353 /* "Unable to set the field with component " */);
    unnamed_function_1099(&StringLiteral_8351 /* "Unable to set field - type is null" */);
    unnamed_function_1099(&StringLiteral_8332 /* "Unable to get field - field value is null" */);
    DAT_ram_00664ba4 = '\x01';
  }
  if (*(int *)(__ret + 0x38) == 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_8332 /* "Unable to get field - field value is null" */,0);
    return;
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  if (*(int *)(BehaviorDesigner_Runtime_TaskUtility_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(BehaviorDesigner_Runtime_TaskUtility_TypeInfo);
  }
  uVar1 = unnamed_function_51779(uVar1,0);
  if (*(int *)(System_Type_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Type_TypeInfo);
  }
  iVar2 = unnamed_function_7515(uVar1,0,0);
  if (iVar2 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_8351 /* "Unable to set field - type is null" */,0);
    return;
  }
  uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  uVar3 = unnamed_function_51881(__ret,uVar3,0);
  uVar1 = unnamed_function_44646(uVar3,uVar1,0);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44710(uVar1,0,0);
  if (iVar2 != 0) {
    uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
    uVar1 = unnamed_function_81364(StringLiteral_8353 /* "Unable to set the field with component " */,uVar1,0);
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(uVar1,0);
    return;
  }
  uVar3 = unnamed_function_82118(uVar1);
  uVar4 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d0c);
  uVar3 = unnamed_function_84258(uVar3,uVar4,0);
  iVar2 = **(int **)(__ret + 0x38);
  uVar4 = (**(code **)((ulonglong)*(uint *)(iVar2 + 0xe8) * 4))
                    (*(int **)(__ret + 0x38),*(undefined4 *)(iVar2 + 0xec));
  unnamed_function_85801(uVar3,uVar1,uVar4,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SetFieldValue$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_SetFieldValue__OnReset (BehaviorDesigner_Runtime_Tasks_SetFieldValue_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_GetFieldValue__OnReset
               (BehaviorDesigner_Runtime_Tasks_GetFieldValue_o *__this,MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->componentName = (BehaviorDesigner_Runtime_SharedString_o *)0x0;
  __this->fieldName = (BehaviorDesigner_Runtime_SharedString_o *)0x0;
  __this->fieldValue = (SharedVariable_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SetFieldValue$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_SetFieldValue___ctor (BehaviorDesigner_Runtime_Tasks_SetFieldValue_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

