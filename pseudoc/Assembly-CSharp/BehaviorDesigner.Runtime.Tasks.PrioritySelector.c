// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.PrioritySelector
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class PrioritySelector : Composite // TypeDefIndex: 5844
{
	// Fields
	private int currentChildIndex; // 0x34
	private TaskStatus executionStatus; // 0x38
	private List<int> childrenExecutionOrder; // 0x3C

	// Methods

	// RVA: 0x3C53 Offset: 0x3C53 VA: 0x3C53 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3C54 Offset: 0x3C54 VA: 0x3C54 Slot: 33
	public override int CurrentChildIndex() { }

	// RVA: 0x3C55 Offset: 0x3C55 VA: 0x3C55 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3C56 Offset: 0x3C56 VA: 0x3C56 Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3C57 Offset: 0x3C57 VA: 0x3C57 Slot: 43
	public override void OnConditionalAbort(int childIndex) { }

	// RVA: 0x3C58 Offset: 0x3C58 VA: 0x3C58 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C59 Offset: 0x3C59 VA: 0x3C59
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.PrioritySelector$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnStart (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnStart
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,MethodInfo *method)

{
  int param2;
  int *piVar1;
  float fVar2;
  undefined4 param2_00;
  float fVar3;
  List_o *pLVar4;
  int iVar5;
  undefined4 param1;
  int param2_01;
  
  param2_01 = 0;
  if (DAT_ram_00664bb8 == '\0') {
    unnamed_function_1099(&DAT_ram_0056332c);
    unnamed_function_1099(&DAT_ram_0056333c);
    unnamed_function_1099(&DAT_ram_00563e84);
    unnamed_function_1099(&DAT_ram_00563358);
    unnamed_function_1099(&DAT_ram_00563e88);
    unnamed_function_1099(&DAT_ram_0056335c);
    DAT_ram_00664bb8 = '\x01';
  }
  pLVar4 = __this->childrenExecutionOrder;
  pLVar4[3]._opaque = 0;
  pLVar4[4]._opaque = pLVar4[4]._opaque + 1;
  iVar5 = *(int *)(__this->pad_8 + 0x24);
  if (0 < *(int *)(iVar5 + 0xc)) {
    do {
      piVar1 = (int *)unnamed_function_6529(iVar5,param2_01,DAT_ram_00563e88);
      fVar2 = (float)(**(code **)((ulonglong)*(uint *)(*piVar1 + 0x120) * 4))
                               (piVar1,*(undefined4 *)(*piVar1 + 0x124));
      param2 = 0;
      pLVar4 = __this->childrenExecutionOrder;
      iVar5 = pLVar4[3]._opaque;
      if (0 < iVar5) {
        do {
          param1 = *(undefined4 *)(__this->pad_8 + 0x24);
          param2_00 = unnamed_function_6529(pLVar4,param2,DAT_ram_0056335c);
          piVar1 = (int *)unnamed_function_6529(param1,param2_00,DAT_ram_00563e88);
          fVar3 = (float)(**(code **)((ulonglong)*(uint *)(*piVar1 + 0x120) * 4))
                                   (piVar1,*(undefined4 *)(*piVar1 + 0x124));
          if (fVar3 < fVar2) {
            pLVar4 = __this->childrenExecutionOrder;
            iVar5 = param2;
            break;
          }
          param2 = param2 + 1;
          pLVar4 = __this->childrenExecutionOrder;
        } while (param2 < pLVar4[3]._opaque);
      }
      unnamed_function_6553(pLVar4,iVar5,param2_01,DAT_ram_0056333c);
      param2_01 = param2_01 + 1;
      iVar5 = *(int *)(__this->pad_8 + 0x24);
    } while (param2_01 < *(int *)(iVar5 + 0xc));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.PrioritySelector$$CurrentChildIndex ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_PrioritySelector__CurrentChildIndex (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector__CurrentChildIndex
               (int __ret,BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664bb9 == '\0') {
    unnamed_function_1099(&DAT_ram_0056335c);
    DAT_ram_00664bb9 = '\x01';
  }
  unnamed_function_6529
            (*(undefined4 *)(__ret + 0x3c),*(undefined4 *)(__ret + 0x34),DAT_ram_0056335c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.PrioritySelector$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_PrioritySelector__CanExecute (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_PrioritySelector__CanExecute
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (DAT_ram_00664bba == '\0') {
    unnamed_function_1099(&DAT_ram_00563e84);
    DAT_ram_00664bba = '\x01';
  }
  if (__this->currentChildIndex < *(int *)(*(int *)(__this->pad_8 + 0x24) + 0xc)) {
    bVar1 = __this->executionStatus != Success;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// ---- BehaviorDesigner.Runtime.Tasks.PrioritySelector$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  __this->executionStatus = childStatus;
  __this->currentChildIndex = __this->currentChildIndex + 1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.PrioritySelector$$OnConditionalAbort ----
// C#: void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnConditionalAbort (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnConditionalAbort
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,int childIndex,
               MethodInfo *method)

{
  __this->executionStatus = Inactive;
  __this->currentChildIndex = childIndex;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.PrioritySelector$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnEnd (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector__OnEnd
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,MethodInfo *method)

{
  __this->currentChildIndex = 0;
  __this->executionStatus = Inactive;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.PrioritySelector$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_PrioritySelector___ctor (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PrioritySelector___ctor
               (BehaviorDesigner_Runtime_Tasks_PrioritySelector_o *__this,MethodInfo *method)

{
  List_o *param1;
  
  if (DAT_ram_00664bbb == '\0') {
    unnamed_function_1099(&DAT_ram_00563314);
    unnamed_function_1099(&System_Collections_Generic_List_int__TypeInfo);
    DAT_ram_00664bbb = '\x01';
  }
  param1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_int__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00563314);
  __this->childrenExecutionOrder = param1;
  unnamed_function_51834(__this,0);
  return;
}

