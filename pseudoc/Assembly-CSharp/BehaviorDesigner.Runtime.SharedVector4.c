// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedVector4
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedVector4 : SharedVariable<Vector4> // TypeDefIndex: 5824
{
	// Methods

	// RVA: 0x3BF3 Offset: 0x3BF3 VA: 0x3BF3
	public static SharedVector4 op_Implicit(Vector4 value) { }

	// RVA: 0x3BF4 Offset: 0x3BF4 VA: 0x3BF4
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedVector4$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedVector4_o* BehaviorDesigner_Runtime_SharedVector4__op_Implicit (UnityEngine_Vector4_o value, const MethodInfo* method);

Vector4_o * BehaviorDesigner_Runtime_SharedVector4__op_Implicit(Vector4_o *value,MethodInfo *method)

{
  float fVar1;
  Vector4_o *pVVar2;
  
  if (DAT_ram_00664b9c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector4_TypeInfo);
    DAT_ram_00664b9c = '\x01';
  }
  pVVar2 = (Vector4_o *)unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector4_TypeInfo);
  if (DAT_ram_00664b9d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d44);
    DAT_ram_00664b9d = '\x01';
  }
  *(undefined8 *)&pVVar2[2].w = *(undefined8 *)&value->z;
  fVar1 = value->y;
  pVVar2[2].y = value->x;
  pVVar2[2].z = fVar1;
  return pVVar2;
}

// ---- BehaviorDesigner.Runtime.SharedVector4$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedVector4___ctor (BehaviorDesigner_Runtime_SharedVector4_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedVector4___ctor
               (BehaviorDesigner_Runtime_SharedVector4_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b9d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d44);
    DAT_ram_00664b9d = '\x01';
  }
  return;
}

