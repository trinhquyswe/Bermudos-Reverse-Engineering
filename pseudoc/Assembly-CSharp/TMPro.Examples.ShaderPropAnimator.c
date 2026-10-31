// Assembly-CSharp :: TMPro.Examples.ShaderPropAnimator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ShaderPropAnimator : MonoBehaviour // TypeDefIndex: 5759
{
	// Fields
	private Renderer m_Renderer; // 0x10
	private Material m_Material; // 0x14
	public AnimationCurve GlowCurve; // 0x18
	public float m_frame; // 0x1C

	// Methods

	// RVA: 0x3B03 Offset: 0x3B03 VA: 0x3B03
	private void Awake() { }

	// RVA: 0x3B04 Offset: 0x3B04 VA: 0x3B04
	private void Start() { }

	[IteratorStateMachine(typeof(ShaderPropAnimator.<AnimateProperties>d__6))]
	// RVA: 0x3B05 Offset: 0x3B05 VA: 0x3B05
	private IEnumerator AnimateProperties() { }

	// RVA: 0x3B06 Offset: 0x3B06 VA: 0x3B06
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.ShaderPropAnimator$$Awake ----
// C#: void TMPro_Examples_ShaderPropAnimator__Awake (TMPro_Examples_ShaderPropAnimator_o* __this, const MethodInfo* method);

void TMPro_Examples_ShaderPropAnimator__Awake
               (TMPro_Examples_ShaderPropAnimator_o *__this,MethodInfo *method)

{
  Renderer_o *param1;
  Material_o *pMVar1;
  
  if (DAT_ram_00664864 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f10);
    DAT_ram_00664864 = '\x01';
  }
  param1 = (Renderer_o *)unnamed_function_65370(__this,DAT_ram_00567f10);
  __this->m_Renderer = param1;
  pMVar1 = (Material_o *)unnamed_function_52793(param1,0);
  __this->m_Material = pMVar1;
  return;
}

// ---- TMPro.Examples.ShaderPropAnimator$$Start ----
// C#: void TMPro_Examples_ShaderPropAnimator__Start (TMPro_Examples_ShaderPropAnimator_o* __this, const MethodInfo* method);

void TMPro_Examples_ShaderPropAnimator__Start
               (TMPro_Examples_ShaderPropAnimator_o *__this,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_00664865 == '\0') {
    unnamed_function_1099(&TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_TypeInfo);
    DAT_ram_00664865 = '\x01';
  }
  param2 = unnamed_function_95402
                     (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_TypeInfo);
  *(TMPro_Examples_ShaderPropAnimator_o **)(param2 + 0x10 /* m_Renderer */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- TMPro.Examples.ShaderPropAnimator$$AnimateProperties ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_ShaderPropAnimator__AnimateProperties (TMPro_Examples_ShaderPropAnimator_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_ShaderPropAnimator__AnimateProperties
          (TMPro_Examples_ShaderPropAnimator_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664865 == '\0') {
    unnamed_function_1099(&TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_TypeInfo);
    DAT_ram_00664865 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402
                     (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.ShaderPropAnimator$$.ctor ----
// C#: void TMPro_Examples_ShaderPropAnimator___ctor (TMPro_Examples_ShaderPropAnimator_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

