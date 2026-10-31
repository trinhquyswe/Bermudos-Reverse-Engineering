// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Linecast
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Linecast : Action // TypeDefIndex: 6090
{
	// Fields
	[Tooltip("The starting position of the linecast.")]
	public SharedVector2 startPosition; // 0x2C
	[Tooltip("The ending position of the linecast.")]
	public SharedVector2 endPosition; // 0x30
	[Tooltip("Selectively ignore colliders.")]
	public LayerMask layerMask; // 0x34

	// Methods

	// RVA: 0x4005 Offset: 0x4005 VA: 0x4005 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4006 Offset: 0x4006 VA: 0x4006 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4007 Offset: 0x4007 VA: 0x4007
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Linecast$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 param4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664d52 == '\0') {
    unnamed_function_1099(&UnityEngine_Physics2D_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d28);
    DAT_ram_00664d52 = '\x01';
  }
  unnamed_function_61235(&local_28,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  uVar1 = local_28;
  unnamed_function_61235(&local_28,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d28);
  local_38 = local_28;
  param4 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Physics2D_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Physics2D_TypeInfo);
  }
  local_30 = uVar1;
  local_40 = uVar1;
  local_48 = local_38;
  unnamed_function_16346(&local_28,&local_40,&local_48,param4,0);
  local_50 = local_8;
  local_58 = local_10;
  local_60 = local_18;
  local_68 = local_20;
  local_70 = local_28;
  unnamed_function_16383(&local_70,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Linecast$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar1;
  Vector2_o local_20;
  Vector2_o local_18;
  Vector2_o local_10;
  Vector2_o local_8;
  
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  local_18 = **(Vector2_o **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  local_8 = local_18;
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           BehaviorDesigner_Runtime_SharedVector2__op_Implicit(&local_18,(MethodInfo *)0x0);
  __this->startPosition = pBVar1;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  local_20 = **(Vector2_o **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  local_10 = local_20;
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           BehaviorDesigner_Runtime_SharedVector2__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->endPosition = pBVar1;
  (__this->layerMask).m_Mask = -1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Linecast$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast_o *__this,
               MethodInfo *method)

{
  (__this->layerMask).m_Mask = -1;
  unnamed_function_51834(__this,0);
  return;
}

