// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedTransform
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedTransform : SharedVariable<Transform> // TypeDefIndex: 5817
{
	// Methods

	// RVA: 0x3BE5 Offset: 0x3BE5 VA: 0x3BE5
	public static SharedTransform op_Implicit(Transform value) { }

	// RVA: 0x3BE6 Offset: 0x3BE6 VA: 0x3BE6
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedTransform$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedTransform_o* BehaviorDesigner_Runtime_SharedTransform__op_Implicit (UnityEngine_Transform_o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedTransform_o *
BehaviorDesigner_Runtime_SharedTransform__op_Implicit
          (RuleTile_TilingRuleOutput_Transform value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedTransform_o *pBVar1;
  
  if (DAT_ram_00664b8e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedTransform_TypeInfo);
    DAT_ram_00664b8e = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedTransform_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedTransform_TypeInfo);
  if (DAT_ram_00664b8f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d14);
    DAT_ram_00664b8f = '\x01';
  }
  pBVar1[4].monitor = (void *)value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedTransform$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedTransform___ctor (BehaviorDesigner_Runtime_SharedTransform_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedTransform___ctor
               (BehaviorDesigner_Runtime_SharedTransform_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b8f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d14);
    DAT_ram_00664b8f = '\x01';
  }
  return;
}

