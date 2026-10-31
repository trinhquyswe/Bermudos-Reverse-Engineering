// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Rotate
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Rotate : Action // TypeDefIndex: 5931
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("Amount to rotate")]
	public SharedVector3 eulerAngles; // 0x30
	[Tooltip("Specifies which axis the rotation is relative to")]
	public Space relativeTo; // 0x34
	private Transform targetTransform; // 0x38
	private GameObject prevGameObject; // 0x3C

	// Methods

	// RVA: 0x3DD0 Offset: 0x3DD0 VA: 0x3DD0 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3DD1 Offset: 0x3DD1 VA: 0x3DD1 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3DD2 Offset: 0x3DD2 VA: 0x3DD2 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3DD3 Offset: 0x3DD3 VA: 0x3DD3
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Rotate$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  RuleTile_TilingRuleOutput_Transform RVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664c46 == '\0') {
    unnamed_function_1099(&DAT_ram_00569b30);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664c46 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Rotate$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664c47 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&StringLiteral_8077 /* "Transform is null" */);
    DAT_ram_00664c47 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x38);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x38);
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
    local_18 = local_8;
    local_20 = local_10;
    unnamed_function_44994(uVar2,&local_20,*(undefined4 *)(__ret + 0x34),0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_8077 /* "Transform is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Rotate$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector3_o *pBVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  pvVar2 = *(void **)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  uVar3 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  if (DAT_ram_00664b98 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
    DAT_ram_00664b98 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector3_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
  if (DAT_ram_00664b99 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d34);
    DAT_ram_00664b99 = '\x01';
  }
  pBVar1[5].monitor = pvVar2;
  *(undefined8 *)&pBVar1[4].monitor = uVar3;
  __this->relativeTo = Self;
  __this->eulerAngles = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.Rotate$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_Rotate_o *__this,
               MethodInfo *method)

{
  __this->relativeTo = Self;
  unnamed_function_51834(__this,0);
  return;
}

