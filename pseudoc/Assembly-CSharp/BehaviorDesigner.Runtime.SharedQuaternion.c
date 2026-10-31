// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedQuaternion
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedQuaternion : SharedVariable<Quaternion> // TypeDefIndex: 5814
{
	// Methods

	// RVA: 0x3BDF Offset: 0x3BDF VA: 0x3BDF
	public static SharedQuaternion op_Implicit(Quaternion value) { }

	// RVA: 0x3BE0 Offset: 0x3BE0 VA: 0x3BE0
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedQuaternion$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedQuaternion_o* BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit (UnityEngine_Quaternion_o value, const MethodInfo* method);

Quaternion_o *
BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit(Quaternion_o *value,MethodInfo *method)

{
  float fVar1;
  Quaternion_o *pQVar2;
  
  if (DAT_ram_00664b88 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedQuaternion_TypeInfo);
    DAT_ram_00664b88 = '\x01';
  }
  pQVar2 = (Quaternion_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedQuaternion_TypeInfo);
  if (DAT_ram_00664b89 == '\0') {
    unnamed_function_1099(&DAT_ram_00565ce4);
    DAT_ram_00664b89 = '\x01';
  }
  *(undefined8 *)&pQVar2[2].w = *(undefined8 *)&value->z;
  fVar1 = value->y;
  pQVar2[2].y = value->x;
  pQVar2[2].z = fVar1;
  return pQVar2;
}

// ---- BehaviorDesigner.Runtime.SharedQuaternion$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedQuaternion___ctor (BehaviorDesigner_Runtime_SharedQuaternion_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedQuaternion___ctor
               (BehaviorDesigner_Runtime_SharedQuaternion_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b89 == '\0') {
    unnamed_function_1099(&DAT_ram_00565ce4);
    DAT_ram_00664b89 = '\x01';
  }
  return;
}

