// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetShadowBias
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetShadowBias : Action // TypeDefIndex: 6178
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The shadow bias to set")]
	public SharedFloat shadowBias; // 0x30
	private Light light; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4136 Offset: 0x4136 VA: 0x4136 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4137 Offset: 0x4137 VA: 0x4137 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4138 Offset: 0x4138 VA: 0x4138 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4139 Offset: 0x4139 VA: 0x4139
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetShadowBias$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Light_o *pLVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664de3 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ac4);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664de3 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetShadowBias$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float param2;
  undefined4 uVar2;
  
  if (DAT_ram_00664de4 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&StringLiteral_5085 /* "Light is null" */);
    DAT_ram_00664de4 = '\x01';
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
    unnamed_function_52416(StringLiteral_5085 /* "Light is null" */,0);
    return;
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  unnamed_function_52947(uVar2,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetShadowBias$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLight.SetShadowBias$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityLight_SetShadowBias_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

