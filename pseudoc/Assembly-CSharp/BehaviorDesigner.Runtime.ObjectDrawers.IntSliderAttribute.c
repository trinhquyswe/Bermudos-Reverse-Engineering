// Assembly-CSharp :: BehaviorDesigner.Runtime.ObjectDrawers.IntSliderAttribute
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IntSliderAttribute : ObjectDrawerAttribute // TypeDefIndex: 6337
{
	// Fields
	public int min; // 0x8
	public int max; // 0xC

	// Methods

	// RVA: 0x4396 Offset: 0x4396 VA: 0x4396
	public void .ctor(int min, int max) { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.ObjectDrawers.IntSliderAttribute$$.ctor ----
// C#: void BehaviorDesigner_Runtime_ObjectDrawers_IntSliderAttribute___ctor (BehaviorDesigner_Runtime_ObjectDrawers_IntSliderAttribute_o* __this, int32_t min, int32_t max, const MethodInfo* method);

void BehaviorDesigner_Runtime_ObjectDrawers_IntSliderAttribute___ctor
               (BehaviorDesigner_Runtime_ObjectDrawers_IntSliderAttribute_o *__this,int min,int max,
               MethodInfo *method)

{
  __this->max = max;
  __this->min = min;
  return;
}

