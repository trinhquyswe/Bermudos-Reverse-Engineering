// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetType
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetType : Action // TypeDefIndex: 6182
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The type to set")]
	public LightType type; // 0x30
	private Light light; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4146 Offset: 0x4146 VA: 0x4146 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4147 Offset: 0x4147 VA: 0x4147 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4148 Offset: 0x4148 VA: 0x4148 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4149 Offset: 0x4149 VA: 0x4149
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetType$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType_o* __this, const MethodInfo* method);

/* WARNING: Enum "UnityEngine_LightType": Some values do not have unique names */

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType_o *__this,MethodInfo *method
               )

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Light_o *pLVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664deb == '\0') {
    unnamed_function_1099(&DAT_ram_00569ac4);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664deb = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetType$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType_o* __this, const MethodInfo* method);

/* WARNING: Enum "UnityEngine_LightType": Some values do not have unique names */

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664dec == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_5085 /* "Light is null" */);
    DAT_ram_00664dec = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_5085 /* "Light is null" */,0);
    return;
  }
  unnamed_function_52934(*(undefined4 *)(__ret + 0x34),*(undefined4 *)(__ret + 0x30),0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetType$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused_o *__this,MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetType$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetType_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

