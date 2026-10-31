// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityCircleCollider2D.SetRadius
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetRadius : Action // TypeDefIndex: 6222
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The radius of the CircleCollider2D")]
	public SharedFloat radius; // 0x30
	private CircleCollider2D circleCollider2D; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x41C4 Offset: 0x41C4 VA: 0x41C4 Slot: 5
	public override void OnStart() { }

	// RVA: 0x41C5 Offset: 0x41C5 VA: 0x41C5 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x41C6 Offset: 0x41C6 VA: 0x41C6 Slot: 16
	public override void OnReset() { }

	// RVA: 0x41C7 Offset: 0x41C7 VA: 0x41C7
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCircleCollider2D.SetRadius$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  CircleCollider2D_o *pCVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664e28 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a88);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664e28 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pCVar2 = (CircleCollider2D_o *)unnamed_function_73836(param1,DAT_ram_00569a88);
    __this->prevGameObject = param1;
    __this->circleCollider2D = pCVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCircleCollider2D.SetRadius$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float param2;
  undefined4 uVar2;
  
  if (DAT_ram_00664e29 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&StringLiteral_2666 /* "CircleCollider2D is null" */);
    DAT_ram_00664e29 = '\x01';
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
    unnamed_function_52416(StringLiteral_2666 /* "CircleCollider2D is null" */,0);
    return;
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  unnamed_function_16429(uVar2,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCircleCollider2D.SetRadius$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCircleCollider2D.SetRadius$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityCircleCollider2D_SetRadius_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

