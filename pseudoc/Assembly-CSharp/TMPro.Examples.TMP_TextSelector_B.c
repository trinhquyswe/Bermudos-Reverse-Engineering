// Assembly-CSharp :: TMPro.Examples.TMP_TextSelector_B
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TMP_TextSelector_B : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerClickHandler, IPointerUpHandler // TypeDefIndex: 5781
{
	// Fields
	public RectTransform TextPopup_Prefab_01; // 0x10
	private RectTransform m_TextPopup_RectTransform; // 0x14
	private TextMeshProUGUI m_TextPopup_TMPComponent; // 0x18
	private const string k_LinkText = "You have selected link <#ffff00>";
	private const string k_WordText = "Word Index: <#ffff00>";
	private TextMeshProUGUI m_TextMeshPro; // 0x1C
	private Canvas m_Canvas; // 0x20
	private Camera m_Camera; // 0x24
	private bool isHoveringObject; // 0x28
	private int m_selectedWord; // 0x2C
	private int m_selectedLink; // 0x30
	private int m_lastIndex; // 0x34
	private Matrix4x4 m_matrix; // 0x38
	private TMP_MeshInfo[] m_cachedMeshInfoVertexData; // 0x78

	// Methods

	// RVA: 0x3B66 Offset: 0x3B66 VA: 0x3B66
	private void Awake() { }

	// RVA: 0x3B67 Offset: 0x3B67 VA: 0x3B67
	private void OnEnable() { }

	// RVA: 0x3B68 Offset: 0x3B68 VA: 0x3B68
	private void OnDisable() { }

	// RVA: 0x3B69 Offset: 0x3B69 VA: 0x3B69
	private void ON_TEXT_CHANGED(Object obj) { }

	// RVA: 0x3B6A Offset: 0x3B6A VA: 0x3B6A
	private void LateUpdate() { }

	// RVA: 0x3B6B Offset: 0x3B6B VA: 0x3B6B Slot: 4
	public void OnPointerEnter(PointerEventData eventData) { }

	// RVA: 0x3B6C Offset: 0x3B6C VA: 0x3B6C Slot: 5
	public void OnPointerExit(PointerEventData eventData) { }

	// RVA: 0x3B6D Offset: 0x3B6D VA: 0x3B6D Slot: 6
	public void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x3B6E Offset: 0x3B6E VA: 0x3B6E Slot: 7
	public void OnPointerUp(PointerEventData eventData) { }

	// RVA: 0x3B6F Offset: 0x3B6F VA: 0x3B6F
	private void RestoreCachedVertexAttributes(int index) { }

	// RVA: 0x3B70 Offset: 0x3B70 VA: 0x3B70
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TMP_TextSelector_B$$Awake ----
// C#: void TMPro_Examples_TMP_TextSelector_B__Awake (TMPro_Examples_TMP_TextSelector_B_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_B__Awake
               (TMPro_Examples_TMP_TextSelector_B_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  TextMeshProUGUI_o *pTVar2;
  Canvas_o *param1;
  int iVar3;
  RectTransform_o *pRVar4;
  Camera_o *pCVar5;
  
  if (DAT_ram_00664890 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f78);
    unnamed_function_1099(&DAT_ram_00569b48);
    unnamed_function_1099(&DAT_ram_00569b28);
    unnamed_function_1099(&DAT_ram_0056b524);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664890 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this,0);
  pTVar2 = (TextMeshProUGUI_o *)unnamed_function_73836(uVar1,DAT_ram_00569b28);
  __this->m_TextMeshPro = pTVar2;
  uVar1 = unnamed_function_44644(__this,0);
  param1 = (Canvas_o *)unnamed_function_73853(uVar1,DAT_ram_00569b48);
  __this->m_Canvas = param1;
  iVar3 = unnamed_function_16257(param1,0);
  if (iVar3 == 0) {
    pCVar5 = (Camera_o *)0x0;
  }
  else {
    pCVar5 = (Camera_o *)unnamed_function_16288(__this->m_Canvas,0);
  }
  __this->m_Camera = pCVar5;
  pRVar4 = __this->TextPopup_Prefab_01;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  pRVar4 = (RectTransform_o *)unnamed_function_51907(pRVar4,DAT_ram_0056b524);
  __this->m_TextPopup_RectTransform = pRVar4;
  uVar1 = unnamed_function_44643(__this->m_Canvas,0);
  unnamed_function_44985(pRVar4,uVar1,0,0);
  pTVar2 = (TextMeshProUGUI_o *)
           unnamed_function_65372(__this->m_TextPopup_RectTransform,DAT_ram_00567f78);
  __this->m_TextPopup_TMPComponent = pTVar2;
  uVar1 = unnamed_function_44644(__this->m_TextPopup_RectTransform,0);
  unnamed_function_44686(uVar1,0,0);
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_B$$OnEnable ----
// C#: void TMPro_Examples_TMP_TextSelector_B__OnEnable (TMPro_Examples_TMP_TextSelector_B_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_B__OnEnable
               (TMPro_Examples_TMP_TextSelector_B_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664891 == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561d98);
    unnamed_function_1099(&DAT_ram_0056ce78);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    DAT_ram_00664891 = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056ce78,0);
  unnamed_function_75545(param1_00,param1,DAT_ram_00561d98);
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_B$$OnDisable ----
// C#: void TMPro_Examples_TMP_TextSelector_B__OnDisable (TMPro_Examples_TMP_TextSelector_B_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_B__OnDisable
               (TMPro_Examples_TMP_TextSelector_B_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664892 == '\0') {
    unnamed_function_1099(&System_Action_Object__TypeInfo);
    unnamed_function_1099(&DAT_ram_00561da0);
    unnamed_function_1099(&DAT_ram_0056ce78);
    unnamed_function_1099(&TMPro_TMPro_EventManager_TypeInfo);
    DAT_ram_00664892 = '\x01';
  }
  if (*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMPro_EventManager_TypeInfo);
  }
  param1_00 = *(undefined4 *)(*(int *)(TMPro_TMPro_EventManager_TypeInfo + 0x5c) + 0x2c);
  param1 = unnamed_function_95402(System_Action_Object__TypeInfo);
  unnamed_function_60074(param1,__this,DAT_ram_0056ce78,0);
  unnamed_function_75546(param1_00,param1,DAT_ram_00561da0);
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_B$$ON_TEXT_CHANGED ----
// C#: void TMPro_Examples_TMP_TextSelector_B__ON_TEXT_CHANGED (TMPro_Examples_TMP_TextSelector_B_o* __this, UnityEngine_Object_o* obj, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_B__ON_TEXT_CHANGED
               (TMPro_Examples_TMP_TextSelector_B_o *__this,UnityEngine_Object_o *obj,
               MethodInfo *method)

