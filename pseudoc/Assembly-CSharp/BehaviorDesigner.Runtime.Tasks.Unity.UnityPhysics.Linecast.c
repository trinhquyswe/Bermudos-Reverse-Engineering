// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Linecast
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Linecast : Action // TypeDefIndex: 6092
{
	// Fields
	[Tooltip("The starting position of the linecast")]
	public SharedVector3 startPosition; // 0x2C
	[Tooltip("The ending position of the linecast")]
	public SharedVector3 endPosition; // 0x30
	[Tooltip("Selectively ignore colliders.")]
	public LayerMask layerMask; // 0x34

	// Methods

	// RVA: 0x400B Offset: 0x400B VA: 0x400B Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x400C Offset: 0x400C VA: 0x400C Slot: 16
	public override void OnReset() { }

	// RVA: 0x400D Offset: 0x400D VA: 0x400D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Linecast$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Linecast__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Linecast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Linecast__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Linecast_o *__this,
               MethodInfo *method)

{
  undefined4 param3;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664d54 == '\0') {
    unnamed_function_1099(&UnityEngine_Physics_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d38);
    DAT_ram_00664d54 = '\x01';
  }
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  unnamed_function_61245(&local_20,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
  param3 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Physics_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Physics_TypeInfo);
  }
  local_28 = local_8;
  local_38 = local_18;
  local_30 = local_10;
  local_40 = local_20;
  unnamed_function_15153(&local_30,&local_40,param3,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Linecast$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Linecast__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Linecast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Linecast__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Linecast_o *__this,
               MethodInfo *method)

{
  Vector3_o *pVVar1;
  Vector3_o local_40;
  Vector3_o local_30;
  Vector3_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_30._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_30.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_30._0_8_;
  local_10.z = local_30.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->startPosition = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_40._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_40.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_20._0_8_ = local_40._0_8_;
  local_20.z = local_40.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->endPosition = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  (__this->layerMask).m_Mask = -1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Linecast$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Linecast___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics_Linecast_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPhysics2D_Linecast_o *__this,
               MethodInfo *method)

{
  (__this->layerMask).m_Mask = -1;
  unnamed_function_51834(__this,0);
  return;
}

