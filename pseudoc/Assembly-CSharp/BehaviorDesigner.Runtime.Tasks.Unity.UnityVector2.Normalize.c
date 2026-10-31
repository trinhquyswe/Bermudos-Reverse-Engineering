// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Normalize
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Normalize : Action // TypeDefIndex: 5909
{
	// Fields
	[Tooltip("The Vector2 to normalize")]
	public SharedVector2 vector2Variable; // 0x2C
	[RequiredField]
	[Tooltip("The normalized resut")]
	public SharedVector2 storeResult; // 0x30

	// Methods

	// RVA: 0x3D80 Offset: 0x3D80 VA: 0x3D80 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D81 Offset: 0x3D81 VA: 0x3D81 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D82 Offset: 0x3D82 VA: 0x3D82
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Normalize$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Normalize__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Normalize_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Normalize__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Normalize_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  float fVar1;
  float fVar2;
  undefined8 local_10;
  float4 local_8;
  float4 local_4;
  
  if (DAT_ram_00664c20 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d2c);
    DAT_ram_00664c20 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  if (DAT_ram_006634ad == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_006634ad = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar1 = SQRT((float)local_8 * (float)local_8 + (float)local_4 * (float)local_4);
  if (1e-05 < fVar1) {
    fVar2 = (float)local_4 / fVar1;
    fVar1 = (float)local_8 / fVar1;
  }
  else {
    if (DAT_ram_0066482a == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_0066482a = '\x01';
    }
    fVar2 = (*(float **)(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
    fVar1 = **(float **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  }
  local_10 = CONCAT44(fVar2,fVar1);
  _local_8 = local_10;
  unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Normalize$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Normalize__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Normalize_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Normalize__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Normalize_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar1;
  undefined8 uVar2;
  
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  uVar2 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
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
  *(undefined8 *)&pBVar1[4].monitor = uVar2;
  __this->vector2Variable = pBVar1;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  uVar2 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
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
  *(undefined8 *)&pBVar1[4].monitor = uVar2;
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Normalize$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Normalize___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Normalize_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

