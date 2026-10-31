// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetMaxParticles
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetMaxParticles : Action // TypeDefIndex: 6111
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The max particles of the ParticleSystem")]
	public SharedInt maxParticles; // 0x30
	private ParticleSystem particleSystem; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4054 Offset: 0x4054 VA: 0x4054 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4055 Offset: 0x4055 VA: 0x4055 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4056 Offset: 0x4056 VA: 0x4056 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4057 Offset: 0x4057 VA: 0x4057
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetMaxParticles$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  ParticleSystem_o *pPVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664d77 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ad8);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664d77 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetMaxParticles$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8 [2];
  
  if (DAT_ram_00664d78 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&StringLiteral_6019 /* "ParticleSystem is null" */);
    DAT_ram_00664d78 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    local_8[0] = *(undefined4 *)(__ret + 0x34);
    uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    unnamed_function_86795(local_8,uVar2,0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6019 /* "ParticleSystem is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetMaxParticles$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->maxParticles = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetMaxParticles$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

