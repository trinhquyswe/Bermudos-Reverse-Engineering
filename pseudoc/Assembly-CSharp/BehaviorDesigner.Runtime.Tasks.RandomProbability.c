// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.RandomProbability
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class RandomProbability : Conditional // TypeDefIndex: 5860
{
	// Fields
	[Tooltip("The chance that the task will return success")]
	public SharedFloat successProbability; // 0x2C
	[Tooltip("Seed the random number generator to make things easier to debug")]
	public SharedInt seed; // 0x30
	[Tooltip("Do we want to use the seed?")]
	public SharedBool useSeed; // 0x34

	// Methods

	// RVA: 0x3CC5 Offset: 0x3CC5 VA: 0x3CC5 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3CC6 Offset: 0x3CC6 VA: 0x3CC6 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3CC7 Offset: 0x3CC7 VA: 0x3CC7 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3CC8 Offset: 0x3CC8 VA: 0x3CC8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.RandomProbability$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomProbability__OnAwake (BehaviorDesigner_Runtime_Tasks_RandomProbability_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomProbability__OnAwake
               (BehaviorDesigner_Runtime_Tasks_RandomProbability_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664bf2 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664bf2 = '\x01';
  }
  iVar1 = unnamed_function_61191(__this->useSeed,DAT_ram_00565c78);
  if (iVar1 != 0) {
    param1 = unnamed_function_61203(__this->seed,DAT_ram_00565cb8);
    unnamed_function_44579(param1,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomProbability$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_RandomProbability__OnUpdate (BehaviorDesigner_Runtime_Tasks_RandomProbability_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomProbability__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_RandomProbability_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664bf3 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    DAT_ram_00664bf3 = '\x01';
  }
  unnamed_function_44585(0);
  unnamed_function_61226(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d00);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomProbability$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomProbability__OnReset (BehaviorDesigner_Runtime_Tasks_RandomProbability_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomProbability__OnReset
               (BehaviorDesigner_Runtime_Tasks_RandomProbability_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *param1;
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  
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
  unnamed_function_61227(param1,0.5,DAT_ram_00565d04);
  __this->successProbability = param1;
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
  __this->seed = pBVar1;
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
  *(undefined1 *)&pBVar2[4].monitor = 0;
  __this->useSeed = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomProbability$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomProbability___ctor (BehaviorDesigner_Runtime_Tasks_RandomProbability_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomProbability___ctor
               (BehaviorDesigner_Runtime_Tasks_RandomProbability_o *__this,MethodInfo *method)

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
  unnamed_function_61227(param1,0.5,DAT_ram_00565d04);
  __this->successProbability = param1;
  unnamed_function_51834(__this,0);
  return;
}

