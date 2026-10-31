// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Selector
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Selector : Composite // TypeDefIndex: 5847
{
	// Fields
	private int currentChildIndex; // 0x34
	private TaskStatus executionStatus; // 0x38

	// Methods

	// RVA: 0x3C6E Offset: 0x3C6E VA: 0x3C6E Slot: 33
	public override int CurrentChildIndex() { }

	// RVA: 0x3C6F Offset: 0x3C6F VA: 0x3C6F Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3C70 Offset: 0x3C70 VA: 0x3C70 Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3C71 Offset: 0x3C71 VA: 0x3C71 Slot: 43
	public override void OnConditionalAbort(int childIndex) { }

	// RVA: 0x3C72 Offset: 0x3C72 VA: 0x3C72 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C73 Offset: 0x3C73 VA: 0x3C73
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Selector$$CurrentChildIndex ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Selector__CurrentChildIndex (BehaviorDesigner_Runtime_Tasks_Selector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__CurrentChildIndex
               (int __ret,BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Selector$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_Selector__CanExecute (BehaviorDesigner_Runtime_Tasks_Selector_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Selector__CanExecute
               (BehaviorDesigner_Runtime_Tasks_Selector_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (DAT_ram_00664bcc == '\0') {
    unnamed_function_1099(&DAT_ram_00563e84);
    DAT_ram_00664bcc = '\x01';
  }
  if (__this->currentChildIndex < *(int *)(*(int *)(__this->pad_8 + 0x24) + 0xc)) {
    bVar1 = __this->executionStatus != Success;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// ---- BehaviorDesigner.Runtime.Tasks.Selector$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_Selector__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_Selector_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  __this->executionStatus = childStatus;
  __this->currentChildIndex = __this->currentChildIndex + 1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Selector$$OnConditionalAbort ----
// C#: void BehaviorDesigner_Runtime_Tasks_Selector__OnConditionalAbort (BehaviorDesigner_Runtime_Tasks_Selector_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnConditionalAbort
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,int childIndex,
               MethodInfo *method)

{
  __this->executionStatus = Inactive;
  __this->currentChildIndex = childIndex;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Selector$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_Selector__OnEnd (BehaviorDesigner_Runtime_Tasks_Selector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnEnd
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,MethodInfo *method)

{
  __this->currentChildIndex = 0;
  __this->executionStatus = Inactive;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Selector$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Selector___ctor (BehaviorDesigner_Runtime_Tasks_Selector_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

