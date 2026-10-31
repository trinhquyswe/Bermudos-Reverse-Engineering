// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.GetPropertyValue
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetPropertyValue : Action // TypeDefIndex: 5830
{
	// Fields
	[Tooltip("The GameObject to get the property of")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The component to get the property of")]
	public SharedString componentName; // 0x30
	[Tooltip("The name of the property")]
	public SharedString propertyName; // 0x34
	[RequiredField]
	[Tooltip("The value of the property")]
	public SharedVariable propertyValue; // 0x38

	// Methods

	// RVA: 0x3C01 Offset: 0x3C01 VA: 0x3C01 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3C02 Offset: 0x3C02 VA: 0x3C02 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3C03 Offset: 0x3C03 VA: 0x3C03
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.GetPropertyValue$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_GetPropertyValue__OnUpdate (BehaviorDesigner_Runtime_Tasks_GetPropertyValue_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_GetPropertyValue__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_GetPropertyValue_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 param2;
  int *piVar4;
  int *piVar5;
  
  if (DAT_ram_00664ba2 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&BehaviorDesigner_Runtime_TaskUtility_TypeInfo);
    unnamed_function_1099(&System_Type_TypeInfo);
    unnamed_function_1099(&StringLiteral_8334 /* "Unable to get property - property value is null" */);
    unnamed_function_1099(&StringLiteral_8335 /* "Unable to get property - type is null" */);
    unnamed_function_1099(&StringLiteral_8337 /* "Unable to get the property with component " */);
    DAT_ram_00664ba2 = '\x01';
  }
  if (*(int *)(__ret + 0x38) == 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_8334 /* "Unable to get property - property value is null" */,0);
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
    unnamed_function_52416(StringLiteral_8335 /* "Unable to get property - type is null" */,0);
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
    uVar1 = unnamed_function_81364(StringLiteral_8337 /* "Unable to get the property with component " */,uVar1,0);
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(uVar1,0);
    return;
  }
  uVar3 = unnamed_function_82118(uVar1);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d0c);
  piVar4 = (int *)unnamed_function_84269(uVar3,param2,0);
  piVar5 = *(int **)(__ret + 0x38);
  uVar1 = (**(code **)((ulonglong)*(uint *)(*piVar4 + 0x188) * 4))
                    (piVar4,uVar1,0,*(undefined4 *)(*piVar4 + 0x18c));
  iVar2 = *piVar5;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0xf0) * 4))(piVar5,uVar1,*(undefined4 *)(iVar2 + 0xf4));
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.GetPropertyValue$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_GetPropertyValue__OnReset (BehaviorDesigner_Runtime_Tasks_GetPropertyValue_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_GetFieldValue__OnReset
               (BehaviorDesigner_Runtime_Tasks_GetFieldValue_o *__this,MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->componentName = (BehaviorDesigner_Runtime_SharedString_o *)0x0;
  __this->fieldName = (BehaviorDesigner_Runtime_SharedString_o *)0x0;
  __this->fieldValue = (SharedVariable_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.GetPropertyValue$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_GetPropertyValue___ctor (BehaviorDesigner_Runtime_Tasks_GetPropertyValue_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

