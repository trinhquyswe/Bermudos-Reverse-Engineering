// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.TaskGuard
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TaskGuard : Decorator // TypeDefIndex: 5872
{
	// Fields
	[Tooltip("The number of times the child tasks can be accessed by parallel tasks at once")]
	public SharedInt maxTaskAccessCount; // 0x30
	[Tooltip("The linked tasks that also guard a task. If the task guard is not linked against any other tasks it doesn't have much purpose. Marked as LinkedTask to ensure all tasks linked are linked to the same set of tasks")]
	[LinkedTask]
	public TaskGuard[] linkedTaskGuards; // 0x34
	[Tooltip("If true the task will wait until the child task is available. If false then any unavailable child tasks will be skipped over")]
	public SharedBool waitUntilTaskAvailable; // 0x38
	private int executingTasks; // 0x3C
	private bool executing; // 0x40

	// Methods

	// RVA: 0x3D0D Offset: 0x3D0D VA: 0x3D0D Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3D0E Offset: 0x3D0E VA: 0x3D0E Slot: 39
	public override void OnChildStarted() { }

	// RVA: 0x3D0F Offset: 0x3D0F VA: 0x3D0F Slot: 41
	public override TaskStatus OverrideStatus(TaskStatus status) { }

	// RVA: 0x3D10 Offset: 0x3D10 VA: 0x3D10
	public void taskExecuting(bool increase) { }

	// RVA: 0x3D11 Offset: 0x3D11 VA: 0x3D11 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3D12 Offset: 0x3D12 VA: 0x3D12 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D13 Offset: 0x3D13 VA: 0x3D13
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.TaskGuard$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_TaskGuard__CanExecute (BehaviorDesigner_Runtime_Tasks_TaskGuard_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_TaskGuard__CanExecute
               (BehaviorDesigner_Runtime_Tasks_TaskGuard_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_ram_00664bfc == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664bfc = '\x01';
  }
  iVar3 = __this->executingTasks;
  iVar1 = unnamed_function_61203(__this->maxTaskAccessCount,DAT_ram_00565cb8);
  if (iVar3 < iVar1) {
    bVar2 = __this->executing == false;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// ---- BehaviorDesigner.Runtime.Tasks.TaskGuard$$OnChildStarted ----
// C#: void BehaviorDesigner_Runtime_Tasks_TaskGuard__OnChildStarted (BehaviorDesigner_Runtime_Tasks_TaskGuard_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_TaskGuard__OnChildStarted
               (BehaviorDesigner_Runtime_Tasks_TaskGuard_o *__this,MethodInfo *method)

{
  int iVar1;
  BehaviorDesigner_Runtime_Tasks_TaskGuard_o *pBVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar4 = 0;
  __this->executing = true;
  __this->executingTasks = __this->executingTasks + 1;
  pBVar2 = __this->linkedTaskGuards;
  uVar3 = *(uint *)(pBVar2->pad_8 + 4);
  if (0 < (int)uVar3) {
    iVar1 = 0;
    if (2 < uVar3 - 1) {
      do {
        uVar6 = iVar1 * 4;
        *(int *)(*(int *)(pBVar2->pad_8 + uVar6 + 8) + 0x3c) =
             *(int *)(*(int *)(pBVar2->pad_8 + uVar6 + 8) + 0x3c) + 1;
        *(int *)(*(int *)(pBVar2->pad_8 + (uVar6 | 4) + 8) + 0x3c) =
             *(int *)(*(int *)(pBVar2->pad_8 + (uVar6 | 4) + 8) + 0x3c) + 1;
        *(int *)(*(int *)(pBVar2->pad_8 + (uVar6 | 8) + 8) + 0x3c) =
             *(int *)(*(int *)(pBVar2->pad_8 + (uVar6 | 8) + 8) + 0x3c) + 1;
        *(int *)(*(int *)(pBVar2->pad_8 + (uVar6 | 0xc) + 8) + 0x3c) =
             *(int *)(*(int *)(pBVar2->pad_8 + (uVar6 | 0xc) + 8) + 0x3c) + 1;
        iVar1 = iVar1 + 4;
        uVar4 = uVar4 + 4;
      } while (uVar4 != (uVar3 & 0xfffffffc));
    }
    if ((uVar3 & 3) != 0) {
      do {
        *(int *)(*(int *)(pBVar2->pad_8 + iVar1 * 4 + 8) + 0x3c) =
             *(int *)(*(int *)(pBVar2->pad_8 + iVar1 * 4 + 8) + 0x3c) + 1;
        iVar1 = iVar1 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != (uVar3 & 3));
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.TaskGuard$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_TaskGuard__OverrideStatus (BehaviorDesigner_Runtime_Tasks_TaskGuard_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_TaskGuard__OverrideStatus
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_TaskGuard_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  if (DAT_ram_00664bfd == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    DAT_ram_00664bfd = '\x01';
  }
  if (*(char *)(__ret + 0x40) == '\0') {
    unnamed_function_61191(*(undefined4 *)(__ret + 0x38),DAT_ram_00565c78);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.TaskGuard$$taskExecuting ----
// C#: void BehaviorDesigner_Runtime_Tasks_TaskGuard__taskExecuting (BehaviorDesigner_Runtime_Tasks_TaskGuard_o* __this, bool increase, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_TaskGuard__taskExecuting
               (BehaviorDesigner_Runtime_Tasks_TaskGuard_o *__this,bool increase,MethodInfo *method)

{
  undefined3 in_register_20000011;
  int iVar1;
  
  iVar1 = 1;
  if (CONCAT31(in_register_20000011,increase) == 0) {
    iVar1 = -1;
  }
  __this->executingTasks = __this->executingTasks + iVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.TaskGuard$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_TaskGuard__OnEnd (BehaviorDesigner_Runtime_Tasks_TaskGuard_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_TaskGuard__OnEnd
               (BehaviorDesigner_Runtime_Tasks_TaskGuard_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_Tasks_TaskGuard_o *pBVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = 0;
  uVar5 = 0;
  uVar3 = 0;
  if (__this->executing != false) {
    __this->executingTasks = __this->executingTasks + -1;
    pBVar1 = __this->linkedTaskGuards;
    uVar2 = *(uint *)(pBVar1->pad_8 + 4);
    if (0 < (int)uVar2) {
      if (2 < uVar2 - 1) {
        do {
          uVar6 = iVar4 * 4;
          *(int *)(*(int *)(pBVar1->pad_8 + uVar6 + 8) + 0x3c) =
               *(int *)(*(int *)(pBVar1->pad_8 + uVar6 + 8) + 0x3c) + -1;
          *(int *)(*(int *)(pBVar1->pad_8 + (uVar6 | 4) + 8) + 0x3c) =
               *(int *)(*(int *)(pBVar1->pad_8 + (uVar6 | 4) + 8) + 0x3c) + -1;
          *(int *)(*(int *)(pBVar1->pad_8 + (uVar6 | 8) + 8) + 0x3c) =
               *(int *)(*(int *)(pBVar1->pad_8 + (uVar6 | 8) + 8) + 0x3c) + -1;
          *(int *)(*(int *)(pBVar1->pad_8 + (uVar6 | 0xc) + 8) + 0x3c) =
               *(int *)(*(int *)(pBVar1->pad_8 + (uVar6 | 0xc) + 8) + 0x3c) + -1;
          iVar4 = iVar4 + 4;
          uVar3 = uVar3 + 4;
        } while (uVar3 != (uVar2 & 0xfffffffc));
      }
      if ((uVar2 & 3) != 0) {
        do {
          *(int *)(*(int *)(pBVar1->pad_8 + iVar4 * 4 + 8) + 0x3c) =
               *(int *)(*(int *)(pBVar1->pad_8 + iVar4 * 4 + 8) + 0x3c) + -1;
          iVar4 = iVar4 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != (uVar2 & 3));
      }
    }
    __this->executing = false;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.TaskGuard$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_TaskGuard__OnReset (BehaviorDesigner_Runtime_Tasks_TaskGuard_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_TaskGuard__OnReset
               (BehaviorDesigner_Runtime_Tasks_TaskGuard_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  __this->maxTaskAccessCount = (BehaviorDesigner_Runtime_SharedInt_o *)0x0;
  __this->linkedTaskGuards = (BehaviorDesigner_Runtime_Tasks_TaskGuard_o *)0x0;
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar1[4].monitor = 1;
  __this->waitUntilTaskAvailable = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.TaskGuard$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_TaskGuard___ctor (BehaviorDesigner_Runtime_Tasks_TaskGuard_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

