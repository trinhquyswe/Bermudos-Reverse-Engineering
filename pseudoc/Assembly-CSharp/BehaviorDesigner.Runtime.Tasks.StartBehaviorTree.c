// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.StartBehaviorTree
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class StartBehaviorTree : Action // TypeDefIndex: 5838
{
	// Fields
	[Tooltip("The GameObject of the behavior tree that should be started. If null use the current behavior")]
	public SharedGameObject behaviorGameObject; // 0x2C
	[Tooltip("The group of the behavior tree that should be started")]
	public SharedInt group; // 0x30
	[Tooltip("Should this task wait for the behavior tree to complete?")]
	public SharedBool waitForCompletion; // 0x34
	[Tooltip("Should the variables be synchronized?")]
	public SharedBool synchronizeVariables; // 0x38
	private bool behaviorComplete; // 0x3C
	private Behavior behavior; // 0x40

	// Methods

	// RVA: 0x3C26 Offset: 0x3C26 VA: 0x3C26 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3C27 Offset: 0x3C27 VA: 0x3C27 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3C28 Offset: 0x3C28 VA: 0x3C28
	private void BehaviorEnded(Behavior behavior) { }

	// RVA: 0x3C29 Offset: 0x3C29 VA: 0x3C29 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C2A Offset: 0x3C2A VA: 0x3C2A Slot: 16
	public override void OnReset() { }

	// RVA: 0x3C2B Offset: 0x3C2B VA: 0x3C2B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.StartBehaviorTree$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree__OnStart (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree__OnStart
               (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  Behavior_o *pBVar7;
  undefined4 param2;
  
  if (DAT_ram_00664bac == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_Behavior_BehaviorHandler_TypeInfo);
    unnamed_function_1099(&DAT_ram_00569b54);
    unnamed_function_1099(&DAT_ram_00563b08);
    unnamed_function_1099(&DAT_ram_00563b0c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&DAT_ram_0056c9d0);
    DAT_ram_00664bac = '\x01';
  }
  uVar1 = unnamed_function_61203(__this->behaviorGameObject,DAT_ram_00565c9c);
  uVar1 = unnamed_function_51881(__this,uVar1,0);
  iVar2 = unnamed_function_73856(uVar1,DAT_ram_00569b54);
  if (*(int *)(iVar2 + 0xc) == 1) {
    __this->behavior = *(Behavior_o **)(iVar2 + 0x10);
  }
  else if (1 < *(int *)(iVar2 + 0xc)) {
    iVar3 = 0;
    do {
      piVar5 = (int *)(iVar2 + iVar3 * 4 + 0x10);
      iVar6 = *(int *)(*piVar5 + 0x18);
      iVar4 = unnamed_function_61203(__this->group,DAT_ram_00565cb8);
      if (iVar6 == iVar4) {
        __this->behavior = (Behavior_o *)*piVar5;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0xc));
    pBVar7 = __this->behavior;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar3 = unnamed_function_44710(pBVar7,0,0);
    if (iVar3 != 0) {
      __this->behavior = *(Behavior_o **)(iVar2 + 0x10);
    }
  }
  pBVar7 = __this->behavior;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44679(pBVar7,0,0);
  if (iVar2 != 0) {
    iVar2 = unnamed_function_51568(*(undefined4 *)(__this->pad_8 + 0xc),0);
    if (((iVar2 != 0) &&
        (iVar3 = unnamed_function_61191(__this->synchronizeVariables,DAT_ram_00565c78), iVar3 != 0))
       && (0 < *(int *)(iVar2 + 0xc))) {
      iVar3 = 0;
      do {
        pBVar7 = __this->behavior;
        iVar4 = unnamed_function_6529(iVar2,iVar3,DAT_ram_00563b0c);
        param2 = *(undefined4 *)(iVar4 + 0xc);
        uVar1 = unnamed_function_6529(iVar2,iVar3,DAT_ram_00563b0c);
        unnamed_function_51567(pBVar7,param2,uVar1,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar2 + 0xc));
    }
    unnamed_function_51535(__this->behavior,0);
    iVar2 = unnamed_function_61191(__this->waitForCompletion,DAT_ram_00565c78);
    if (iVar2 != 0) {
      __this->behaviorComplete = false;
      pBVar7 = __this->behavior;
      uVar1 = unnamed_function_95402(BehaviorDesigner_Runtime_Behavior_BehaviorHandler_TypeInfo);
      unnamed_function_51626(uVar1,__this,DAT_ram_0056c9d0,0);
      unnamed_function_51549(pBVar7,uVar1,0);
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StartBehaviorTree$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_StartBehaviorTree__OnUpdate (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664bad == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    DAT_ram_00664bad = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x40);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (((iVar1 == 0) &&
      (iVar1 = unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78), iVar1 != 0))
     && (*(char *)(__ret + 0x3c) == '\0')) {
    return;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StartBehaviorTree$$BehaviorEnded ----
// C#: void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree__BehaviorEnded (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o* __this, BehaviorDesigner_Runtime_Behavior_o* behavior, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree__BehaviorEnded
               (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o *__this,
               BehaviorDesigner_Runtime_Behavior_o *behavior,MethodInfo *method)

{
  __this->behaviorComplete = true;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StartBehaviorTree$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree__OnEnd (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree__OnEnd
               (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  Behavior_o *pBVar2;
  
  if (DAT_ram_00664bae == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_Behavior_BehaviorHandler_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_0056c9d0);
    DAT_ram_00664bae = '\x01';
  }
  pBVar2 = __this->behavior;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(pBVar2,0,0);
  if ((iVar1 != 0) &&
     (iVar1 = unnamed_function_61191(__this->waitForCompletion,DAT_ram_00565c78), iVar1 != 0)) {
    pBVar2 = __this->behavior;
    param1 = unnamed_function_95402(BehaviorDesigner_Runtime_Behavior_BehaviorHandler_TypeInfo);
    unnamed_function_51626(param1,__this,DAT_ram_0056c9d0,0);
    unnamed_function_51550(pBVar2,param1,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StartBehaviorTree$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree__OnReset (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree__OnReset
               (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  
  __this->behaviorGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
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
  __this->group = pBVar1;
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
  __this->waitForCompletion = pBVar2;
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
  __this->synchronizeVariables = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StartBehaviorTree$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree___ctor (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StartBehaviorTree___ctor
               (BehaviorDesigner_Runtime_Tasks_StartBehaviorTree_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
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
  __this->waitForCompletion = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

