// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetInt
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetInt : Action // TypeDefIndex: 6082
{
	// Fields
	[Tooltip("The key to store")]
	public SharedString key; // 0x2C
	[Tooltip("The default value")]
	public SharedInt defaultValue; // 0x30
	[RequiredField]
	[Tooltip("The value retrieved from the PlayerPrefs")]
	public SharedInt storeResult; // 0x34

	// Methods

	// RVA: 0x3FEE Offset: 0x3FEE VA: 0x3FEE Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FEF Offset: 0x3FEF VA: 0x3FEF Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FF0 Offset: 0x3FF0 VA: 0x3FF0
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetInt$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetInt__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetInt__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetInt_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664d45 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664d45 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
  uVar1 = unnamed_function_44553(uVar1,param2,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetInt$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetInt__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetInt__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetInt_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedInt_o *pBVar2;
  
  if (DAT_ram_00664d46 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664d46 = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->key = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->defaultValue = pBVar2;
  pBVar2 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->storeResult = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityPlayerPrefs.GetInt$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetInt___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityPlayerPrefs_GetInt_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

