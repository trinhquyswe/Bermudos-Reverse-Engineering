// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.ReturnSuccess
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ReturnSuccess : Decorator // TypeDefIndex: 5871
{
	// Fields
	private TaskStatus executionStatus; // 0x30

	// Methods

	// RVA: 0x3D08 Offset: 0x3D08 VA: 0x3D08 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3D09 Offset: 0x3D09 VA: 0x3D09 Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3D0A Offset: 0x3D0A VA: 0x3D0A Slot: 35
	public override TaskStatus Decorate(TaskStatus status) { }

	// RVA: 0x3D0B Offset: 0x3D0B VA: 0x3D0B Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3D0C Offset: 0x3D0C VA: 0x3D0C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.ReturnSuccess$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_ReturnSuccess__CanExecute (BehaviorDesigner_Runtime_Tasks_ReturnSuccess_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Inverter__CanExecute
               (BehaviorDesigner_Runtime_Tasks_Inverter_o *__this,MethodInfo *method)

{
  return __this->executionStatus == Inactive || __this->executionStatus == Running;
}

// ---- BehaviorDesigner.Runtime.Tasks.ReturnSuccess$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_ReturnSuccess__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_ReturnSuccess_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Inverter__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_Inverter_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  __this->executionStatus = childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ReturnSuccess$$Decorate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_ReturnSuccess__Decorate (BehaviorDesigner_Runtime_Tasks_ReturnSuccess_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ReturnSuccess__Decorate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_ReturnSuccess_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ReturnSuccess$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_ReturnSuccess__OnEnd (BehaviorDesigner_Runtime_Tasks_ReturnSuccess_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedCollision__OnReset
               (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o *__this,MethodInfo *method)

{
  __this->collidedGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ReturnSuccess$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_ReturnSuccess___ctor (BehaviorDesigner_Runtime_Tasks_ReturnSuccess_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

