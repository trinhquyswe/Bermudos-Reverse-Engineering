// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.DeleteKey
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class DeleteKey : Action // TypeDefIndex: 6080
{
	// Fields
	[Tooltip("The key to delete")]
	public SharedString key; // 0x2C

	// Methods

	// RVA: 0x3FE8 Offset: 0x3FE8 VA: 0x3FE8 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FE9 Offset: 0x3FE9 VA: 0x3FE9 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FEA Offset: 0x3FEA VA: 0x3FEA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.DeleteKey$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_DeleteKey__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_DeleteKey_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_DeleteKey__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_DeleteKey_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664d41 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664d41 = '\x01';
  }
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  unnamed_function_44562(param1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.DeleteKey$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_DeleteKey__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_DeleteKey_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_DeleteKey__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_DeleteKey_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664d42 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664d42 = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->key = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.DeleteKey$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_DeleteKey___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_DeleteKey_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

