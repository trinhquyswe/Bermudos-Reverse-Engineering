// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedFloat
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedFloat : SharedVariable<float> // TypeDefIndex: 5805
{
	// Methods

	// RVA: 0x3BCD Offset: 0x3BCD VA: 0x3BCD
	public static SharedFloat op_Implicit(float value) { }

	// RVA: 0x3BCE Offset: 0x3BCE VA: 0x3BCE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedFloat$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedFloat_o* BehaviorDesigner_Runtime_SharedFloat__op_Implicit (float value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedFloat_o *
BehaviorDesigner_Runtime_SharedFloat__op_Implicit(float value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *param1;
  
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  param1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(param1,value,DAT_ram_00565d04);
  return param1;
}

// ---- BehaviorDesigner.Runtime.SharedFloat$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedFloat___ctor (BehaviorDesigner_Runtime_SharedFloat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedFloat___ctor
               (BehaviorDesigner_Runtime_SharedFloat_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  return;
}

