// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedVector2Int
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedVector2Int : SharedVariable<Vector2Int> // TypeDefIndex: 5821
{
	// Methods

	// RVA: 0x3BED Offset: 0x3BED VA: 0x3BED
	public static SharedVector2Int op_Implicit(Vector2Int value) { }

	// RVA: 0x3BEE Offset: 0x3BEE VA: 0x3BEE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedVector2Int$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedVector2Int_o* BehaviorDesigner_Runtime_SharedVector2Int__op_Implicit (UnityEngine_Vector2Int_o value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedVector2Int_o *
BehaviorDesigner_Runtime_SharedVector2Int__op_Implicit
          (UnityEngine_Vector2Int_o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector2Int_o *pBVar1;
  
  if (DAT_ram_00664b96 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector2Int_TypeInfo);
    DAT_ram_00664b96 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2Int_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector2Int_TypeInfo);
  if (DAT_ram_00664b97 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d30);
    DAT_ram_00664b97 = '\x01';
  }
  *(UnityEngine_Vector2Int_o *)&pBVar1[4].monitor = *value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedVector2Int$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedVector2Int___ctor (BehaviorDesigner_Runtime_SharedVector2Int_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedVector2Int___ctor
               (BehaviorDesigner_Runtime_SharedVector2Int_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b97 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d30);
    DAT_ram_00664b97 = '\x01';
  }
  return;
}

