// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Lerp
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Lerp : Action // TypeDefIndex: 5888
{
	// Fields
	[Tooltip("The from value")]
	public SharedVector3 fromVector3; // 0x2C
	[Tooltip("The to value")]
	public SharedVector3 toVector3; // 0x30
	[Tooltip("The amount to lerp")]
	public SharedFloat lerpAmount; // 0x34
	[RequiredField]
	[Tooltip("The lerp resut")]
	public SharedVector3 storeResult; // 0x38

	// Methods

	// RVA: 0x3D44 Offset: 0x3D44 VA: 0x3D44 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D45 Offset: 0x3D45 VA: 0x3D45 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D46 Offset: 0x3D46 VA: 0x3D46
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Lerp$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Lerp__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Lerp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Lerp__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Lerp_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  float fVar4;
  undefined4 param1;
  float fVar5;
  float fVar6;
  undefined8 local_20;
  float local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664c0c == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d3c);
    DAT_ram_00664c0c = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x38);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  fVar3 = local_8;
  fVar2 = local_c;
  fVar1 = local_10;
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
  fVar4 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  fVar6 = fVar4;
  if (1.0 <= fVar4) {
    fVar6 = 1.0;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar6;
  }
  local_18 = (float)fVar3 + ((float)local_8 - (float)fVar3) * fVar5;
  local_c = (float4)((float)fVar2 + ((float)local_c - (float)fVar2) * fVar5);
  local_10 = (float4)((float)fVar1 + ((float)local_10 - (float)fVar1) * fVar5);
  local_20 = CONCAT44(local_c,local_10);
  local_8 = (float4)local_18;
  unnamed_function_61246(param1,&local_20,DAT_ram_00565d3c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Lerp$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Lerp__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Lerp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Lerp__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Lerp_o *__this,MethodInfo *method)

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
  __this->toVector3 = pBVar1;
  __this->storeResult = pBVar1;
  __this->fromVector3 = pBVar1;
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
  __this->lerpAmount = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Lerp$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Lerp___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Lerp_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

