// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Lerp
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Lerp : Action // TypeDefIndex: 5906
{
	// Fields
	[Tooltip("The from value")]
	public SharedVector2 fromVector2; // 0x2C
	[Tooltip("The to value")]
	public SharedVector2 toVector2; // 0x30
	[Tooltip("The amount to lerp")]
	public SharedFloat lerpAmount; // 0x34
	[RequiredField]
	[Tooltip("The lerp resut")]
	public SharedVector2 storeResult; // 0x38

	// Methods

	// RVA: 0x3D77 Offset: 0x3D77 VA: 0x3D77 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D78 Offset: 0x3D78 VA: 0x3D78 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D79 Offset: 0x3D79 VA: 0x3D79
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Lerp$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Lerp__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Lerp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Lerp__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Lerp_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 param1;
  float fVar4;
  float fVar5;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664c1d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d2c);
    DAT_ram_00664c1d = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x38);
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  uVar2 = local_8;
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d28);
  fVar1 = (float)((ulonglong)uVar2 >> 0x20);
  fVar3 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  fVar5 = fVar3;
  if (1.0 <= fVar3) {
    fVar5 = 1.0;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar5;
  }
  fVar5 = (float)uVar2;
  local_10 = CONCAT44(((float)((ulonglong)local_8 >> 0x20) - fVar1) * fVar4 + fVar1,
                      ((float)local_8 - fVar5) * fVar4 + fVar5);
  local_8 = local_10;
  unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Lerp$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Lerp__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Lerp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Lerp__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Lerp_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *param1;
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
  __this->fromVector2 = pBVar1;
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
  __this->toVector2 = pBVar1;
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Lerp$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Lerp___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Lerp_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

