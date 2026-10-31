// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.CompareLayerMask
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareLayerMask : Conditional // TypeDefIndex: 6200
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The layermask to compare against")]
	public LayerMask layermask; // 0x30

	// Methods

	// RVA: 0x417D Offset: 0x417D VA: 0x417D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x417E Offset: 0x417E VA: 0x417E Slot: 16
	public override void OnReset() { }

	// RVA: 0x417F Offset: 0x417F VA: 0x417F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.CompareLayerMask$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareLayerMask__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareLayerMask_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareLayerMask__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareLayerMask_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  
  if (DAT_ram_00664e04 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664e04 = '\x01';
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  uVar1 = unnamed_function_51881(__ret,uVar1,0);
  unnamed_function_44684(uVar1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.CompareLayerMask$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareLayerMask__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareLayerMask_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused_o *__this,MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.CompareLayerMask$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareLayerMask___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareLayerMask_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

