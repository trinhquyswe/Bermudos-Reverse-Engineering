// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedVector3
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedVector3 : SharedVariable<Vector3> // TypeDefIndex: 5822
{
	// Methods

	// RVA: 0x3BEF Offset: 0x3BEF VA: 0x3BEF
	public static SharedVector3 op_Implicit(Vector3 value) { }

	// RVA: 0x3BF0 Offset: 0x3BF0 VA: 0x3BF0
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedVector3$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedVector3_o* BehaviorDesigner_Runtime_SharedVector3__op_Implicit (UnityEngine_Vector3_o value, const MethodInfo* method);

Vector3_o * BehaviorDesigner_Runtime_SharedVector3__op_Implicit(Vector3_o *value,MethodInfo *method)

{
  float fVar1;
  Vector3_o *pVVar2;
  
  if (DAT_ram_00664b98 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
    DAT_ram_00664b98 = '\x01';
  }
  pVVar2 = (Vector3_o *)unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
  if (DAT_ram_00664b99 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d34);
    DAT_ram_00664b99 = '\x01';
  }
  pVVar2[3].z = value->z;
  fVar1 = value->y;
  pVVar2[3].x = value->x;
  pVVar2[3].y = fVar1;
  return pVVar2;
}

// ---- BehaviorDesigner.Runtime.SharedVector3$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedVector3___ctor (BehaviorDesigner_Runtime_SharedVector3_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedVector3___ctor
               (BehaviorDesigner_Runtime_SharedVector3_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b99 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d34);
    DAT_ram_00664b99 = '\x01';
  }
  return;
}

