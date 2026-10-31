// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetXYZ
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetXYZ : Action // TypeDefIndex: 5887
{
	// Fields
	[Tooltip("The Vector3 to get the values of")]
	public SharedVector3 vector3Variable; // 0x2C
	[Tooltip("The X value")]
	[RequiredField]
	public SharedFloat storeX; // 0x30
	[RequiredField]
	[Tooltip("The Y value")]
	public SharedFloat storeY; // 0x34
	[RequiredField]
	[Tooltip("The Z value")]
	public SharedFloat storeZ; // 0x38

	// Methods

	// RVA: 0x3D41 Offset: 0x3D41 VA: 0x3D41 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D42 Offset: 0x3D42 VA: 0x3D42 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D43 Offset: 0x3D43 VA: 0x3D43
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetXYZ$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetXYZ__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetXYZ_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetXYZ__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetXYZ_o *__this,MethodInfo *method
               )

{
  undefined4 uVar1;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664c0b == '\0') {
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664c0b = '\x01';
  }
  uVar1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  unnamed_function_61227(uVar1,(float)local_10,DAT_ram_00565d04);
  uVar1 = *(undefined4 *)(__ret + 0x34);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  unnamed_function_61227(uVar1,(float)local_c,DAT_ram_00565d04);
  uVar1 = *(undefined4 *)(__ret + 0x38);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  unnamed_function_61227(uVar1,(float)local_8,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetXYZ$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetXYZ__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetXYZ_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetXYZ__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetXYZ_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector3_o *pBVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  pvVar3 = *(void **)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  uVar4 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
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
  pBVar1[5].monitor = pvVar3;
  *(undefined8 *)&pBVar1[4].monitor = uVar4;
  __this->vector3Variable = pBVar1;
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar2,0.0,DAT_ram_00565d04);
  __this->storeX = pBVar2;
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar2,0.0,DAT_ram_00565d04);
  __this->storeY = pBVar2;
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar2,0.0,DAT_ram_00565d04);
  __this->storeZ = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetXYZ$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetXYZ___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetXYZ_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

