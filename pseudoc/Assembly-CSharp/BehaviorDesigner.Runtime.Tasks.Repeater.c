// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Repeater
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Repeater : Decorator // TypeDefIndex: 5869
{
	// Fields
	[Tooltip("The number of times to repeat the execution of its child task")]
	public SharedInt count; // 0x30
	[Tooltip("Allows the repeater to repeat forever")]
	public SharedBool repeatForever; // 0x34
	[Tooltip("Should the task return if the child task returns a failure")]
	public SharedBool endOnFailure; // 0x38
	private int executionCount; // 0x3C
	private TaskStatus executionStatus; // 0x40

	// Methods

	// RVA: 0x3CFE Offset: 0x3CFE VA: 0x3CFE Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3CFF Offset: 0x3CFF VA: 0x3CFF Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3D00 Offset: 0x3D00 VA: 0x3D00 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3D01 Offset: 0x3D01 VA: 0x3D01 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D02 Offset: 0x3D02 VA: 0x3D02
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Repeater$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_Repeater__CanExecute (BehaviorDesigner_Runtime_Tasks_Repeater_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Repeater__CanExecute
               (BehaviorDesigner_Runtime_Tasks_Repeater_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_ram_00664bfb == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664bfb = '\x01';
  }
  iVar1 = unnamed_function_61191(__this->repeatForever,DAT_ram_00565c78);
  if ((iVar1 == 0) &&
     (iVar3 = __this->executionCount, iVar1 = unnamed_function_61203(__this->count,DAT_ram_00565cb8)
     , iVar1 <= iVar3)) {
    bVar2 = false;
  }
  else {
    iVar1 = unnamed_function_61191(__this->endOnFailure,DAT_ram_00565c78);
    if (iVar1 == 0) {
      bVar2 = true;
    }
    else {
      iVar1 = unnamed_function_61191(__this->endOnFailure,DAT_ram_00565c78);
      if (iVar1 == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = __this->executionStatus != Failure;
      }
    }
  }
  return bVar2;
}

// ---- BehaviorDesigner.Runtime.Tasks.Repeater$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_Repeater__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_Repeater_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Repeater__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_Repeater_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  __this->executionStatus = childStatus;
  __this->executionCount = __this->executionCount + 1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Repeater$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_Repeater__OnEnd (BehaviorDesigner_Runtime_Tasks_Repeater_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Repeater__OnEnd
               (BehaviorDesigner_Runtime_Tasks_Repeater_o *__this,MethodInfo *method)

{
  __this->executionCount = 0;
  __this->executionStatus = Inactive;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Repeater$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Repeater__OnReset (BehaviorDesigner_Runtime_Tasks_Repeater_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Repeater__OnReset
               (BehaviorDesigner_Runtime_Tasks_Repeater_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  
  if (DAT_ram_00664b7e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedInt_TypeInfo);
    DAT_ram_00664b7e = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedInt_TypeInfo);
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  pBVar1[4].monitor = (void *)0x0;
  __this->count = pBVar1;
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar2[4].monitor = 1;
  __this->endOnFailure = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Repeater$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Repeater___ctor (BehaviorDesigner_Runtime_Tasks_Repeater_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Repeater___ctor
               (BehaviorDesigner_Runtime_Tasks_Repeater_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  if (DAT_ram_00664b7e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedInt_TypeInfo);
    DAT_ram_00664b7e = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedInt_TypeInfo);
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  pBVar1[4].monitor = (void *)0x1;
  __this->count = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

