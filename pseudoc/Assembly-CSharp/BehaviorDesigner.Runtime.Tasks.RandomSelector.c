// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.RandomSelector
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class RandomSelector : Composite // TypeDefIndex: 5845
{
	// Fields
	[Tooltip("Seed the random number generator to make things easier to debug")]
	public int seed; // 0x34
	[Tooltip("Do we want to use the seed?")]
	public bool useSeed; // 0x38
	private List<int> childIndexList; // 0x3C
	private Stack<int> childrenExecutionOrder; // 0x40
	private TaskStatus executionStatus; // 0x44

	// Methods

	// RVA: 0x3C5A Offset: 0x3C5A VA: 0x3C5A Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3C5B Offset: 0x3C5B VA: 0x3C5B Slot: 5
	public override void OnStart() { }

	// RVA: 0x3C5C Offset: 0x3C5C VA: 0x3C5C Slot: 33
	public override int CurrentChildIndex() { }

	// RVA: 0x3C5D Offset: 0x3C5D VA: 0x3C5D Slot: 34
	public override bool CanExecute() { }

	// RVA: 0x3C5E Offset: 0x3C5E VA: 0x3C5E Slot: 37
	public override void OnChildExecuted(TaskStatus childStatus) { }

	// RVA: 0x3C5F Offset: 0x3C5F VA: 0x3C5F Slot: 43
	public override void OnConditionalAbort(int childIndex) { }

	// RVA: 0x3C60 Offset: 0x3C60 VA: 0x3C60 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C61 Offset: 0x3C61 VA: 0x3C61 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3C62 Offset: 0x3C62 VA: 0x3C62
	private void ShuffleChilden() { }

	// RVA: 0x3C63 Offset: 0x3C63 VA: 0x3C63
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.RandomSelector$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnAwake (BehaviorDesigner_Runtime_Tasks_RandomSelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnAwake
               (BehaviorDesigner_Runtime_Tasks_RandomSelector_o *__this,MethodInfo *method)

{
  int iVar1;
  List_o *param1;
  int iVar2;
  int param2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  param2 = 0;
  if (DAT_ram_00664bbc == '\0') {
    unnamed_function_1099(&DAT_ram_00563320);
    unnamed_function_1099(&DAT_ram_0056332c);
    unnamed_function_1099(&DAT_ram_00563e84);
    DAT_ram_00664bbc = '\x01';
  }
  if (__this->useSeed != false) {
    unnamed_function_44579(__this->seed,0);
  }
  param1 = __this->childIndexList;
  param1[3]._opaque = 0;
  iVar4 = param1[4]._opaque + 1;
  param1[4]._opaque = iVar4;
  iVar2 = *(int *)(__this->pad_8 + 0x24);
  iVar1 = DAT_ram_00563320;
  if (0 < *(int *)(iVar2 + 0xc)) {
    while( true ) {
      param1[4]._opaque = iVar4 + 1;
      if (uVar3 < *(uint *)(param1[2]._opaque + 0xc)) {
        param1[3]._opaque = uVar3 + 1;
        *(int *)(param1[2]._opaque + uVar3 * 4 + 0x10) = param2;
      }
      else {
        unnamed_function_6534
                  (param1,param2,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
        iVar2 = *(int *)(__this->pad_8 + 0x24);
        iVar1 = DAT_ram_00563320;
      }
      param2 = param2 + 1;
      if (*(int *)(iVar2 + 0xc) <= param2) break;
      param1 = __this->childIndexList;
      uVar3 = param1[3]._opaque;
      iVar4 = param1[4]._opaque;
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomSelector$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnStart (BehaviorDesigner_Runtime_Tasks_RandomSelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnStart
               (BehaviorDesigner_Runtime_Tasks_RandomSelector_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_Tasks_RandomSelector__ShuffleChilden(__this,(MethodInfo *)__this);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomSelector$$CurrentChildIndex ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_RandomSelector__CurrentChildIndex (BehaviorDesigner_Runtime_Tasks_RandomSelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomSelector__CurrentChildIndex
               (int __ret,BehaviorDesigner_Runtime_Tasks_RandomSelector_o *__this,MethodInfo *method
               )

{
  if (DAT_ram_00664bbd == '\0') {
    unnamed_function_1099(&DAT_ram_00565f04);
    DAT_ram_00664bbd = '\x01';
  }
  unnamed_function_54810(*(undefined4 *)(__ret + 0x40),DAT_ram_00565f04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomSelector$$CanExecute ----
// C#: bool BehaviorDesigner_Runtime_Tasks_RandomSelector__CanExecute (BehaviorDesigner_Runtime_Tasks_RandomSelector_o* __this, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_RandomSelector__CanExecute
               (BehaviorDesigner_Runtime_Tasks_RandomSelector_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (DAT_ram_00664bbe == '\0') {
    unnamed_function_1099(&DAT_ram_00565f10);
    DAT_ram_00664bbe = '\x01';
  }
  if (__this->childrenExecutionOrder[3]._opaque < 1) {
    bVar1 = false;
  }
  else {
    bVar1 = __this->executionStatus != Success;
  }
  return bVar1;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomSelector$$OnChildExecuted ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnChildExecuted (BehaviorDesigner_Runtime_Tasks_RandomSelector_o* __this, int32_t childStatus, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnChildExecuted
               (BehaviorDesigner_Runtime_Tasks_RandomSelector_o *__this,
               BehaviorDesigner_Runtime_Tasks_TaskStatus childStatus,MethodInfo *method)

{
  if (DAT_ram_00664bbf == '\0') {
    unnamed_function_1099(&DAT_ram_00565f08);
    unnamed_function_1099(&DAT_ram_00565f10);
    DAT_ram_00664bbf = '\x01';
  }
  if (0 < __this->childrenExecutionOrder[3]._opaque) {
    unnamed_function_54811(__this->childrenExecutionOrder,DAT_ram_00565f08);
  }
  __this->executionStatus = childStatus;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomSelector$$OnConditionalAbort ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnConditionalAbort (BehaviorDesigner_Runtime_Tasks_RandomSelector_o* __this, int32_t childIndex, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnConditionalAbort
               (BehaviorDesigner_Runtime_Tasks_RandomSelector_o *__this,int childIndex,
               MethodInfo *method)

{
  if (DAT_ram_00664bc0 == '\0') {
    unnamed_function_1099(&DAT_ram_00565f00);
    DAT_ram_00664bc0 = '\x01';
  }
  unnamed_function_6433(__this->childrenExecutionOrder,DAT_ram_00565f00);
  __this->executionStatus = Inactive;
  BehaviorDesigner_Runtime_Tasks_RandomSelector__ShuffleChilden(__this,(MethodInfo *)__this);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomSelector$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnEnd (BehaviorDesigner_Runtime_Tasks_RandomSelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnEnd
               (BehaviorDesigner_Runtime_Tasks_RandomSelector_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664bc1 == '\0') {
    unnamed_function_1099(&DAT_ram_00565f00);
    DAT_ram_00664bc1 = '\x01';
  }
  __this->executionStatus = Inactive;
  unnamed_function_6433(__this->childrenExecutionOrder,DAT_ram_00565f00);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomSelector$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnReset (BehaviorDesigner_Runtime_Tasks_RandomSelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomSelector__OnReset
               (BehaviorDesigner_Runtime_Tasks_RandomSelector_o *__this,MethodInfo *method)

{
  __this->useSeed = false;
  __this->seed = 0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomSelector$$ShuffleChilden ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomSelector__ShuffleChilden (BehaviorDesigner_Runtime_Tasks_RandomSelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomSelector__ShuffleChilden
               (BehaviorDesigner_Runtime_Tasks_RandomSelector_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  undefined4 param2_00;
  undefined4 param3;
  uint param2_01;
  List_o *param1;
  uint param2_02;
  
  if (DAT_ram_00664bc2 == '\0') {
    unnamed_function_1099(&DAT_ram_00563358);
    unnamed_function_1099(&DAT_ram_0056335c);
    unnamed_function_1099(&DAT_ram_00563364);
    unnamed_function_1099(&DAT_ram_00565f0c);
    DAT_ram_00664bc2 = '\x01';
  }
  param2_01 = __this->childIndexList[3]._opaque;
  if (0 < (int)param2_01) {
    do {
      param2 = unnamed_function_44584(0,param2_01,0);
      param2_00 = unnamed_function_6529(__this->childIndexList,param2,DAT_ram_0056335c);
      unnamed_function_54812(__this->childrenExecutionOrder,param2_00,DAT_ram_00565f0c);
      param1 = __this->childIndexList;
      param2_02 = param2_01 - 1;
      param3 = unnamed_function_6529(param1,param2_02,DAT_ram_0056335c);
      unnamed_function_6530(param1,param2,param3,DAT_ram_00563364);
      unnamed_function_6530(__this->childIndexList,param2_02,param2_00,DAT_ram_00563364);
      bVar1 = 1 < param2_01;
      param2_01 = param2_02;
    } while (bVar1);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RandomSelector$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_RandomSelector___ctor (BehaviorDesigner_Runtime_Tasks_RandomSelector_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RandomSelector___ctor
               (BehaviorDesigner_Runtime_Tasks_RandomSelector_o *__this,MethodInfo *method)

{
  List_o *param1;
  Stack_o *param1_00;
  
  if (DAT_ram_00664bc3 == '\0') {
    unnamed_function_1099(&DAT_ram_00563314);
    unnamed_function_1099(&System_Collections_Generic_List_int__TypeInfo);
    unnamed_function_1099(&DAT_ram_00565ef8);
    unnamed_function_1099(&System_Collections_Generic_Stack_int__TypeInfo);
    DAT_ram_00664bc3 = '\x01';
  }
  param1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_int__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00563314);
  __this->childIndexList = param1;
  param1_00 = (Stack_o *)unnamed_function_95402(System_Collections_Generic_Stack_int__TypeInfo);
  unnamed_function_30856(param1_00,DAT_ram_00565ef8);
  __this->childrenExecutionOrder = param1_00;
  unnamed_function_51834(__this,0);
  return;
}

