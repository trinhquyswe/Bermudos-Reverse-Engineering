// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetString
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetString : Action // TypeDefIndex: 6083
{
	// Fields
	[Tooltip("The key to store")]
	public SharedString key; // 0x2C
	[Tooltip("The default value")]
	public SharedString defaultValue; // 0x30
	[RequiredField]
	[Tooltip("The value retrieved from the PlayerPrefs")]
	public SharedString storeResult; // 0x34

	// Methods

	// RVA: 0x3FF1 Offset: 0x3FF1 VA: 0x3FF1 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FF2 Offset: 0x3FF2 VA: 0x3FF2 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FF3 Offset: 0x3FF3 VA: 0x3FF3
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetString$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetString__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetString__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetString_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664d47 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664d47 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  uVar1 = unnamed_function_44559(uVar1,param2,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565d10);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetString$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetString__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetString__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetString_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664d48 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664d48 = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->key = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->defaultValue = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetString$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetString___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetString_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

