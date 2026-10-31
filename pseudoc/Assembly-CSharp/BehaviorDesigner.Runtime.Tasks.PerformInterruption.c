// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.PerformInterruption
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class PerformInterruption : Action // TypeDefIndex: 5828
{
	// Fields
	[Tooltip("The list of tasks to interrupt. Can be any number of tasks")]
	public Interrupt[] interruptTasks; // 0x2C
	[Tooltip("When we interrupt the task should we return a task status of success?")]
	public SharedBool interruptSuccess; // 0x30

	// Methods

	// RVA: 0x3BFB Offset: 0x3BFB VA: 0x3BFB Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3BFC Offset: 0x3BFC VA: 0x3BFC Slot: 16
	public override void OnReset() { }

	// RVA: 0x3BFD Offset: 0x3BFD VA: 0x3BFD
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.PerformInterruption$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_PerformInterruption__OnUpdate (BehaviorDesigner_Runtime_Tasks_PerformInterruption_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PerformInterruption__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_PerformInterruption_o *__this,MethodInfo *method)

{
  undefined4 param4;
  int iVar1;
  int param3;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_ram_00664ba0 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    DAT_ram_00664ba0 = '\x01';
  }
  iVar1 = *(int *)(__ret + 0x2c);
  if (0 < *(int *)(iVar1 + 0xc)) {
    do {
      param3 = *(int *)(iVar1 + iVar2 * 4 + 0x10);
      iVar1 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
      if (iVar1 == 0) {
        if ((DAT_ram_00664bfa & 1) == 0) {
          unnamed_function_1099(&BehaviorDesigner_Runtime_BehaviorManager_TypeInfo);
          DAT_ram_00664bfa = 1;
        }
        param4 = 1;
        *(undefined4 *)(param3 + 0x30 /* interruptSuccess */) = 1;
        iVar1 = *(int *)(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x74);
      }
      else {
        if ((DAT_ram_00664bfa & 1) == 0) {
          unnamed_function_1099(&BehaviorDesigner_Runtime_BehaviorManager_TypeInfo);
          DAT_ram_00664bfa = 1;
        }
        param4 = 2;
        *(undefined4 *)(param3 + 0x30 /* interruptSuccess */) = 2;
        iVar1 = *(int *)(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x74);
      }
      if (iVar1 == 0) {
        unnamed_function_94848(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo);
      }
      unnamed_function_51682
                (**(undefined4 **)(BehaviorDesigner_Runtime_BehaviorManager_TypeInfo + 0x5c),
                 *(undefined4 *)(param3 + 0x14),param3,param4,0);
      iVar2 = iVar2 + 1;
      iVar1 = *(int *)(__ret + 0x2c);
    } while (iVar2 < *(int *)(iVar1 + 0xc));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.PerformInterruption$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_PerformInterruption__OnReset (BehaviorDesigner_Runtime_Tasks_PerformInterruption_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PerformInterruption__OnReset
               (BehaviorDesigner_Runtime_Tasks_PerformInterruption_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  __this->interruptTasks = (BehaviorDesigner_Runtime_Tasks_Interrupt_o *)0x0;
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
  *(undefined1 *)&pBVar1[4].monitor = 0;
  __this->interruptSuccess = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.PerformInterruption$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_PerformInterruption___ctor (BehaviorDesigner_Runtime_Tasks_PerformInterruption_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

