// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.GetIsStopped
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetIsStopped : Action // TypeDefIndex: 6125
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[SharedRequired]
	[Tooltip("The stop status")]
	public SharedBool storeValue; // 0x30
	private NavMeshAgent navMeshAgent; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x408C Offset: 0x408C VA: 0x408C Slot: 5
	public override void OnStart() { }

	// RVA: 0x408D Offset: 0x408D VA: 0x408D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x408E Offset: 0x408E VA: 0x408E Slot: 16
	public override void OnReset() { }

	// RVA: 0x408F Offset: 0x408F VA: 0x408F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.GetIsStopped$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  NavMeshAgent_o *pNVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664d93 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ad0);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664d93 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.GetIsStopped$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664d94 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c7c);
    unnamed_function_1099(&StringLiteral_5529 /* "NavMeshAgent is null" */);
    DAT_ram_00664d94 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_5529 /* "NavMeshAgent is null" */,0);
    return;
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar2 = unnamed_function_51267(*(undefined4 *)(__ret + 0x34),0);
  unnamed_function_61192(param1,uVar2,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.GetIsStopped$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.GetIsStopped$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_GetIsStopped_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

