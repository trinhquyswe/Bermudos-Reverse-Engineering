// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedInt
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedInt : SharedVariable<int> // TypeDefIndex: 5809
{
	// Methods

	// RVA: 0x3BD5 Offset: 0x3BD5 VA: 0x3BD5
	public static SharedInt op_Implicit(int value) { }

	// RVA: 0x3BD6 Offset: 0x3BD6 VA: 0x3BD6
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedInt$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedInt_o* BehaviorDesigner_Runtime_SharedInt__op_Implicit (int32_t value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedInt_o *
BehaviorDesigner_Runtime_SharedInt__op_Implicit(int value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  if (DAT_ram_00664b7e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedInt_TypeInfo);
    DAT_ram_00664b7e = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedInt_TypeInfo);
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  pBVar1[4].monitor = (void *)value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedInt$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedInt___ctor (BehaviorDesigner_Runtime_SharedInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedInt___ctor
               (BehaviorDesigner_Runtime_SharedInt_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  return;
}

