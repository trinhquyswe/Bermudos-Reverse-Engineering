// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.Instantiate
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Instantiate : Action // TypeDefIndex: 6209
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The position of the new GameObject")]
	public SharedVector3 position; // 0x30
	[Tooltip("The rotation of the new GameObject")]
	public SharedQuaternion rotation; // 0x34
	[Tooltip("The instantiated GameObject")]
	[SharedRequired]
	public SharedGameObject storeResult; // 0x38

	// Methods

	// RVA: 0x4198 Offset: 0x4198 VA: 0x4198 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4199 Offset: 0x4199 VA: 0x4199 Slot: 16
	public override void OnReset() { }

	// RVA: 0x419A Offset: 0x419A VA: 0x419A
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.Instantiate$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664e12 == '\0') {
    unnamed_function_1099(&DAT_ram_0056b548);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565ce8);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664e12 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x38);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
  unnamed_function_61197(&local_20,*(undefined4 *)(__ret + 0x34),DAT_ram_00565ce8);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  local_28 = local_8;
  local_38 = local_18;
  local_30 = local_10;
  local_40 = local_20;
  uVar1 = unnamed_function_86418(uVar1,&local_30,&local_40,DAT_ram_0056b548);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.Instantiate$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate_o *__this,
               MethodInfo *method)

{
  Vector3_o *pVVar1;
  Quaternion_o *pQVar2;
  Quaternion_o local_40;
  Vector3_o local_30;
  Quaternion_o local_20;
  Vector3_o local_10;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_30._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_30.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_30._0_8_;
  local_10.z = local_30.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->position = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_40._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_40._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_20._0_8_ = local_40._0_8_;
  local_20._8_8_ = local_40._8_8_;
  pQVar2 = BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->rotation = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.Instantiate$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Instantiate_o *__this,
               MethodInfo *method)

{
  Quaternion_o *pQVar1;
  Quaternion_o local_20;
  Quaternion_o local_10;
  
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_20._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_20._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_10._0_8_ = local_20._0_8_;
  local_10._8_8_ = local_20._8_8_;
  pQVar1 = BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->rotation = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  unnamed_function_51834(__this,0);
  return;
}

