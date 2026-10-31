// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.GetIsKinematic
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetIsKinematic : Action // TypeDefIndex: 6041
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The is kinematic value of the Rigidbody")]
	[RequiredField]
	public SharedBool storeValue; // 0x30
	private Rigidbody rigidbody; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x3F59 Offset: 0x3F59 VA: 0x3F59 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3F5A Offset: 0x3F5A VA: 0x3F5A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3F5B Offset: 0x3F5B VA: 0x3F5B Slot: 16
	public override void OnReset() { }

	// RVA: 0x3F5C Offset: 0x3F5C VA: 0x3F5C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.GetIsKinematic$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Rigidbody_o *pRVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664d00 == '\0') {
    unnamed_function_1099(&DAT_ram_00569aec);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664d00 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.GetIsKinematic$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664d01 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c7c);
    unnamed_function_1099(&StringLiteral_6477 /* "Rigidbody is null" */);
    DAT_ram_00664d01 = '\x01';
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
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar2 = unnamed_function_15230(*(undefined4 *)(__ret + 0x34),0);
  unnamed_function_61192(param1,uVar2,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.GetIsKinematic$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.GetIsKinematic$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetIsKinematic_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

