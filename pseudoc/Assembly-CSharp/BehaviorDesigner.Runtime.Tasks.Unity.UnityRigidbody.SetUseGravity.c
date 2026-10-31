// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.SetUseGravity
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetUseGravity : Action // TypeDefIndex: 6061
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The use gravity value of the Rigidbody")]
	public SharedBool useGravity; // 0x30
	private Rigidbody rigidbody; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x3FA9 Offset: 0x3FA9 VA: 0x3FA9 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3FAA Offset: 0x3FAA VA: 0x3FAA Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FAB Offset: 0x3FAB VA: 0x3FAB Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FAC Offset: 0x3FAC VA: 0x3FAC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.SetUseGravity$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Rigidbody_o *pRVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664d28 == '\0') {
    unnamed_function_1099(&DAT_ram_00569aec);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664d28 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pRVar2 = (Rigidbody_o *)unnamed_function_73836(param1,DAT_ram_00569aec);
    __this->prevGameObject = param1;
    __this->rigidbody = pRVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.SetUseGravity$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664d29 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&StringLiteral_6477 /* "Rigidbody is null" */);
    DAT_ram_00664d29 = '\x01';
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
    unnamed_function_52416(StringLiteral_6477 /* "Rigidbody is null" */,0);
    return;
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  uVar2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
  unnamed_function_15229(param1,uVar2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.SetUseGravity$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetIsKinematic__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_GetIsKinematic_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->storeValue = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.SetUseGravity$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_SetUseGravity_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

