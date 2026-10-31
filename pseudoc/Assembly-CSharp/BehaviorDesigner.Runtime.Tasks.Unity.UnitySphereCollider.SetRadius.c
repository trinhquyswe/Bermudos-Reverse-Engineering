// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnitySphereCollider.SetRadius
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetRadius : Action // TypeDefIndex: 5968
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The radius of the SphereCollider")]
	public SharedFloat radius; // 0x30
	private SphereCollider sphereCollider; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x3E57 Offset: 0x3E57 VA: 0x3E57 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3E58 Offset: 0x3E58 VA: 0x3E58 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E59 Offset: 0x3E59 VA: 0x3E59 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E5A Offset: 0x3E5A VA: 0x3E5A
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnitySphereCollider.SetRadius$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  SphereCollider_o *pSVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664c8b == '\0') {
    unnamed_function_1099(&DAT_ram_00569b04);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664c8b = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pSVar2 = (SphereCollider_o *)unnamed_function_73836(param1,DAT_ram_00569b04);
    __this->prevGameObject = param1;
    __this->sphereCollider = pSVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnitySphereCollider.SetRadius$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float param2;
  undefined4 uVar2;
  
  if (DAT_ram_00664c8c == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&StringLiteral_6844 /* "SphereCollider is null" */);
    DAT_ram_00664c8c = '\x01';
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
    unnamed_function_52416(StringLiteral_6844 /* "SphereCollider is null" */,0);
    return;
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  unnamed_function_15301(uVar2,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnitySphereCollider.SetRadius$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_GetRadius__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_GetRadius_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *param1;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  param1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(param1,0.0,DAT_ram_00565d04);
  __this->storeValue = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnitySphereCollider.SetRadius$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnitySphereCollider_SetRadius_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

