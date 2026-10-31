// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.ParallelSelector
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ParallelSelector : Composite // TypeDefIndex: 5843
{
	// Fields
	private int currentChildIndex; // 0x34
	private TaskStatus[] executionStatus; // 0x38

	// Methods

	// RVA: 0x3C49 Offset: 0x3C49 VA: 0x3C49 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3C4A Offset: 0x3C4A VA: 0x3C4A Slot: 40
	public override void OnChildStarted(int childIndex) { }

	// RVA: 0x3C4B Offset: 0x3C4B VA: 0x3C4B Slot: 32
	public override bool CanRunParallelChildren() { }

	// RVA: 0x3C4C Offset: 0x3C4C VA: 0x3C4C Slot: 33
	public override int CurrentChildIndex() { }

	// RVA: 0x3C4D Offset: 0x3C4D VA: 0x3C4D Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3C4E Offset: 0x3C4E VA: 0x3C4E Slot: 38
	public override void OnChildExecuted(int childIndex, TaskStatus childStatus) { }

	// RVA: 0x3C4F Offset: 0x3C4F VA: 0x3C4F Slot: 43
	public override void OnConditionalAbort(int childIndex) { }

	// RVA: 0x3C50 Offset: 0x3C50 VA: 0x3C50 Slot: 41
	public override TaskStatus OverrideStatus(TaskStatus status) { }

	// RVA: 0x3C51 Offset: 0x3C51 VA: 0x3C51 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C52 Offset: 0x3C52 VA: 0x3C52
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.ParallelSelector$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelSelector__OnAwake (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ParallelSelector__OnAwake
               (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_Tasks_TaskStatus BVar1;
  
  if (DAT_ram_00664bb6 == '\0') {
    unnamed_function_1099(&DAT_ram_00563e84);
    unnamed_function_1099(&BehaviorDesigner_Runtime_Tasks_TaskStatus___TypeInfo);
    DAT_ram_00664bb6 = '\x01';
  }
  BVar1 = unnamed_function_1050
                    (BehaviorDesigner_Runtime_Tasks_TaskStatus___TypeInfo,
                     *(undefined4 *)(*(int *)(__this->pad_8 + 0x24) + 0xc));
  __this->executionStatus = BVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelSelector$$OnChildStarted ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelSelector__OnChildStarted (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__OnChildStarted
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,int childIndex,MethodInfo *method)

{
  __this->currentChildIndex = __this->currentChildIndex + 1;
  *(undefined4 *)(__this->executionStatus + childIndex * 4 + 0x10) = 3;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelSelector$$CanRunParallelChildren ----
// C#: bool BehaviorDesigner_Runtime_Tasks_ParallelSelector__CanRunParallelChildren (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Parallel__CanRunParallelChildren
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return true;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelSelector$$CurrentChildIndex ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_ParallelSelector__CurrentChildIndex (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__CurrentChildIndex
               (int __ret,BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelSelector$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_ParallelSelector__CanExecute (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_ParallelSelector__CanExecute
               (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664bb7 == '\0') {
    unnamed_function_1099(&DAT_ram_00563e84);
    DAT_ram_00664bb7 = '\x01';
  }
  return __this->currentChildIndex < *(int *)(*(int *)(__this->pad_8 + 0x24) + 0xc);
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelSelector$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelSelector__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o* __this, int32_t childIndex, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,int childIndex,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  *(BehaviorDesigner_Runtime_Tasks_TaskStatus *)(__this->executionStatus + childIndex * 4 + 0x10) =
       childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelSelector$$OnConditionalAbort ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelSelector__OnConditionalAbort (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o* __this, int32_t childIndex, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.ParallelSelector$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_ParallelSelector__OverrideStatus (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ParallelSelector__OverrideStatus
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_ParallelSelector_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(__ret + 0x38) + 0xc);
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      if (*(int *)(*(int *)(__ret + 0x38) + iVar1 * 4 + 0x10) == 2) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ParallelSelector$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelSelector__OnEnd (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.ParallelSelector$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_ParallelSelector___ctor (BehaviorDesigner_Runtime_Tasks_ParallelSelector_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

