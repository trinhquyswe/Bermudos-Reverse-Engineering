// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ConditionalEvaluator : Decorator // TypeDefIndex: 5865
{
	// Fields
	[Tooltip("Should the conditional task be reevaluated every tick?")]
	public SharedBool reevaluate; // 0x30
	[Tooltip("The conditional task to evaluate")]
	[InspectTask]
	public Conditional conditionalTask; // 0x34
	[Tooltip("Should the inspected conditional task be labeled within the graph?")]
	public bool graphLabel; // 0x38
	private TaskStatus executionStatus; // 0x3C
	private bool checkConditionalTask; // 0x40
	private bool conditionalTaskFailed; // 0x41

	// Methods

	// RVA: 0x3CE0 Offset: 0x3CE0 VA: 0x3CE0 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3CE1 Offset: 0x3CE1 VA: 0x3CE1 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3CE2 Offset: 0x3CE2 VA: 0x3CE2 Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3CE3 Offset: 0x3CE3 VA: 0x3CE3 Slot: 36
	public override bool CanReevaluate() { }

	// RVA: 0x3CE4 Offset: 0x3CE4 VA: 0x3CE4 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3CE5 Offset: 0x3CE5 VA: 0x3CE5 Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3CE6 Offset: 0x3CE6 VA: 0x3CE6 Slot: 42
	public override TaskStatus OverrideStatus() { }

	// RVA: 0x3CE7 Offset: 0x3CE7 VA: 0x3CE7 Slot: 41
	public override TaskStatus OverrideStatus(TaskStatus status) { }

	// RVA: 0x3CE8 Offset: 0x3CE8 VA: 0x3CE8 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3CE9 Offset: 0x3CE9 VA: 0x3CE9 Slot: 18
	public override string OnDrawNodeText() { }

	// RVA: 0x3CEA Offset: 0x3CEA VA: 0x3CEA Slot: 16
	public override void OnReset() { }

	// RVA: 0x3CEB Offset: 0x3CEB VA: 0x3CEB
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnAwake (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnAwake
               (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o *__this,MethodInfo *method)

{
  Conditional_o *pCVar1;
  
  pCVar1 = __this->conditionalTask;
  if (pCVar1 != (Conditional_o *)0x0) {
    pCVar1[5]._opaque = *(int *)(__this->pad_8 + 0xc);
    pCVar1[2]._opaque = *(int *)__this->pad_8;
    pCVar1[3]._opaque = *(int *)(__this->pad_8 + 4);
    (**(code **)((ulonglong)*(uint *)(pCVar1->_opaque + 0xe0) * 4))
              (pCVar1,*(undefined4 *)(pCVar1->_opaque + 0xe4));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnStart (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnStart
               (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o *__this,MethodInfo *method)

{
  Conditional_o *pCVar1;
  
  pCVar1 = __this->conditionalTask;
  if (pCVar1 != (Conditional_o *)0x0) {
    (**(code **)((ulonglong)*(uint *)(pCVar1->_opaque + 0xe8) * 4))
              (pCVar1,*(undefined4 *)(pCVar1->_opaque + 0xec));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__CanExecute (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__CanExecute
               (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (__this->checkConditionalTask != false) {
    __this->checkConditionalTask = false;
    (**(code **)((ulonglong)*(uint *)((int)__this->klass + 0xf0) * 4))
              (__this,*(undefined4 *)((int)__this->klass + 0xf4));
  }
  if (__this->conditionalTaskFailed == false) {
    bVar1 = __this->executionStatus == Inactive || __this->executionStatus == Running;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$CanReevaluate ----
// C#: bool BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__CanReevaluate (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__CanReevaluate
               (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  if (DAT_ram_00664bf7 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    DAT_ram_00664bf7 = '\x01';
  }
  uVar1 = unnamed_function_61191(__this->reevaluate,DAT_ram_00565c78);
  return SUB41(uVar1,0);
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnUpdate (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = **(int **)(__ret + 0x34);
  iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xf0) * 4))
                    (*(int **)(__ret + 0x34),*(undefined4 *)(iVar1 + 0xf4));
  *(bool *)(__ret + 0x41) = iVar1 == 1 || *(int *)(__ret + 0x34) == 0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  __this->executionStatus = childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OverrideStatus (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Parallel__CanRunParallelChildren
               (BehaviorDesigner_Runtime_Tasks_Parallel_o *__this,MethodInfo *method)

{
  return true;
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OverrideStatus (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OverrideStatus
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnEnd (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnEnd
               (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o *__this,MethodInfo *method)

{
  Conditional_o *pCVar1;
  
  __this->checkConditionalTask = true;
  __this->conditionalTaskFailed = false;
  __this->executionStatus = Inactive;
  pCVar1 = __this->conditionalTask;
  if (pCVar1 != (Conditional_o *)0x0) {
    (**(code **)((ulonglong)*(uint *)(pCVar1->_opaque + 0x108) * 4))
              (pCVar1,*(undefined4 *)(pCVar1->_opaque + 0x10c));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$OnDrawNodeText ----
// C#: System_String_o* BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnDrawNodeText (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, const MethodInfo* method);

System_String_o *
BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnDrawNodeText
          (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o *__this,MethodInfo *method)

{
  int *piVar1;
  System_String_o *pSVar2;
  
  if (DAT_ram_00664bf8 == '\0') {
    unnamed_function_1099(&string_TypeInfo);
    DAT_ram_00664bf8 = '\x01';
  }
  if ((__this->conditionalTask != (Conditional_o *)0x0) && (__this->graphLabel != false)) {
    piVar1 = (int *)unnamed_function_82118(__this->conditionalTask);
    pSVar2 = (System_String_o *)
             (**(code **)((ulonglong)*(uint *)(*piVar1 + 0x100) * 4))
                       (piVar1,*(undefined4 *)(*piVar1 + 0x104));
    return pSVar2;
  }
  return (System_String_o *)**(undefined4 **)(string_TypeInfo + 0x5c);
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator__OnReset (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree__OnReset
               (BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree_o *__this,MethodInfo *method)

{
  __this->behavior = (Behavior_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.ConditionalEvaluator$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator___ctor (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator___ctor
               (BehaviorDesigner_Runtime_Tasks_ConditionalEvaluator_o *__this,MethodInfo *method)

{
  __this->checkConditionalTask = true;
  unnamed_function_51834(__this,0);
  return;
}

