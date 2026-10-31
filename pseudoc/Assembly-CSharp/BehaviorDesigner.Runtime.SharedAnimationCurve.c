// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedAnimationCurve
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedAnimationCurve : SharedVariable<AnimationCurve> // TypeDefIndex: 5800
{
	// Methods

	// RVA: 0x3BC3 Offset: 0x3BC3 VA: 0x3BC3
	public static SharedAnimationCurve op_Implicit(AnimationCurve value) { }

	// RVA: 0x3BC4 Offset: 0x3BC4 VA: 0x3BC4
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedAnimationCurve$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedAnimationCurve_o* BehaviorDesigner_Runtime_SharedAnimationCurve__op_Implicit (UnityEngine_AnimationCurve_o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedAnimationCurve_o *
BehaviorDesigner_Runtime_SharedAnimationCurve__op_Implicit
          (UnityEngine_AnimationCurve_o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedAnimationCurve_o *pBVar1;
  
  if (DAT_ram_00664b6c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedAnimationCurve_TypeInfo);
    DAT_ram_00664b6c = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedAnimationCurve_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedAnimationCurve_TypeInfo);
  if (DAT_ram_00664b6d == '\0') {
    unnamed_function_1099(&DAT_ram_00565c64);
    DAT_ram_00664b6d = '\x01';
  }
  pBVar1[4].monitor = value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedAnimationCurve$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedAnimationCurve___ctor (BehaviorDesigner_Runtime_SharedAnimationCurve_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedAnimationCurve___ctor
               (BehaviorDesigner_Runtime_SharedAnimationCurve_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b6d == '\0') {
    unnamed_function_1099(&DAT_ram_00565c64);
    DAT_ram_00664b6d = '\x01';
  }
  return;
}