{
  int iVar1;
  Mesh_o *pMVar2;
  TextMeshProUGUI_o *param2;
  
  if (DAT_ram_00664893 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664893 = '\x01';
  }
  param2 = __this->m_TextMeshPro;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(obj,param2,0);
  if (iVar1 != 0) {
    pMVar2 = (Mesh_o *)unnamed_function_24168(__this->m_TextMeshPro[0xa8]._opaque,0);
    (__this->m_cachedMeshInfoVertexData).mesh = pMVar2;
  }
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_B$$LateUpdate ----
// C#: void TMPro_Examples_TMP_TextSelector_B__LateUpdate (TMPro_Examples_TMP_TextSelector_B_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_B__LateUpdate
               (TMPro_Examples_TMP_TextSelector_B_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  TextMeshProUGUI_o *pTVar3;
  Camera_o *pCVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  RectTransform_o *param1;
  int iVar10;
  int iVar11;
  UnityEngine_Matrix4x4_o *param2;
  float *pfVar12;
  float fVar13;
  float *pfVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  undefined1 local_230 [32];
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0 [8];
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_170 [8];
  undefined4 local_168;
  undefined4 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  float4 local_c8;
  float4 local_c4;
  float4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  MethodInfo local_58;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664894 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&UnityEngine_RectTransformUtility_TypeInfo);
    unnamed_function_1099(&TMPro_TMP_MeshInfo_TypeInfo);
    unnamed_function_1099(&TMPro_TMP_TextUtilities_TypeInfo);
    unnamed_function_1099(&StringLiteral_8956 /* "You have selected link <#ffff00> ID 02" */);
    unnamed_function_1099(&StringLiteral_11386 /* "id_01" */);
    unnamed_function_1099(&StringLiteral_8955 /* "You have selected link <#ffff00> ID 01" */);
    unnamed_function_1099(&StringLiteral_11387 /* "id_02" */);
    DAT_ram_00664894 = '\x01';
  }
  local_8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_58._24_8_ = 0;
  local_58._16_8_ = 0;
  local_58._8_4_ = 0;
  local_58._opaque0 = 0;
  local_58._opaque1 = 0;
  if (__this->isHoveringObject == false) {
    if (__this->m_lastIndex == -1) {
      return;
    }
    TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes
              (__this,__this->m_lastIndex,(MethodInfo *)local_230);
    __this->m_lastIndex = -1;
    return;
  }
  pTVar3 = __this->m_TextMeshPro;
  unnamed_function_12103(&local_b8,0);
  pCVar4 = __this->m_Camera;
  if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
  }
  local_168 = local_b0;
  iVar1 = unnamed_function_24187(pTVar3,local_170,pCVar4,1,0);
  iVar5 = __this->m_lastIndex;
  if (iVar1 == -1) {
    TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes
              (__this,iVar5,(MethodInfo *)local_230);
    __this->m_lastIndex = -1;
  }
  else if (iVar1 != iVar5) {
    TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes
              (__this,iVar5,(MethodInfo *)local_230);
    __this->m_lastIndex = -1;
    iVar5 = unnamed_function_12090(0x130,0);
    if ((iVar5 != 0) || (iVar5 = unnamed_function_12090(0x12f,0), iVar5 != 0)) {
      __this->m_lastIndex = iVar1;
      iVar5 = __this->m_TextMeshPro[0xa8]._opaque;
      iVar11 = *(int *)(iVar5 + 0x2c) + iVar1 * 0x164;
      iVar10 = *(int *)(iVar11 + 0x34);
      iVar1 = *(int *)(*(int *)(iVar5 + 0x40) + iVar10 * 0x28 + 0x18);
      iVar11 = *(int *)(iVar11 + 0x48);
      iVar5 = iVar1 + iVar11 * 0xc;
      pfVar6 = (float *)(iVar5 + 0x20);
      pfVar12 = (float *)(iVar5 + 0x14);
      pfVar18 = (float *)(iVar5 + 0x2c);
      fVar13 = (*pfVar12 + *pfVar18) * 0.5;
      *pfVar6 = *pfVar6 - fVar13;
      pfVar7 = (float *)(iVar5 + 0x1c);
      pfVar14 = (float *)(iVar5 + 0x10);
      pfVar19 = (float *)(iVar5 + 0x28);
      fVar15 = (*pfVar14 + *pfVar19) * 0.5;
      *pfVar7 = *pfVar7 - fVar15;
      *pfVar12 = *pfVar12 - fVar13;
      *pfVar18 = *pfVar18 - fVar13;
      *pfVar19 = *pfVar19 - fVar15;
      *pfVar14 = *pfVar14 - fVar15;
      pfVar8 = (float *)(iVar5 + 0x38);
      *pfVar8 = *pfVar8 - fVar13;
      pfVar9 = (float *)(iVar5 + 0x34);
      *pfVar9 = *pfVar9 - fVar15;
      if (DAT_ram_00664829 == '\0') {
        unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
        DAT_ram_00664829 = '\x01';
      }
      local_60 = *(undefined4 *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
      local_68 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
      if (DAT_ram_006603e8 == '\0') {
        unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
        DAT_ram_006603e8 = '\x01';
      }
      local_70 = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
      local_78 = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
      if (DAT_ram_00662a53 == '\0') {
        unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
        DAT_ram_00662a53 = '\x01';
      }
      iVar17 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
      local_198 = *(float *)(iVar17 + 0x14) * 1.5;
      local_178 = local_60;
      local_188 = local_70;
      local_c4 = (float4)(*(float *)(iVar17 + 0x10) * 1.5);
      local_c8 = (float4)(*(float *)(iVar17 + 0xc) * 1.5);
      local_180 = local_68;
      local_190 = local_78;
      local_1a0 = CONCAT44(local_c4,local_c8);
      local_c0 = (float4)local_198;
      unnamed_function_8526(&local_b8,&local_180,&local_190,&local_1a0,0);
      (__this->m_matrix).m23 = (float)(undefined4)local_80;
      (__this->m_matrix).m33 = (float)local_80._4_4_;
      (__this->m_matrix).m03 = (float)(undefined4)local_88;
      (__this->m_matrix).m13 = (float)local_88._4_4_;
      (__this->m_matrix).m22 = (float)(undefined4)local_90;
      (__this->m_matrix).m32 = (float)local_90._4_4_;
      (__this->m_matrix).m02 = (float)(undefined4)local_98;
      (__this->m_matrix).m12 = (float)local_98._4_4_;
      (__this->m_matrix).m21 = (float)(undefined4)local_a0;
      (__this->m_matrix).m31 = (float)local_a0._4_4_;
      (__this->m_matrix).m01 = (float)(undefined4)local_a8;
      (__this->m_matrix).m11 = (float)local_a8._4_4_;
      (__this->m_matrix).m20 = (float)local_b0;
      (__this->m_matrix).m30 = (float)uStack_ac;
      (__this->m_matrix).m00 = (float)local_b8;
      (__this->m_matrix).m10 = (float)uStack_b4;
      local_1a8 = *(undefined4 *)(iVar5 + 0x18);
      local_1b0 = *(undefined8 *)pfVar14;
      param2 = &__this->m_matrix;
      local_d8 = local_1b0;
      local_d0 = local_1a8;
      unnamed_function_8573(&local_e8,param2,&local_1b0,0);
      *(undefined4 *)(iVar5 + 0x18) = local_e0;
      *(undefined8 *)pfVar14 = local_e8;
      local_1b8 = *(undefined4 *)(iVar5 + 0x24);
      local_1c0 = *(undefined8 *)pfVar7;
      local_f8 = local_1c0;
      local_f0 = local_1b8;
      unnamed_function_8573(&local_108,param2,&local_1c0,0);
      *(undefined4 *)(iVar5 + 0x24) = local_100;
      *(undefined8 *)pfVar7 = local_108;
      local_1c8 = *(undefined4 *)(iVar5 + 0x30);
      local_1d0 = *(undefined8 *)pfVar19;
      local_118 = local_1d0;
      local_110 = local_1c8;
      unnamed_function_8573(&local_128,param2,&local_1d0,0);
      *(undefined4 *)(iVar5 + 0x30) = local_120;
      *(undefined8 *)pfVar19 = local_128;
      local_1d8 = *(undefined4 *)(iVar5 + 0x3c);
      local_1e0 = *(undefined8 *)pfVar9;
      local_138 = local_1e0;
      local_130 = local_1d8;
      unnamed_function_8573(&local_148,param2,&local_1e0,0);
      *(undefined4 *)(iVar5 + 0x3c) = local_140;
      *(undefined8 *)pfVar9 = local_148;
      *pfVar14 = fVar15 + *pfVar14;
      *pfVar12 = fVar13 + *pfVar12;
      *(float *)(iVar5 + 0x18) = *(float *)(iVar5 + 0x18) + 0.0;
      *pfVar7 = fVar15 + *pfVar7;
      *pfVar6 = fVar13 + *pfVar6;
      *(float *)(iVar5 + 0x24) = *(float *)(iVar5 + 0x24) + 0.0;
      *pfVar19 = fVar15 + *pfVar19;
      *pfVar18 = fVar13 + *pfVar18;
      *(float *)(iVar5 + 0x30) = *(float *)(iVar5 + 0x30) + 0.0;
      *pfVar9 = fVar15 + *pfVar9;
      *pfVar8 = fVar13 + *pfVar8;
      *(float *)(iVar5 + 0x3c) = *(float *)(iVar5 + 0x3c) + 0.0;
      iVar10 = iVar10 * 0x28;
      iVar5 = *(int *)(iVar10 + *(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + 0x2c) + 0x10;
      *(undefined4 *)(iVar5 + iVar11 * 4) = 0xffc0ffff;
      *(undefined4 *)(iVar5 + (iVar11 + 1) * 4) = 0xffc0ffff;
      *(undefined4 *)(iVar5 + (iVar11 + 2) * 4) = 0xffc0ffff;
      *(undefined4 *)(iVar5 + (iVar11 + 3) * 4) = 0xffc0ffff;
      iVar10 = *(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + iVar10;
      local_28 = *(undefined8 *)(iVar10 + 0x10);
      local_20 = *(undefined8 *)(iVar10 + 0x18);
      local_18 = *(undefined8 *)(iVar10 + 0x20);
      local_10 = *(undefined8 *)(iVar10 + 0x28);
      local_8 = *(undefined8 *)(iVar10 + 0x30);
      iVar1 = *(int *)(iVar1 + 0xc);
      if (*(int *)(TMPro_TMP_MeshInfo_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(TMPro_TMP_MeshInfo_TypeInfo);
      }
      unnamed_function_23981(&local_28,iVar11,iVar1 + -4,0);
      iVar1 = __this->m_TextMeshPro->_opaque;
      (**(code **)((ulonglong)*(uint *)(&DAT_ram_00000420 + iVar1) * 4))
                (__this->m_TextMeshPro,0xff,*(undefined4 *)(&DAT_ram_00000424 + iVar1));
    }
  }
  pTVar3 = __this->m_TextMeshPro;
  unnamed_function_12103(&local_b8,0);
  pCVar4 = __this->m_Camera;
  if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
  }
  local_1e8 = local_b0;
  iVar1 = unnamed_function_24188(pTVar3,local_1f0,pCVar4,0);
  param1 = __this->m_TextPopup_RectTransform;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar5 = unnamed_function_44679(param1,0,0);
  if ((iVar5 != 0) && (iVar5 = __this->m_selectedWord, iVar5 != -1)) {
    if (iVar5 == iVar1 && iVar1 != -1) goto code_r0x81a2ccbf;
    pTVar3 = __this->m_TextMeshPro;
    iVar10 = pTVar3[0xa8]._opaque;
    iVar5 = *(int *)(iVar10 + 0x30) + iVar5 * 0x10;
    iVar11 = *(int *)(iVar5 + 0x1c);
    if (0 < iVar11) {
      iVar17 = *(int *)(iVar5 + 0x14);
      iVar5 = 0;
      while( true ) {
        iVar16 = *(int *)(iVar10 + 0x2c) + (iVar5 + iVar17) * 0x164;
        iVar10 = *(int *)(*(int *)(iVar10 + 0x40) + *(int *)(iVar16 + 0x34) * 0x28 + 0x2c) +
                 *(int *)(iVar16 + 0x48) * 4;
        local_1f4 = *(undefined4 *)(iVar10 + 0x10);
        local_150 = local_1f4;
        unnamed_function_23488(&local_b8,&local_1f4,1.33333,0);
        *(undefined4 *)(iVar10 + 0x14) = local_b8;
        *(undefined4 *)(iVar10 + 0x10) = local_b8;
        *(undefined4 *)(iVar10 + 0x18) = local_b8;
        *(undefined4 *)(iVar10 + 0x1c) = local_b8;
        iVar5 = iVar5 + 1;
        if (iVar11 == iVar5) break;
        iVar10 = __this->m_TextMeshPro[0xa8]._opaque;
      }
      pTVar3 = __this->m_TextMeshPro;
    }
    (**(code **)((ulonglong)*(uint *)(&DAT_ram_00000420 + pTVar3->_opaque) * 4))
              (pTVar3,0xff,*(undefined4 *)(&DAT_ram_00000424 + pTVar3->_opaque));
    __this->m_selectedWord = -1;
  }
  if ((((iVar1 != -1) && (iVar1 != __this->m_selectedWord)) &&
      (iVar5 = unnamed_function_12090(0x130,0), iVar5 == 0)) &&
     (iVar5 = unnamed_function_12090(0x12f,0), iVar5 == 0)) {
    __this->m_selectedWord = iVar1;
    pTVar3 = __this->m_TextMeshPro;
    iVar5 = pTVar3[0xa8]._opaque;
    iVar1 = *(int *)(iVar5 + 0x30) + iVar1 * 0x10;
    iVar10 = *(int *)(iVar1 + 0x1c);
    if (0 < iVar10) {
      iVar11 = *(int *)(iVar1 + 0x14);
      iVar1 = 0;
      while( true ) {
        iVar17 = *(int *)(iVar5 + 0x2c) + (iVar1 + iVar11) * 0x164;
        iVar5 = *(int *)(*(int *)(iVar5 + 0x40) + *(int *)(iVar17 + 0x34) * 0x28 + 0x2c) +
                *(int *)(iVar17 + 0x48) * 4;
        local_1f8 = *(undefined4 *)(iVar5 + 0x10);
        local_158 = local_1f8;
        unnamed_function_23488(&local_b8,&local_1f8,0.75,0);
        *(undefined4 *)(iVar5 + 0x14) = local_b8;
        *(undefined4 *)(iVar5 + 0x10) = local_b8;
        *(undefined4 *)(iVar5 + 0x18) = local_b8;
        *(undefined4 *)(iVar5 + 0x1c) = local_b8;
        iVar1 = iVar1 + 1;
        if (iVar10 == iVar1) break;
        iVar5 = __this->m_TextMeshPro[0xa8]._opaque;
      }
      pTVar3 = __this->m_TextMeshPro;
    }
    (**(code **)((ulonglong)*(uint *)(&DAT_ram_00000420 + pTVar3->_opaque) * 4))
              (pTVar3,0xff,*(undefined4 *)(&DAT_ram_00000424 + pTVar3->_opaque));
  }
code_r0x81a2ccbf:
  pTVar3 = __this->m_TextMeshPro;
  unnamed_function_12103(&local_b8,0);
  pCVar4 = __this->m_Camera;
  if (*(int *)(TMPro_TMP_TextUtilities_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(TMPro_TMP_TextUtilities_TypeInfo);
  }
  local_200 = local_b0;
  iVar1 = unnamed_function_24191(pTVar3,local_208,pCVar4,0);
  if (iVar1 == -1) {
    if (__this->m_selectedLink == -1) {
      return;
    }
  }
  else if (iVar1 == __this->m_selectedLink) {
    return;
  }
  uVar2 = unnamed_function_44644(__this->m_TextPopup_RectTransform,0);
  unnamed_function_44686(uVar2,0,0);
  __this->m_selectedLink = -1;
  if (iVar1 != -1) {
    __this->m_selectedLink = iVar1;
    iVar1 = *(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x34) + iVar1 * 0x1c;
    local_58._16_8_ = *(undefined8 *)(iVar1 + 0x10);
    local_58._24_8_ = *(undefined8 *)(iVar1 + 0x18);
    local_38 = *(undefined8 *)(iVar1 + 0x20);
    local_30 = *(undefined4 *)(iVar1 + 0x28);
    uVar2 = unnamed_function_23147(__this->m_TextMeshPro,0);
    unnamed_function_12103(&local_b8,0);
    pCVar4 = __this->m_Camera;
    if (*(int *)(UnityEngine_RectTransformUtility_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_RectTransformUtility_TypeInfo);
    }
    unnamed_function_16245(uVar2,local_210,pCVar4,&local_58,0);
    uVar2 = unnamed_function_23500(&local_58.field_0x10,0);
    iVar1 = unnamed_function_81494(uVar2,StringLiteral_11386 /* "id_01" */,0);
    if (iVar1 == 0) {
      iVar1 = unnamed_function_81494(uVar2,StringLiteral_11387 /* "id_02" */,0);
      if (iVar1 != 0) {
        local_230._24_4_ = local_58._8_4_;
        local_230._16_4_ = local_58._opaque0;
        local_230._20_4_ = local_58._opaque1;
        unnamed_function_44962(__this->m_TextPopup_RectTransform,local_230 + 0x10,0);
        uVar2 = unnamed_function_44644(__this->m_TextPopup_RectTransform,0);
        unnamed_function_44686(uVar2,1,0);
        iVar1 = __this->m_TextPopup_TMPComponent->_opaque;
        (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
                  (__this->m_TextPopup_TMPComponent,StringLiteral_8956 /* "You have selected link <#ffff00> ID 02" */,
                   *(undefined4 *)(iVar1 + 0x2d4));
      }
    }
    else {
      local_230._8_4_ = local_58._8_4_;
      local_230._0_4_ = local_58._opaque0;
      local_230._4_4_ = local_58._opaque1;
      unnamed_function_44962(__this->m_TextPopup_RectTransform,(MethodInfo *)local_230,0);
      uVar2 = unnamed_function_44644(__this->m_TextPopup_RectTransform,0);
      unnamed_function_44686(uVar2,1,0);
      iVar1 = __this->m_TextPopup_TMPComponent->_opaque;
      (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
                (__this->m_TextPopup_TMPComponent,StringLiteral_8955 /* "You have selected link <#ffff00> ID 01" */,*(undefined4 *)(iVar1 + 0x2d4))
      ;
    }
  }
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_B$$OnPointerEnter ----
// C#: void TMPro_Examples_TMP_TextSelector_B__OnPointerEnter (TMPro_Examples_TMP_TextSelector_B_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_B__OnPointerEnter
               (TMPro_Examples_TMP_TextSelector_B_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  __this->isHoveringObject = true;
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_B$$OnPointerExit ----
// C#: void TMPro_Examples_TMP_TextSelector_B__OnPointerExit (TMPro_Examples_TMP_TextSelector_B_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_B__OnPointerExit
               (TMPro_Examples_TMP_TextSelector_B_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  __this->isHoveringObject = false;
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_B$$OnPointerClick ----
// C#: void TMPro_Examples_TMP_TextSelector_B__OnPointerClick (TMPro_Examples_TMP_TextSelector_B_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__OnPointerEnter
               (TMPro_TMP_TextEventHandler_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_B$$OnPointerUp ----
// C#: void TMPro_Examples_TMP_TextSelector_B__OnPointerUp (TMPro_Examples_TMP_TextSelector_B_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void TMPro_TMP_TextEventHandler__OnPointerEnter
               (TMPro_TMP_TextEventHandler_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_B$$RestoreCachedVertexAttributes ----
// C#: void TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes (TMPro_Examples_TMP_TextSelector_B_o* __this, int32_t index, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes
               (TMPro_Examples_TMP_TextSelector_B_o *__this,int index,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if ((index != -1) &&
     (iVar1 = __this->m_TextMeshPro[0xa8]._opaque, index <= *(int *)(iVar1 + 0xc) + -1)) {
    iVar2 = *(int *)(iVar1 + 0x2c) + index * 0x164;
    iVar3 = *(int *)(iVar2 + 0x34);
    iVar4 = iVar3 * 0x28;
    iVar5 = (__this->m_cachedMeshInfoVertexData).mesh[iVar3 * 10 + 6]._opaque;
    iVar6 = iVar5 + 0x10;
    iVar10 = *(int *)(iVar2 + 0x48);
    iVar2 = iVar10 * 0xc;
    uVar9 = *(undefined8 *)(iVar6 + iVar2);
    iVar1 = *(int *)(*(int *)(iVar1 + 0x40) + iVar4 + 0x18) + 0x10;
    *(undefined4 *)((undefined8 *)(iVar1 + iVar2) + 1) =
         *(undefined4 *)((undefined8 *)(iVar6 + iVar2) + 1);
    *(undefined8 *)(iVar1 + iVar2) = uVar9;
    puVar7 = (undefined8 *)(iVar6 + iVar2 + 0xc);
    uVar9 = *puVar7;
    puVar8 = (undefined8 *)(iVar2 + 0xc + iVar1);
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
    *puVar8 = uVar9;
    puVar7 = (undefined8 *)(iVar6 + iVar2 + 0x18);
    uVar9 = *puVar7;
    puVar8 = (undefined8 *)(iVar2 + 0x18 + iVar1);
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
    *puVar8 = uVar9;
    puVar7 = (undefined8 *)(iVar6 + iVar2 + 0x24);
    uVar9 = *puVar7;
    puVar8 = (undefined8 *)(iVar2 + 0x24 + iVar1);
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
    *puVar8 = uVar9;
    iVar2 = *(int *)(*(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x2c) + 0x10;
    iVar11 = (__this->m_cachedMeshInfoVertexData).mesh[iVar3 * 10 + 0xb]._opaque + 0x10;
    *(undefined4 *)(iVar2 + iVar10 * 4) = *(undefined4 *)(iVar11 + iVar10 * 4);
    iVar12 = (iVar10 + 1) * 4;
    *(undefined4 *)(iVar2 + iVar12) = *(undefined4 *)(iVar11 + iVar12);
    iVar12 = (iVar10 + 2) * 4;
    *(undefined4 *)(iVar2 + iVar12) = *(undefined4 *)(iVar11 + iVar12);
    iVar12 = (iVar10 + 3) * 4;
    *(undefined4 *)(iVar2 + iVar12) = *(undefined4 *)(iVar11 + iVar12);
    iVar2 = *(int *)(*(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x24) + 0x10;
    iVar11 = iVar10 * 8;
    iVar12 = (__this->m_cachedMeshInfoVertexData).mesh[iVar3 * 10 + 9]._opaque + 0x10;
    *(undefined8 *)(iVar2 + iVar11) = *(undefined8 *)(iVar12 + iVar11);
    iVar13 = (iVar10 + 1) * 8;
    *(undefined8 *)(iVar2 + iVar13) = *(undefined8 *)(iVar12 + iVar13);
    iVar14 = (iVar10 + 2) * 8;
    *(undefined8 *)(iVar2 + iVar14) = *(undefined8 *)(iVar12 + iVar14);
    iVar10 = (iVar10 + 3) * 8;
    *(undefined8 *)(iVar2 + iVar10) = *(undefined8 *)(iVar12 + iVar10);
    iVar2 = *(int *)(*(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x28) + 0x10;
    iVar12 = (__this->m_cachedMeshInfoVertexData).mesh[iVar3 * 10 + 10]._opaque + 0x10;
    *(undefined8 *)(iVar2 + iVar11) = *(undefined8 *)(iVar12 + iVar11);
    *(undefined8 *)(iVar13 + iVar2) = *(undefined8 *)(iVar12 + iVar13);
    *(undefined8 *)(iVar2 + iVar14) = *(undefined8 *)(iVar12 + iVar14);
    *(undefined8 *)(iVar2 + iVar10) = *(undefined8 *)(iVar12 + iVar10);
    iVar5 = *(int *)(iVar5 + 0xc) / 4;
    iVar2 = iVar5 * 4;
    iVar10 = iVar2 + -4;
    puVar7 = (undefined8 *)(iVar6 + iVar10 * 0xc);
    uVar9 = *puVar7;
    puVar8 = (undefined8 *)(iVar10 * 0xc + iVar1);
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
    *puVar8 = uVar9;
    iVar5 = iVar5 * 0x30;
    puVar7 = (undefined8 *)(iVar6 + iVar5 + -0x24);
    uVar9 = *puVar7;
    puVar8 = (undefined8 *)(iVar5 + -0x24 + iVar1);
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
    *puVar8 = uVar9;
    puVar7 = (undefined8 *)(iVar6 + iVar5 + -0x18);
    uVar9 = *puVar7;
    puVar8 = (undefined8 *)(iVar5 + -0x18 + iVar1);
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
    *puVar8 = uVar9;
    puVar7 = (undefined8 *)(iVar6 + iVar5 + -0xc);
    uVar9 = *puVar7;
    puVar8 = (undefined8 *)(iVar5 + -0xc + iVar1);
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
    *puVar8 = uVar9;
    iVar1 = *(int *)(*(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x2c) + 0x10;
    iVar5 = (__this->m_cachedMeshInfoVertexData).mesh[iVar3 * 10 + 0xb]._opaque + 0x10;
    *(undefined4 *)(iVar1 + iVar10 * 4) = *(undefined4 *)(iVar5 + iVar10 * 4);
    iVar6 = (iVar2 + -3) * 4;
    *(undefined4 *)(iVar1 + iVar6) = *(undefined4 *)(iVar6 + iVar5);
    iVar6 = (iVar2 + -2) * 4;
    *(undefined4 *)(iVar1 + iVar6) = *(undefined4 *)(iVar5 + iVar6);
    iVar6 = (iVar2 + -1) * 4;
    *(undefined4 *)(iVar1 + iVar6) = *(undefined4 *)(iVar6 + iVar5);
    iVar1 = *(int *)(*(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x24) + 0x10;
    iVar10 = iVar10 * 8;
    iVar5 = (__this->m_cachedMeshInfoVertexData).mesh[iVar3 * 10 + 9]._opaque + 0x10;
    *(undefined8 *)(iVar1 + iVar10) = *(undefined8 *)(iVar5 + iVar10);
    iVar6 = (iVar2 + -3) * 8;
    *(undefined8 *)(iVar1 + iVar6) = *(undefined8 *)(iVar6 + iVar5);
    iVar11 = (iVar2 + -2) * 8;
    *(undefined8 *)(iVar1 + iVar11) = *(undefined8 *)(iVar11 + iVar5);
    iVar2 = (iVar2 + -1) * 8;
    *(undefined8 *)(iVar1 + iVar2) = *(undefined8 *)(iVar2 + iVar5);
    iVar1 = *(int *)(*(int *)(__this->m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x28) + 0x10;
    iVar3 = (__this->m_cachedMeshInfoVertexData).mesh[iVar3 * 10 + 10]._opaque + 0x10;
    *(undefined8 *)(iVar1 + iVar10) = *(undefined8 *)(iVar3 + iVar10);
    *(undefined8 *)(iVar6 + iVar1) = *(undefined8 *)(iVar3 + iVar6);
    *(undefined8 *)(iVar11 + iVar1) = *(undefined8 *)(iVar3 + iVar11);
    *(undefined8 *)(iVar2 + iVar1) = *(undefined8 *)(iVar3 + iVar2);
    iVar1 = __this->m_TextMeshPro->_opaque;
    (**(code **)((ulonglong)*(uint *)(&DAT_ram_00000420 + iVar1) * 4))
              (__this->m_TextMeshPro,0xff,*(undefined4 *)(&DAT_ram_00000424 + iVar1));
  }
  return;
}

// ---- TMPro.Examples.TMP_TextSelector_B$$.ctor ----
// C#: void TMPro_Examples_TMP_TextSelector_B___ctor (TMPro_Examples_TMP_TextSelector_B_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_TextSelector_B___ctor
               (TMPro_Examples_TMP_TextSelector_B_o *__this,MethodInfo *method)

{
  __this->m_lastIndex = -1;
  __this->m_selectedWord = -1;
  __this->m_selectedLink = -1;
  unnamed_function_44622(__this,0);
  return;
}

