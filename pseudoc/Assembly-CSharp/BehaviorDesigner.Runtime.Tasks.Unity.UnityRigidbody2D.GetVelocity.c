// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.GetVelocity
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetVelocity : Action // TypeDefIndex: 6016
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The velocity of the Rigidbody2D")]
	[RequiredField]
	public SharedVector2 storeValue; // 0x30
	private Rigidbody2D rigidbody2D; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x3EF5 Offset: 0x3EF5 VA: 0x3EF5 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3EF6 Offset: 0x3EF6 VA: 0x3EF6 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3EF7 Offset: 0x3EF7 VA: 0x3EF7 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3EF8 Offset: 0x3EF8 VA: 0x3EF8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.GetVelocity$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Rigidbody2D_o *pRVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664ccd == '\0') {
    unnamed_function_1099(&DAT_ram_00569af0);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664ccd = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pRVar2 = (Rigidbody2D_o *)unnamed_function_73836(param1,DAT_ram_00569af0);
    __this->prevGameObject = param1;
    __this->rigidbody2D = pRVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.GetVelocity$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664cce == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d2c);
    unnamed_function_1099(&StringLiteral_6478 /* "Rigidbody2D is null" */);
    DAT_ram_00664cce = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x30);
    unnamed_function_16390(&local_8,*(undefined4 *)(__ret + 0x34),0);
    local_10 = local_8;
    unnamed_function_61236(uVar2,&local_10,DAT_ram_00565d2c);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6478 /* "Rigidbody2D is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.GetVelocity$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_AddForce__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_AddForce_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar1;
  Vector2_o local_10;
  Vector2_o local_8;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  local_10 = **(Vector2_o **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  local_8 = local_10;
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           BehaviorDesigner_Runtime_SharedVector2__op_Implicit(&local_10,(MethodInfo *)0x0);
  __this->force = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.GetVelocity$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetVelocity_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

