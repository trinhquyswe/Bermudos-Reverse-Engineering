// Assembly-CSharp :: TMPro.Examples.VertexShakeB
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class VertexShakeB : MonoBehaviour // TypeDefIndex: 5792
{
	// Fields
	public float AngleMultiplier; // 0x10
	public float SpeedMultiplier; // 0x14
	public float CurveScale; // 0x18
	private TMP_Text m_TextComponent; // 0x1C
	private bool hasTextChanged; // 0x20

	// Methods

	// RVA: 0x3B9A Offset: 0x3B9A VA: 0x3B9A
	private void Awake() { }

	// RVA: 0x3B9B Offset: 0x3B9B VA: 0x3B9B
	private void OnEnable() { }

	// RVA: 0x3B9C Offset: 0x3B9C VA: 0x3B9C
	private void OnDisable() { }

	// RVA: 0x3B9D Offset: 0x3B9D VA: 0x3B9D
	private void Start() { }

	// RVA: 0x3B9E Offset: 0x3B9E VA: 0x3B9E
	private void ON_TEXT_CHANGED(Object obj) { }

	[IteratorStateMachine(typeof(VertexShakeB.<AnimateVertexColors>d__10))]
	// RVA: 0x3B9F Offset: 0x3B9F VA: 0x3B9F
	private IEnumerator AnimateVertexColors() { }

	// RVA: 0x3BA0 Offset: 0x3BA0 VA: 0x3BA0
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.VertexShakeB$$Awake ----
// C#: void TMPro_Examples_VertexShakeB__Awake (TMPro_Examples_VertexShakeB_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexShakeB__Awake(TMPro_Examples_VertexShakeB_o *__this,MethodInfo *method)

{
  TMP_Text_o *pTVar1;
  
  if (DAT_ram_006648a6 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f3c);
    DAT_ram_006648a6 = '\x01';
  }
  pTVar1 = (TMP_Text_o *)unnamed_function_65370(__this,DAT_ram_00567f3c);
  __this->m_TextComponent = pTVar1;
  return;
}

// ---- TMPro.Examples.VertexShakeB$$OnEnable ----
// C#: void TMPro_Examples_VertexShakeB__OnEnable (TMPro_Examples_VertexShakeB_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexShakeB__OnEnable(TMPro_Examples_VertexShakeB_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_006648a7 == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561d98);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056da30);
    DAT_ram_006648a7 = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056da30,0);
  unnamed_function_75545(param1_00,param1,DAT_ram_00561d98);
  return;
}

// ---- TMPro.Examples.VertexShakeB$$OnDisable ----
// C#: void TMPro_Examples_VertexShakeB__OnDisable (TMPro_Examples_VertexShakeB_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexShakeB__OnDisable
               (TMPro_Examples_VertexShakeB_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_006648a8 == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561da0);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056da30);
    DAT_ram_006648a8 = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056da30,0);
  unnamed_function_75546(param1_00,param1,DAT_ram_00561da0);
  return;
}

// ---- TMPro.Examples.VertexShakeB$$Start ----
// C#: void TMPro_Examples_VertexShakeB__Start (TMPro_Examples_VertexShakeB_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexShakeB__Start(TMPro_Examples_VertexShakeB_o *__this,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_006648aa == '\0') {
    unnamed_function_1099(&TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_TypeInfo);
    DAT_ram_006648aa = '\x01';
  }
  param2 = unnamed_function_95402(TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_TypeInfo);
  *(TMPro_Examples_VertexShakeB_o **)(param2 + 0x10 /* AngleMultiplier */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- TMPro.Examples.VertexShakeB$$ON_TEXT_CHANGED ----
// C#: void TMPro_Examples_VertexShakeB__ON_TEXT_CHANGED (TMPro_Examples_VertexShakeB_o* __this, UnityEngine_Object_o* obj, const MethodInfo* method);

void TMPro_Examples_VertexShakeB__ON_TEXT_CHANGED
               (TMPro_Examples_VertexShakeB_o *__this,UnityEngine_Object_o *obj,MethodInfo *method)

{
  int iVar1;
  TMP_Text_o *param1;
  
  if (DAT_ram_006648a9 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648a9 = '\x01';
  }
  param1 = __this->m_TextComponent;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44767(param1,0);
  if (iVar1 != 0) {
    __this->hasTextChanged = true;
  }
  return;
}

// ---- TMPro.Examples.VertexShakeB$$AnimateVertexColors ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_VertexShakeB__AnimateVertexColors (TMPro_Examples_VertexShakeB_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_VertexShakeB__AnimateVertexColors
          (TMPro_Examples_VertexShakeB_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_006648aa == '\0') {
    unnamed_function_1099(&TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_TypeInfo);
    DAT_ram_006648aa = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.VertexShakeB$$.ctor ----
// C#: void TMPro_Examples_VertexShakeB___ctor (TMPro_Examples_VertexShakeB_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexJitter___ctor(TMPro_Examples_VertexJitter_o *__this,MethodInfo *method)

{
  __this->CurveScale = 1.0;
  __this->AngleMultiplier = 1.0;
  __this->SpeedMultiplier = 1.0;
  unnamed_function_44622(__this,0);
  return;
}

