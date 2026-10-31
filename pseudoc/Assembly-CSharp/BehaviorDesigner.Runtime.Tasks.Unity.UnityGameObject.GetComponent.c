// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.GetComponent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetComponent : Action // TypeDefIndex: 6207
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The type of component")]
	public SharedString type; // 0x30
	[RequiredField]
	[Tooltip("The component")]
	public SharedObject storeValue; // 0x34

	// Methods

	// RVA: 0x4192 Offset: 0x4192 VA: 0x4192 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4193 Offset: 0x4193 VA: 0x4193 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4194 Offset: 0x4194 VA: 0x4194
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.GetComponent$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetComponent__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetComponent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetComponent__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetComponent_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664e0e == '\0') {
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ce0);
    DAT_ram_00664e0e = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  uVar1 = unnamed_function_51881(__ret,uVar1,0);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  uVar1 = unnamed_function_44676(uVar1,param2,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565ce0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.GetComponent$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetComponent__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetComponent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetComponent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetComponent_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664e0f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d10);
    unnamed_function_1099(&DAT_ram_00565ce0);
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664e0f = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  unnamed_function_61204(__this->type,StringLiteral_1 /* "" */,DAT_ram_00565d10);
  unnamed_function_61204(__this->storeValue,0,DAT_ram_00565ce0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.GetComponent$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetComponent___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetComponent_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

