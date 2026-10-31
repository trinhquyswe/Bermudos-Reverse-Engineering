// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedLayerMask
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedLayerMask : SharedVariable<LayerMask> // TypeDefIndex: 5810
{
	// Methods

	// RVA: 0x3BD7 Offset: 0x3BD7 VA: 0x3BD7
	public static SharedLayerMask op_Implicit(LayerMask value) { }

	// RVA: 0x3BD8 Offset: 0x3BD8 VA: 0x3BD8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedLayerMask$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedLayerMask_o* BehaviorDesigner_Runtime_SharedLayerMask__op_Implicit (UnityEngine_LayerMask_o value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedLayerMask_o *
BehaviorDesigner_Runtime_SharedLayerMask__op_Implicit
          (UnityEngine_LayerMask_o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedLayerMask_o *param1;
  
  if (DAT_ram_00664b80 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedLayerMask_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565cc4);
    DAT_ram_00664b80 = '\x01';
  }
  param1 = (BehaviorDesigner_Runtime_SharedLayerMask_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedLayerMask_TypeInfo);
  if (DAT_ram_00664b81 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cc0);
    DAT_ram_00664b81 = '\x01';
  }
  unnamed_function_61204(param1,value,DAT_ram_00565cc4);
  return param1;
}

// ---- BehaviorDesigner.Runtime.SharedLayerMask$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedLayerMask___ctor (BehaviorDesigner_Runtime_SharedLayerMask_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedLayerMask___ctor
               (BehaviorDesigner_Runtime_SharedLayerMask_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b81 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cc0);
    DAT_ram_00664b81 = '\x01';
  }
  return;
}

