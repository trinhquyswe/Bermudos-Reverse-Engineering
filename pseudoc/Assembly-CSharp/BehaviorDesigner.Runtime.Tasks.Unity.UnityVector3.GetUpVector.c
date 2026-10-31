// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetUpVector
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetUpVector : Action // TypeDefIndex: 5885
{
	// Fields
	[Tooltip("The stored result")]
	[RequiredField]
	public SharedVector3 storeResult; // 0x2C

	// Methods

	// RVA: 0x3D3B Offset: 0x3D3B VA: 0x3D3B Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D3C Offset: 0x3D3C VA: 0x3D3C Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D3D Offset: 0x3D3D VA: 0x3D3D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetUpVector$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetUpVector__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetUpVector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetUpVector__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetUpVector_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664c09 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d3c);
    DAT_ram_00664c09 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  if (DAT_ram_0066482b == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_0066482b = '\x01';
  }
  local_8 = *(undefined4 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x20);
  local_10 = *(undefined8 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x18);
  unnamed_function_61246(param1,&local_10,DAT_ram_00565d3c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetUpVector$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetUpVector__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetUpVector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetForwardVector__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetForwardVector_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector3_o *pBVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  pvVar2 = *(void **)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  uVar3 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  if (DAT_ram_00664b98 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
    DAT_ram_00664b98 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector3_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
  if (DAT_ram_00664b99 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d34);
    DAT_ram_00664b99 = '\x01';
  }
  pBVar1[5].monitor = pvVar2;
  *(undefined8 *)&pBVar1[4].monitor = uVar3;
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetUpVector$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetUpVector___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetUpVector_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

