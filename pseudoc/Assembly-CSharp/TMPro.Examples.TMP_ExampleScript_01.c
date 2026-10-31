// Assembly-CSharp :: TMPro.Examples.TMP_ExampleScript_01
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TMP_ExampleScript_01 : MonoBehaviour // TypeDefIndex: 5775
{
	// Fields
	public TMP_ExampleScript_01.objectType ObjectType; // 0x10
	public bool isStatic; // 0x14
	private TMP_Text m_text; // 0x18
	private const string k_label = "The count is <#0080ff>{0}</color>";
	private int count; // 0x1C

	// Methods

	// RVA: 0x3B50 Offset: 0x3B50 VA: 0x3B50
	private void Awake() { }

	// RVA: 0x3B51 Offset: 0x3B51 VA: 0x3B51
	private void Update() { }

	// RVA: 0x3B52 Offset: 0x3B52 VA: 0x3B52
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TMP_ExampleScript_01$$Awake ----
// C#: void TMPro_Examples_TMP_ExampleScript_01__Awake (TMPro_Examples_TMP_ExampleScript_01_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_ExampleScript_01__Awake
               (TMPro_Examples_TMP_ExampleScript_01_o *__this,MethodInfo *method)

{
  TMP_Text_o *pTVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664881 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f48);
    unnamed_function_1099(&DAT_ram_00567f44);
    unnamed_function_1099(&DAT_ram_00569a2c);
    unnamed_function_1099(&DAT_ram_00569a24);
    unnamed_function_1099(&DAT_ram_0056bfac);
    unnamed_function_1099(&DAT_ram_0056bfb8);
    unnamed_function_1099(&StringLiteral_1523 /* "A <#0080ff>simple</color> line of text." */);
    unnamed_function_1099(&StringLiteral_3933 /* "Fonts & Materials/Anton SDF - Drop Shadow" */);
    unnamed_function_1099(&StringLiteral_3932 /* "Fonts & Materials/Anton SDF" */);
    DAT_ram_00664881 = '\x01';
  }
  if (__this->ObjectType == TextMeshPro) {
    pTVar1 = (TMP_Text_o *)unnamed_function_65370(__this,DAT_ram_00567f44);
    if (pTVar1 == (TMP_Text_o *)0x0) {
      uVar2 = unnamed_function_44644(__this,0);
      pTVar1 = (TMP_Text_o *)unnamed_function_73837(uVar2,DAT_ram_00569a24);
    }
  }
  else {
    pTVar1 = (TMP_Text_o *)unnamed_function_65370(__this,DAT_ram_00567f48);
    if (pTVar1 == (TMP_Text_o *)0x0) {
      uVar2 = unnamed_function_44644(__this,0);
      pTVar1 = (TMP_Text_o *)unnamed_function_73837(uVar2,DAT_ram_00569a2c);
    }
  }
  __this->m_text = pTVar1;
  uVar2 = unnamed_function_60803(StringLiteral_3932 /* "Fonts & Materials/Anton SDF" */,DAT_ram_0056bfb8);
  unnamed_function_23023(pTVar1,uVar2,0);
  pTVar1 = __this->m_text;
  uVar2 = unnamed_function_60803(StringLiteral_3933 /* "Fonts & Materials/Anton SDF - Drop Shadow" */,DAT_ram_0056bfac);
  iVar3 = pTVar1->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x2e0) * 4))
            (pTVar1,uVar2,*(undefined4 *)(iVar3 + 0x2e4));
  unnamed_function_23055(__this->m_text,120.0,0);
  iVar3 = __this->m_text->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x2d0) * 4))
            (__this->m_text,StringLiteral_1523 /* "A <#0080ff>simple</color> line of text." */,*(undefined4 *)(iVar3 + 0x2d4));
  unnamed_function_23223(&local_8,__this->m_text,INFINITY,INFINITY,0);
  uVar2 = unnamed_function_23147(__this->m_text,0);
  local_10 = local_8;
  local_18 = local_8;
  unnamed_function_44939(uVar2,&local_18,0);
  return;
}

// ---- TMPro.Examples.TMP_ExampleScript_01$$Update ----
// C#: void TMPro_Examples_TMP_ExampleScript_01__Update (TMPro_Examples_TMP_ExampleScript_01_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_ExampleScript_01__Update
               (TMPro_Examples_TMP_ExampleScript_01_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664882 == '\0') {
    unnamed_function_1099(&StringLiteral_7466 /* "The count is <#0080ff>{0}</color>" */);
    DAT_ram_00664882 = '\x01';
  }
  if (__this->isStatic == false) {
    unnamed_function_23205(__this->m_text,StringLiteral_7466 /* "The count is <#0080ff>{0}</color>" */,(float)(__this->count % 1000),0);
    __this->count = __this->count + 1;
  }
  return;
}

// ---- TMPro.Examples.TMP_ExampleScript_01$$.ctor ----
// C#: void TMPro_Examples_TMP_ExampleScript_01___ctor (TMPro_Examples_TMP_ExampleScript_01_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

