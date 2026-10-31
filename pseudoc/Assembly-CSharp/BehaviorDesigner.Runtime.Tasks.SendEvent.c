// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.SendEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SendEvent : Action // TypeDefIndex: 5835
{
	// Fields
	[Tooltip("The GameObject of the behavior tree that should have the event sent to it. If null use the current behavior")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The event to send")]
	public SharedString eventName; // 0x30
	[Tooltip("The group of the behavior tree that the event should be sent to")]
	public SharedInt group; // 0x34
	[SharedRequired]
	[Tooltip("Optionally specify a first argument to send")]
	public SharedVariable argument1; // 0x38
	[SharedRequired]
	[Tooltip("Optionally specify a second argument to send")]
	public SharedVariable argument2; // 0x3C
	[Tooltip("Optionally specify a third argument to send")]
	[SharedRequired]
	public SharedVariable argument3; // 0x40
	private BehaviorTree behaviorTree; // 0x44

	// Methods

	// RVA: 0x3C11 Offset: 0x3C11 VA: 0x3C11 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3C12 Offset: 0x3C12 VA: 0x3C12 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3C13 Offset: 0x3C13 VA: 0x3C13 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3C14 Offset: 0x3C14 VA: 0x3C14
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.SendEvent$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_SendEvent__OnStart (BehaviorDesigner_Runtime_Tasks_SendEvent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_SendEvent__OnStart
               (BehaviorDesigner_Runtime_Tasks_SendEvent_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  BehaviorDesigner_Runtime_BehaviorTree_o *param1;
  
  if (DAT_ram_00664ba8 == '\0') {
    unnamed_function_1099(&DAT_ram_00569b58);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664ba8 = '\x01';
  }
  uVar2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  uVar2 = unnamed_function_51881(__this,uVar2,0);
  iVar3 = unnamed_function_73856(uVar2,DAT_ram_00569b58);
  if (*(int *)(iVar3 + 0xc) == 1) {
    __this->behaviorTree = *(BehaviorDesigner_Runtime_BehaviorTree_o **)(iVar3 + 0x10);
    return;
  }
  if (1 < *(int *)(iVar3 + 0xc)) {
    iVar1 = 0;
    do {
      piVar5 = (int *)(iVar3 + iVar1 * 4 + 0x10);
      iVar6 = *(int *)(*piVar5 + 0x18);
      iVar4 = unnamed_function_61203(__this->group,DAT_ram_00565cb8);
      if (iVar6 == iVar4) {
        __this->behaviorTree = (BehaviorDesigner_Runtime_BehaviorTree_o *)*piVar5;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar3 + 0xc));
    param1 = __this->behaviorTree;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar1 = unnamed_function_44710(param1,0,0);
    if (iVar1 != 0) {
      __this->behaviorTree = *(BehaviorDesigner_Runtime_BehaviorTree_o **)(iVar3 + 0x10);
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SendEvent$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_SendEvent__OnUpdate (BehaviorDesigner_Runtime_Tasks_SendEvent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_SendEvent__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_SendEvent_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 param1;
  
  if (DAT_ram_00664ba9 == '\0') {
    unnamed_function_1099(&DAT_ram_005676bc);
    unnamed_function_1099(&DAT_ram_005676b8);
    unnamed_function_1099(&DAT_ram_005676b4);
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664ba9 = '\x01';
  }
  if ((*(int *)(__ret + 0x38) != 0) &&
     (iVar1 = unnamed_function_51865(*(int *)(__ret + 0x38),0), iVar1 == 0)) {
    if ((*(int *)(__ret + 0x3c) != 0) &&
       (iVar1 = unnamed_function_51865(*(int *)(__ret + 0x3c),0), iVar1 == 0)) {
      if ((*(int *)(__ret + 0x40) != 0) &&
         (iVar1 = unnamed_function_51865(*(int *)(__ret + 0x40),0), iVar1 == 0)) {
        param1 = *(undefined4 *)(__ret + 0x44);
        uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
        iVar1 = **(int **)(__ret + 0x38);
        uVar3 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                          (*(int **)(__ret + 0x38),*(undefined4 *)(iVar1 + 0xec));
        iVar1 = **(int **)(__ret + 0x3c);
        uVar4 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                          (*(int **)(__ret + 0x3c),*(undefined4 *)(iVar1 + 0xec));
        iVar1 = **(int **)(__ret + 0x40);
        uVar5 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                          (*(int **)(__ret + 0x40),*(undefined4 *)(iVar1 + 0xec));
        unnamed_function_65309(param1,uVar2,uVar3,uVar4,uVar5,DAT_ram_005676bc);
        return;
      }
      uVar5 = *(undefined4 *)(__ret + 0x44);
      uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
      iVar1 = **(int **)(__ret + 0x38);
      uVar3 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                        (*(int **)(__ret + 0x38),*(undefined4 *)(iVar1 + 0xec));
      iVar1 = **(int **)(__ret + 0x3c);
      uVar4 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                        (*(int **)(__ret + 0x3c),*(undefined4 *)(iVar1 + 0xec));
      unnamed_function_65307(uVar5,uVar2,uVar3,uVar4,DAT_ram_005676b8);
      return;
    }
    uVar4 = *(undefined4 *)(__ret + 0x44);
    uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
    iVar1 = **(int **)(__ret + 0x38);
    uVar3 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                      (*(int **)(__ret + 0x38),*(undefined4 *)(iVar1 + 0xec));
    unnamed_function_65305(uVar4,uVar2,uVar3,DAT_ram_005676b4);
    return;
  }
  uVar3 = *(undefined4 *)(__ret + 0x44);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  unnamed_function_51613(uVar3,uVar2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SendEvent$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_SendEvent__OnReset (BehaviorDesigner_Runtime_Tasks_SendEvent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_SendEvent__OnReset
               (BehaviorDesigner_Runtime_Tasks_SendEvent_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664baa == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664baa = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pvVar1 = StringLiteral_1 /* "" */;
  if (DAT_ram_00664b8c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedString_TypeInfo);
    DAT_ram_00664b8c = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedString_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedString_TypeInfo);
  if (DAT_ram_00664b8d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d08);
    DAT_ram_00664b8d = '\x01';
  }
  pBVar2[4].monitor = pvVar1;
  __this->eventName = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.SendEvent$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_SendEvent___ctor (BehaviorDesigner_Runtime_Tasks_SendEvent_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

