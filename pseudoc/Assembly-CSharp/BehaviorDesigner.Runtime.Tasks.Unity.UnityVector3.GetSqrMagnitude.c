// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetSqrMagnitude
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetSqrMagnitude : Action // TypeDefIndex: 5884
{
	// Fields
	[Tooltip("The Vector3 to get the square magnitude of")]
	public SharedVector3 vector3Variable; // 0x2C
	[RequiredField]
	[Tooltip("The square magnitude of the vector")]
	public SharedFloat storeResult; // 0x30

	// Methods

	// RVA: 0x3D38 Offset: 0x3D38 VA: 0x3D38 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D39 Offset: 0x3D39 VA: 0x3D39 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D3A Offset: 0x3D3A VA: 0x3D3A
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetSqrMagnitude$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetSqrMagnitude__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetSqrMagnitude_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetSqrMagnitude__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetSqrMagnitude_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664c08 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664c08 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  unnamed_function_61227
            (param1,(float)local_10 * (float)local_10 + (float)local_c * (float)local_c +
                    (float)local_8 * (float)local_8,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetSqrMagnitude$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetSqrMagnitude__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetSqrMagnitude_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetMagnitude__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetMagnitude_o *__this,
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
  __this->storeResult = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetSqrMagnitude$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetSqrMagnitude___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetSqrMagnitude_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

