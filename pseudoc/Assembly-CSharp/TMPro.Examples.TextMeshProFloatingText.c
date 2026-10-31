// Assembly-CSharp :: TMPro.Examples.TextMeshProFloatingText
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TextMeshProFloatingText : MonoBehaviour // TypeDefIndex: 5770
{
	// Fields
	public Font TheFont; // 0x10
	private GameObject m_floatingText; // 0x14
	private TextMeshPro m_textMeshPro; // 0x18
	private TextMesh m_textMesh; // 0x1C
	private Transform m_transform; // 0x20
	private Transform m_floatingText_Transform; // 0x24
	private Transform m_cameraTransform; // 0x28
	private Vector3 lastPOS; // 0x2C
	private Quaternion lastRotation; // 0x38
	public int SpawnType; // 0x48
	public bool IsTextObjectScaleStatic; // 0x4C
	private static WaitForEndOfFrame k_WaitForEndOfFrame; // 0x0
	private static WaitForSeconds[] k_WaitForSecondsRandom; // 0x4

	// Methods

	// RVA: 0x3B38 Offset: 0x3B38 VA: 0x3B38
	private void Awake() { }

	// RVA: 0x3B39 Offset: 0x3B39 VA: 0x3B39
	private void Start() { }

	[IteratorStateMachine(typeof(TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15))]
	// RVA: 0x3B3A Offset: 0x3B3A VA: 0x3B3A
	public IEnumerator DisplayTextMeshProFloatingText() { }

	[IteratorStateMachine(typeof(TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16))]
	// RVA: 0x3B3B Offset: 0x3B3B VA: 0x3B3B
	public IEnumerator DisplayTextMeshFloatingText() { }

	// RVA: 0x3B3C Offset: 0x3B3C VA: 0x3B3C
	public void .ctor() { }

	// RVA: 0x3B3D Offset: 0x3B3D VA: 0x3B3D
	private static void .cctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TextMeshProFloatingText$$Awake ----
// C#: void TMPro_Examples_TextMeshProFloatingText__Awake (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method);

void TMPro_Examples_TextMeshProFloatingText__Awake
               (TMPro_Examples_TextMeshProFloatingText_o *__this,MethodInfo *method)

{
  RuleTile_TilingRuleOutput_Transform RVar1;
  undefined4 uVar2;
  GameObject_o *param1;
  
  if (DAT_ram_00664878 == '\0') {
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&StringLiteral_206 /* " floating text" */);
    DAT_ram_00664878 = '\x01';
  }
  RVar1 = unnamed_function_44643(__this,0);
  __this->m_transform = RVar1;
  uVar2 = unnamed_function_44768(__this,0);
  uVar2 = unnamed_function_81364(uVar2,StringLiteral_206 /* " floating text" */,0);
  param1 = (GameObject_o *)unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
  unnamed_function_44695(param1,uVar2,0);
  __this->m_floatingText = param1;
  uVar2 = unnamed_function_52349(0);
  RVar1 = unnamed_function_44643(uVar2,0);
  __this->m_cameraTransform = RVar1;
  return;
}

// ---- TMPro.Examples.TextMeshProFloatingText$$Start ----
// C#: void TMPro_Examples_TextMeshProFloatingText__Start (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method);

void TMPro_Examples_TextMeshProFloatingText__Start
               (TMPro_Examples_TextMeshProFloatingText_o *__this,MethodInfo *method)

