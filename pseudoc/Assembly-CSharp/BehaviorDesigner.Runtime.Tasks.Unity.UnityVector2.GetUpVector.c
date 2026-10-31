// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetUpVector
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetUpVector : Action // TypeDefIndex: 5903
{
	// Fields
	[Tooltip("The stored result")]
	[RequiredField]
	public SharedVector2 storeResult; // 0x2C

	// Methods

	// RVA: 0x3D6E Offset: 0x3D6E VA: 0x3D6E Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D6F Offset: 0x3D6F VA: 0x3D6F Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D70 Offset: 0x3D70 VA: 0x3D70
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetUpVector$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetUpVector__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetUpVector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetUpVector__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetUpVector_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664c1a == '\0') {
    unnamed_function_1099(&DAT_ram_00565d2c);
    DAT_ram_00664c1a = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  if (DAT_ram_00663576 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_00663576 = '\x01';
  }
  local_10 = *(undefined8 *)(*(int *)(UnityEngine_Vector2_TypeInfo + 0x5c) + 0x10);
  local_8 = local_10;
  unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetUpVector$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetUpVector__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetUpVector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetRightVector__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetRightVector_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar1;
  undefined8 uVar2;
  
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  uVar2 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  if (DAT_ram_00664b94 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
    DAT_ram_00664b94 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
  if (DAT_ram_00664b95 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d24);
    DAT_ram_00664b95 = '\x01';
  }
  *(undefined8 *)&pBVar1[4].monitor = uVar2;
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetUpVector$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetUpVector___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetUpVector_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

