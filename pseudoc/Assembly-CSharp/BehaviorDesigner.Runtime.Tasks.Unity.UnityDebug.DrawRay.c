// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.DrawRay
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class DrawRay : Action // TypeDefIndex: 6214
{
	// Fields
	[Tooltip("The position")]
	public SharedVector3 start; // 0x2C
	[Tooltip("The direction")]
	public SharedVector3 direction; // 0x30
	[Tooltip("The color")]
	public SharedColor color; // 0x34

	// Methods

	// RVA: 0x41A7 Offset: 0x41A7 VA: 0x41A7 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x41A8 Offset: 0x41A8 VA: 0x41A8 Slot: 16
	public override void OnReset() { }

	// RVA: 0x41A9 Offset: 0x41A9 VA: 0x41A9
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.DrawRay$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay_o *__this,MethodInfo *method)

{
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664e19 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c90);
    unnamed_function_1099(&DAT_ram_00565d38);
    DAT_ram_00664e19 = '\x01';
  }
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  unnamed_function_61245(&local_20,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
  unnamed_function_61197(&local_30,*(undefined4 *)(__ret + 0x34),DAT_ram_00565c90);
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  local_38 = local_8;
  local_48 = local_18;
  local_58 = local_28;
  local_40 = local_10;
  local_50 = local_20;
  local_60 = local_30;
  unnamed_function_52404(&local_40,&local_50,&local_60,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.DrawRay$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay_o *__this,MethodInfo *method
               )

{
  Vector3_o *pVVar1;
  Color_o *pCVar2;
  Color_o local_60;
  Vector3_o local_50;
  Vector3_o local_40;
  undefined8 local_30;
  undefined8 local_28;
  Vector3_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_40._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_40.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_40._0_8_;
  local_10.z = local_40.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->start = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_50._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_50.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_20._0_8_ = local_50._0_8_;
  local_20.z = local_50.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_50,(MethodInfo *)0x0);
  __this->direction = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  local_28 = 0x3f8000003f800000;
  local_60.b = 1.0;
  local_60.a = 1.0;
  local_30 = 0x3f8000003f800000;
  local_60.r = 1.0;
  local_60.g = 1.0;
  pCVar2 = BehaviorDesigner_Runtime_SharedColor__op_Implicit(&local_60,(MethodInfo *)0x0);
  __this->color = (BehaviorDesigner_Runtime_SharedColor_o *)pCVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.DrawRay$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_DrawRay_o *__this,MethodInfo *method
               )

{
  Color_o *pCVar1;
  Color_o local_20;
  undefined8 local_10;
  undefined8 local_8;
  
  local_8 = 0x3f8000003f800000;
  local_20.b = 1.0;
  local_20.a = 1.0;
  local_10 = 0x3f8000003f800000;
  local_20.r = 1.0;
  local_20.g = 1.0;
  pCVar1 = BehaviorDesigner_Runtime_SharedColor__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->color = (BehaviorDesigner_Runtime_SharedColor_o *)pCVar1;
  unnamed_function_51834(__this,0);
  return;
}

