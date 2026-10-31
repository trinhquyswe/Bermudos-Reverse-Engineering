// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Interrupt
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Interrupt : Decorator // TypeDefIndex: 5867
{
	// Fields
	private TaskStatus interruptStatus; // 0x30
	private TaskStatus executionStatus; // 0x34

	// Methods

	// RVA: 0x3CF3 Offset: 0x3CF3 VA: 0x3CF3 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3CF4 Offset: 0x3CF4 VA: 0x3CF4 Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3CF5 Offset: 0x3CF5 VA: 0x3CF5
	public void DoInterrupt(TaskStatus status) { }

	// RVA: 0x3CF6 Offset: 0x3CF6 VA: 0x3CF6 Slot: 42
	public override TaskStatus OverrideStatus() { }

	// RVA: 0x3CF7 Offset: 0x3CF7 VA: 0x3CF7 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3CF8 Offset: 0x3CF8 VA: 0x3CF8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Interrupt$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_Interrupt__CanExecute (BehaviorDesigner_Runtime_Tasks_Interrupt_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Interrupt__CanExecute
               (BehaviorDesigner_Runtime_Tasks_Interrupt_o *__this,MethodInfo *method)

{
  return __this->executionStatus == Inactive || __this->executionStatus == Running;
}

// ---- BehaviorDesigner.Runtime.Tasks.Interrupt$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_Interrupt__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_Interrupt_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Interrupt__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_Interrupt_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  __this->executionStatus = childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Interrupt$$DoInterrupt ----
// C#: void BehaviorDesigner_Runtime_Tasks_Interrupt__DoInterrupt (BehaviorDesigner_Runtime_Tasks_Interrupt_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Interrupt__DoInterrupt
               (BehaviorDesigner_Runtime_Tasks_Interrupt_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  if (DAT_ram_00664bfa == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_BehaviorManager_TypeInfo);
    DAT_ram_00664bfa = '\x01';
  }
  __this->interruptStatus = status;
  if (*(int *)(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo);
  }
  unnamed_function_51682
            (**(undefined4 **)(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x5c),
             *(undefined4 *)(__this->pad_8 + 0xc),__this,status,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Interrupt$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Interrupt__OverrideStatus (BehaviorDesigner_Runtime_Tasks_Interrupt_o* __this, const MethodInfo* method);

UnityEngine_InputSystem_InputActionMap_o *
InputSystem_Actions_UIActions__op_Implicit(InputSystem_Actions_UIActions_o *set,MethodInfo *method)

{
  return set[6].klass;
}

// ---- BehaviorDesigner.Runtime.Tasks.Interrupt$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_Interrupt__OnEnd (BehaviorDesigner_Runtime_Tasks_Interrupt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Interrupt__OnEnd
               (BehaviorDesigner_Runtime_Tasks_Interrupt_o *__this,MethodInfo *method)

{
  __this->interruptStatus = Failure;
  __this->executionStatus = Inactive;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Interrupt$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Interrupt___ctor (BehaviorDesigner_Runtime_Tasks_Interrupt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Interrupt___ctor
               (BehaviorDesigner_Runtime_Tasks_Interrupt_o *__this,MethodInfo *method)

{
  __this->interruptStatus = Failure;
  unnamed_function_51834(__this,0);
  return;
}

