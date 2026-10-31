// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.SetValue
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetValue : Action // TypeDefIndex: 5912
{
	// Fields
	[Tooltip("The Vector2 to get the values of")]
	public SharedVector2 vector2Value; // 0x2C
	[Tooltip("The Vector2 to set the values of")]
	public SharedVector2 vector2Variable; // 0x30

	// Methods

	// RVA: 0x3D86 Offset: 0x3D86 VA: 0x3D86 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D87 Offset: 0x3D87 VA: 0x3D87 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D88 Offset: 0x3D88 VA: 0x3D88
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.SetValue$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetValue__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetValue_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetValue__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetValue_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664c22 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d2c);
    DAT_ram_00664c22 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  local_10 = local_8;
  unnamed_function_61236(param1,&local_10,DAT_ram_00565d2c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.SetValue$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetValue__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetValue_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.SetValue$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetValue___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetValue_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

