// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartRotation
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetStartRotation : Action // TypeDefIndex: 6116
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The start rotation of the ParticleSystem")]
	public SharedFloat startRotation; // 0x30
	private ParticleSystem particleSystem; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4068 Offset: 0x4068 VA: 0x4068 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4069 Offset: 0x4069 VA: 0x4069 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x406A Offset: 0x406A VA: 0x406A Slot: 16
	public override void OnReset() { }

	// RVA: 0x406B Offset: 0x406B VA: 0x406B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartRotation$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  ParticleSystem_o *pPVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664d81 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ad8);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664d81 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pPVar2 = (ParticleSystem_o *)unnamed_function_73836(param1,DAT_ram_00569ad8);
    __this->prevGameObject = param1;
    __this->particleSystem = pPVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartRotation$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float param2;
  undefined4 param1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8 [2];
  
  if (DAT_ram_00664d82 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&StringLiteral_6019 /* "ParticleSystem is null" */);
    DAT_ram_00664d82 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 == 0) {
    local_8[0] = *(undefined4 *)(__ret + 0x34);
    param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    unnamed_function_86810(&local_20,param2,0);
    local_28 = local_10;
    local_30 = local_18;
    local_38 = local_20;
    unnamed_function_86785(local_8,&local_38,0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6019 /* "ParticleSystem is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartRotation$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartRotation$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartRotation_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

