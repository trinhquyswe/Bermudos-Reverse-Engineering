// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedVector3Int
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedVector3Int : SharedVariable<Vector3Int> // TypeDefIndex: 5823
{
	// Methods

	// RVA: 0x3BF1 Offset: 0x3BF1 VA: 0x3BF1
	public static SharedVector3Int op_Implicit(Vector3Int value) { }

	// RVA: 0x3BF2 Offset: 0x3BF2 VA: 0x3BF2
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedVector3Int$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedVector3Int_o* BehaviorDesigner_Runtime_SharedVector3Int__op_Implicit (UnityEngine_Vector3Int_o value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedVector3Int_o *
BehaviorDesigner_Runtime_SharedVector3Int__op_Implicit
          (UnityEngine_Vector3Int_o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector3Int_o *pBVar1;
  
  if (DAT_ram_00664b9a == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector3Int_TypeInfo);
    DAT_ram_00664b9a = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector3Int_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector3Int_TypeInfo);
  if (DAT_ram_00664b9b == '\0') {
    unnamed_function_1099(&DAT_ram_00565d40);
    DAT_ram_00664b9b = '\x01';
  }
  pBVar1[5].monitor = (void *)value->m_Z;
  *(undefined8 *)&pBVar1[4].monitor = *(undefined8 *)value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedVector3Int$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedVector3Int___ctor (BehaviorDesigner_Runtime_SharedVector3Int_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedVector3Int___ctor
               (BehaviorDesigner_Runtime_SharedVector3Int_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b9b == '\0') {
    unnamed_function_1099(&DAT_ram_00565d40);
    DAT_ram_00664b9b = '\x01';
  }
  return;
}

