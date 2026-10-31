// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartColor
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetStartColor : Action // TypeDefIndex: 6113
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The start color of the ParticleSystem")]
	public SharedColor startColor; // 0x30
	private ParticleSystem particleSystem; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x405C Offset: 0x405C VA: 0x405C Slot: 5
	public override void OnStart() { }

	// RVA: 0x405D Offset: 0x405D VA: 0x405D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x405E Offset: 0x405E VA: 0x405E Slot: 16
	public override void OnReset() { }

	// RVA: 0x405F Offset: 0x405F VA: 0x405F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartColor$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  ParticleSystem_o *pPVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664d7b == '\0') {
    unnamed_function_1099(&DAT_ram_00569ad8);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664d7b = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartColor$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8 [2];
  
  if (DAT_ram_00664d7c == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c90);
    unnamed_function_1099(&StringLiteral_6019 /* "ParticleSystem is null" */);
    DAT_ram_00664d7c = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 == 0) {
    local_8[0] = *(undefined4 *)(__ret + 0x34);
    unnamed_function_61197(&local_18,*(undefined4 *)(__ret + 0x30),DAT_ram_00565c90);
    local_50 = local_10;
    local_58 = local_18;
    unnamed_function_86814(&local_48,&local_58,0);
    local_60 = local_20;
    local_68 = local_28;
    local_70 = local_30;
    local_78 = local_38;
    local_80 = local_40;
    local_88 = local_48;
    unnamed_function_86787(local_8,&local_88,0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6019 /* "ParticleSystem is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartColor$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor_o *__this,
               MethodInfo *method)

{
  Color_o *pCVar1;
  Color_o local_20;
  undefined8 local_10;
  undefined8 local_8;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  local_8 = 0x3f8000003f800000;
  local_20.b = 1.0;
  local_20.a = 1.0;
  local_10 = 0x3f8000003f800000;
  local_20.r = 1.0;
  local_20.g = 1.0;
  pCVar1 = BehaviorDesigner_Runtime_SharedColor__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->startColor = (BehaviorDesigner_Runtime_SharedColor_o *)pCVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityParticleSystem.SetStartColor$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetStartColor_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

