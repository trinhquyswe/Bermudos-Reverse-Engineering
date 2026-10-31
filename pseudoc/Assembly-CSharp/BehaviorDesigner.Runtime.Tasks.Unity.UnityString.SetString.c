// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityString.SetString
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetString : Action // TypeDefIndex: 5964
{
	// Fields
	[RequiredField]
	[Tooltip("The target string")]
	public SharedString variable; // 0x2C
	[Tooltip("The value string")]
	public SharedString value; // 0x30

	// Methods

	// RVA: 0x3E48 Offset: 0x3E48 VA: 0x3E48 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E49 Offset: 0x3E49 VA: 0x3E49 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E4A Offset: 0x3E4A VA: 0x3E4A
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.SetString$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityString_SetString__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_SetString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_SetString__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityString_SetString_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664c83 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664c83 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  unnamed_function_61204(param1,param2,DAT_ram_00565d10);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.SetString$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_SetString__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_SetString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_SetString__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_SetString_o *__this,
               MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664c84 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664c84 = '\x01';
  }
  pvVar1 = StringLiteral_1 /* "" */;
  if (DAT_ram_00664b8c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedString_TypeInfo);
    DAT_ram_00664b8c = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedString_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedString_TypeInfo);
  if (DAT_ram_00664b8d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d08);
    DAT_ram_00664b8d = '\x01';
  }
  pBVar2[4].monitor = pvVar1;
  __this->variable = pBVar2;
  pvVar1 = StringLiteral_1 /* "" */;
  if (DAT_ram_00664b8c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedString_TypeInfo);
    DAT_ram_00664b8c = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedString_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedString_TypeInfo);
  if (DAT_ram_00664b8d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d08);
    DAT_ram_00664b8d = '\x01';
  }
  pBVar2[4].monitor = pvVar1;
  __this->value = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.SetString$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_SetString___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_SetString_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

