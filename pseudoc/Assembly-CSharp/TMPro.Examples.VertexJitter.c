// Assembly-CSharp :: TMPro.Examples.VertexJitter
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class VertexJitter : MonoBehaviour // TypeDefIndex: 5788
{
	// Fields
	public float AngleMultiplier; // 0x10
	public float SpeedMultiplier; // 0x14
	public float CurveScale; // 0x18
	private TMP_Text m_TextComponent; // 0x1C
	private bool hasTextChanged; // 0x20

	// Methods

	// RVA: 0x3B80 Offset: 0x3B80 VA: 0x3B80
	private void Awake() { }

	// RVA: 0x3B81 Offset: 0x3B81 VA: 0x3B81
	private void OnEnable() { }

	// RVA: 0x3B82 Offset: 0x3B82 VA: 0x3B82
	private void OnDisable() { }

	// RVA: 0x3B83 Offset: 0x3B83 VA: 0x3B83
	private void Start() { }

	// RVA: 0x3B84 Offset: 0x3B84 VA: 0x3B84
	private void ON_TEXT_CHANGED(Object obj) { }

	[IteratorStateMachine(typeof(VertexJitter.<AnimateVertexColors>d__11))]
	// RVA: 0x3B85 Offset: 0x3B85 VA: 0x3B85
	private IEnumerator AnimateVertexColors() { }

	// RVA: 0x3B86 Offset: 0x3B86 VA: 0x3B86
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.VertexJitter$$Awake ----
// C#: void TMPro_Examples_VertexJitter__Awake (TMPro_Examples_VertexJitter_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexJitter__Awake(TMPro_Examples_VertexJitter_o *__this,MethodInfo *method)

{
  TMP_Text_o *pTVar1;
  
  if (DAT_ram_0066489a == '\0') {
    unnamed_function_1099(&DAT_ram_00567f3c);
    DAT_ram_0066489a = '\x01';
  }
  pTVar1 = (TMP_Text_o *)unnamed_function_65370(__this,DAT_ram_00567f3c);
  __this->m_TextComponent = pTVar1;
  return;
}

// ---- TMPro.Examples.VertexJitter$$OnEnable ----
// C#: void TMPro_Examples_VertexJitter__OnEnable (TMPro_Examples_VertexJitter_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexJitter__OnEnable(TMPro_Examples_VertexJitter_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_0066489b == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561d98);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056da28);
    DAT_ram_0066489b = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056da28,0);
  unnamed_function_75545(param1_00,param1,DAT_ram_00561d98);
  return;
}

// ---- TMPro.Examples.VertexJitter$$OnDisable ----
// C#: void TMPro_Examples_VertexJitter__OnDisable (TMPro_Examples_VertexJitter_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexJitter__OnDisable
               (TMPro_Examples_VertexJitter_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_0066489c == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561da0);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056da28);
    DAT_ram_0066489c = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056da28,0);
  unnamed_function_75546(param1_00,param1,DAT_ram_00561da0);
  return;
}

// ---- TMPro.Examples.VertexJitter$$Start ----
// C#: void TMPro_Examples_VertexJitter__Start (TMPro_Examples_VertexJitter_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexJitter__Start(TMPro_Examples_VertexJitter_o *__this,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_0066489e == '\0') {
    unnamed_function_1099(&TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_TypeInfo);
    DAT_ram_0066489e = '\x01';
  }
  param2 = unnamed_function_95402(TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_TypeInfo);
  *(TMPro_Examples_VertexJitter_o **)(param2 + 0x10 /* AngleMultiplier */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- TMPro.Examples.VertexJitter$$ON_TEXT_CHANGED ----
// C#: void TMPro_Examples_VertexJitter__ON_TEXT_CHANGED (TMPro_Examples_VertexJitter_o* __this, UnityEngine_Object_o* obj, const MethodInfo* method);

void TMPro_Examples_VertexJitter__ON_TEXT_CHANGED
               (TMPro_Examples_VertexJitter_o *__this,UnityEngine_Object_o *obj,MethodInfo *method)

{
  int iVar1;
  TMP_Text_o *param2;
  
  if (DAT_ram_0066489d == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_0066489d = '\x01';
  }
  param2 = __this->m_TextComponent;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(obj,param2,0);
  if (iVar1 != 0) {
    __this->hasTextChanged = true;
  }
  return;
}

// ---- TMPro.Examples.VertexJitter$$AnimateVertexColors ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_VertexJitter__AnimateVertexColors (TMPro_Examples_VertexJitter_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_VertexJitter__AnimateVertexColors
          (TMPro_Examples_VertexJitter_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_0066489e == '\0') {
    unnamed_function_1099(&TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_TypeInfo);
    DAT_ram_0066489e = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.VertexJitter$$.ctor ----
// C#: void TMPro_Examples_VertexJitter___ctor (TMPro_Examples_VertexJitter_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexJitter___ctor(TMPro_Examples_VertexJitter_o *__this,MethodInfo *method)

{
  __this->CurveScale = 1.0;
  __this->AngleMultiplier = 1.0;
  __this->SpeedMultiplier = 1.0;
  unnamed_function_44622(__this,0);
  return;
}

