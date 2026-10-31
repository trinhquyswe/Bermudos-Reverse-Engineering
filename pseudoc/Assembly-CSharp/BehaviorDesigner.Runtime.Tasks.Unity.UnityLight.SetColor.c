// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetColor
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetColor : Action // TypeDefIndex: 6172
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The color to set")]
	public SharedColor color; // 0x30
	private Light light; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x411E Offset: 0x411E VA: 0x411E Slot: 5
	public override void OnStart() { }

	// RVA: 0x411F Offset: 0x411F VA: 0x411F Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4120 Offset: 0x4120 VA: 0x4120 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4121 Offset: 0x4121 VA: 0x4121
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetColor$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Light_o *pLVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664dd7 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ac4);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664dd7 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetColor$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor_o *__this,MethodInfo *method
               )

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664dd8 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c90);
    unnamed_function_1099(&StringLiteral_5085 /* "Light is null" */);
    DAT_ram_00664dd8 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x34);
    unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565c90);
    local_18 = local_8;
    local_20 = local_10;
    unnamed_function_52940(uVar2,&local_20,0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_5085 /* "Light is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetColor$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetColor$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetColor_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