{
  undefined4 *param1;
  TextMeshPro_o *pTVar1;
  undefined4 uVar2;
  RuleTile_TilingRuleOutput_Transform RVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  TextMesh_o *pTVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  float local_50;
  float4 local_48;
  float4 local_44;
  float4 local_40;
  undefined4 local_3c;
  float4 local_38;
  float4 local_34;
  float4 local_30;
  float4 local_28;
  float4 local_24;
  float4 local_20;
  undefined8 local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  undefined4 local_4;
  
  if (DAT_ram_00664879 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f10);
    unnamed_function_1099(&DAT_ram_00569a24);
    unnamed_function_1099(&DAT_ram_00569a20);
    unnamed_function_1099(&DAT_ram_0056bfa0);
    unnamed_function_1099(&string_TypeInfo);
    unnamed_function_1099(&StringLiteral_3938 /* "Fonts/ARIAL" */);
    DAT_ram_00664879 = '\x01';
  }
  if (__this->SpawnType == 0) {
    pTVar1 = (TextMeshPro_o *)unnamed_function_73837(__this->m_floatingText,DAT_ram_00569a24);
    __this->m_textMeshPro = pTVar1;
    uVar2 = unnamed_function_23147(pTVar1,0);
    local_18 = 0x4040000040400000;
    local_70 = 0x4040000040400000;
    unnamed_function_44939(uVar2,&local_70,0);
    RVar3 = unnamed_function_44683(__this->m_floatingText,0);
    __this->m_floatingText_Transform = RVar3;
    unnamed_function_44960(&local_10,__this->m_transform,0);
    local_78 = (float)local_8 + 0.0;
    local_24 = (float4)((float)local_c + 15.0);
    local_28 = (float4)((float)local_10 + 0.0);
    local_80 = CONCAT44(local_24,local_28);
    local_20 = (float4)local_78;
    unnamed_function_44962(RVar3,&local_80,0);
    unnamed_function_23071(__this->m_textMeshPro,0x202,0);
    pTVar1 = __this->m_textMeshPro;
    uVar4 = unnamed_function_44584(0,0xff,0);
    uVar5 = unnamed_function_44584(0,0xff,0);
    uVar6 = unnamed_function_44584(0,0xff,0);
    local_8 = (float4)((float)(uVar6 & 0xff) / 255.0);
    local_4 = 0x3f800000;
    local_10 = (float4)((float)(uVar4 & 0xff) / 255.0);
    local_c = (float4)((float)(uVar5 & 0xff) / 255.0);
    iVar9 = pTVar1->_opaque;
    local_88 = CONCAT44(0x3f800000,local_8);
    local_90 = CONCAT44(local_c,local_10);
    (**(code **)((ulonglong)*(uint *)(iVar9 + 0x178) * 4))
              (pTVar1,&local_90,*(undefined4 *)(iVar9 + 0x17c));
    unnamed_function_23055(__this->m_textMeshPro,24.0,0);
    unnamed_function_23098(__this->m_textMeshPro,0,0);
    iVar9 = __this->m_textMeshPro->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar9 + 0x2d0) * 4))
              (__this->m_textMeshPro,**(undefined4 **)(string_TypeInfo + 0x5c),
               *(undefined4 *)(iVar9 + 0x2d4));
    unnamed_function_23124(__this->m_textMeshPro,(uint)__this->IsTextObjectScaleStatic,0);
    param1 = &TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_TypeInfo;
    if (DAT_ram_0066487a != '\0') goto code_r0x81a29036;
    puVar10 = &DAT_ram_0066487a;
  }
  else {
    if (__this->SpawnType != 1) {
      return;
    }
    RVar3 = unnamed_function_44683(__this->m_floatingText,0);
    __this->m_floatingText_Transform = RVar3;
    unnamed_function_44960(&local_10,__this->m_transform,0);
    local_50 = (float)local_8 + 0.0;
    local_34 = (float4)((float)local_c + 15.0);
    local_38 = (float4)((float)local_10 + 0.0);
    local_58 = CONCAT44(local_34,local_38);
    local_30 = (float4)local_50;
    unnamed_function_44962(RVar3,&local_58,0);
    pTVar7 = (TextMesh_o *)unnamed_function_73837(__this->m_floatingText,DAT_ram_00569a20);
    __this->m_textMesh = pTVar7;
    uVar2 = unnamed_function_60803(StringLiteral_3938 /* "Fonts/ARIAL" */,DAT_ram_0056bfa0);
    unnamed_function_16185(pTVar7,uVar2,0);
    uVar2 = unnamed_function_65370(__this->m_textMesh,DAT_ram_00567f10);
    uVar8 = unnamed_function_16184(__this->m_textMesh,0);
    uVar8 = unnamed_function_16194(uVar8,0);
    unnamed_function_52795(uVar2,uVar8,0);
    pTVar7 = __this->m_textMesh;
    uVar4 = unnamed_function_44584(0,0xff,0);
    uVar5 = unnamed_function_44584(0,0xff,0);
    uVar6 = unnamed_function_44584(0,0xff,0);
    local_40 = (float4)((float)(uVar6 & 0xff) / 255.0);
    local_3c = 0x3f800000;
    local_60 = CONCAT44(0x3f800000,local_40);
    local_48 = (float4)((float)(uVar4 & 0xff) / 255.0);
    local_44 = (float4)((float)(uVar5 & 0xff) / 255.0);
    local_68 = CONCAT44(local_44,local_48);
    unnamed_function_16190(pTVar7,&local_68,0);
    unnamed_function_16187(__this->m_textMesh,7,0);
    unnamed_function_16186(__this->m_textMesh,0x18,0);
    param1 = &TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_TypeInfo;
    if (DAT_ram_0066487b != '\0') goto code_r0x81a29036;
    puVar10 = &DAT_ram_0066487b;
  }
  unnamed_function_1099(param1);
  *puVar10 = 1;
