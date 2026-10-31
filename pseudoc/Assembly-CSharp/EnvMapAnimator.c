// Assembly-CSharp :: EnvMapAnimator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class EnvMapAnimator : MonoBehaviour // TypeDefIndex: 5735
{
	// Fields
	public Vector3 RotationSpeeds; // 0x10
	private TMP_Text m_textMeshPro; // 0x1C
	private Material m_material; // 0x20

	// Methods

	// RVA: 0x3ABC Offset: 0x3ABC VA: 0x3ABC
	private void Awake() { }

	[IteratorStateMachine(typeof(EnvMapAnimator.<Start>d__4))]
	// RVA: 0x3ABD Offset: 0x3ABD VA: 0x3ABD
	private IEnumerator Start() { }

	// RVA: 0x3ABE Offset: 0x3ABE VA: 0x3ABE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- EnvMapAnimator$$Awake ----
// C#: void EnvMapAnimator__Awake (EnvMapAnimator_o* __this, const MethodInfo* method);

void EnvMapAnimator__Awake(EnvMapAnimator_o *__this,MethodInfo *method)

{
  TMP_Text_o *pTVar1;
  Material_o *pMVar2;
  
  if (DAT_ram_00664844 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f3c);
    DAT_ram_00664844 = '\x01';
  }
  pTVar1 = (TMP_Text_o *)unnamed_function_65370(__this,DAT_ram_00567f3c);
  __this->m_textMeshPro = pTVar1;
  pMVar2 = (Material_o *)
           (**(code **)((ulonglong)*(uint *)(pTVar1->_opaque + 0x2d8) * 4))
                     (pTVar1,*(undefined4 *)(pTVar1->_opaque + 0x2dc));
  __this->m_material = pMVar2;
  return;
}

// ---- EnvMapAnimator$$Start ----
// C#: System_Collections_IEnumerator_o* EnvMapAnimator__Start (EnvMapAnimator_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
EnvMapAnimator__Start(EnvMapAnimator_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664845 == '\0') {
    unnamed_function_1099(&EnvMapAnimator__Start_d__4_TypeInfo);
    DAT_ram_00664845 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(EnvMapAnimator__Start_d__4_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- EnvMapAnimator$$.ctor ----
// C#: void EnvMapAnimator___ctor (EnvMapAnimator_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

