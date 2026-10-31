// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.UtilitySelector
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class UtilitySelector : Composite // TypeDefIndex: 5850
{
	// Fields
	private int currentChildIndex; // 0x34
	private float highestUtility; // 0x38
	private TaskStatus executionStatus; // 0x3C
	private bool reevaluating; // 0x40
	private List<int> availableChildren; // 0x44

	// Methods

	// RVA: 0x3C86 Offset: 0x3C86 VA: 0x3C86 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3C87 Offset: 0x3C87 VA: 0x3C87 Slot: 33
	public override int CurrentChildIndex() { }

	// RVA: 0x3C88 Offset: 0x3C88 VA: 0x3C88 Slot: 40
	public override void OnChildStarted(int childIndex) { }

	// RVA: 0x3C89 Offset: 0x3C89 VA: 0x3C89 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3C8A Offset: 0x3C8A VA: 0x3C8A Slot: 38
	public override void OnChildExecuted(int childIndex, TaskStatus childStatus) { }

	// RVA: 0x3C8B Offset: 0x3C8B VA: 0x3C8B Slot: 43
	public override void OnConditionalAbort(int childIndex) { }

	// RVA: 0x3C8C Offset: 0x3C8C VA: 0x3C8C Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C8D Offset: 0x3C8D VA: 0x3C8D Slot: 41
	public override TaskStatus OverrideStatus(TaskStatus status) { }

	// RVA: 0x3C8E Offset: 0x3C8E VA: 0x3C8E Slot: 32
	public override bool CanRunParallelChildren() { }

	// RVA: 0x3C8F Offset: 0x3C8F VA: 0x3C8F Slot: 36
	public override bool CanReevaluate() { }

	// RVA: 0x3C90 Offset: 0x3C90 VA: 0x3C90 Slot: 44
	public override bool OnReevaluationStarted() { }

	// RVA: 0x3C91 Offset: 0x3C91 VA: 0x3C91 Slot: 45
	public override void OnReevaluationEnded(TaskStatus status) { }

	// RVA: 0x3C92 Offset: 0x3C92 VA: 0x3C92
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnStart (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnStart
               (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o *__this,MethodInfo *method)

{
  int *piVar1;
  float fVar2;
  List_o *pLVar3;
  int iVar4;
  uint uVar5;
  int param2;
  
  param2 = 0;
  if (DAT_ram_00664bd1 == '\0') {
    unnamed_function_1099(&DAT_ram_00563320);
    unnamed_function_1099(&DAT_ram_0056332c);
    unnamed_function_1099(&DAT_ram_00563e84);
    unnamed_function_1099(&DAT_ram_00563e88);
    DAT_ram_00664bd1 = '\x01';
  }
  __this->highestUtility = -3.4028235e+38;
  pLVar3 = __this->availableChildren;
  pLVar3[3]._opaque = 0;
  pLVar3[4]._opaque = pLVar3[4]._opaque + 1;
  iVar4 = *(int *)(__this->pad_8 + 0x24);
  if (0 < *(int *)(iVar4 + 0xc)) {
    do {
      piVar1 = (int *)unnamed_function_6529(iVar4,param2,DAT_ram_00563e88);
      fVar2 = (float)(**(code **)((ulonglong)*(uint *)(*piVar1 + 0x128) * 4))
                               (piVar1,*(undefined4 *)(*piVar1 + 300));
      if (__this->highestUtility < fVar2) {
        __this->currentChildIndex = param2;
        __this->highestUtility = fVar2;
      }
      iVar4 = DAT_ram_00563320;
      pLVar3 = __this->availableChildren;
      pLVar3[4]._opaque = pLVar3[4]._opaque + 1;
      uVar5 = pLVar3[3]._opaque;
      if (uVar5 < *(uint *)(pLVar3[2]._opaque + 0xc)) {
        pLVar3[3]._opaque = uVar5 + 1;
        *(int *)(pLVar3[2]._opaque + uVar5 * 4 + 0x10) = param2;
      }
      else {
        unnamed_function_6534
                  (pLVar3,param2,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
      }
      param2 = param2 + 1;
      iVar4 = *(int *)(__this->pad_8 + 0x24);
    } while (param2 < *(int *)(iVar4 + 0xc));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$CurrentChildIndex ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_UtilitySelector__CurrentChildIndex (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Parallel__CurrentChildIndex
               (int __ret,BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$OnChildStarted ----
// C#: void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnChildStarted (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnChildStarted
               (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o *__this,int childIndex,
               MethodInfo *method)

{
  __this->executionStatus = Running;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_UtilitySelector__CanExecute (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_UtilitySelector__CanExecute
               (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = false;
  if (DAT_ram_00664bd2 == '\0') {
    unnamed_function_1099(&DAT_ram_00563358);
    DAT_ram_00664bd2 = '\x01';
  }
  if (((__this->executionStatus & ~Failure) != Success) && (__this->reevaluating == false)) {
    bVar1 = 0 < __this->availableChildren[3]._opaque;
  }
  return bVar1;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, int32_t childIndex, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o *__this,int childIndex,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  int param2;
  undefined4 param2_00;
  int *piVar1;
  float fVar2;
  int iVar3;
  List_o *param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664bd3 == '\0') {
    unnamed_function_1099(&DAT_ram_00563340);
    unnamed_function_1099(&DAT_ram_00563358);
    unnamed_function_1099(&DAT_ram_00563e88);
    unnamed_function_1099(&DAT_ram_0056335c);
    DAT_ram_00664bd3 = '\x01';
  }
  if (((childStatus != Inactive) &&
      (((childStatus == Failure || (childStatus == Success)) || (childStatus != Running)))) &&
     (__this->executionStatus = childStatus, childStatus == Failure)) {
    unnamed_function_6617(__this->availableChildren,childIndex,DAT_ram_00563340);
    __this->highestUtility = -3.4028235e+38;
    param1 = __this->availableChildren;
    if (0 < param1[3]._opaque) {
      param2 = 0;
      do {
        param1_00 = *(undefined4 *)(__this->pad_8 + 0x24);
        param2_00 = unnamed_function_6529(param1,param2,DAT_ram_0056335c);
        piVar1 = (int *)unnamed_function_6529(param1_00,param2_00,DAT_ram_00563e88);
        fVar2 = (float)(**(code **)((ulonglong)*(uint *)(*piVar1 + 0x128) * 4))
                                 (piVar1,*(undefined4 *)(*piVar1 + 300));
        if (__this->highestUtility < fVar2) {
          __this->highestUtility = fVar2;
          iVar3 = unnamed_function_6529(__this->availableChildren,param2,DAT_ram_0056335c);
          __this->currentChildIndex = iVar3;
        }
        param2 = param2 + 1;
        param1 = __this->availableChildren;
      } while (param2 < param1[3]._opaque);
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$OnConditionalAbort ----
// C#: void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnConditionalAbort (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnConditionalAbort
               (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o *__this,int childIndex,
               MethodInfo *method)

{
  __this->executionStatus = Inactive;
  __this->currentChildIndex = childIndex;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnEnd (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnEnd
               (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o *__this,MethodInfo *method)

{
  __this->currentChildIndex = 0;
  __this->executionStatus = Inactive;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_UtilitySelector__OverrideStatus (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OverrideStatus
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_UtilitySelector_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$CanRunParallelChildren ----
// C#: bool BehaviorDesigner_Runtime_Tasks_UtilitySelector__CanRunParallelChildren (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Parallel__CanRunParallelChildren
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return true;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$CanReevaluate ----
// C#: bool BehaviorDesigner_Runtime_Tasks_UtilitySelector__CanReevaluate (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Parallel__CanRunParallelChildren
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return true;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$OnReevaluationStarted ----
// C#: bool BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnReevaluationStarted (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnReevaluationStarted
               (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o *__this,MethodInfo *method)

{
  if (__this->executionStatus != Inactive) {
    __this->reevaluating = true;
  }
  return __this->executionStatus != Inactive;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$OnReevaluationEnded ----
// C#: void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnReevaluationEnded (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_UtilitySelector__OnReevaluationEnded
               (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  int param2;
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  List_o *param1;
  int param2_00;
  undefined4 uVar5;
  undefined4 param2_01;
  
  if (DAT_ram_00664bd4 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_BehaviorManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_00563358);
    unnamed_function_1099(&DAT_ram_00563e88);
    unnamed_function_1099(&DAT_ram_0056335c);
    DAT_ram_00664bd4 = '\x01';
  }
  __this->reevaluating = false;
  __this->highestUtility = -3.4028235e+38;
  param1 = __this->availableChildren;
  if (0 < param1[3]._opaque) {
    param2_00 = __this->currentChildIndex;
    param2 = 0;
    do {
      uVar5 = *(undefined4 *)(__this->pad_8 + 0x24);
      uVar1 = unnamed_function_6529(param1,param2,DAT_ram_0056335c);
      piVar2 = (int *)unnamed_function_6529(uVar5,uVar1,DAT_ram_00563e88);
      fVar3 = (float)(**(code **)((ulonglong)*(uint *)(*piVar2 + 0x128) * 4))
                               (piVar2,*(undefined4 *)(*piVar2 + 300));
      if (__this->highestUtility < fVar3) {
        __this->highestUtility = fVar3;
        iVar4 = unnamed_function_6529(__this->availableChildren,param2,DAT_ram_0056335c);
        __this->currentChildIndex = iVar4;
      }
      param2 = param2 + 1;
      param1 = __this->availableChildren;
    } while (param2 < param1[3]._opaque);
    if (param2_00 != __this->currentChildIndex) {
      if (*(int *)(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo);
      }
      uVar5 = **(undefined4 **)(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x5c);
      param2_01 = *(undefined4 *)(__this->pad_8 + 0xc);
      uVar1 = unnamed_function_6529
                        (*(undefined4 *)(__this->pad_8 + 0x24),param2_00,DAT_ram_00563e88);
      unnamed_function_51677(uVar5,param2_01,uVar1,__this,1,0);
      __this->executionStatus = Inactive;
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.UtilitySelector$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_UtilitySelector___ctor (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_UtilitySelector___ctor
               (BehaviorDesigner_Runtime_Tasks_UtilitySelector_o *__this,MethodInfo *method)

{
  List_o *param1;
  
  if (DAT_ram_00664bd5 == '\0') {
    unnamed_function_1099(&DAT_ram_00563314);
    unnamed_function_1099(&System_Collections_Generic_List_int__TypeInfo);
    DAT_ram_00664bd5 = '\x01';
  }
  param1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_int__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00563314);
  __this->availableChildren = param1;
  unnamed_function_51834(__this,0);
  return;
}

