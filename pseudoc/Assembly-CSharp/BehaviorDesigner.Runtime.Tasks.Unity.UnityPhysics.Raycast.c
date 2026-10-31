// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Raycast
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Raycast : Action // TypeDefIndex: 6093
{
	// Fields
	[Tooltip("Starts the ray at the GameObject's position. If null the originPosition will be used")]
	public SharedGameObject originGameObject; // 0x2C
	[Tooltip("Starts the ray at the position. Only used if originGameObject is null")]
	public SharedVector3 originPosition; // 0x30
	[Tooltip("The direction of the ray")]
	public SharedVector3 direction; // 0x34
	[Tooltip("The length of the ray. Set to -1 for infinity")]
	public SharedFloat distance; // 0x38
	[Tooltip("Selectively ignore colliders")]
	public LayerMask layerMask; // 0x3C
	[Tooltip("Cast the ray in world or local space. The direction is in world space if no GameObject is specified")]
	public Space space; // 0x40
	[SharedRequired]
	[Tooltip("Stores the hit object of the raycast")]
	public SharedGameObject storeHitObject; // 0x44
	[Tooltip("Stores the hit point of the raycast")]
	[SharedRequired]
	public SharedVector3 storeHitPoint; // 0x48
	[SharedRequired]
	[Tooltip("Stores the hit normal of the raycast")]
	public SharedVector3 storeHitNormal; // 0x4C
	[Tooltip("Stores the hit distance of the raycast")]
	[SharedRequired]
	public SharedFloat storeHitDistance; // 0x50

	// Methods

	// RVA: 0x400E Offset: 0x400E VA: 0x400E Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x400F Offset: 0x400F VA: 0x400F Slot: 16
	public override void OnReset() { }

	// RVA: 0x4010 Offset: 0x4010 VA: 0x4010
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Raycast$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Raycast__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Raycast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Raycast__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Raycast_o *__this,
               MethodInfo *method)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined4 param1;
  undefined8 *puVar5;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664d55 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&UnityEngine_Physics_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565ca0);
    unnamed_function_1099(&DAT_ram_00565d3c);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664d55 = '\x01';
  }
  local_8 = 0;
  local_10 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  unnamed_function_61245(&local_c0,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d38);
  local_18 = local_b8;
  local_20 = local_c0;
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar3 = unnamed_function_44679(uVar2,0,0);
  if (iVar3 == 0) {
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
  }
  else {
    uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
    uVar2 = unnamed_function_44683(uVar2,0);
    unnamed_function_44960(&local_10,uVar2,0);
    if (*(int *)(__ret + 0x40) == 1) {
      uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
      uVar2 = unnamed_function_44683(uVar2,0);
      unnamed_function_61245(&local_c0,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d38);
      local_d8 = local_b8;
      local_e0 = local_c0;
      unnamed_function_44992(&local_20,uVar2,&local_e0,0);
    }
  }
  local_b8 = local_8;
  local_c0 = local_10;
  local_c8 = local_18;
  local_d0 = local_20;
  fVar4 = unnamed_function_61226(*(undefined4 *)(__ret + 0x38),DAT_ram_00565d00);
  if (fVar4 == -1.0) {
    local_58 = local_c8;
    local_68 = local_b8;
    local_60 = local_d0;
    local_70 = local_c0;
    fVar4 = INFINITY;
    puVar1 = &local_70;
    puVar5 = &local_60;
  }
  else {
    local_78 = local_c8;
    local_88 = local_b8;
    local_80 = local_d0;
    local_90 = local_c0;
    puVar1 = &local_90;
    fVar4 = unnamed_function_61226(*(undefined4 *)(__ret + 0x38),DAT_ram_00565d00);
    puVar5 = &local_80;
  }
  local_98 = *(undefined4 *)(puVar5 + 1);
  local_a0 = *puVar5;
  local_a8 = *(undefined4 *)(puVar1 + 1);
  local_b0 = *puVar1;
  uVar2 = *(undefined4 *)(__ret + 0x3c);
  if (*(int *)(UnityEngine_Physics_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Physics_TypeInfo);
  }
  local_e8 = local_a8;
  local_f8 = local_98;
  local_f0 = local_b0;
  local_100 = local_a0;
  iVar3 = unnamed_function_15141(&local_f0,&local_100,&local_50,fVar4,uVar2,0);
  if (iVar3 != 0) {
    param1 = *(undefined4 *)(__ret + 0x44);
    uVar2 = unnamed_function_15205(&local_50,0);
    uVar2 = unnamed_function_44644(uVar2,0);
    unnamed_function_61204(param1,uVar2,DAT_ram_00565ca0);
    uVar2 = *(undefined4 *)(__ret + 0x48);
    unnamed_function_15207(&local_c0,&local_50,0);
    local_108 = local_b8;
    local_110 = local_c0;
    unnamed_function_61246(uVar2,&local_110,DAT_ram_00565d3c);
    uVar2 = *(undefined4 *)(__ret + 0x4c);
    unnamed_function_1487(&local_d0,&local_50,0);
    local_118 = local_c8;
    local_120 = local_d0;
    unnamed_function_61246(uVar2,&local_120,DAT_ram_00565d3c);
    unnamed_function_61227(*(undefined4 *)(__ret + 0x50),local_38._4_4_,DAT_ram_00565d04);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Raycast$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Raycast__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Raycast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Raycast__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Raycast_o *__this,
               MethodInfo *method)

{
  Vector3_o *pVVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar2;
  Vector3_o local_40;
  Vector3_o local_30;
  Vector3_o local_20;
  Vector3_o local_10;
  
  __this->originGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_30._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_30.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_30._0_8_;
  local_10.z = local_30.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->originPosition = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_40._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_40.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_20._0_8_ = local_40._0_8_;
  local_20.z = local_40.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->direction = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(-1.0,(MethodInfo *)0x0);
  __this->distance = pBVar2;
  __this->space = Self;
  (__this->layerMask).m_Mask = -1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Raycast$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Raycast___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Raycast_o* __this, const MethodInfo* method);

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

