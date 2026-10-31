// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityCapsuleCollider.GetRadius
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetRadius : Action // TypeDefIndex: 6241
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The radius of the CapsuleCollider")]
	[RequiredField]
	public SharedFloat storeValue; // 0x30
	private CapsuleCollider capsuleCollider; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4211 Offset: 0x4211 VA: 0x4211 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4212 Offset: 0x4212 VA: 0x4212 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4213 Offset: 0x4213 VA: 0x4213 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4214 Offset: 0x4214 VA: 0x4214
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCapsuleCollider.GetRadius$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  CapsuleCollider_o *pCVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664e4f == '\0') {
    unnamed_function_1099(&DAT_ram_00569a7c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664e4f = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pCVar2 = (CapsuleCollider_o *)unnamed_function_73836(param1,DAT_ram_00569a7c);
    __this->prevGameObject = param1;
    __this->capsuleCollider = pCVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCapsuleCollider.GetRadius$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float param2;
  undefined4 uVar2;
  
  if (DAT_ram_00664e50 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    unnamed_function_1099(&StringLiteral_2595 /* "CapsuleCollider is null" */);
    DAT_ram_00664e50 = '\x01';
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
    unnamed_function_52416(StringLiteral_2595 /* "CapsuleCollider is null" */,0);
    return;
  }
  uVar2 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_15285(*(undefined4 *)(__ret + 0x34),0);
  unnamed_function_61227(uVar2,param2,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCapsuleCollider.GetRadius$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCapsuleCollider.GetRadius$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityCapsuleCollider_GetRadius_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

