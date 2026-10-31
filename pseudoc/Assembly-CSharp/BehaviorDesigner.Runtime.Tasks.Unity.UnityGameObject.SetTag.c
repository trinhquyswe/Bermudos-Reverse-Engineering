// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.SetTag
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetTag : Action // TypeDefIndex: 6212
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The GameObject tag")]
	public SharedString tag; // 0x30

	// Methods

	// RVA: 0x41A1 Offset: 0x41A1 VA: 0x41A1 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x41A2 Offset: 0x41A2 VA: 0x41A2 Slot: 16
	public override void OnReset() { }

	// RVA: 0x41A3 Offset: 0x41A3 VA: 0x41A3
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.SetTag$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SetTag__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SetTag_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SetTag__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SetTag_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param2;
  
  if (DAT_ram_00664e16 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664e16 = '\x01';
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  uVar1 = unnamed_function_51881(__ret,uVar1,0);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  unnamed_function_44690(uVar1,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.SetTag$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SetTag__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SetTag_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SetTag__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SetTag_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664e17 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664e17 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->tag = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.SetTag$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SetTag___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_SetTag_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

