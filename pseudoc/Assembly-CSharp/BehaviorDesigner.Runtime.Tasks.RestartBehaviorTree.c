// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.RestartBehaviorTree
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class RestartBehaviorTree : Action // TypeDefIndex: 5834
{
	// Fields
	[Tooltip("The GameObject of the behavior tree that should be restarted. If null use the current behavior")]
	public SharedGameObject behaviorGameObject; // 0x2C
	[Tooltip("The group of the behavior tree that should be restarted")]
	public SharedInt group; // 0x30
	private Behavior behavior; // 0x34

	// Methods

	// RVA: 0x3C0D Offset: 0x3C0D VA: 0x3C0D Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3C0E Offset: 0x3C0E VA: 0x3C0E Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3C0F Offset: 0x3C0F VA: 0x3C0F Slot: 16
	public override void OnReset() { }

	// RVA: 0x3C10 Offset: 0x3C10 VA: 0x3C10
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.RestartBehaviorTree$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree__OnAwake (BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree__OnAwake
               (BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  Behavior_o *param1;
  
  if (DAT_ram_00664ba6 == '\0') {
    unnamed_function_1099(&DAT_ram_00569b54);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664ba6 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.RestartBehaviorTree$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree__OnUpdate (BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664ba7 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664ba7 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 == 0) {
    unnamed_function_51554(*(undefined4 *)(__ret + 0x34),0);
    unnamed_function_51535(*(undefined4 *)(__ret + 0x34),0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RestartBehaviorTree$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree__OnReset (BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree__OnReset
               (BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree_o *__this,MethodInfo *method)

{
  __this->behavior = (Behavior_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.RestartBehaviorTree$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree___ctor (BehaviorDesigner_Runtime_Tasks_RestartBehaviorTree_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

