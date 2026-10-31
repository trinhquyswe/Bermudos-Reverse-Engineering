// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Inverter
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Inverter : Decorator // TypeDefIndex: 5868
{
	// Fields
	private TaskStatus executionStatus; // 0x30

	// Methods

	// RVA: 0x3CF9 Offset: 0x3CF9 VA: 0x3CF9 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3CFA Offset: 0x3CFA VA: 0x3CFA Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3CFB Offset: 0x3CFB VA: 0x3CFB Slot: 35
	public override TaskStatus Decorate(TaskStatus status) { }

	// RVA: 0x3CFC Offset: 0x3CFC VA: 0x3CFC Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3CFD Offset: 0x3CFD VA: 0x3CFD
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Inverter$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_Inverter__CanExecute (BehaviorDesigner_Runtime_Tasks_Inverter_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Inverter__CanExecute
               (BehaviorDesigner_Runtime_Tasks_Inverter_o *__this,MethodInfo *method)

{
  return __this->executionStatus == Inactive || __this->executionStatus == Running;
}

// ---- BehaviorDesigner.Runtime.Tasks.Inverter$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_Inverter__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_Inverter_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Inverter__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_Inverter_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  __this->executionStatus = childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Inverter$$Decorate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Inverter__Decorate (BehaviorDesigner_Runtime_Tasks_Inverter_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Inverter__Decorate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Inverter_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  if ((__this != (BehaviorDesigner_Runtime_Tasks_Inverter_o *)0x1) &&
     (__this != (BehaviorDesigner_Runtime_Tasks_Inverter_o *)0x2)) {
    return;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Inverter$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_Inverter__OnEnd (BehaviorDesigner_Runtime_Tasks_Inverter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedCollision__OnReset
               (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o *__this,MethodInfo *method)

{
  __this->collidedGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Inverter$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Inverter___ctor (BehaviorDesigner_Runtime_Tasks_Inverter_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

