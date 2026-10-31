// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.UntilFailure
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class UntilFailure : Decorator // TypeDefIndex: 5873
{
	// Fields
	private TaskStatus executionStatus; // 0x30

	// Methods

	// RVA: 0x3D14 Offset: 0x3D14 VA: 0x3D14 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3D15 Offset: 0x3D15 VA: 0x3D15 Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3D16 Offset: 0x3D16 VA: 0x3D16 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3D17 Offset: 0x3D17 VA: 0x3D17
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.UntilFailure$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_UntilFailure__CanExecute (BehaviorDesigner_Runtime_Tasks_UntilFailure_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_UntilFailure__CanExecute
               (BehaviorDesigner_Runtime_Tasks_UntilFailure_o *__this,MethodInfo *method)

{
  return (__this->executionStatus & ~Success) == Inactive;
}

// ---- BehaviorDesigner.Runtime.Tasks.UntilFailure$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_UntilFailure__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_UntilFailure_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Inverter__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_Inverter_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  __this->executionStatus = childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UntilFailure$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_UntilFailure__OnEnd (BehaviorDesigner_Runtime_Tasks_UntilFailure_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedCollision__OnReset
               (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o *__this,MethodInfo *method)

{
  __this->collidedGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UntilFailure$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_UntilFailure___ctor (BehaviorDesigner_Runtime_Tasks_UntilFailure_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

