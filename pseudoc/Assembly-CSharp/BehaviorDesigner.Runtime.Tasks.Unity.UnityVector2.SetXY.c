// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.SetXY
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetXY : Action // TypeDefIndex: 5913
{
	// Fields
	[Tooltip("The Vector2 to set the values of")]
	public SharedVector2 vector2Variable; // 0x2C
	[Tooltip("The X value. Set to None to have the value ignored")]
	public SharedFloat xValue; // 0x30
	[Tooltip("The Y value. Set to None to have the value ignored")]
	public SharedFloat yValue; // 0x34

	// Methods

	// RVA: 0x3D89 Offset: 0x3D89 VA: 0x3D89 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D8A Offset: 0x3D8A VA: 0x3D8A Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D8B Offset: 0x3D8B VA: 0x3D8B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.SetXY$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetXY__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetXY_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetXY__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetXY_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  undefined8 local_10;
  float4 local_8;
  float4 local_4;
  
  if (DAT_ram_00664c23 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d2c);
    DAT_ram_00664c23 = '\x01';
  }
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  iVar1 = unnamed_function_51865(*(undefined4 *)(__ret + 0x30),0);
  fVar2 = (float)local_8;
  if (iVar1 == 0) {
    fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  }
  iVar1 = unnamed_function_51865(*(undefined4 *)(__ret + 0x34),0);
  if (iVar1 == 0) {
    local_4 = (float4)unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  }
  local_10 = CONCAT44(local_4,fVar2);
  local_8 = (float4)fVar2;
  unnamed_function_61236(*(undefined4 *)(__ret + 0x2c),&local_10,DAT_ram_00565d2c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.SetXY$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetXY__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetXY_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetXY__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetXY_o *__this,MethodInfo *method
               )

{
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar2;
  undefined8 uVar3;
  
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  uVar3 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
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
  *(undefined8 *)&pBVar1[4].monitor = uVar3;
  __this->vector2Variable = pBVar1;
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
  __this->xValue = pBVar2;
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
  __this->yValue = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.SetXY$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetXY___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_SetXY_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

