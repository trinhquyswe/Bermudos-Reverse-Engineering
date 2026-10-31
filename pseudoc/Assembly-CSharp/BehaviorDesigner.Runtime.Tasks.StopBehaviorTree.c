// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.StopBehaviorTree
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class StopBehaviorTree : Action // TypeDefIndex: 5839
{
	// Fields
	[Tooltip("The GameObject of the behavior tree that should be stopped. If null use the current behavior")]
	public SharedGameObject behaviorGameObject; // 0x2C
	[Tooltip("The group of the behavior tree that should be stopped")]
	public SharedInt group; // 0x30
	[Tooltip("Should the behavior be paused or completely disabled")]
	public SharedBool pauseBehavior; // 0x34
	private Behavior behavior; // 0x38

	// Methods

	// RVA: 0x3C2C Offset: 0x3C2C VA: 0x3C2C Slot: 5
	public override void OnStart() { }

	// RVA: 0x3C2D Offset: 0x3C2D VA: 0x3C2D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3C2E Offset: 0x3C2E VA: 0x3C2E Slot: 16
	public override void OnReset() { }

	// RVA: 0x3C2F Offset: 0x3C2F VA: 0x3C2F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.StopBehaviorTree$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_StopBehaviorTree__OnStart (BehaviorDesigner_Runtime_Tasks_StopBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StopBehaviorTree__OnStart
               (BehaviorDesigner_Runtime_Tasks_StopBehaviorTree_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  Behavior_o *param1;
  
  if (DAT_ram_00664baf == '\0') {
    unnamed_function_1099(&DAT_ram_00569b54);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664baf = '\x01';
  }
  uVar2 = unnamed_function_61203(__this->behaviorGameObject,DAT_ram_00565c9c);
  uVar2 = unnamed_function_51881(__this,uVar2,0);
  iVar3 = unnamed_function_73856(uVar2,DAT_ram_00569b54);
  if (*(int *)(iVar3 + 0xc) == 1) {
    __this->behavior = *(Behavior_o **)(iVar3 + 0x10);
    return;
  }
  if (1 < *(int *)(iVar3 + 0xc)) {
    iVar1 = 0;
    do {
      piVar5 = (int *)(iVar3 + iVar1 * 4 + 0x10);
      iVar6 = *(int *)(*piVar5 + 0x18);
      iVar4 = unnamed_function_61203(__this->group,DAT_ram_00565cb8);
      if (iVar6 == iVar4) {
        __this->behavior = (Behavior_o *)*piVar5;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar3 + 0xc));
    param1 = __this->behavior;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar1 = unnamed_function_44710(param1,0,0);
    if (iVar1 != 0) {
      __this->behavior = *(Behavior_o **)(iVar3 + 0x10);
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StopBehaviorTree$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_StopBehaviorTree__OnUpdate (BehaviorDesigner_Runtime_Tasks_StopBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StopBehaviorTree__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_StopBehaviorTree_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664bb0 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    DAT_ram_00664bb0 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x38);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    param1 = *(undefined4 *)(__ret + 0x38);
    uVar2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78);
    unnamed_function_51556(param1,uVar2,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StopBehaviorTree$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_StopBehaviorTree__OnReset (BehaviorDesigner_Runtime_Tasks_StopBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StopBehaviorTree__OnReset
               (BehaviorDesigner_Runtime_Tasks_StopBehaviorTree_o *__this,MethodInfo *method)

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
  __this->pauseBehavior = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StopBehaviorTree$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_StopBehaviorTree___ctor (BehaviorDesigner_Runtime_Tasks_StopBehaviorTree_o* __this, const MethodInfo* method);

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

