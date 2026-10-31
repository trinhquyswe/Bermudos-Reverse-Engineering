// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Find
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Find : Action // TypeDefIndex: 5914
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The transform name to find")]
	public SharedString transformName; // 0x30
	[Tooltip("The object found by name")]
	[RequiredField]
	public SharedTransform storeValue; // 0x34
	private Transform targetTransform; // 0x38
	private GameObject prevGameObject; // 0x3C

	// Methods

	// RVA: 0x3D8C Offset: 0x3D8C VA: 0x3D8C Slot: 5
	public override void OnStart() { }

	// RVA: 0x3D8D Offset: 0x3D8D VA: 0x3D8D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D8E Offset: 0x3D8E VA: 0x3D8E Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D8F Offset: 0x3D8F VA: 0x3D8F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Find$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  RuleTile_TilingRuleOutput_Transform RVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664c24 == '\0') {
    unnamed_function_1099(&DAT_ram_00569b30);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664c24 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    RVar2 = unnamed_function_73836(param1,DAT_ram_00569b30);
    __this->prevGameObject = param1;
    __this->targetTransform = RVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Find$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find_o *__this,MethodInfo *method
               )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664c25 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d18);
    unnamed_function_1099(&DAT_ram_00565d1c);
    unnamed_function_1099(&StringLiteral_8077 /* "Transform is null" */);
    DAT_ram_00664c25 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x38);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    param1 = *(undefined4 *)(__ret + 0x34);
    param1_00 = *(undefined4 *)(__ret + 0x38);
    uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
    uVar2 = unnamed_function_45011(param1_00,uVar2,0);
    unnamed_function_61204(param1,uVar2,DAT_ram_00565d1c);
    uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d18);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    unnamed_function_44679(uVar2,0,0);
    return;
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52416(StringLiteral_8077 /* "Transform is null" */,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Find$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find_o *__this,
               MethodInfo *method)

{
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->transformName = (BehaviorDesigner_Runtime_SharedString_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Find$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Find_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

