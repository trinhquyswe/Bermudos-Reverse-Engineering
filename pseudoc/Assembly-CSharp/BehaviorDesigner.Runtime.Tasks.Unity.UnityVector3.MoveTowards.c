// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.MoveTowards
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MoveTowards : Action // TypeDefIndex: 5889
{
	// Fields
	[Tooltip("The current position")]
	public SharedVector3 currentPosition; // 0x2C
	[Tooltip("The target position")]
	public SharedVector3 targetPosition; // 0x30
	[Tooltip("The movement speed")]
	public SharedFloat speed; // 0x34
	[Tooltip("The move resut")]
	[RequiredField]
	public SharedVector3 storeResult; // 0x38

	// Methods

	// RVA: 0x3D47 Offset: 0x3D47 VA: 0x3D47 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D48 Offset: 0x3D48 VA: 0x3D48 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D49 Offset: 0x3D49 VA: 0x3D49
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.MoveTowards$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_MoveTowards__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_MoveTowards_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_MoveTowards__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_MoveTowards_o *__this,
               MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  float fVar4;
  float fVar5;
  undefined4 param1;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_20;
  float local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664c0d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d3c);
    DAT_ram_00664c0d = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x38);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  fVar3 = local_8;
  fVar2 = local_c;
  fVar1 = local_10;
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
  fVar4 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  fVar5 = unnamed_function_44879(0);
  if (DAT_ram_00664c93 == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_00664c93 = '\x01';
  }
  fVar6 = (float)local_10 - (float)fVar1;
  fVar8 = (float)local_c - (float)fVar2;
  fVar9 = (float)local_8 - (float)fVar3;
  fVar7 = fVar6 * fVar6 + fVar8 * fVar8 + fVar9 * fVar9;
  if ((fVar7 != 0.0) && (fVar4 = fVar4 * fVar5, fVar4 < 0.0 || fVar4 * fVar4 < fVar7)) {
    if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_Math_TypeInfo);
    }
    fVar7 = SQRT(fVar7);
    local_8 = (float4)((float)fVar3 + (fVar9 / fVar7) * fVar4);
    local_c = (float4)((float)fVar2 + (fVar8 / fVar7) * fVar4);
    local_10 = (float4)((float)fVar1 + (fVar6 / fVar7) * fVar4);
  }
  local_20 = CONCAT44(local_c,local_10);
  local_18 = (float)local_8;
  unnamed_function_61246(param1,&local_20,DAT_ram_00565d3c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.MoveTowards$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_MoveTowards__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_MoveTowards_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_MoveTowards__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_MoveTowards_o *__this,
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
  __this->currentPosition = pBVar1;
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
  __this->targetPosition = pBVar1;
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
  __this->speed = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.MoveTowards$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_MoveTowards___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_MoveTowards_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

