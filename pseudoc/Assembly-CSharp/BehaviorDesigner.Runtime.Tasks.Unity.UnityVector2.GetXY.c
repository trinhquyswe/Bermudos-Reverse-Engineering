// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetXY
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetXY : Action // TypeDefIndex: 5905
{
	// Fields
	[Tooltip("The Vector2 to get the values of")]
	public SharedVector2 vector2Variable; // 0x2C
	[Tooltip("The X value")]
	[RequiredField]
	public SharedFloat storeX; // 0x30
	[Tooltip("The Y value")]
	[RequiredField]
	public SharedFloat storeY; // 0x34

	// Methods

	// RVA: 0x3D74 Offset: 0x3D74 VA: 0x3D74 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D75 Offset: 0x3D75 VA: 0x3D75 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D76 Offset: 0x3D76 VA: 0x3D76
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetXY$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetXY__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetXY_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetXY__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetXY_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  float4 local_8;
  float4 local_4;
  
  if (DAT_ram_00664c1c == '\0') {
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664c1c = '\x01';
  }
  uVar1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  unnamed_function_61227(uVar1,(float)local_8,DAT_ram_00565d04);
  uVar1 = *(undefined4 *)(__ret + 0x34);
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  unnamed_function_61227(uVar1,(float)local_4,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetXY$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetXY__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetXY_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetXY__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetXY_o *__this,MethodInfo *method
               )

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
  __this->storeX = param1;
  __this->storeY = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.GetXY$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetXY___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_GetXY_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

