// Assembly-CSharp :: BehaviorDesigner.Runtime.ObjectDrawers.FloatSliderAttribute
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class FloatSliderAttribute : ObjectDrawerAttribute // TypeDefIndex: 6336
{
	// Fields
	public float min; // 0x8
	public float max; // 0xC

	// Methods

	// RVA: 0x4395 Offset: 0x4395 VA: 0x4395
	public void .ctor(float min, float max) { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.ObjectDrawers.FloatSliderAttribute$$.ctor ----
// C#: void BehaviorDesigner_Runtime_ObjectDrawers_FloatSliderAttribute___ctor (BehaviorDesigner_Runtime_ObjectDrawers_FloatSliderAttribute_o* __this, float min, float max, const MethodInfo* method);

void BehaviorDesigner_Runtime_ObjectDrawers_FloatSliderAttribute___ctor
               (BehaviorDesigner_Runtime_ObjectDrawers_FloatSliderAttribute_o *__this,float min,
               float max,MethodInfo *method)

{
  __this->max = max;
  __this->min = min;
  return;
}

