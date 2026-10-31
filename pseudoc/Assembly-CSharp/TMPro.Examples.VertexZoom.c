// Assembly-CSharp :: TMPro.Examples.VertexZoom
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class VertexZoom : MonoBehaviour // TypeDefIndex: 5795
{
	// Fields
	public float AngleMultiplier; // 0x10
	public float SpeedMultiplier; // 0x14
	public float CurveScale; // 0x18
	private TMP_Text m_TextComponent; // 0x1C
	private bool hasTextChanged; // 0x20

	// Methods

	// RVA: 0x3BA7 Offset: 0x3BA7 VA: 0x3BA7
	private void Awake() { }

	// RVA: 0x3BA8 Offset: 0x3BA8 VA: 0x3BA8
	private void OnEnable() { }

	// RVA: 0x3BA9 Offset: 0x3BA9 VA: 0x3BA9
	private void OnDisable() { }

	// RVA: 0x3BAA Offset: 0x3BAA VA: 0x3BAA
	private void Start() { }

	// RVA: 0x3BAB Offset: 0x3BAB VA: 0x3BAB
	private void ON_TEXT_CHANGED(Object obj) { }

	[IteratorStateMachine(typeof(VertexZoom.<AnimateVertexColors>d__10))]
	// RVA: 0x3BAC Offset: 0x3BAC VA: 0x3BAC
	private IEnumerator AnimateVertexColors() { }

	// RVA: 0x3BAD Offset: 0x3BAD VA: 0x3BAD
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.VertexZoom$$Awake ----
// C#: void TMPro_Examples_VertexZoom__Awake (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexZoom__Awake(TMPro_Examples_VertexZoom_o *__this,MethodInfo *method)

{
  TMP_Text_o *pTVar1;
  
  if (DAT_ram_00664b60 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f3c);
    DAT_ram_00664b60 = '\x01';
  }
  pTVar1 = (TMP_Text_o *)unnamed_function_65370(__this,DAT_ram_00567f3c);
  __this->m_TextComponent = pTVar1;
  return;
}

// ---- TMPro.Examples.VertexZoom$$OnEnable ----
// C#: void TMPro_Examples_VertexZoom__OnEnable (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexZoom__OnEnable(TMPro_Examples_VertexZoom_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664b61 == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561d98);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056da34);
    DAT_ram_00664b61 = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056da34,0);
  unnamed_function_75545(param1_00,param1,DAT_ram_00561d98);
  return;
}

// ---- TMPro.Examples.VertexZoom$$OnDisable ----
// C#: void TMPro_Examples_VertexZoom__OnDisable (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexZoom__OnDisable(TMPro_Examples_VertexZoom_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664b62 == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561da0);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056da34);
    DAT_ram_00664b62 = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056da34,0);
  unnamed_function_75546(param1_00,param1,DAT_ram_00561da0);
  return;
}

// ---- TMPro.Examples.VertexZoom$$Start ----
// C#: void TMPro_Examples_VertexZoom__Start (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexZoom__Start(TMPro_Examples_VertexZoom_o *__this,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_00664b64 == '\0') {
    unnamed_function_1099(&TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_TypeInfo);
    DAT_ram_00664b64 = '\x01';
  }
  param2 = unnamed_function_95402(TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_TypeInfo);
  *(TMPro_Examples_VertexZoom_o **)(param2 + 0x10 /* AngleMultiplier */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- TMPro.Examples.VertexZoom$$ON_TEXT_CHANGED ----
// C#: void TMPro_Examples_VertexZoom__ON_TEXT_CHANGED (TMPro_Examples_VertexZoom_o* __this, UnityEngine_Object_o* obj, const MethodInfo* method);

void TMPro_Examples_VertexZoom__ON_TEXT_CHANGED
               (TMPro_Examples_VertexZoom_o *__this,UnityEngine_Object_o *obj,MethodInfo *method)

{
  int iVar1;
  TMP_Text_o *param2;
  
  if (DAT_ram_00664b63 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664b63 = '\x01';
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

// ---- TMPro.Examples.VertexZoom$$AnimateVertexColors ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_VertexZoom__AnimateVertexColors (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_VertexZoom__AnimateVertexColors
          (TMPro_Examples_VertexZoom_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664b64 == '\0') {
    unnamed_function_1099(&TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_TypeInfo);
    DAT_ram_00664b64 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.VertexZoom$$.ctor ----
// C#: void TMPro_Examples_VertexZoom___ctor (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexJitter___ctor(TMPro_Examples_VertexJitter_o *__this,MethodInfo *method)

{
  __this->CurveScale = 1.0;
  __this->AngleMultiplier = 1.0;
  __this->SpeedMultiplier = 1.0;
  unnamed_function_44622(__this,0);
  return;
}

