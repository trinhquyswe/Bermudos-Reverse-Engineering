// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.SetValue
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetValue : Action // TypeDefIndex: 5895
{
	// Fields
	[Tooltip("The Vector3 to get the values of")]
	public SharedVector3 vector3Value; // 0x2C
	[Tooltip("The Vector3 to set the values of")]
	public SharedVector3 vector3Variable; // 0x30

	// Methods

	// RVA: 0x3D56 Offset: 0x3D56 VA: 0x3D56 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D57 Offset: 0x3D57 VA: 0x3D57 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D58 Offset: 0x3D58 VA: 0x3D58
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.SetValue$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetValue__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetValue_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetValue__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetValue_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664c12 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d3c);
    DAT_ram_00664c12 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  local_18 = local_8;
  local_20 = local_10;
  unnamed_function_61246(param1,&local_20,DAT_ram_00565d3c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.SetValue$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetValue__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetValue_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Normalize__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Normalize_o *__this,
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
  __this->vector3Variable = pBVar1;
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.SetValue$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetValue___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetValue_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

