// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Operator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Operator : Action // TypeDefIndex: 5893
{
	// Fields
	[Tooltip("The operation to perform")]
	public Operator.Operation operation; // 0x2C
	[Tooltip("The first Vector3")]
	public SharedVector3 firstVector3; // 0x30
	[Tooltip("The second Vector3")]
	public SharedVector3 secondVector3; // 0x34
	[Tooltip("The variable to store the result")]
	public SharedVector3 storeResult; // 0x38

	// Methods

	// RVA: 0x3D50 Offset: 0x3D50 VA: 0x3D50 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D51 Offset: 0x3D51 VA: 0x3D51 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D52 Offset: 0x3D52 VA: 0x3D52
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Operator$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Operator__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Operator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Operator__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Operator_o *__this,
               MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  float local_28;
  undefined8 local_20;
  float local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664c10 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d3c);
    DAT_ram_00664c10 = '\x01';
  }
  iVar4 = *(int *)(__ret + 0x2c);
  if (iVar4 == 0) {
    uVar5 = *(undefined4 *)(__ret + 0x38);
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
    fVar3 = local_8;
    fVar2 = local_c;
    fVar1 = local_10;
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d38);
    local_38 = (float)fVar3 + (float)local_8;
    local_c = (float4)((float)fVar2 + (float)local_c);
    local_10 = (float4)((float)fVar1 + (float)local_10);
    local_40 = CONCAT44(local_c,local_10);
    local_8 = (float4)local_38;
    unnamed_function_61246(uVar5,&local_40,DAT_ram_00565d3c);
  }
  else if (iVar4 == 1) {
    uVar5 = *(undefined4 *)(__ret + 0x38);
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
    fVar3 = local_8;
    fVar2 = local_c;
    fVar1 = local_10;
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d38);
    local_28 = (float)fVar3 - (float)local_8;
    local_c = (float4)((float)fVar2 - (float)local_c);
    local_10 = (float4)((float)fVar1 - (float)local_10);
    local_30 = CONCAT44(local_c,local_10);
    local_8 = (float4)local_28;
    unnamed_function_61246(uVar5,&local_30,DAT_ram_00565d3c);
  }
  else if (iVar4 == 2) {
    uVar5 = *(undefined4 *)(__ret + 0x38);
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
    fVar3 = local_8;
    fVar2 = local_c;
    fVar1 = local_10;
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d38);
    local_18 = (float)fVar3 * (float)local_8;
    local_c = (float4)((float)fVar2 * (float)local_c);
    local_10 = (float4)((float)fVar1 * (float)local_10);
    local_20 = CONCAT44(local_c,local_10);
    local_8 = (float4)local_18;
    unnamed_function_61246(uVar5,&local_20,DAT_ram_00565d3c);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Operator$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Operator__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Operator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Operator__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Operator_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector3_o *pBVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  __this->operation = Add;
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
  __this->firstVector3 = pBVar1;
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
  __this->secondVector3 = pBVar1;
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Operator$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Operator___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Operator_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

