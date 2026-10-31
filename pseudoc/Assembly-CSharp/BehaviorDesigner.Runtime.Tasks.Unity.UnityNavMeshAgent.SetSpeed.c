// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetSpeed
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSpeed : Action // TypeDefIndex: 6136
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The NavMeshAgent speed")]
	public SharedFloat speed; // 0x30
	private NavMeshAgent navMeshAgent; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x40B8 Offset: 0x40B8 VA: 0x40B8 Slot: 5
	public override void OnStart() { }

	// RVA: 0x40B9 Offset: 0x40B9 VA: 0x40B9 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40BA Offset: 0x40BA VA: 0x40BA Slot: 16
	public override void OnReset() { }

	// RVA: 0x40BB Offset: 0x40BB VA: 0x40BB
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetSpeed$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  NavMeshAgent_o *pNVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664da9 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ad0);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664da9 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetSpeed$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float param2;
  undefined4 uVar2;
  
  if (DAT_ram_00664daa == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&StringLiteral_5529 /* "NavMeshAgent is null" */);
    DAT_ram_00664daa = '\x01';
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
  uVar2 = *(undefined4 *)(__ret + 0x34);
  param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  unnamed_function_51274(uVar2,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetSpeed$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_AddTorque__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_AddTorque_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->torque = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetSpeed$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityNavMeshAgent_SetSpeed_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

