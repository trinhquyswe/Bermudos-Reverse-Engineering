// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.MovePosition
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MovePosition : Action // TypeDefIndex: 6019
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The new position of the Rigidbody")]
	public SharedVector2 position; // 0x30
	private Rigidbody2D rigidbody2D; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x3F01 Offset: 0x3F01 VA: 0x3F01 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3F02 Offset: 0x3F02 VA: 0x3F02 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3F03 Offset: 0x3F03 VA: 0x3F03 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3F04 Offset: 0x3F04 VA: 0x3F04
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.MovePosition$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Rigidbody2D_o *pRVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664cd3 == '\0') {
    unnamed_function_1099(&DAT_ram_00569af0);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664cd3 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.MovePosition$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664cd4 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&StringLiteral_6477 /* "Rigidbody is null" */);
    DAT_ram_00664cd4 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x34);
    unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d28);
    local_10 = local_8;
    unnamed_function_16388(uVar2,&local_10,0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6477 /* "Rigidbody is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.MovePosition$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D.MovePosition$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_MovePosition_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

