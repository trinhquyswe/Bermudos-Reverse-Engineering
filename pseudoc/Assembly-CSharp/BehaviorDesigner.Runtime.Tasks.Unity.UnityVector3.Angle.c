// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Angle
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Angle : Action // TypeDefIndex: 5877
{
	// Fields
	[Tooltip("The first Vector3")]
	public SharedVector3 firstVector3; // 0x2C
	[Tooltip("The second Vector3")]
	public SharedVector3 secondVector3; // 0x30
	[Tooltip("The angle")]
	[RequiredField]
	public SharedFloat storeResult; // 0x34

	// Methods

	// RVA: 0x3D23 Offset: 0x3D23 VA: 0x3D23 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D24 Offset: 0x3D24 VA: 0x3D24 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D25 Offset: 0x3D25 VA: 0x3D25
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Angle$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Angle__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Angle_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Angle__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Angle_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  double dVar4;
  undefined4 param1;
  float fVar5;
  float fVar6;
  float fVar7;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664c01 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664c01 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  fVar3 = local_8;
  fVar2 = local_c;
  fVar1 = local_10;
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
  if (DAT_ram_0065a9c2 == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0065a9c2 = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar5 = SQRT(((float)fVar1 * (float)fVar1 + (float)fVar2 * (float)fVar2 +
               (float)fVar3 * (float)fVar3) *
               ((float)local_10 * (float)local_10 + (float)local_c * (float)local_c +
               (float)local_8 * (float)local_8));
  if (fVar5 < 1e-15) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = ((float)fVar1 * (float)local_10 + (float)fVar2 * (float)local_c +
            (float)fVar3 * (float)local_8) / fVar5;
    fVar7 = fVar5;
    if (1.0 <= fVar5) {
      fVar7 = 1.0;
    }
    fVar6 = -1.0;
    if (-1.0 <= fVar5) {
      fVar6 = fVar7;
    }
    if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_Math_TypeInfo);
    }
    dVar4 = unnamed_function_8249((double)fVar6);
    fVar5 = (float)dVar4 * 57.29578;
  }
  unnamed_function_61227(param1,fVar5,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Angle$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Angle__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Angle_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Angle__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Angle_o *__this,MethodInfo *method
               )

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
  __this->storeResult = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Angle$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Angle___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_Angle_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

