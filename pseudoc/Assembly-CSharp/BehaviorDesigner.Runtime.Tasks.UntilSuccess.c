// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.UntilSuccess
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class UntilSuccess : Decorator // TypeDefIndex: 5874
{
	// Fields
	private TaskStatus executionStatus; // 0x30

	// Methods

	// RVA: 0x3D18 Offset: 0x3D18 VA: 0x3D18 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3D19 Offset: 0x3D19 VA: 0x3D19 Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3D1A Offset: 0x3D1A VA: 0x3D1A Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3D1B Offset: 0x3D1B VA: 0x3D1B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.UntilSuccess$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_UntilSuccess__CanExecute (BehaviorDesigner_Runtime_Tasks_UntilSuccess_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_UntilSuccess__CanExecute
               (BehaviorDesigner_Runtime_Tasks_UntilSuccess_o *__this,MethodInfo *method)

{
  return __this->executionStatus < Success;
}

// ---- BehaviorDesigner.Runtime.Tasks.UntilSuccess$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_UntilSuccess__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_UntilSuccess_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Inverter__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_Inverter_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  __this->executionStatus = childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UntilSuccess$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_UntilSuccess__OnEnd (BehaviorDesigner_Runtime_Tasks_UntilSuccess_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedCollision__OnReset
               (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o *__this,MethodInfo *method)

{
  __this->collidedGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UntilSuccess$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_UntilSuccess___ctor (BehaviorDesigner_Runtime_Tasks_UntilSuccess_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

