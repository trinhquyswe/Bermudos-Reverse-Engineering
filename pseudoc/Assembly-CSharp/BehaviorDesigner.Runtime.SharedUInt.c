// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedUInt
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedUInt : SharedVariable<uint> // TypeDefIndex: 5819
{
	// Methods

	// RVA: 0x3BE9 Offset: 0x3BE9 VA: 0x3BE9
	public static SharedUInt op_Implicit(uint value) { }

	// RVA: 0x3BEA Offset: 0x3BEA VA: 0x3BEA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedUInt$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedUInt_o* BehaviorDesigner_Runtime_SharedUInt__op_Implicit (uint32_t value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedUInt_o *
BehaviorDesigner_Runtime_SharedUInt__op_Implicit(uint value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedUInt_o *pBVar1;
  
  if (DAT_ram_00664b92 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedUInt_TypeInfo);
    DAT_ram_00664b92 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedUInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedUInt_TypeInfo);
  if (DAT_ram_00664b93 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d20);
    DAT_ram_00664b93 = '\x01';
  }
  pBVar1[4].monitor = (void *)value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedUInt$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedUInt___ctor (BehaviorDesigner_Runtime_SharedUInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedUInt___ctor
               (BehaviorDesigner_Runtime_SharedUInt_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b93 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d20);
    DAT_ram_00664b93 = '\x01';
  }
  return;
}

