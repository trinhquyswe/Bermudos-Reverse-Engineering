// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityBoxCollider2D.SetSize
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSize : Action // TypeDefIndex: 6247
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The size of the BoxCollider2D")]
	public SharedVector2 size; // 0x30
	private BoxCollider2D boxCollider2D; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4229 Offset: 0x4229 VA: 0x4229 Slot: 5
	public override void OnStart() { }

	// RVA: 0x422A Offset: 0x422A VA: 0x422A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x422B Offset: 0x422B VA: 0x422B Slot: 16
	public override void OnReset() { }

	// RVA: 0x422C Offset: 0x422C VA: 0x422C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBoxCollider2D.SetSize$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  BoxCollider2D_o *pBVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664e5b == '\0') {
    unnamed_function_1099(&DAT_ram_00569a64);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664e5b = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pBVar2 = (BoxCollider2D_o *)unnamed_function_73836(param1,DAT_ram_00569a64);
    __this->prevGameObject = param1;
    __this->boxCollider2D = pBVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBoxCollider2D.SetSize$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664e5c == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&StringLiteral_2081 /* "BoxCollider2D is null" */);
    DAT_ram_00664e5c = '\x01';
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
    unnamed_function_16432(uVar2,&local_10,0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_2081 /* "BoxCollider2D is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBoxCollider2D.SetSize$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBoxCollider2D.SetSize$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityBoxCollider2D_SetSize_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

