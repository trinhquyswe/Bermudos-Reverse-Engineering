// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedMaterial
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedMaterial : SharedVariable<Material> // TypeDefIndex: 5811
{
	// Methods

	// RVA: 0x3BD9 Offset: 0x3BD9 VA: 0x3BD9
	public static SharedMaterial op_Implicit(Material value) { }

	// RVA: 0x3BDA Offset: 0x3BDA VA: 0x3BDA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedMaterial$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedMaterial_o* BehaviorDesigner_Runtime_SharedMaterial__op_Implicit (UnityEngine_Material_o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedMaterial_o *
BehaviorDesigner_Runtime_SharedMaterial__op_Implicit
          (UnityEngine_Material_o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedMaterial_o *pBVar1;
  
  if (DAT_ram_00664b82 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedMaterial_TypeInfo);
    DAT_ram_00664b82 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedMaterial_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedMaterial_TypeInfo);
  if (DAT_ram_00664b83 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cc8);
    DAT_ram_00664b83 = '\x01';
  }
  pBVar1[4].monitor = value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedMaterial$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedMaterial___ctor (BehaviorDesigner_Runtime_SharedMaterial_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedMaterial___ctor
               (BehaviorDesigner_Runtime_SharedMaterial_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b83 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cc8);
    DAT_ram_00664b83 = '\x01';
  }
  return;
}

