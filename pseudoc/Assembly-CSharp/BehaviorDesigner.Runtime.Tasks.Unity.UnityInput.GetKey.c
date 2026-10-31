// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetKey
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetKey : Action // TypeDefIndex: 6189
{
	// Fields
	[Tooltip("The key to test.")]
	public KeyCode key; // 0x2C
	[Tooltip("The stored result")]
	[RequiredField]
	public SharedBool storeResult; // 0x30

	// Methods

	// RVA: 0x415C Offset: 0x415C VA: 0x415C Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x415D Offset: 0x415D VA: 0x415D Slot: 16
	public override void OnReset() { }

	// RVA: 0x415E Offset: 0x415E VA: 0x415E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetKey$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetKey__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetKey_o* __this, const MethodInfo* method);

/* WARNING: Enum "UnityEngine_KeyCode": Some values do not have unique names */

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetKey__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetKey_o *__this,MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664df9 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664df9 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_12090(*(undefined4 *)(__ret + 0x2c),0);
  unnamed_function_61192(param1,param2,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetKey$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetKey__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetKey_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetKey$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetKey___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetKey_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

