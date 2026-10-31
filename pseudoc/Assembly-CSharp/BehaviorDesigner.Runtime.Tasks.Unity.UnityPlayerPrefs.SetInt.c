// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetInt
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetInt : Action // TypeDefIndex: 6087
{
	// Fields
	[Tooltip("The key to store")]
	public SharedString key; // 0x2C
	[Tooltip("The value to set")]
	public SharedInt value; // 0x30

	// Methods

	// RVA: 0x3FFC Offset: 0x3FFC VA: 0x3FFC Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FFD Offset: 0x3FFD VA: 0x3FFD Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FFE Offset: 0x3FFE VA: 0x3FFE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetInt$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetInt__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetInt__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetInt_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined4 param2;
  
  if (DAT_ram_00664d4d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664d4d = '\x01';
  }
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
  unnamed_function_44552(param1,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetInt$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetInt__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetInt__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetInt_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedInt_o *pBVar2;
  
  if (DAT_ram_00664d4e == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664d4e = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->key = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->value = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.SetInt$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetInt___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_SetInt_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

