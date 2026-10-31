// Assembly-CSharp :: TMPro.Examples.TeleType
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TeleType : MonoBehaviour // TypeDefIndex: 5764
{
	// Fields
	private string label01; // 0x10
	private string label02; // 0x14
	private TMP_Text m_textMeshPro; // 0x18

	// Methods

	// RVA: 0x3B1B Offset: 0x3B1B VA: 0x3B1B
	private void Awake() { }

	[IteratorStateMachine(typeof(TeleType.<Start>d__4))]
	// RVA: 0x3B1C Offset: 0x3B1C VA: 0x3B1C
	private IEnumerator Start() { }

	// RVA: 0x3B1D Offset: 0x3B1D VA: 0x3B1D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TeleType$$Awake ----
// C#: void TMPro_Examples_TeleType__Awake (TMPro_Examples_TeleType_o* __this, const MethodInfo* method);

void TMPro_Examples_TeleType__Awake(TMPro_Examples_TeleType_o *__this,MethodInfo *method)

{
  TMP_Text_o *pTVar1;
  
  if (DAT_ram_0066486d == '\0') {
    unnamed_function_1099(&DAT_ram_00567f3c);
    DAT_ram_0066486d = '\x01';
  }
  pTVar1 = (TMP_Text_o *)unnamed_function_65370(__this,DAT_ram_00567f3c);
  __this->m_textMeshPro = pTVar1;
  (**(code **)((ulonglong)*(uint *)(pTVar1->_opaque + 0x2d0) * 4))
            (pTVar1,__this->label01,*(undefined4 *)(pTVar1->_opaque + 0x2d4));
  unnamed_function_23085(__this->m_textMeshPro,1,0);
  unnamed_function_23071(__this->m_textMeshPro,0x102,0);
  return;
}

// ---- TMPro.Examples.TeleType$$Start ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_TeleType__Start (TMPro_Examples_TeleType_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_TeleType__Start(TMPro_Examples_TeleType_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_0066486e == '\0') {
    unnamed_function_1099(&TMPro_Examples_TeleType__Start_d__4_TypeInfo);
    DAT_ram_0066486e = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(TMPro_Examples_TeleType__Start_d__4_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.TeleType$$.ctor ----
// C#: void TMPro_Examples_TeleType___ctor (TMPro_Examples_TeleType_o* __this, const MethodInfo* method);

void TMPro_Examples_TeleType___ctor(TMPro_Examples_TeleType_o *__this,MethodInfo *method)

{
  if (DAT_ram_0066486f == '\0') {
    unnamed_function_1099(&StringLiteral_3689 /* "Example <sprite=2> of using <sprite=7> <#ffa000>Graphics ..." */);
    unnamed_function_1099(&StringLiteral_3688 /* "Example <sprite=2> of using <sprite=7> <#ffa000>Graphics ..." */);
    DAT_ram_0066486f = '\x01';
  }
  __this->label01 = StringLiteral_3688 /* "Example <sprite=2> of using <sprite=7> <#ffa000>Graphics ..." */;
  __this->label02 = StringLiteral_3689 /* "Example <sprite=2> of using <sprite=7> <#ffa000>Graphics ..." */;
  unnamed_function_44622(__this,0);
  return;
}

