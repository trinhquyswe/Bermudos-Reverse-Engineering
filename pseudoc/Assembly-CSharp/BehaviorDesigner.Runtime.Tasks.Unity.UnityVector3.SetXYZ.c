// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.SetXYZ
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetXYZ : Action // TypeDefIndex: 5896
{
	// Fields
	[Tooltip("The Vector3 to set the values of")]
	public SharedVector3 vector3Variable; // 0x2C
	[Tooltip("The X value. Set to None to have the value ignored")]
	public SharedFloat xValue; // 0x30
	[Tooltip("The Y value. Set to None to have the value ignored")]
	public SharedFloat yValue; // 0x34
	[Tooltip("The Z value. Set to None to have the value ignored")]
	public SharedFloat zValue; // 0x38

	// Methods

	// RVA: 0x3D59 Offset: 0x3D59 VA: 0x3D59 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D5A Offset: 0x3D5A VA: 0x3D5A Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D5B Offset: 0x3D5B VA: 0x3D5B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.SetXYZ$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetXYZ__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetXYZ_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetXYZ__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetXYZ_o *__this,MethodInfo *method
               )

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined8 local_20;
  float local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664c13 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d3c);
    DAT_ram_00664c13 = '\x01';
  }
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  iVar1 = unnamed_function_51865(*(undefined4 *)(__ret + 0x30),0);
  fVar2 = (float)local_10;
  if (iVar1 == 0) {
    fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  }
  iVar1 = unnamed_function_51865(*(undefined4 *)(__ret + 0x34),0);
  fVar3 = (float)local_c;
  if (iVar1 == 0) {
    fVar3 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  }
  iVar1 = unnamed_function_51865(*(undefined4 *)(__ret + 0x38),0);
  if (iVar1 == 0) {
    local_8 = (float4)unnamed_function_61226(*(undefined4 *)(__ret + 0x38),DAT_ram_00565d00);
  }
  local_20 = CONCAT44(fVar3,fVar2);
  local_18 = (float)local_8;
  local_10 = (float4)fVar2;
  local_c = (float4)fVar3;
  unnamed_function_61246(*(undefined4 *)(__ret + 0x2c),&local_20,DAT_ram_00565d3c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.SetXYZ$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetXYZ__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetXYZ_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetXYZ__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetXYZ_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector3_o *pBVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *param1;
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
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  param1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(param1,0.0,DAT_ram_00565d04);
  __this->yValue = param1;
  __this->zValue = param1;
  __this->xValue = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.SetXYZ$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetXYZ___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_SetXYZ_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

