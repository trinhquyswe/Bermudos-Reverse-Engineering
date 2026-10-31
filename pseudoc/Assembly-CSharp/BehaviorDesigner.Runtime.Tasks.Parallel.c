// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Parallel
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Parallel : Composite // TypeDefIndex: 5841
{
	// Fields
	private int currentChildIndex; // 0x34
	private TaskStatus[] executionStatus; // 0x38

	// Methods

	// RVA: 0x3C35 Offset: 0x3C35 VA: 0x3C35 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3C36 Offset: 0x3C36 VA: 0x3C36 Slot: 40
	public override void OnChildStarted(int childIndex) { }

	// RVA: 0x3C37 Offset: 0x3C37 VA: 0x3C37 Slot: 32
	public override bool CanRunParallelChildren() { }

	// RVA: 0x3C38 Offset: 0x3C38 VA: 0x3C38 Slot: 33
	public override int CurrentChildIndex() { }

	// RVA: 0x3C39 Offset: 0x3C39 VA: 0x3C39 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3C3A Offset: 0x3C3A VA: 0x3C3A Slot: 38
	public override void OnChildExecuted(int childIndex, TaskStatus childStatus) { }

	// RVA: 0x3C3B Offset: 0x3C3B VA: 0x3C3B Slot: 41
	public override TaskStatus OverrideStatus(TaskStatus status) { }

	// RVA: 0x3C3C Offset: 0x3C3C VA: 0x3C3C Slot: 43
	public override void OnConditionalAbort(int childIndex) { }

	// RVA: 0x3C3D Offset: 0x3C3D VA: 0x3C3D Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C3E Offset: 0x3C3E VA: 0x3C3E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Parallel$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_Parallel__OnAwake (BehaviorDesigner_Runtime_Tasks_Parallel_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__OnAwake
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_Tasks_TaskStatus BVar1;
  
  if (DAT_ram_00664bb2 == '\0') {
    unnamed_function_1099(&DAT_ram_00563e84);
    unnamed_function_1099(&BehaviorDesigner_Runtime_Tasks_TaskStatus___TypeInfo);
    DAT_ram_00664bb2 = '\x01';
  }
  BVar1 = unnamed_function_1050
                    (BehaviorDesigner_Runtime_Tasks_TaskStatus___TypeInfo,
                     *(undefined4 *)(*(int *)(__this->pad_8 + 0x24) + 0xc));
  __this->executionStatus = BVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Parallel$$OnChildStarted ----
// C#: void BehaviorDesigner_Runtime_Tasks_Parallel__OnChildStarted (BehaviorDesigner_Runtime_Tasks_Parallel_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__OnChildStarted
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,int childIndex,MethodInfo *method)

{
  __this->currentChildIndex = __this->currentChildIndex + 1;
  *(undefined4 *)(__this->executionStatus + childIndex * 4 + 0x10) = 3;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Parallel$$CanRunParallelChildren ----
// C#: bool BehaviorDesigner_Runtime_Tasks_Parallel__CanRunParallelChildren (BehaviorDesigner_Runtime_Tasks_Parallel_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Parallel__CanRunParallelChildren
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return true;
}

// ---- BehaviorDesigner.Runtime.Tasks.Parallel$$CurrentChildIndex ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Parallel__CurrentChildIndex (BehaviorDesigner_Runtime_Tasks_Parallel_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__CurrentChildIndex
               (int __ret,BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Parallel$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_Parallel__CanExecute (BehaviorDesigner_Runtime_Tasks_Parallel_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Parallel__CanExecute
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664bb3 == '\0') {
    unnamed_function_1099(&DAT_ram_00563e84);
    DAT_ram_00664bb3 = '\x01';
  }
  return __this->currentChildIndex < *(int *)(*(int *)(__this->pad_8 + 0x24) + 0xc);
}

// ---- BehaviorDesigner.Runtime.Tasks.Parallel$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_Parallel__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_Parallel_o* __this, int32_t childIndex, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,int childIndex,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  *(BehaviorDesigner_Runtime_Tasks_TaskStatus *)(__this->executionStatus + childIndex * 4 + 0x10) =
       childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Parallel$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Parallel__OverrideStatus (BehaviorDesigner_Runtime_Tasks_Parallel_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__OverrideStatus
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(__ret + 0x38) + 0xc);
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      if (*(int *)(*(int *)(__ret + 0x38) + iVar1 * 4 + 0x10) == 1) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Parallel$$OnConditionalAbort ----
// C#: void BehaviorDesigner_Runtime_Tasks_Parallel__OnConditionalAbort (BehaviorDesigner_Runtime_Tasks_Parallel_o* __this, int32_t childIndex, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Parallel$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_Parallel__OnEnd (BehaviorDesigner_Runtime_Tasks_Parallel_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Parallel$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Parallel___ctor (BehaviorDesigner_Runtime_Tasks_Parallel_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

