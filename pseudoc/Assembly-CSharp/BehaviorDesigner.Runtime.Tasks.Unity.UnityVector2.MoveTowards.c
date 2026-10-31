// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.MoveTowards
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MoveTowards : Action // TypeDefIndex: 5907
{
	// Fields
	[Tooltip("The current position")]
	public SharedVector2 currentPosition; // 0x2C
	[Tooltip("The target position")]
	public SharedVector2 targetPosition; // 0x30
	[Tooltip("The movement speed")]
	public SharedFloat speed; // 0x34
	[RequiredField]
	[Tooltip("The move resut")]
	public SharedVector2 storeResult; // 0x38

	// Methods

	// RVA: 0x3D7A Offset: 0x3D7A VA: 0x3D7A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D7B Offset: 0x3D7B VA: 0x3D7B Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D7C Offset: 0x3D7C VA: 0x3D7C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.MoveTowards$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_MoveTowards__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_MoveTowards_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_MoveTowards__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_MoveTowards_o *__this,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined4 param1;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664c1e == '\0') {
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d2c);
    DAT_ram_00664c1e = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x38);
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  uVar3 = local_8;
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d28);
  fVar4 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  fVar5 = unnamed_function_44879(0);
  fVar8 = (float)((ulonglong)local_8 >> 0x20);
  fVar9 = (float)local_8;
  if (DAT_ram_00664c94 == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_00664c94 = '\x01';
  }
  fVar1 = (float)uVar3;
  fVar6 = fVar9 - fVar1;
  fVar2 = (float)((ulonglong)uVar3 >> 0x20);
  fVar10 = fVar8 - fVar2;
  fVar7 = fVar6 * fVar6 + fVar10 * fVar10;
  if ((fVar7 != 0.0) && (fVar4 = fVar4 * fVar5, fVar4 < 0.0 || fVar4 * fVar4 < fVar7)) {
    if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_Math_TypeInfo);
    }
    fVar8 = fVar4 * (fVar10 / SQRT(fVar7)) + fVar2;
    fVar9 = fVar4 * (fVar6 / SQRT(fVar7)) + fVar1;
  }
  local_10 = CONCAT44(fVar8,fVar9);
  local_8 = local_10;
  unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.MoveTowards$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_MoveTowards__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_MoveTowards_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.MoveTowards$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_MoveTowards___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_MoveTowards_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

