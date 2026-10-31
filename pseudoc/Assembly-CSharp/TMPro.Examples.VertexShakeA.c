// Assembly-CSharp :: TMPro.Examples.VertexShakeA
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class VertexShakeA : MonoBehaviour // TypeDefIndex: 5790
{
	// Fields
	public float AngleMultiplier; // 0x10
	public float SpeedMultiplier; // 0x14
	public float ScaleMultiplier; // 0x18
	public float RotationMultiplier; // 0x1C
	private TMP_Text m_TextComponent; // 0x20
	private bool hasTextChanged; // 0x24

	// Methods

	// RVA: 0x3B8D Offset: 0x3B8D VA: 0x3B8D
	private void Awake() { }

	// RVA: 0x3B8E Offset: 0x3B8E VA: 0x3B8E
	private void OnEnable() { }

	// RVA: 0x3B8F Offset: 0x3B8F VA: 0x3B8F
	private void OnDisable() { }

	// RVA: 0x3B90 Offset: 0x3B90 VA: 0x3B90
	private void Start() { }

	// RVA: 0x3B91 Offset: 0x3B91 VA: 0x3B91
	private void ON_TEXT_CHANGED(Object obj) { }

	[IteratorStateMachine(typeof(VertexShakeA.<AnimateVertexColors>d__11))]
	// RVA: 0x3B92 Offset: 0x3B92 VA: 0x3B92
	private IEnumerator AnimateVertexColors() { }

	// RVA: 0x3B93 Offset: 0x3B93 VA: 0x3B93
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.VertexShakeA$$Awake ----
// C#: void TMPro_Examples_VertexShakeA__Awake (TMPro_Examples_VertexShakeA_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexShakeA__Awake(TMPro_Examples_VertexShakeA_o *__this,MethodInfo *method)

{
  TMP_Text_o *pTVar1;
  
  if (DAT_ram_006648a0 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f3c);
    DAT_ram_006648a0 = '\x01';
  }
  pTVar1 = (TMP_Text_o *)unnamed_function_65370(__this,DAT_ram_00567f3c);
  __this->m_TextComponent = pTVar1;
  return;
}

// ---- TMPro.Examples.VertexShakeA$$OnEnable ----
// C#: void TMPro_Examples_VertexShakeA__OnEnable (TMPro_Examples_VertexShakeA_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexShakeA__OnEnable(TMPro_Examples_VertexShakeA_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_006648a1 == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561d98);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056da2c);
    DAT_ram_006648a1 = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056da2c,0);
  unnamed_function_75545(param1_00,param1,DAT_ram_00561d98);
  return;
}

// ---- TMPro.Examples.VertexShakeA$$OnDisable ----
// C#: void TMPro_Examples_VertexShakeA__OnDisable (TMPro_Examples_VertexShakeA_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexShakeA__OnDisable
               (TMPro_Examples_VertexShakeA_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_006648a2 == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561da0);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056da2c);
    DAT_ram_006648a2 = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056da2c,0);
  unnamed_function_75546(param1_00,param1,DAT_ram_00561da0);
  return;
}

// ---- TMPro.Examples.VertexShakeA$$Start ----
// C#: void TMPro_Examples_VertexShakeA__Start (TMPro_Examples_VertexShakeA_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexShakeA__Start(TMPro_Examples_VertexShakeA_o *__this,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_006648a4 == '\0') {
    unnamed_function_1099(&TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_TypeInfo);
    DAT_ram_006648a4 = '\x01';
  }
  param2 = unnamed_function_95402(TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_TypeInfo);
  *(TMPro_Examples_VertexShakeA_o **)(param2 + 0x10 /* AngleMultiplier */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- TMPro.Examples.VertexShakeA$$ON_TEXT_CHANGED ----
// C#: void TMPro_Examples_VertexShakeA__ON_TEXT_CHANGED (TMPro_Examples_VertexShakeA_o* __this, UnityEngine_Object_o* obj, const MethodInfo* method);

void TMPro_Examples_VertexShakeA__ON_TEXT_CHANGED
               (TMPro_Examples_VertexShakeA_o *__this,UnityEngine_Object_o *obj,MethodInfo *method)

{
  int iVar1;
  TMP_Text_o *param1;
  
  if (DAT_ram_006648a3 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648a3 = '\x01';
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

// ---- TMPro.Examples.VertexShakeA$$AnimateVertexColors ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_VertexShakeA__AnimateVertexColors (TMPro_Examples_VertexShakeA_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_VertexShakeA__AnimateVertexColors
          (TMPro_Examples_VertexShakeA_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_006648a4 == '\0') {
    unnamed_function_1099(&TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_TypeInfo);
    DAT_ram_006648a4 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.VertexShakeA$$.ctor ----
// C#: void TMPro_Examples_VertexShakeA___ctor (TMPro_Examples_VertexShakeA_o* __this, const MethodInfo* method);

void TMPro_Examples_VertexShakeA___ctor(TMPro_Examples_VertexShakeA_o *__this,MethodInfo *method)

{
  __this->ScaleMultiplier = 1.0;
  __this->RotationMultiplier = 1.0;
  __this->AngleMultiplier = 1.0;
  __this->SpeedMultiplier = 1.0;
  unnamed_function_44622(__this,0);
  return;
}

