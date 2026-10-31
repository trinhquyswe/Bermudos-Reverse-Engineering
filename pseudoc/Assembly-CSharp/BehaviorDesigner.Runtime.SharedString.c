// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedString
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedString : SharedVariable<string> // TypeDefIndex: 5816
{
	// Methods

	// RVA: 0x3BE3 Offset: 0x3BE3 VA: 0x3BE3
	public static SharedString op_Implicit(string value) { }

	// RVA: 0x3BE4 Offset: 0x3BE4 VA: 0x3BE4
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedString$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedString_o* BehaviorDesigner_Runtime_SharedString__op_Implicit (System_String_o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedString_o *
BehaviorDesigner_Runtime_SharedString__op_Implicit(System_String_o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664b8c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedString_TypeInfo);
    DAT_ram_00664b8c = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedString_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedString_TypeInfo);
  if (DAT_ram_00664b8d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d08);
    DAT_ram_00664b8d = '\x01';
  }
  pBVar1[4].monitor = value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedString$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedString___ctor (BehaviorDesigner_Runtime_SharedString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedString___ctor
               (BehaviorDesigner_Runtime_SharedString_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b8d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d08);
    DAT_ram_00664b8d = '\x01';
  }
  return;
}

