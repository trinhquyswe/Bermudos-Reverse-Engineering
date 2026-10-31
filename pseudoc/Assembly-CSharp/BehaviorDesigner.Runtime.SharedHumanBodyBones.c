// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedHumanBodyBones
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedHumanBodyBones : SharedVariable<HumanBodyBones> // TypeDefIndex: 5808
{
	// Methods

	// RVA: 0x3BD3 Offset: 0x3BD3 VA: 0x3BD3
	public static SharedHumanBodyBones op_Implicit(HumanBodyBones value) { }

	// RVA: 0x3BD4 Offset: 0x3BD4 VA: 0x3BD4
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedHumanBodyBones$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedHumanBodyBones_o* BehaviorDesigner_Runtime_SharedHumanBodyBones__op_Implicit (int32_t value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedHumanBodyBones_o *
BehaviorDesigner_Runtime_SharedHumanBodyBones__op_Implicit
          (UnityEngine_HumanBodyBones value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedHumanBodyBones_o *param1;
  
  if (DAT_ram_00664b7c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedHumanBodyBones_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565cb0);
    DAT_ram_00664b7c = '\x01';
  }
  param1 = (BehaviorDesigner_Runtime_SharedHumanBodyBones_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedHumanBodyBones_TypeInfo);
  if (DAT_ram_00664b7d == '\0') {
    unnamed_function_1099(&DAT_ram_00565cac);
    DAT_ram_00664b7d = '\x01';
  }
  unnamed_function_61204(param1,value,DAT_ram_00565cb0);
  return param1;
}

// ---- BehaviorDesigner.Runtime.SharedHumanBodyBones$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedHumanBodyBones___ctor (BehaviorDesigner_Runtime_SharedHumanBodyBones_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedHumanBodyBones___ctor
               (BehaviorDesigner_Runtime_SharedHumanBodyBones_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b7d == '\0') {
    unnamed_function_1099(&DAT_ram_00565cac);
    DAT_ram_00664b7d = '\x01';
  }
  return;
}

