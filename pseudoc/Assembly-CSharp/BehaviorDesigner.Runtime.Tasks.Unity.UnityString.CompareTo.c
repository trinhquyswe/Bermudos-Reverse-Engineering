// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityString.CompareTo
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareTo : Action // TypeDefIndex: 5957
{
	// Fields
	[Tooltip("The string to compare")]
	public SharedString firstString; // 0x2C
	[Tooltip("The string to compare to")]
	public SharedString secondString; // 0x30
	[Tooltip("The stored result")]
	[RequiredField]
	public SharedInt storeResult; // 0x34

	// Methods

	// RVA: 0x3E32 Offset: 0x3E32 VA: 0x3E32 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E33 Offset: 0x3E33 VA: 0x3E33 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E34 Offset: 0x3E34 VA: 0x3E34
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.CompareTo$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityString_CompareTo__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_CompareTo_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_CompareTo__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityString_CompareTo_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664c75 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664c75 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  uVar1 = unnamed_function_81487(uVar1,param2,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.CompareTo$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_CompareTo__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_CompareTo_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_CompareTo__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_CompareTo_o *__this,
               MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  BehaviorDesigner_Runtime_SharedInt_o *pBVar3;
  
  if (DAT_ram_00664c76 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664c76 = '\x01';
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
  __this->firstString = pBVar2;
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
  __this->secondString = pBVar2;
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.CompareTo$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_CompareTo___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_CompareTo_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

