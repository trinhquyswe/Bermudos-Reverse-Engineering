// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedRect
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedRect : SharedVariable<Rect> // TypeDefIndex: 5815
{
	// Methods

	// RVA: 0x3BE1 Offset: 0x3BE1 VA: 0x3BE1
	public static SharedRect op_Implicit(Rect value) { }

	// RVA: 0x3BE2 Offset: 0x3BE2 VA: 0x3BE2
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedRect$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedRect_o* BehaviorDesigner_Runtime_SharedRect__op_Implicit (UnityEngine_Rect_o value, const MethodInfo* method);

Rect_o * BehaviorDesigner_Runtime_SharedRect__op_Implicit(Rect_o *value,MethodInfo *method)

{
  float fVar1;
  Rect_o *pRVar2;
  
  if (DAT_ram_00664b8a == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedRect_TypeInfo);
    DAT_ram_00664b8a = '\x01';
  }
  pRVar2 = (Rect_o *)unnamed_function_95402(BehaviorDesigner_Runtime_SharedRect_TypeInfo);
  if (DAT_ram_00664b8b == '\0') {
    unnamed_function_1099(&DAT_ram_00565cf0);
    DAT_ram_00664b8b = '\x01';
  }
  *(undefined8 *)&pRVar2[2].height = *(undefined8 *)&value->width;
  fVar1 = value->y;
  pRVar2[2].y = value->x;
  pRVar2[2].width = fVar1;
  return pRVar2;
}

// ---- BehaviorDesigner.Runtime.SharedRect$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedRect___ctor (BehaviorDesigner_Runtime_SharedRect_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedRect___ctor
               (BehaviorDesigner_Runtime_SharedRect_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b8b == '\0') {
    unnamed_function_1099(&DAT_ram_00565cf0);
    DAT_ram_00664b8b = '\x01';
  }
  return;
}

