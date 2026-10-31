// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.ParallelComplete
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ParallelComplete : Composite // TypeDefIndex: 5842
{
	// Fields
	private int currentChildIndex; // 0x34
	private TaskStatus[] executionStatus; // 0x38

	// Methods

	// RVA: 0x3C3F Offset: 0x3C3F VA: 0x3C3F Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3C40 Offset: 0x3C40 VA: 0x3C40 Slot: 40
	public override void OnChildStarted(int childIndex) { }

	// RVA: 0x3C41 Offset: 0x3C41 VA: 0x3C41 Slot: 32
	public override bool CanRunParallelChildren() { }

	// RVA: 0x3C42 Offset: 0x3C42 VA: 0x3C42 Slot: 33
	public override int CurrentChildIndex() { }

	// RVA: 0x3C43 Offset: 0x3C43 VA: 0x3C43 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3C44 Offset: 0x3C44 VA: 0x3C44 Slot: 38
	public override void OnChildExecuted(int childIndex, TaskStatus childStatus) { }

	// RVA: 0x3C45 Offset: 0x3C45 VA: 0x3C45 Slot: 43
	public override void OnConditionalAbort(int childIndex) { }

	// RVA: 0x3C46 Offset: 0x3C46 VA: 0x3C46 Slot: 41
	public override TaskStatus OverrideStatus(TaskStatus status) { }

	// RVA: 0x3C47 Offset: 0x3C47 VA: 0x3C47 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C48 Offset: 0x3C48 VA: 0x3C48
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.ParallelComplete$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelComplete__OnAwake (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ParallelComplete__OnAwake
               (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_Tasks_TaskStatus BVar1;
  
  if (DAT_ram_00664bb4 == '\0') {
    unnamed_function_1099(&DAT_ram_00563e84);
    unnamed_function_1099(&BehaviorDesigner_Runtime_Tasks_TaskStatus___TypeInfo);
    DAT_ram_00664bb4 = '\x01';
  }
  BVar1 = unnamed_function_1050
                    (BehaviorDesigner_Runtime_Tasks_TaskStatus___TypeInfo,
                     *(undefined4 *)(*(int *)(__this->pad_8 + 0x24) + 0xc));
  __this->executionStatus = BVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelComplete$$OnChildStarted ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelComplete__OnChildStarted (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__OnChildStarted
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,int childIndex,MethodInfo *method)

{
  __this->currentChildIndex = __this->currentChildIndex + 1;
  *(undefined4 *)(__this->executionStatus + childIndex * 4 + 0x10) = 3;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelComplete$$CanRunParallelChildren ----
// C#: bool BehaviorDesigner_Runtime_Tasks_ParallelComplete__CanRunParallelChildren (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Parallel__CanRunParallelChildren
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return true;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelComplete$$CurrentChildIndex ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_ParallelComplete__CurrentChildIndex (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__CurrentChildIndex
               (int __ret,BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelComplete$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_ParallelComplete__CanExecute (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_ParallelComplete__CanExecute
               (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664bb5 == '\0') {
    unnamed_function_1099(&DAT_ram_00563e84);
    DAT_ram_00664bb5 = '\x01';
  }
  return __this->currentChildIndex < *(int *)(*(int *)(__this->pad_8 + 0x24) + 0xc);
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelComplete$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelComplete__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o* __this, int32_t childIndex, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,int childIndex,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  *(BehaviorDesigner_Runtime_Tasks_TaskStatus *)(__this->executionStatus + childIndex * 4 + 0x10) =
       childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelComplete$$OnConditionalAbort ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelComplete__OnConditionalAbort (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__OnConditionalAbort
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,int childIndex,MethodInfo *method)

{
  int iVar1;
  
  __this->currentChildIndex = 0;
  iVar1 = *(int *)(__this->executionStatus + 0xc);
  if (0 < iVar1) {
    unnamed_function_486(__this->executionStatus + 0x10,0,iVar1 << 2);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelComplete$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_ParallelComplete__OverrideStatus (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ParallelComplete__OverrideStatus
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_ParallelComplete_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(__ret + 0x34);
  if (iVar2 == 0) {
    return;
  }
  if (0 < iVar2) {
    iVar1 = 0;
    while( true ) {
      iVar3 = *(int *)(*(int *)(__ret + 0x38) + iVar1 * 4 + 0x10);
      if (iVar3 == 1) {
        return;
      }
      if (iVar3 == 2) break;
      iVar1 = iVar1 + 1;
      if (iVar1 == iVar2) {
        return;
      }
    }
    return;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelComplete$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelComplete__OnEnd (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__OnEnd
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = *(int *)(__this->executionStatus + 0xc);
  if (0 < iVar1) {
    unnamed_function_486(__this->executionStatus + 0x10,0,iVar1 << 2);
  }
  __this->currentChildIndex = 0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelComplete$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelComplete___ctor (BehaviorDesigner_Runtime_Tasks_ParallelComplete_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

