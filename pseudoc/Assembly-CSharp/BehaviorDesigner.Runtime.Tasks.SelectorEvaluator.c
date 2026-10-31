// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.SelectorEvaluator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SelectorEvaluator : Composite // TypeDefIndex: 5848
{
	// Fields
	private int currentChildIndex; // 0x34
	private TaskStatus executionStatus; // 0x38
	private int storedCurrentChildIndex; // 0x3C
	private TaskStatus storedExecutionStatus; // 0x40

	// Methods

	// RVA: 0x3C74 Offset: 0x3C74 VA: 0x3C74 Slot: 33
	public override int CurrentChildIndex() { }

	// RVA: 0x3C75 Offset: 0x3C75 VA: 0x3C75 Slot: 40
	public override void OnChildStarted(int childIndex) { }

	// RVA: 0x3C76 Offset: 0x3C76 VA: 0x3C76 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3C77 Offset: 0x3C77 VA: 0x3C77 Slot: 38
	public override void OnChildExecuted(int childIndex, TaskStatus childStatus) { }

	// RVA: 0x3C78 Offset: 0x3C78 VA: 0x3C78 Slot: 43
	public override void OnConditionalAbort(int childIndex) { }

	// RVA: 0x3C79 Offset: 0x3C79 VA: 0x3C79 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C7A Offset: 0x3C7A VA: 0x3C7A Slot: 41
	public override TaskStatus OverrideStatus(TaskStatus status) { }

	// RVA: 0x3C7B Offset: 0x3C7B VA: 0x3C7B Slot: 32
	public override bool CanRunParallelChildren() { }

	// RVA: 0x3C7C Offset: 0x3C7C VA: 0x3C7C Slot: 36
	public override bool CanReevaluate() { }

	// RVA: 0x3C7D Offset: 0x3C7D VA: 0x3C7D Slot: 44
	public override bool OnReevaluationStarted() { }

	// RVA: 0x3C7E Offset: 0x3C7E VA: 0x3C7E Slot: 45
	public override void OnReevaluationEnded(TaskStatus status) { }

	// RVA: 0x3C7F Offset: 0x3C7F VA: 0x3C7F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$CurrentChildIndex ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__CurrentChildIndex (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__CurrentChildIndex
               (int __ret,BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$OnChildStarted ----
// C#: void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OnChildStarted (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OnChildStarted
               (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o *__this,int childIndex,
               MethodInfo *method)

{
  __this->executionStatus = Running;
  __this->currentChildIndex = __this->currentChildIndex + 1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__CanExecute (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__CanExecute
               (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (DAT_ram_00664bcd == '\0') {
    unnamed_function_1099(&DAT_ram_00563e84);
    DAT_ram_00664bcd = '\x01';
  }
  if ((__this->executionStatus & ~Failure) == Success) {
    bVar1 = false;
  }
  else {
    if (__this->storedCurrentChildIndex != -1) {
      return __this->currentChildIndex < __this->storedCurrentChildIndex + -1;
    }
    bVar1 = __this->currentChildIndex < *(int *)(*(int *)(__this->pad_8 + 0x24) + 0xc);
  }
  return bVar1;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, int32_t childIndex, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o *__this,int childIndex,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664bce == '\0') {
    unnamed_function_1099(&DAT_ram_00563e88);
    DAT_ram_00664bce = '\x01';
  }
  if (childStatus == Inactive) {
    childStatus = Failure;
    iVar1 = unnamed_function_6529(*(undefined4 *)(__this->pad_8 + 0x24),childIndex,DAT_ram_00563e88)
    ;
    if (*(char *)(iVar1 + 0x28) == '\0') {
      return;
    }
  }
  else if (((childStatus != Failure) && (childStatus != Success)) && (childStatus == Running)) {
    return;
  }
  __this->executionStatus = childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$OnConditionalAbort ----
// C#: void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OnConditionalAbort (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnConditionalAbort
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,int childIndex,
               MethodInfo *method)

{
  __this->executionStatus = Inactive;
  __this->currentChildIndex = childIndex;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OnEnd (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnEnd
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,MethodInfo *method)

{
  __this->currentChildIndex = 0;
  __this->executionStatus = Inactive;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OverrideStatus (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OverrideStatus
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$CanRunParallelChildren ----
// C#: bool BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__CanRunParallelChildren (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Parallel__CanRunParallelChildren
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return true;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$CanReevaluate ----
// C#: bool BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__CanReevaluate (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Parallel__CanRunParallelChildren
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return true;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$OnReevaluationStarted ----
// C#: bool BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OnReevaluationStarted (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OnReevaluationStarted
               (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_Tasks_TaskStatus BVar1;
  
  BVar1 = __this->executionStatus;
  if (BVar1 != Inactive) {
    __this->storedExecutionStatus = BVar1;
    __this->storedCurrentChildIndex = __this->currentChildIndex;
    __this->currentChildIndex = 0;
    __this->executionStatus = Inactive;
  }
  return BVar1 != Inactive;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$OnReevaluationEnded ----
// C#: void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OnReevaluationEnded (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator__OnReevaluationEnded
               (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  undefined4 param3;
  undefined4 param1;
  undefined4 param2;
  
  if (DAT_ram_00664bcf == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_BehaviorManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_00563e88);
    DAT_ram_00664bcf = '\x01';
  }
  if (__this->executionStatus < Success) {
    __this->currentChildIndex = __this->storedCurrentChildIndex;
    __this->executionStatus = __this->storedExecutionStatus;
  }
  else {
    if (*(int *)(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo);
    }
    param1 = **(undefined4 **)(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x5c);
    param2 = *(undefined4 *)(__this->pad_8 + 0xc);
    param3 = unnamed_function_6529
                       (*(undefined4 *)(__this->pad_8 + 0x24),__this->storedCurrentChildIndex + -1,
                        DAT_ram_00563e88);
    unnamed_function_51677(param1,param2,param3,__this,0,0);
  }
  __this->storedCurrentChildIndex = -1;
  __this->storedExecutionStatus = Inactive;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SelectorEvaluator$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator___ctor (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_SelectorEvaluator___ctor
               (BehaviorDesigner_Runtime_Tasks_SelectorEvaluator_o *__this,MethodInfo *method)

{
  __this->storedCurrentChildIndex = -1;
  unnamed_function_51834(__this,0);
  return;
}

