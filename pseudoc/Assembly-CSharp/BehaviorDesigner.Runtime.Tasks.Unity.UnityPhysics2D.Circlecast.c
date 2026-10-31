// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Circlecast
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Circlecast : Action // TypeDefIndex: 6089
{
	// Fields
	[Tooltip("Starts the circlecast at the GameObject's position. If null the originPosition will be used.")]
	public SharedGameObject originGameObject; // 0x2C
	[Tooltip("Starts the circlecast at the position. Only used if originGameObject is null.")]
	public SharedVector2 originPosition; // 0x30
	[Tooltip("The radius of the circlecast")]
	public SharedFloat radius; // 0x34
	[Tooltip("The direction of the circlecast")]
	public SharedVector2 direction; // 0x38
	[Tooltip("The length of the ray. Set to -1 for infinity.")]
	public SharedFloat distance; // 0x3C
	[Tooltip("Selectively ignore colliders.")]
	public LayerMask layerMask; // 0x40
	[Tooltip("Use world or local space. The direction is in world space if no GameObject is specified.")]
	public Space space; // 0x44
	[SharedRequired]
	[Tooltip("Stores the hit object of the circlecast.")]
	public SharedGameObject storeHitObject; // 0x48
	[Tooltip("Stores the hit point of the circlecast.")]
	[SharedRequired]
	public SharedVector2 storeHitPoint; // 0x4C
	[SharedRequired]
	[Tooltip("Stores the hit normal of the circlecast.")]
	public SharedVector2 storeHitNormal; // 0x50
	[SharedRequired]
	[Tooltip("Stores the hit distance of the circlecast.")]
	public SharedFloat storeHitDistance; // 0x54

	// Methods

	// RVA: 0x4002 Offset: 0x4002 VA: 0x4002 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4003 Offset: 0x4003 VA: 0x4003 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4004 Offset: 0x4004 VA: 0x4004
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Circlecast$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  float param3;
  float fVar3;
  float param5;
  undefined4 param1;
  float4 local_10;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_8;
  
  if (DAT_ram_00664d51 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&UnityEngine_Physics2D_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565ca0);
    unnamed_function_1099(&DAT_ram_00565d2c);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664d51 = '\x01';
  }
  local_8 = 0;
  _local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  unnamed_function_61235(&local_60,*(undefined4 *)(__ret + 0x38),DAT_ram_00565d28);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44679(uVar1,0,0);
  if (iVar2 == 0) {
    unnamed_function_61235(&local_60,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d28);
  }
  else {
    uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
    uVar1 = unnamed_function_44683(uVar1,0);
    unnamed_function_44960(&local_60,uVar1,0);
    if (*(int *)(__ret + 0x44) == 1) {
      uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
      uVar1 = unnamed_function_44683(uVar1,0);
      unnamed_function_61235(&local_60,*(undefined4 *)(__ret + 0x38),DAT_ram_00565d28);
      local_30 = 0;
      local_78 = 0;
      local_38 = local_60;
      local_80 = local_60;
      unnamed_function_44992(&local_60,uVar1,&local_80,0);
    }
  }
  param3 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  param5 = INFINITY;
  fVar3 = unnamed_function_61226(*(undefined4 *)(__ret + 0x3c),DAT_ram_00565d00);
  if (fVar3 != -1.0) {
    param5 = unnamed_function_61226(*(undefined4 *)(__ret + 0x3c),DAT_ram_00565d00);
  }
  uVar1 = *(undefined4 *)(__ret + 0x40);
  if (*(int *)(UnityEngine_Physics2D_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Physics2D_TypeInfo);
  }
  unnamed_function_16355(&local_60,local_88,param3,local_90,param5,uVar1,0);
  local_8 = local_40;
  _local_10 = local_48;
  local_18 = local_50;
  local_20 = local_58;
  local_28 = local_60;
  uVar1 = unnamed_function_16381(&local_28,0);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44679(uVar1,0,0);
  if (iVar2 != 0) {
    param1 = *(undefined4 *)(__ret + 0x48);
    uVar1 = unnamed_function_16381(&local_28,0);
    uVar1 = unnamed_function_44644(uVar1,0);
    unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
    uVar1 = *(undefined4 *)(__ret + 0x4c);
    unnamed_function_7470(&local_60,&local_28,0);
    local_98 = local_60;
    unnamed_function_61236(uVar1,&local_98,DAT_ram_00565d2c);
    uVar1 = *(undefined4 *)(__ret + 0x50);
    unnamed_function_2785(&local_60,&local_28,0);
    local_a0 = local_60;
    unnamed_function_61236(uVar1,&local_a0,DAT_ram_00565d2c);
    unnamed_function_61227(*(undefined4 *)(__ret + 0x54),(float)local_10,DAT_ram_00565d04);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Circlecast$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar2;
  Vector2_o local_20;
  Vector2_o local_18;
  Vector2_o local_10;
  Vector2_o local_8;
  
  __this->originGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  local_18 = **(Vector2_o **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  local_8 = local_18;
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           BehaviorDesigner_Runtime_SharedVector2__op_Implicit(&local_18,(MethodInfo *)0x0);
  __this->originPosition = pBVar1;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  local_20 = **(Vector2_o **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  local_10 = local_20;
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           BehaviorDesigner_Runtime_SharedVector2__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->direction = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->radius = pBVar2;
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(-1.0,(MethodInfo *)0x0);
  __this->distance = pBVar2;
  __this->space = Self;
  (__this->layerMask).m_Mask = -1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Circlecast$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Circlecast_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(-1.0,(MethodInfo *)0x0);
  __this->distance = pBVar1;
  __this->space = Self;
  (__this->layerMask).m_Mask = -1;
  unnamed_function_51834(__this,0);
  return;
}

