// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedColor
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedColor : SharedVariable<Color> // TypeDefIndex: 5804
{
	// Methods

	// RVA: 0x3BCB Offset: 0x3BCB VA: 0x3BCB
	public static SharedColor op_Implicit(Color value) { }

	// RVA: 0x3BCC Offset: 0x3BCC VA: 0x3BCC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedColor$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedColor_o* BehaviorDesigner_Runtime_SharedColor__op_Implicit (UnityEngine_Color_o value, const MethodInfo* method);

Color_o * BehaviorDesigner_Runtime_SharedColor__op_Implicit(Color_o *value,MethodInfo *method)

{
  float fVar1;
  Color_o *pCVar2;
  
  if (DAT_ram_00664b74 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedColor_TypeInfo);
    DAT_ram_00664b74 = '\x01';
  }
  pCVar2 = (Color_o *)unnamed_function_95402(BehaviorDesigner_Runtime_SharedColor_TypeInfo);
  if (DAT_ram_00664b75 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c8c);
    DAT_ram_00664b75 = '\x01';
  }
  *(undefined8 *)&pCVar2[2].a = *(undefined8 *)&value->b;
  fVar1 = value->g;
  pCVar2[2].g = value->r;
  pCVar2[2].b = fVar1;
  return pCVar2;
}

// ---- BehaviorDesigner.Runtime.SharedColor$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedColor___ctor (BehaviorDesigner_Runtime_SharedColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedColor___ctor
               (BehaviorDesigner_Runtime_SharedColor_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b75 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c8c);
    DAT_ram_00664b75 = '\x01';
  }
  return;
}

