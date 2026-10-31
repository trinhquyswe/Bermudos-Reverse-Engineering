// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Raycast
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Raycast : Action // TypeDefIndex: 6091
{
	// Fields
	[Tooltip("Starts the ray at the GameObject's position. If null the originPosition will be used.")]
	public SharedGameObject originGameObject; // 0x2C
	[Tooltip("Starts the ray at the position. Only used if originGameObject is null.")]
	public SharedVector2 originPosition; // 0x30
	[Tooltip("The direction of the ray")]
	public SharedVector2 direction; // 0x34
	[Tooltip("The length of the ray. Set to -1 for infinity.")]
	public SharedFloat distance; // 0x38
	[Tooltip("Selectively ignore colliders.")]
	public LayerMask layerMask; // 0x3C
	[Tooltip("Cast the ray in world or local space. The direction is in world space if no GameObject is specified.")]
	public Space space; // 0x40
	[Tooltip("Stores the hit object of the raycast.")]
	[SharedRequired]
	public SharedGameObject storeHitObject; // 0x44
	[Tooltip("Stores the hit point of the raycast.")]
	[SharedRequired]
	public SharedVector2 storeHitPoint; // 0x48
	[SharedRequired]
	[Tooltip("Stores the hit normal of the raycast.")]
	public SharedVector2 storeHitNormal; // 0x4C
	[SharedRequired]
	[Tooltip("Stores the hit distance of the raycast.")]
	public SharedFloat storeHitDistance; // 0x50

	// Methods

	// RVA: 0x4008 Offset: 0x4008 VA: 0x4008 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4009 Offset: 0x4009 VA: 0x4009 Slot: 16
	public override void OnReset() { }

	// RVA: 0x400A Offset: 0x400A VA: 0x400A
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Raycast$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float param4;
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
  
  if (DAT_ram_00664d53 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&UnityEngine_Physics2D_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565ca0);
    unnamed_function_1099(&DAT_ram_00565d2c);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664d53 = '\x01';
  }
  local_8 = 0;
  _local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  unnamed_function_61235(&local_60,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d28);
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
    if (*(int *)(__ret + 0x40) == 1) {
      uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
      uVar1 = unnamed_function_44683(uVar1,0);
      unnamed_function_61235(&local_60,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d28);
      local_30 = 0;
      local_78 = 0;
      local_38 = local_60;
      local_80 = local_60;
      unnamed_function_44992(&local_60,uVar1,&local_80,0);
    }
  }
  param4 = INFINITY;
  fVar3 = unnamed_function_61226(*(undefined4 *)(__ret + 0x38),DAT_ram_00565d00);
  if (fVar3 != -1.0) {
    param4 = unnamed_function_61226(*(undefined4 *)(__ret + 0x38),DAT_ram_00565d00);
  }
  uVar1 = *(undefined4 *)(__ret + 0x3c);
  if (*(int *)(UnityEngine_Physics2D_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Physics2D_TypeInfo);
  }
  unnamed_function_16349(&local_60,local_88,local_90,param4,uVar1,0);
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
    param1 = *(undefined4 *)(__ret + 0x44);
    uVar1 = unnamed_function_16381(&local_28,0);
    uVar1 = unnamed_function_44644(uVar1,0);
    unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
    uVar1 = *(undefined4 *)(__ret + 0x48);
    unnamed_function_7470(&local_60,&local_28,0);
    local_98 = local_60;
    unnamed_function_61236(uVar1,&local_98,DAT_ram_00565d2c);
    uVar1 = *(undefined4 *)(__ret + 0x4c);
    unnamed_function_2785(&local_60,&local_28,0);
    local_a0 = local_60;
    unnamed_function_61236(uVar1,&local_a0,DAT_ram_00565d2c);
    unnamed_function_61227(*(undefined4 *)(__ret + 0x50),(float)local_10,DAT_ram_00565d04);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Raycast$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast_o *__this,
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
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(-1.0,(MethodInfo *)0x0);
  __this->distance = pBVar2;
  __this->space = Self;
  (__this->layerMask).m_Mask = -1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D.Raycast$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Raycast_o *__this,
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