code_r0x81a29036:
  iVar9 = unnamed_function_95402(*param1);
  *(TMPro_Examples_TextMeshProFloatingText_o **)(iVar9 + 0x10) = __this;
  *(undefined4 *)(iVar9 + 8) = 0;
  unnamed_function_44725(__this,iVar9,0);
  return;
}

// ---- TMPro.Examples.TextMeshProFloatingText$$DisplayTextMeshProFloatingText ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText
          (TMPro_Examples_TextMeshProFloatingText_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_0066487a == '\0') {
    unnamed_function_1099
              (&
               TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_TypeInfo
              );
    DAT_ram_0066487a = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402
                     (
                     TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_TypeInfo
                     );
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.TextMeshProFloatingText$$DisplayTextMeshFloatingText ----
// C#: System_Collections_IEnumerator_o* TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText
          (TMPro_Examples_TextMeshProFloatingText_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_0066487b == '\0') {
    unnamed_function_1099
              (&TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_TypeInfo);
    DAT_ram_0066487b = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402
                     (
                     TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_TypeInfo
                     );
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TMPro.Examples.TextMeshProFloatingText$$.ctor ----
// C#: void TMPro_Examples_TextMeshProFloatingText___ctor (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method);

void TMPro_Examples_TextMeshProFloatingText___ctor
               (TMPro_Examples_TextMeshProFloatingText_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  uVar1 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  (__this->lastPOS).z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  (__this->lastPOS).x = (float)(int)uVar1;
  (__this->lastPOS).y = (float)(int)((ulonglong)uVar1 >> 0x20);
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  uVar1 = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  uVar2 = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  (__this->lastRotation).z = (float)(int)uVar2;
  (__this->lastRotation).w = (float)(int)((ulonglong)uVar2 >> 0x20);
  (__this->lastRotation).x = (float)(int)uVar1;
  (__this->lastRotation).y = (float)(int)((ulonglong)uVar1 >> 0x20);
  unnamed_function_44622(__this,0);
  return;
}

// ---- TMPro.Examples.TextMeshProFloatingText$$.cctor ----
// C#: void TMPro_Examples_TextMeshProFloatingText___cctor (const MethodInfo* method);

void TMPro_Examples_TextMeshProFloatingText___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_ram_0066487c == '\0') {
    unnamed_function_1099(&TMPro_Examples_TextMeshProFloatingText_TypeInfo);
    unnamed_function_1099(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    unnamed_function_1099(&UnityEngine_WaitForSeconds___TypeInfo);
    unnamed_function_1099(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_ram_0066487c = '\x01';
  }
  uVar1 = unnamed_function_95402(UnityEngine_WaitForEndOfFrame_TypeInfo);
  **(undefined4 **)(TMPro_Examples_TextMeshProFloatingText_TypeInfo + 0x5c) = uVar1;
  iVar2 = unnamed_function_1050(UnityEngine_WaitForSeconds___TypeInfo,0x14);
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.05,0);
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.1,0);
  *(undefined4 *)(iVar2 + 0x14) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.15,0);
  *(undefined4 *)(iVar2 + 0x18) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.2,0);
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.25,0);
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.3,0);
  *(undefined4 *)(iVar2 + 0x24) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.35,0);
  *(undefined4 *)(iVar2 + 0x28) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.4,0);
  *(undefined4 *)(iVar2 + 0x2c) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.45,0);
  *(undefined4 *)(iVar2 + 0x30) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.5,0);
  *(undefined4 *)(iVar2 + 0x34) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.55,0);
  *(undefined4 *)(iVar2 + 0x38) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.6,0);
  *(undefined4 *)(iVar2 + 0x3c) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.65,0);
  *(undefined4 *)(iVar2 + 0x40) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.7,0);
  *(undefined4 *)(iVar2 + 0x44) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.75,0);
  *(undefined4 *)(iVar2 + 0x48) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.8,0);
  *(undefined4 *)(iVar2 + 0x4c) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.85,0);
  *(undefined4 *)(iVar2 + 0x50) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.9,0);
  *(undefined4 *)(iVar2 + 0x54) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,0.95,0);
  *(undefined4 *)(iVar2 + 0x58) = uVar1;
  uVar1 = unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(uVar1,1.0,0);
  *(undefined4 *)(iVar2 + 0x5c) = uVar1;
  *(int *)(*(int *)(TMPro_Examples_TextMeshProFloatingText_TypeInfo + 0x5c) + 4) = iVar2;
  return;
}

