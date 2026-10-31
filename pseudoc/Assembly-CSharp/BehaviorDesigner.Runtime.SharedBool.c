// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedBool
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedBool : SharedVariable<bool> // TypeDefIndex: 5802
{
	// Methods

	// RVA: 0x3BC7 Offset: 0x3BC7 VA: 0x3BC7
	public static SharedBool op_Implicit(bool value) { }

	// RVA: 0x3BC8 Offset: 0x3BC8 VA: 0x3BC8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedBool$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedBool_o* BehaviorDesigner_Runtime_SharedBool__op_Implicit (bool value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedBool_o *
BehaviorDesigner_Runtime_SharedBool__op_Implicit(bool value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(bool *)&pBVar1[4].monitor = value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedBool$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedBool___ctor (BehaviorDesigner_Runtime_SharedBool_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedBool___ctor
               (BehaviorDesigner_Runtime_SharedBool_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  return;
}

