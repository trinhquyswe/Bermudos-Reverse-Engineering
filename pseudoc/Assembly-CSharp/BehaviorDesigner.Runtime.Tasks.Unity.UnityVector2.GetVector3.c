// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetVector3
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetVector3 : Action // TypeDefIndex: 5904
{
	// Fields
	[Tooltip("The Vector2 to get the Vector3 value of")]
	public SharedVector2 vector3Variable; // 0x2C
	[RequiredField]
	[Tooltip("The Vector3 value")]
	public SharedVector3 storeResult; // 0x30

	// Methods

	// RVA: 0x3D71 Offset: 0x3D71 VA: 0x3D71 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D72 Offset: 0x3D72 VA: 0x3D72 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D73 Offset: 0x3D73 VA: 0x3D73
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetVector3$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetVector3__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetVector3_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetVector3__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetVector3_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664c1b == '\0') {
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d3c);
    DAT_ram_00664c1b = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61235(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  local_18 = 0;
  local_8 = 0;
  local_20 = local_10;
  unnamed_function_61246(param1,&local_20,DAT_ram_00565d3c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetVector3$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetVector3__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetVector3_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetVector3__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetVector3_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar1;
  BehaviorDesigner_Runtime_SharedVector3_o *pBVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  uVar3 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
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
  *(undefined8 *)&pBVar1[4].monitor = uVar3;
  __this->vector3Variable = pBVar1;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  pvVar4 = *(void **)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  uVar3 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  if (DAT_ram_00664b98 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
    DAT_ram_00664b98 = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedVector3_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
  if (DAT_ram_00664b99 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d34);
    DAT_ram_00664b99 = '\x01';
  }
  pBVar2[5].monitor = pvVar4;
  *(undefined8 *)&pBVar2[4].monitor = uVar3;
  __this->storeResult = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetVector3$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetVector3___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetVector3_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

