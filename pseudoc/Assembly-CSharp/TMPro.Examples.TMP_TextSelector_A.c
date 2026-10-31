// Assembly-CSharp :: TMPro.Examples.TMP_TextSelector_A
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TMP_TextSelector_A : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler // TypeDefIndex: 5780
{
	// Fields
	private TextMeshPro m_TextMeshPro; // 0x10
	private Camera m_Camera; // 0x14
	private bool m_isHoveringObject; // 0x18
	private int m_selectedLink; // 0x1C
	private int m_lastCharIndex; // 0x20
	private int m_lastWordIndex; // 0x24

	// Methods

	// RVA: 0x3B61 Offset: 0x3B61 VA: 0x3B61
	private void Awake() { }

	// RVA: 0x3B62 Offset: 0x3B62 VA: 0x3B62
	private void LateUpdate() { }

	// RVA: 0x3B63 Offset: 0x3B63 VA: 0x3B63 Slot: 4
	public void OnPointerEnter(PointerEventData eventData) { }

	// RVA: 0x3B64 Offset: 0x3B64 VA: 0x3B64 Slot: 5
	public void OnPointerExit(PointerEventData eventData) { }

	// RVA: 0x3B65 Offset: 0x3B65 VA: 0x3B65
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TMP_TextSelector_A$$Awake ----
// C#: void TMPro_Examples_TMP_TextSelector_A__Awake (TMPro_Examples_TMP_TextSelector_A_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_A__Awake
               (TMPro_Examples_TMP_TextSelector_A_o *__this,MethodInfo *method)

{
  undefined4 param1;
  TextMeshPro_o *pTVar1;
  Camera_o *pCVar2;
  int iVar3;
  
  if (DAT_ram_0066488c == '\0') {
    unnamed_function_1099(&DAT_ram_00569b24);
    DAT_ram_0066488c = '\x01';
  }
  param1 = unnamed_function_44644(__this,0);
  pTVar1 = (TextMeshPro_o *)unnamed_function_73836(param1,DAT_ram_00569b24);
  __this->m_TextMeshPro = pTVar1;
  pCVar2 = (Camera_o *)unnamed_function_52349(0);
  __this->m_Camera = pCVar2;
  iVar3 = __this->m_TextMeshPro->_opaque;
  (**(code **)((ulonglong)*(uint *)((int)&DAT_ram_00000410 + iVar3) * 4))
            (__this->m_TextMeshPro,0,0,*(undefined4 *)((int)&DAT_ram_00000414 + iVar3));
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_A$$LateUpdate ----
// C#: void TMPro_Examples_TMP_TextSelector_A__LateUpdate (TMPro_Examples_TMP_TextSelector_A_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_A__LateUpdate
               (TMPro_Examples_TMP_TextSelector_A_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param3;
  int iVar2;
  uint uVar3;
  uint uVar4;
  TextMeshPro_o *pTVar5;
  Camera_o *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_0066488d == '\0') {
    unnamed_function_1099(&UnityEngine_RectTransformUtility_TypeInfo);
    unnamed_function_1099(&TMPro_TMP_TextUtilities_TypeInfo);
    unnamed_function_1099(&StringLiteral_11386 /* "id_01" */);
    unnamed_function_1099(&StringLiteral_11387 /* "id_02" */);
    DAT_ram_0066488d = '\x01';
  }
  local_8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  __this->m_isHoveringObject = false;
  uVar1 = unnamed_function_23147(__this->m_TextMeshPro,0);
  unnamed_function_12103(&local_50,0);
  param3 = unnamed_function_52349(0);
  if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
  }
  local_80 = local_48;
  local_88 = local_50;
  iVar2 = unnamed_function_24186(uVar1,&local_88,param3,0);
  if (iVar2 == 0) {
    if (__this->m_isHoveringObject == false) {
      return;
    }
  }
  else {
    __this->m_isHoveringObject = true;
  }
  pTVar5 = __this->m_TextMeshPro;
  unnamed_function_12103(&local_50,0);
  uVar1 = unnamed_function_52349(0);
  if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
  }
  local_90 = local_48;
  local_98 = local_50;
  iVar2 = unnamed_function_24187(pTVar5,&local_98,uVar1,1,0);
  if (((iVar2 != -1) && (iVar2 != __this->m_lastCharIndex)) &&
     ((iVar7 = unnamed_function_12090(0x130,0), iVar7 != 0 ||
      (iVar7 = unnamed_function_12090(0x12f,0), iVar7 != 0)))) {
    __this->m_lastCharIndex = iVar2;
    iVar2 = *(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x2c) + iVar2 * 0x164;
    iVar8 = *(int *)(iVar2 + 0x34);
    iVar7 = *(int *)(iVar2 + 0x48);
    uVar3 = unnamed_function_44584(0,0xff,0);
    uVar4 = unnamed_function_44584(0,0xff,0);
    iVar2 = unnamed_function_44584(0,0xff,0);
    iVar8 = iVar8 * 0x28;
    iVar9 = *(int *)(iVar8 + *(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + 0x2c);
    iVar7 = iVar9 + iVar7 * 4;
    uVar3 = uVar3 & 0xff | (uVar4 & 0xff) << 8 | iVar2 << 0x10 | 0xff000000;
    *(uint *)(iVar7 + 0x14) = uVar3;
    *(uint *)(iVar7 + 0x10) = uVar3;
    *(uint *)(iVar7 + 0x18) = uVar3;
    *(uint *)(iVar7 + 0x1c) = uVar3;
    unnamed_function_53006
              (*(undefined4 *)(*(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + iVar8 + 0x10),
               iVar9,0);
  }
  pTVar5 = __this->m_TextMeshPro;
  unnamed_function_12103(&local_50,0);
  pCVar6 = __this->m_Camera;
  if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
  }
  local_a0 = local_48;
  local_a8 = local_50;
  iVar2 = unnamed_function_24191(pTVar5,&local_a8,pCVar6,0);
  if (iVar2 == -1) {
    if (__this->m_selectedLink != -1) {
      __this->m_selectedLink = -1;
    }
  }
  else if (iVar2 != __this->m_selectedLink) {
    __this->m_selectedLink = iVar2;
    iVar2 = *(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x34) + iVar2 * 0x1c;
    local_20 = *(undefined8 *)(iVar2 + 0x10);
    local_18 = *(undefined8 *)(iVar2 + 0x18);
    local_10 = *(undefined8 *)(iVar2 + 0x20);
    local_8 = *(undefined4 *)(iVar2 + 0x28);
    uVar1 = unnamed_function_23147(__this->m_TextMeshPro,0);
    unnamed_function_12103(&local_50,0);
    local_b0 = local_50;
    pCVar6 = __this->m_Camera;
    if (*(int *)(UnityEngine_RectTransformUtility_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_RectTransformUtility_TypeInfo);
    }
    local_58 = local_b0;
    unnamed_function_16245(uVar1,&local_b0,pCVar6,&local_30,0);
    uVar1 = unnamed_function_23500(&local_20,0);
    iVar2 = unnamed_function_81494(uVar1,StringLiteral_11386 /* "id_01" */,0);
    if (iVar2 == 0) {
      unnamed_function_81494(uVar1,StringLiteral_11387 /* "id_02" */,0);
    }
  }
  pTVar5 = __this->m_TextMeshPro;
  unnamed_function_12103(&local_50,0);
  uVar1 = unnamed_function_52349(0);
  if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
  }
  local_b8 = local_48;
  local_c0 = local_50;
  iVar2 = unnamed_function_24188(pTVar5,&local_c0,uVar1,0);
  if ((iVar2 != -1) && (iVar2 != __this->m_lastWordIndex)) {
    __this->m_lastWordIndex = iVar2;
    iVar2 = *(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x30) + iVar2 * 0x10;
    iVar7 = *(int *)(iVar2 + 0x1c);
    iVar8 = *(int *)(iVar2 + 0x14);
    uVar1 = unnamed_function_23335(__this->m_TextMeshPro,0);
    iVar2 = *(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x2c) + iVar8 * 0x164;
    local_c8 = *(undefined4 *)(iVar2 + 0x100);
    local_d0 = *(undefined8 *)(iVar2 + 0xf8);
    local_50 = local_d0;
    local_48 = local_c8;
    unnamed_function_45004(&local_68,uVar1,&local_d0,0);
    local_38 = local_60;
    local_40 = local_68;
    uVar1 = unnamed_function_52349(0);
    local_d8 = local_38;
    local_e0 = local_40;
    unnamed_function_52339(&local_78,uVar1,&local_e0,0);
    local_38 = local_70;
    local_40 = local_78;
    iVar9 = *(int *)(*(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + 0x2c);
    uVar3 = unnamed_function_44584(0,0xff,0);
    uVar4 = unnamed_function_44584(0,0xff,0);
    iVar2 = unnamed_function_44584(0,0xff,0);
    if (0 < iVar7) {
      uVar3 = uVar3 & 0xff | (uVar4 & 0xff) << 8 | iVar2 << 0x10 | 0xff000000;
      iVar2 = 0;
      do {
        iVar10 = iVar9 + *(int *)(*(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x2c) +
                                  (iVar2 + iVar8) * 0x164 + 0x48) * 4;
        *(uint *)(iVar10 + 0x14) = uVar3;
        *(uint *)(iVar10 + 0x10) = uVar3;
        *(uint *)(iVar10 + 0x18) = uVar3;
        *(uint *)(iVar10 + 0x1c) = uVar3;
        iVar2 = iVar2 + 1;
      } while (iVar2 != iVar7);
    }
    iVar2 = __this->m_TextMeshPro->_opaque;
    uVar1 = (**(code **)((ulonglong)*(uint *)(iVar2 + 0x328) * 4))
                      (__this->m_TextMeshPro,*(undefined4 *)(iVar2 + 0x32c));
    unnamed_function_53006(uVar1,iVar9,0);
  }
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_A$$OnPointerEnter ----
// C#: void TMPro_Examples_TMP_TextSelector_A__OnPointerEnter (TMPro_Examples_TMP_TextSelector_A_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_A__OnPointerEnter
               (TMPro_Examples_TMP_TextSelector_A_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (DAT_ram_0066488e == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&StringLiteral_5861 /* "OnPointerEnter()" */);
    DAT_ram_0066488e = '\x01';
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(StringLiteral_5861 /* "OnPointerEnter()" */,0);
  __this->m_isHoveringObject = true;
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_A$$OnPointerExit ----
// C#: void TMPro_Examples_TMP_TextSelector_A__OnPointerExit (TMPro_Examples_TMP_TextSelector_A_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_A__OnPointerExit
               (TMPro_Examples_TMP_TextSelector_A_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (DAT_ram_0066488f == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&StringLiteral_5862 /* "OnPointerExit()" */);
    DAT_ram_0066488f = '\x01';
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(StringLiteral_5862 /* "OnPointerExit()" */,0);
  __this->m_isHoveringObject = false;
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_A$$.ctor ----
// C#: void TMPro_Examples_TMP_TextSelector_A___ctor (TMPro_Examples_TMP_TextSelector_A_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_A___ctor
               (TMPro_Examples_TMP_TextSelector_A_o *__this,MethodInfo *method)

{
  __this->m_lastWordIndex = -1;
  __this->m_selectedLink = -1;
  __this->m_lastCharIndex = -1;
  unnamed_function_44622(__this,0);
  return;
}

