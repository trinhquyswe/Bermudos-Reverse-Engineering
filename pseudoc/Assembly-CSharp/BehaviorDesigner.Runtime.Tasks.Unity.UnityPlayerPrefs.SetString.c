// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetString
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetString : Action // TypeDefIndex: 6088
{
	// Fields
	[Tooltip("The key to store")]
	public SharedString key; // 0x2C
	[Tooltip("The value to set")]
	public SharedString value; // 0x30

	// Methods

	// RVA: 0x3FFF Offset: 0x3FFF VA: 0x3FFF Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4000 Offset: 0x4000 VA: 0x4000 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4001 Offset: 0x4001 VA: 0x4001
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetString$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetString__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetString__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetString_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined4 param2;
  
  if (DAT_ram_00664d4f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664d4f = '\x01';
  }
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  unnamed_function_44558(param1,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetString$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetString__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetString__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetString_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664d50 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664d50 = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->key = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->value = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetString$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetString___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetString_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

