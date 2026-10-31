// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.SendMessage
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SendMessage : Action // TypeDefIndex: 6210
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The message to send")]
	public SharedString message; // 0x30
	[Tooltip("The value to send")]
	public SharedGenericVariable value; // 0x34

	// Methods

	// RVA: 0x419B Offset: 0x419B VA: 0x419B Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x419C Offset: 0x419C VA: 0x419C Slot: 16
	public override void OnReset() { }

	// RVA: 0x419D Offset: 0x419D VA: 0x419D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.SendMessage$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SendMessage__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SendMessage_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SendMessage__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SendMessage_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param2;
  undefined4 param3;
  int iVar3;
  
  if (DAT_ram_00664e13 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ca8);
    DAT_ram_00664e13 = '\x01';
  }
  iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565ca8);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  uVar2 = unnamed_function_51881(__ret,uVar2,0);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  if (iVar1 != 0) {
    iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565ca8);
    iVar3 = **(int **)(iVar1 + 0xc);
    param3 = (**(code **)((ulonglong)*(uint *)(iVar3 + 0xe8) * 4))
                       (*(int **)(iVar1 + 0xc),*(undefined4 *)(iVar3 + 0xec));
    unnamed_function_44693(uVar2,param2,param3,0);
    return;
  }
  unnamed_function_44694(uVar2,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.SendMessage$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SendMessage__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SendMessage_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SendMessage__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SendMessage_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664e14 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664e14 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->message = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.SendMessage$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SendMessage___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SendMessage_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

