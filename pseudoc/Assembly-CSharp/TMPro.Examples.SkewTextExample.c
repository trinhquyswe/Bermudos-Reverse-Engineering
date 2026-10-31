// Assembly-CSharp :: TMPro.Examples.SkewTextExample
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SkewTextExample : MonoBehaviour // TypeDefIndex: 5762
{
	// Fields
	private TMP_Text m_TextComponent; // 0x10
	public AnimationCurve VertexCurve; // 0x14
	public float CurveScale; // 0x18
	public float ShearAmount; // 0x1C

	// Methods

	// RVA: 0x3B10 Offset: 0x3B10 VA: 0x3B10
	private void Awake() { }

	// RVA: 0x3B11 Offset: 0x3B11 VA: 0x3B11
	private void Start() { }

	// RVA: 0x3B12 Offset: 0x3B12 VA: 0x3B12
	private AnimationCurve CopyAnimationCurve(AnimationCurve curve) { }

	[IteratorStateMachine(typeof(SkewTextExample.<WarpText>d__7))]
	// RVA: 0x3B13 Offset: 0x3B13 VA: 0x3B13
	private IEnumerator WarpText() { }

	// RVA: 0x3B14 Offset: 0x3B14 VA: 0x3B14
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.SkewTextExample$$Awake ----
// C#: void TMPro_Examples_SkewTextExample__Awake (TMPro_Examples_SkewTextExample_o* __this, const MethodInfo* method);

void TMPro_Examples_SkewTextExample__Awake
               (TMPro_Examples_SkewTextExample_o *__this,MethodInfo *method)

{
  undefined4 param1;
  TMP_Text_o *pTVar1;
  
  if (DAT_ram_00664869 == '\0') {
    unnamed_function_1099(&DAT_ram_00569b18);
    DAT_ram_00664869 = '\x01';
  }
  param1 = unnamed_function_44644(__this,0);
  pTVar1 = (TMP_Text_o *)unnamed_function_73836(param1,DAT_ram_00569b18);
  __this->m_TextComponent = pTVar1;
  return;
}

// ---- TMPro.Examples.SkewTextExample$$Start ----
// C#: void TMPro_Examples_SkewTextExample__Start (TMPro_Examples_SkewTextExample_o* __this, const MethodInfo* method);

void TMPro_Examples_SkewTextExample__Start
               (TMPro_Examples_SkewTextExample_o *__this,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_0066486b == '\0') {
    unnamed_function_1099(&TMPro_Examples_SkewTextExample__WarpText_d__7_TypeInfo);
    DAT_ram_0066486b = '\x01';
  }
  param2 = unnamed_function_95402(TMPro_Examples_SkewTextExample__WarpText_d__7_TypeInfo);
  *(TMPro_Examples_SkewTextExample_o **)(param2 + 0x10 /* m_TextComponent */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- TMPro.Examples.SkewTextExample$$CopyAnimationCurve ----
// C#: UnityEngine_AnimationCurve_o* TMPro_Examples_SkewTextExample__CopyAnimationCurve (TMPro_Examples_SkewTextExample_o* __this, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method);

UnityEngine_AnimationCurve_o *
TMPro_Examples_SkewTextExample__CopyAnimationCurve
          (TMPro_Examples_SkewTextExample_o *__this,UnityEngine_AnimationCurve_o *curve,
          MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *param1;
  undefined4 param2;
  
  if (DAT_ram_0066486a == '\0') {
    unnamed_function_1099(&UnityEngine_AnimationCurve_TypeInfo);
    DAT_ram_0066486a = '\x01';
  }
  param1 = (UnityEngine_AnimationCurve_o *)
           unnamed_function_95402(UnityEngine_AnimationCurve_TypeInfo);
  unnamed_function_52231(param1,0);
  param2 = unnamed_function_52212(curve,0);
  unnamed_function_52213(param1,param2,0);
  return param1;
}

// ---- TMPro.Examples.SkewTextExample$$WarpText ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_SkewTextExample__WarpText (TMPro_Examples_SkewTextExample_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_SkewTextExample__WarpText
          (TMPro_Examples_SkewTextExample_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_0066486b == '\0') {
    unnamed_function_1099(&TMPro_Examples_SkewTextExample__WarpText_d__7_TypeInfo);
    DAT_ram_0066486b = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(TMPro_Examples_SkewTextExample__WarpText_d__7_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.SkewTextExample$$.ctor ----
// C#: void TMPro_Examples_SkewTextExample___ctor (TMPro_Examples_SkewTextExample_o* __this, const MethodInfo* method);

void TMPro_Examples_SkewTextExample___ctor
               (TMPro_Examples_SkewTextExample_o *__this,MethodInfo *method)

{
  int param2;
  AnimationCurve_o *param1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_0066486c == '\0') {
    unnamed_function_1099(&UnityEngine_AnimationCurve_TypeInfo);
    unnamed_function_1099(&UnityEngine_Keyframe___TypeInfo);
    DAT_ram_0066486c = '\x01';
  }
  param2 = unnamed_function_1050(UnityEngine_Keyframe___TypeInfo,5);
  local_8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  unnamed_function_52200(&local_20,0.0,0.0,0);
  *(undefined4 *)(param2 + 0x28) = local_8;
  *(undefined8 *)(param2 + 0x20) = local_10;
  *(undefined8 *)(param2 + 0x18 /* CurveScale */) = local_18;
  *(undefined8 *)(param2 + 0x10 /* m_TextComponent */) = local_20;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  unnamed_function_52200(&local_40,0.25,2.0,0);
  *(undefined4 *)(param2 + 0x44) = local_28;
  *(undefined8 *)(param2 + 0x3c) = local_30;
  *(undefined8 *)(param2 + 0x34) = local_38;
  *(undefined8 *)(param2 + 0x2c) = local_40;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  unnamed_function_52200(&local_60,0.5,0.0,0);
  *(undefined4 *)(param2 + 0x60) = local_48;
  *(undefined8 *)(param2 + 0x58) = local_50;
  *(undefined8 *)(param2 + 0x50) = local_58;
  *(undefined8 *)(param2 + 0x48) = local_60;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  unnamed_function_52200(&local_80,0.75,2.0,0);
  *(undefined4 *)(param2 + 0x7c) = local_68;
  *(undefined8 *)(param2 + 0x74) = local_70;
  *(undefined8 *)(param2 + 0x6c) = local_78;
  *(undefined8 *)(param2 + 100) = local_80;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  unnamed_function_52200(&local_a0,1.0,0.0,0);
  *(undefined4 *)(param2 + 0x98) = local_88;
  *(undefined8 *)(param2 + 0x90) = local_90;
  *(undefined8 *)(param2 + 0x88) = local_98;
  *(undefined8 *)(param2 + 0x80) = local_a0;
  param1 = (AnimationCurve_o *)unnamed_function_95402(UnityEngine_AnimationCurve_TypeInfo);
  unnamed_function_52227(param1,param2,0);
  __this->CurveScale = 1.0;
  __this->ShearAmount = 1.0;
  __this->VertexCurve = param1;
  unnamed_function_44622(__this,0);
  return;
}

