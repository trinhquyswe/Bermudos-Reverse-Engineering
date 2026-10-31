// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedVector2
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedVector2 : SharedVariable<Vector2> // TypeDefIndex: 5820
{
	// Methods

	// RVA: 0x3BEB Offset: 0x3BEB VA: 0x3BEB
	public static SharedVector2 op_Implicit(Vector2 value) { }

	// RVA: 0x3BEC Offset: 0x3BEC VA: 0x3BEC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedVector2$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedVector2_o* BehaviorDesigner_Runtime_SharedVector2__op_Implicit (UnityEngine_Vector2_o value, const MethodInfo* method);

Vector2_o * BehaviorDesigner_Runtime_SharedVector2__op_Implicit(Vector2_o *value,MethodInfo *method)

{
  Vector2_o *pVVar1;
  
  if (DAT_ram_00664b94 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
    DAT_ram_00664b94 = '\x01';
  }
  pVVar1 = (Vector2_o *)unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
  if (DAT_ram_00664b95 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d24);
    DAT_ram_00664b95 = '\x01';
  }
  *(Vector2_o *)&pVVar1[4].y = *value;
  return pVVar1;
}

// ---- BehaviorDesigner.Runtime.SharedVector2$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedVector2___ctor (BehaviorDesigner_Runtime_SharedVector2_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedVector2___ctor
               (BehaviorDesigner_Runtime_SharedVector2_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b95 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d24);
    DAT_ram_00664b95 = '\x01';
  }
  return;
}

