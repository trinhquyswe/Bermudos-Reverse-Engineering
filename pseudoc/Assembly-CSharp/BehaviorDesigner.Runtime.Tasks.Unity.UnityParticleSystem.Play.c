// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.Play
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Play : Action // TypeDefIndex: 6108
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	private ParticleSystem particleSystem; // 0x30
	private GameObject prevGameObject; // 0x34

	// Methods

	// RVA: 0x4048 Offset: 0x4048 VA: 0x4048 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4049 Offset: 0x4049 VA: 0x4049 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x404A Offset: 0x404A VA: 0x404A Slot: 16
	public override void OnReset() { }

	// RVA: 0x404B Offset: 0x404B VA: 0x404B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.Play$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  ParticleSystem_o *pPVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664d71 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ad8);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664d71 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.Play$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664d72 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_6019 /* "ParticleSystem is null" */);
    DAT_ram_00664d72 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6019 /* "ParticleSystem is null" */,0);
    return;
  }
  unnamed_function_86756(*(undefined4 *)(__ret + 0x30),0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.Play$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused_o *__this,MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.Play$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_Play_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

