// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetDestination
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetDestination : Action // TypeDefIndex: 6134
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[SharedRequired]
	[Tooltip("The NavMeshAgent destination")]
	public SharedVector3 destination; // 0x30
	private NavMeshAgent navMeshAgent; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x40B0 Offset: 0x40B0 VA: 0x40B0 Slot: 5
	public override void OnStart() { }

	// RVA: 0x40B1 Offset: 0x40B1 VA: 0x40B1 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40B2 Offset: 0x40B2 VA: 0x40B2 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40B3 Offset: 0x40B3 VA: 0x40B3
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetDestination$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  NavMeshAgent_o *pNVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664da5 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ad0);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664da5 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pNVar2 = (NavMeshAgent_o *)unnamed_function_73836(param1,DAT_ram_00569ad0);
    __this->prevGameObject = param1;
    __this->navMeshAgent = pNVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetDestination$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664da6 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&StringLiteral_5529 /* "NavMeshAgent is null" */);
    DAT_ram_00664da6 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x34);
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
    local_18 = local_8;
    local_20 = local_10;
    unnamed_function_51259(uVar2,&local_20,0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_5529 /* "NavMeshAgent is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetDestination$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetAngularVelocity__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetAngularVelocity_o *__this,
               MethodInfo *method)

{
  Vector3_o *pVVar1;
  Vector3_o local_20;
  Vector3_o local_10;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_20._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_20.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_20._0_8_;
  local_10.z = local_20.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->storeValue = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetDestination$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetDestination_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

