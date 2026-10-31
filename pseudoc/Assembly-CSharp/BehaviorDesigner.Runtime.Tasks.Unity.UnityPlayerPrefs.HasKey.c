// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.HasKey
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HasKey : Conditional // TypeDefIndex: 6084
{
	// Fields
	[Tooltip("The key to check")]
	public SharedString key; // 0x2C

	// Methods

	// RVA: 0x3FF4 Offset: 0x3FF4 VA: 0x3FF4 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FF5 Offset: 0x3FF5 VA: 0x3FF5 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FF6 Offset: 0x3FF6 VA: 0x3FF6
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.HasKey$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_HasKey__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_HasKey_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_HasKey__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_HasKey_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664d49 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664d49 = '\x01';
  }
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  unnamed_function_44561(param1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.HasKey$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_HasKey__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_HasKey_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_HasKey__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_HasKey_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664d4a == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664d4a = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->key = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.HasKey$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_HasKey___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_HasKey_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

