// Assembly-CSharp :: TMPro.Examples.TextConsoleSimulator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TextConsoleSimulator : MonoBehaviour // TypeDefIndex: 5767
{
	// Fields
	private TMP_Text m_TextComponent; // 0x10
	private bool hasTextChanged; // 0x14

	// Methods

	// RVA: 0x3B24 Offset: 0x3B24 VA: 0x3B24
	private void Awake() { }

	// RVA: 0x3B25 Offset: 0x3B25 VA: 0x3B25
	private void Start() { }

	// RVA: 0x3B26 Offset: 0x3B26 VA: 0x3B26
	private void OnEnable() { }

	// RVA: 0x3B27 Offset: 0x3B27 VA: 0x3B27
	private void OnDisable() { }

	// RVA: 0x3B28 Offset: 0x3B28 VA: 0x3B28
	private void ON_TEXT_CHANGED(Object obj) { }

	[IteratorStateMachine(typeof(TextConsoleSimulator.<RevealCharacters>d__7))]
	// RVA: 0x3B29 Offset: 0x3B29 VA: 0x3B29
	private IEnumerator RevealCharacters(TMP_Text textComponent) { }

	[IteratorStateMachine(typeof(TextConsoleSimulator.<RevealWords>d__8))]
	// RVA: 0x3B2A Offset: 0x3B2A VA: 0x3B2A
	private IEnumerator RevealWords(TMP_Text textComponent) { }

	// RVA: 0x3B2B Offset: 0x3B2B VA: 0x3B2B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TextConsoleSimulator$$Awake ----
// C#: void TMPro_Examples_TextConsoleSimulator__Awake (TMPro_Examples_TextConsoleSimulator_o* __this, const MethodInfo* method);

void TMPro_Examples_TextConsoleSimulator__Awake
               (TMPro_Examples_TextConsoleSimulator_o *__this,MethodInfo *method)

{
  undefined4 param1;
  TMP_Text_o *pTVar1;
  
  if (DAT_ram_00664871 == '\0') {
    unnamed_function_1099(&DAT_ram_00569b18);
    DAT_ram_00664871 = '\x01';
  }
  param1 = unnamed_function_44644(__this,0);
  pTVar1 = (TMP_Text_o *)unnamed_function_73836(param1,DAT_ram_00569b18);
  __this->m_TextComponent = pTVar1;
  return;
}

// ---- TMPro.Examples.TextConsoleSimulator$$Start ----
// C#: void TMPro_Examples_TextConsoleSimulator__Start (TMPro_Examples_TextConsoleSimulator_o* __this, const MethodInfo* method);

void TMPro_Examples_TextConsoleSimulator__Start
               (TMPro_Examples_TextConsoleSimulator_o *__this,MethodInfo *method)

{
  int param2;
  TMP_Text_o *pTVar1;
  
  pTVar1 = __this->m_TextComponent;
  if (DAT_ram_00664874 == '\0') {
    unnamed_function_1099(&TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_TypeInfo);
    DAT_ram_00664874 = '\x01';
  }
  param2 = unnamed_function_95402
                     (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_TypeInfo);
  *(TMPro_Examples_TextConsoleSimulator_o **)(param2 + 0x14 /* hasTextChanged */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  *(TMP_Text_o **)(param2 + 0x10 /* m_TextComponent */) = pTVar1;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- TMPro.Examples.TextConsoleSimulator$$OnEnable ----
// C#: void TMPro_Examples_TextConsoleSimulator__OnEnable (TMPro_Examples_TextConsoleSimulator_o* __this, const MethodInfo* method);

void TMPro_Examples_TextConsoleSimulator__OnEnable
               (TMPro_Examples_TextConsoleSimulator_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664872 == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561d98);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056cffc);
    DAT_ram_00664872 = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056cffc,0);
  unnamed_function_75545(param1_00,param1,DAT_ram_00561d98);
  return;
}

// ---- TMPro.Examples.TextConsoleSimulator$$OnDisable ----
// C#: void TMPro_Examples_TextConsoleSimulator__OnDisable (TMPro_Examples_TextConsoleSimulator_o* __this, const MethodInfo* method);

void TMPro_Examples_TextConsoleSimulator__OnDisable
               (TMPro_Examples_TextConsoleSimulator_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664873 == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561da0);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056cffc);
    DAT_ram_00664873 = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056cffc,0);
  unnamed_function_75546(param1_00,param1,DAT_ram_00561da0);
  return;
}

// ---- TMPro.Examples.TextConsoleSimulator$$ON_TEXT_CHANGED ----
// C#: void TMPro_Examples_TextConsoleSimulator__ON_TEXT_CHANGED (TMPro_Examples_TextConsoleSimulator_o* __this, UnityEngine_Object_o* obj, const MethodInfo* method);

void TMPro_Examples_TextConsoleSimulator__ON_TEXT_CHANGED
               (TMPro_Examples_TextConsoleSimulator_o *__this,UnityEngine_Object_o *obj,
               MethodInfo *method)

{
  __this->hasTextChanged = true;
  return;
}

// ---- TMPro.Examples.TextConsoleSimulator$$RevealCharacters ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_TextConsoleSimulator__RevealCharacters (TMPro_Examples_TextConsoleSimulator_o* __this, TMPro_TMP_Text_o* textComponent, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_TextConsoleSimulator__RevealCharacters
          (TMPro_Examples_TextConsoleSimulator_o *__this,TMPro_TMP_Text_o *textComponent,
          MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664874 == '\0') {
    unnamed_function_1099(&TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_TypeInfo);
    DAT_ram_00664874 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402
                     (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_TypeInfo);
  pSVar1[5]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  pSVar1[4]._opaque = (int)textComponent;
  return pSVar1;
}

// ---- TMPro.Examples.TextConsoleSimulator$$RevealWords ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_TextConsoleSimulator__RevealWords (TMPro_Examples_TextConsoleSimulator_o* __this, TMPro_TMP_Text_o* textComponent, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_TextConsoleSimulator__RevealWords
          (TMPro_Examples_TextConsoleSimulator_o *__this,TMPro_TMP_Text_o *textComponent,
          MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664875 == '\0') {
    unnamed_function_1099(&TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_TypeInfo);
    DAT_ram_00664875 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_TypeInfo);
  pSVar1[4]._opaque = (int)textComponent;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.TextConsoleSimulator$$.ctor ----
// C#: void TMPro_Examples_TextConsoleSimulator___ctor (TMPro_Examples_TextConsoleSimulator_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

