// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Multiply
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Multiply : Action // TypeDefIndex: 5908
{
	// Fields
	[Tooltip("The Vector2 to multiply of")]
	public SharedVector2 vector2Variable; // 0x2C
	[Tooltip("The value to multiply the Vector2 of")]
	public SharedFloat multiplyBy; // 0x30
	[RequiredField]
	[Tooltip("The multiplication resut")]
	public SharedVector2 storeResult; // 0x34

	// Methods

	// RVA: 0x3D7D Offset: 0x3D7D VA: 0x3D7D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D7E Offset: 0x3D7E VA: 0x3D7E Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D7F Offset: 0x3D7F VA: 0x3D7F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Multiply$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Multiply__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Multiply_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Multiply__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Multiply_o *__this,
               MethodInfo *method)

{
  float fVar1;
  undefined4 param1;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664c1f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d2c);
    DAT_ram_00664c1f = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  local_10 = CONCAT44(fVar1 * (float)((ulonglong)local_8 >> 0x20),fVar1 * (float)local_8);
  local_8 = local_10;
  unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Multiply$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Multiply__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Multiply_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Multiply__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Multiply_o *__this,
               MethodInfo *method)

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
  __this->vector2Variable = pBVar1;
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
  __this->multiplyBy = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Multiply$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Multiply___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Multiply_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

