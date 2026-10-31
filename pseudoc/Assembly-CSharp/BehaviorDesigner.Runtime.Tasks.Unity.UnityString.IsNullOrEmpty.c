// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityString.IsNullOrEmpty
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsNullOrEmpty : Conditional // TypeDefIndex: 5962
{
	// Fields
	[Tooltip("The target string")]
	public SharedString targetString; // 0x2C

	// Methods

	// RVA: 0x3E42 Offset: 0x3E42 VA: 0x3E42 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E43 Offset: 0x3E43 VA: 0x3E43 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E44 Offset: 0x3E44 VA: 0x3E44
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.IsNullOrEmpty$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityString_IsNullOrEmpty__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_IsNullOrEmpty_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_IsNullOrEmpty__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityString_IsNullOrEmpty_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664c7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664c7f = '\x01';
  }
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  unnamed_function_81507(param1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.IsNullOrEmpty$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_IsNullOrEmpty__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_IsNullOrEmpty_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_IsNullOrEmpty__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_IsNullOrEmpty_o *__this,
               MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664c80 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664c80 = '\x01';
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
  __this->targetString = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.IsNullOrEmpty$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_IsNullOrEmpty___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_IsNullOrEmpty_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

