// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Normalize
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Normalize : Action // TypeDefIndex: 5891
{
	// Fields
	[Tooltip("The Vector3 to normalize")]
	public SharedVector3 vector3Variable; // 0x2C
	[RequiredField]
	[Tooltip("The normalized resut")]
	public SharedVector3 storeResult; // 0x30

	// Methods

	// RVA: 0x3D4D Offset: 0x3D4D VA: 0x3D4D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D4E Offset: 0x3D4E VA: 0x3D4E Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D4F Offset: 0x3D4F VA: 0x3D4F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Normalize$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Normalize__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Normalize_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Normalize__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Normalize_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  float fVar1;
  float *pfVar2;
  undefined8 local_20;
  float local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664c0f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d3c);
    DAT_ram_00664c0f = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  if (DAT_ram_0066482c == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0066482c = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar1 = SQRT((float)local_10 * (float)local_10 + (float)local_c * (float)local_c +
               (float)local_8 * (float)local_8);
  if (1e-05 < fVar1) {
    local_18 = (float)local_8 / fVar1;
    local_10 = (float4)((float)local_10 / fVar1);
    local_c = (float4)((float)local_c / fVar1);
  }
  else {
    if (DAT_ram_00664829 == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_00664829 = '\x01';
    }
    pfVar2 = *(float **)(UnityEngine_Vector3_TypeInfo + 0x5c);
    local_18 = pfVar2[2];
    local_10 = (float4)*pfVar2;
    local_c = (float4)pfVar2[1];
  }
  local_20 = CONCAT44(local_c,local_10);
  local_8 = (float4)local_18;
  unnamed_function_61246(param1,&local_20,DAT_ram_00565d3c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Normalize$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Normalize__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Normalize_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Normalize$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Normalize___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Normalize_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

