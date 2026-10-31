// Assembly-CSharp :: TMPro.Examples.SimpleScript
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SimpleScript : MonoBehaviour // TypeDefIndex: 5760
{
	// Fields
	private TextMeshPro m_textMeshPro; // 0x10
	private const string label = "The <#0050FF>count is: </color>{0:2}";
	private float m_frame; // 0x14

	// Methods

	// RVA: 0x3B0D Offset: 0x3B0D VA: 0x3B0D
	private void Start() { }

	// RVA: 0x3B0E Offset: 0x3B0E VA: 0x3B0E
	private void Update() { }

	// RVA: 0x3B0F Offset: 0x3B0F VA: 0x3B0F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.SimpleScript$$Start ----
// C#: void TMPro_Examples_SimpleScript__Start (TMPro_Examples_SimpleScript_o* __this, const MethodInfo* method);

void TMPro_Examples_SimpleScript__Start(TMPro_Examples_SimpleScript_o *__this,MethodInfo *method)

{
  undefined4 param1;
  TextMeshPro_o *pTVar1;
  
  if (DAT_ram_00664867 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a24);
    DAT_ram_00664867 = '\x01';
  }
  param1 = unnamed_function_44644(__this,0);
  pTVar1 = (TextMeshPro_o *)unnamed_function_73837(param1,DAT_ram_00569a24);
  __this->m_textMeshPro = pTVar1;
  (**(code **)((ulonglong)*(uint *)(pTVar1->_opaque + 800) * 4))
            (pTVar1,1,*(undefined4 *)(pTVar1->_opaque + 0x324));
  unnamed_function_23055(__this->m_textMeshPro,48.0,0);
  unnamed_function_23071(__this->m_textMeshPro,0x202,0);
  unnamed_function_23085(__this->m_textMeshPro,0,0);
  return;
}

// ---- TMPro.Examples.SimpleScript$$Update ----
// C#: void TMPro_Examples_SimpleScript__Update (TMPro_Examples_SimpleScript_o* __this, const MethodInfo* method);

void TMPro_Examples_SimpleScript__Update(TMPro_Examples_SimpleScript_o *__this,MethodInfo *method)

{
  undefined4 param2;
  float fVar1;
  TextMeshPro_o *param1;
  float fVar2;
  
  if (DAT_ram_00664868 == '\0') {
    unnamed_function_1099(&StringLiteral_7281 /* "The <#0050FF>count is: </color>{0:2}" */);
    DAT_ram_00664868 = '\x01';
  }
  param2 = StringLiteral_7281 /* "The <#0050FF>count is: </color>{0:2}" */;
  param1 = __this->m_textMeshPro;
  fVar1 = unnamed_function_11008(__this->m_frame,1000.0);
  unnamed_function_23205(param1,param2,fVar1,0);
  fVar2 = __this->m_frame;
  fVar1 = unnamed_function_44879(0);
  __this->m_frame = fVar2 + fVar1;
  return;
}

// ---- TMPro.Examples.SimpleScript$$.ctor ----
// C#: void TMPro_Examples_SimpleScript___ctor (TMPro_Examples_SimpleScript_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

