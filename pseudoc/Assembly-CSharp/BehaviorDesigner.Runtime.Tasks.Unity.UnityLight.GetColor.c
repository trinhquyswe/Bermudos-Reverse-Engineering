// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.GetColor
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetColor : Action // TypeDefIndex: 6165
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[RequiredField]
	[Tooltip("The color to store")]
	public SharedColor storeValue; // 0x30
	private Light light; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4102 Offset: 0x4102 VA: 0x4102 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4103 Offset: 0x4103 VA: 0x4103 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4104 Offset: 0x4104 VA: 0x4104 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4105 Offset: 0x4105 VA: 0x4105
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.GetColor$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Light_o *pLVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664dc9 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ac4);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664dc9 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pLVar2 = (Light_o *)unnamed_function_73836(param1,DAT_ram_00569ac4);
    __this->prevGameObject = param1;
    __this->light = pLVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.GetColor$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor_o *__this,MethodInfo *method
               )

{
  int iVar1;
  Color_o *pCVar2;
  undefined4 param1;
  Color_o local_20;
  Color_o local_10;
  
  if (DAT_ram_00664dca == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_5085 /* "Light is null" */);
    DAT_ram_00664dca = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 == 0) {
    unnamed_function_52938(&local_10,*(undefined4 *)(__ret + 0x34),0);
    local_20.b = local_10.b;
    local_20.a = local_10.a;
    local_20.r = local_10.r;
    local_20.g = local_10.g;
    pCVar2 = BehaviorDesigner_Runtime_SharedColor__op_Implicit(&local_20,(MethodInfo *)0x0);
    *(Color_o **)(__ret + 0x30) = pCVar2;
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_5085 /* "Light is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.GetColor$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.GetColor$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_GetColor_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

