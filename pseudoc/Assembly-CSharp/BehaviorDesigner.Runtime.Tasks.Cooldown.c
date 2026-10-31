// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Cooldown
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Cooldown : Decorator // TypeDefIndex: 5866
{
	// Fields
	public SharedFloat duration; // 0x30
	private TaskStatus executionStatus; // 0x34
	private float cooldownTime; // 0x38

	// Methods

	// RVA: 0x3CEC Offset: 0x3CEC VA: 0x3CEC Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3CED Offset: 0x3CED VA: 0x3CED Slot: 33
	public override int CurrentChildIndex() { }

	// RVA: 0x3CEE Offset: 0x3CEE VA: 0x3CEE Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3CEF Offset: 0x3CEF VA: 0x3CEF Slot: 42
	public override TaskStatus OverrideStatus() { }

	// RVA: 0x3CF0 Offset: 0x3CF0 VA: 0x3CF0 Slot: 41
	public override TaskStatus OverrideStatus(TaskStatus status) { }

	// RVA: 0x3CF1 Offset: 0x3CF1 VA: 0x3CF1 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3CF2 Offset: 0x3CF2 VA: 0x3CF2
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Cooldown$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_Cooldown__CanExecute (BehaviorDesigner_Runtime_Tasks_Cooldown_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Cooldown__CanExecute
               (BehaviorDesigner_Runtime_Tasks_Cooldown_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  
  if (DAT_ram_00664bf9 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    DAT_ram_00664bf9 = '\x01';
  }
  fVar4 = __this->cooldownTime;
  if (fVar4 == -1.0) {
    bVar3 = true;
  }
  else {
    fVar1 = unnamed_function_61226(__this->duration,DAT_ram_00565d00);
    fVar2 = unnamed_function_44878(0);
    bVar3 = fVar2 < fVar4 + fVar1;
  }
  return bVar3;
}

// ---- BehaviorDesigner.Runtime.Tasks.Cooldown$$CurrentChildIndex ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Cooldown__CurrentChildIndex (BehaviorDesigner_Runtime_Tasks_Cooldown_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Cooldown__CurrentChildIndex
               (int __ret,BehaviorDesigner_Runtime_Tasks_Cooldown_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Cooldown$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_Cooldown__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_Cooldown_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Cooldown__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_Cooldown_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  float fVar1;
  
  __this->executionStatus = childStatus;
  if (childStatus - Failure < 2) {
    fVar1 = unnamed_function_44878(0);
    __this->cooldownTime = fVar1;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Cooldown$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Cooldown__OverrideStatus (BehaviorDesigner_Runtime_Tasks_Cooldown_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Cooldown__OverrideStatus
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Cooldown_o *__this,MethodInfo *method)

{
  (**(code **)((ulonglong)*(uint *)(*(int *)__ret + 0x1d0) * 4))
            (__ret,*(undefined4 *)(*(int *)__ret + 0x1d4));
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Cooldown$$OverrideStatus ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Cooldown__OverrideStatus (BehaviorDesigner_Runtime_Tasks_Cooldown_o* __this, int32_t status, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Cooldown__OverrideStatus
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Cooldown_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus status,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Cooldown$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_Cooldown__OnEnd (BehaviorDesigner_Runtime_Tasks_Cooldown_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Cooldown__OnEnd
               (BehaviorDesigner_Runtime_Tasks_Cooldown_o *__this,MethodInfo *method)

{
  __this->executionStatus = Inactive;
  __this->cooldownTime = -1.0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Cooldown$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Cooldown___ctor (BehaviorDesigner_Runtime_Tasks_Cooldown_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Cooldown___ctor
               (BehaviorDesigner_Runtime_Tasks_Cooldown_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *param1;
  
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  param1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(param1,2.0,DAT_ram_00565d04);
  __this->cooldownTime = -1.0;
  __this->duration = param1;
  unnamed_function_51834(__this,0);
  return;
}

