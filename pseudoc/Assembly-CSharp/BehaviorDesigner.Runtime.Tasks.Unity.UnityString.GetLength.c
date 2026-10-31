// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetLength
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetLength : Action // TypeDefIndex: 5959
{
	// Fields
	[Tooltip("The target string")]
	public SharedString targetString; // 0x2C
	[RequiredField]
	[Tooltip("The stored result")]
	public SharedInt storeResult; // 0x30

	// Methods

	// RVA: 0x3E39 Offset: 0x3E39 VA: 0x3E39 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E3A Offset: 0x3E3A VA: 0x3E3A Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E3B Offset: 0x3E3B VA: 0x3E3B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetLength$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetLength__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetLength_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetLength__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetLength_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664c7a == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664c7a = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  unnamed_function_61204(param1,*(undefined4 *)(iVar1 + 8),DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetLength$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetLength__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetLength_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetLength__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetLength_o *__this,
               MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  BehaviorDesigner_Runtime_SharedInt_o *pBVar3;
  
  if (DAT_ram_00664c7b == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664c7b = '\x01';
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
  if (DAT_ram_00664b7e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedInt_TypeInfo);
    DAT_ram_00664b7e = '\x01';
  }
  pBVar3 = (BehaviorDesigner_Runtime_SharedInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedInt_TypeInfo);
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  pBVar3[4].monitor = (void *)0x0;
  __this->storeResult = pBVar3;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetLength$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetLength___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetLength_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

