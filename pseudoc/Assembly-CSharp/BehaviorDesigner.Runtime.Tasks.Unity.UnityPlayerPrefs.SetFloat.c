// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetFloat
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetFloat : Action // TypeDefIndex: 6086
{
	// Fields
	[Tooltip("The key to store")]
	public SharedString key; // 0x2C
	[Tooltip("The value to set")]
	public SharedFloat value; // 0x30

	// Methods

	// RVA: 0x3FF9 Offset: 0x3FF9 VA: 0x3FF9 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FFA Offset: 0x3FFA VA: 0x3FFA Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FFB Offset: 0x3FFB VA: 0x3FFB
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetFloat$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetFloat__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetFloat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetFloat__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetFloat_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  float param2;
  
  if (DAT_ram_00664d4b == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d00);
    DAT_ram_00664d4b = '\x01';
  }
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  unnamed_function_44555(param1,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetFloat$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetFloat__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetFloat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetFloat__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetFloat_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar2;
  
  if (DAT_ram_00664d4c == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664d4c = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->key = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->value = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetFloat$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetFloat___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetFloat_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

