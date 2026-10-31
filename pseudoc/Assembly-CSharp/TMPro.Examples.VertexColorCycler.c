// Assembly-CSharp :: TMPro.Examples.VertexColorCycler
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class VertexColorCycler : MonoBehaviour // TypeDefIndex: 5785
{
	// Fields
	private TMP_Text m_TextComponent; // 0x10

	// Methods

	// RVA: 0x3B76 Offset: 0x3B76 VA: 0x3B76
	private void Awake() { }

	// RVA: 0x3B77 Offset: 0x3B77 VA: 0x3B77
	private void Start() { }

	[IteratorStateMachine(typeof(VertexColorCycler.<AnimateVertexColors>d__3))]
	// RVA: 0x3B78 Offset: 0x3B78 VA: 0x3B78
	private IEnumerator AnimateVertexColors() { }

	// RVA: 0x3B79 Offset: 0x3B79 VA: 0x3B79
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.VertexColorCycler$$Awake ----
// C#: void TMPro_Examples_VertexColorCycler__Awake (TMPro_Examples_VertexColorCycler_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexColorCycler__Awake
               (TMPro_Examples_VertexColorCycler_o *__this,MethodInfo *method)

{
  TMP_Text_o *pTVar1;
  
  if (DAT_ram_00664897 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f3c);
    DAT_ram_00664897 = '\x01';
  }
  pTVar1 = (TMP_Text_o *)unnamed_function_65370(__this,DAT_ram_00567f3c);
  __this->m_TextComponent = pTVar1;
  return;
}

// ---- TMPro.Examples.VertexColorCycler$$Start ----
// C#: void TMPro_Examples_VertexColorCycler__Start (TMPro_Examples_VertexColorCycler_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexColorCycler__Start
               (TMPro_Examples_VertexColorCycler_o *__this,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_00664898 == '\0') {
    unnamed_function_1099(&TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_TypeInfo);
    DAT_ram_00664898 = '\x01';
  }
  param2 = unnamed_function_95402
                     (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_TypeInfo);
  *(TMPro_Examples_VertexColorCycler_o **)(param2 + 0x10 /* m_TextComponent */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- TMPro.Examples.VertexColorCycler$$AnimateVertexColors ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_VertexColorCycler__AnimateVertexColors (TMPro_Examples_VertexColorCycler_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_VertexColorCycler__AnimateVertexColors
          (TMPro_Examples_VertexColorCycler_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664898 == '\0') {
    unnamed_function_1099(&TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_TypeInfo);
    DAT_ram_00664898 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402
                     (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.VertexColorCycler$$.ctor ----
// C#: void TMPro_Examples_VertexColorCycler___ctor (TMPro_Examples_VertexColorCycler_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

