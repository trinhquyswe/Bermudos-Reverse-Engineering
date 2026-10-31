// Assembly-CSharp :: TMPro.Examples.TMP_FrameRateCounter
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TMP_FrameRateCounter : MonoBehaviour // TypeDefIndex: 5777
{
	// Fields
	public float UpdateInterval; // 0x10
	private float m_LastInterval; // 0x14
	private int m_Frames; // 0x18
	public TMP_FrameRateCounter.FpsCounterAnchorPositions AnchorPosition; // 0x1C
	private string htmlColorTag; // 0x20
	private const string fpsLabel = "{0:2}</color> <#8080ff>FPS \n<#FF8000>{1:2} <#8080ff>MS";
	private TextMeshPro m_TextMeshPro; // 0x24
	private Transform m_frameCounter_transform; // 0x28
	private Camera m_camera; // 0x2C
	private TMP_FrameRateCounter.FpsCounterAnchorPositions last_AnchorPosition; // 0x30

	// Methods

	// RVA: 0x3B53 Offset: 0x3B53 VA: 0x3B53
	private void Awake() { }

	// RVA: 0x3B54 Offset: 0x3B54 VA: 0x3B54
	private void Start() { }

	// RVA: 0x3B55 Offset: 0x3B55 VA: 0x3B55
	private void Update() { }

	// RVA: 0x3B56 Offset: 0x3B56 VA: 0x3B56
	private void Set_FrameCounter_Position(TMP_FrameRateCounter.FpsCounterAnchorPositions anchor_position) { }

	// RVA: 0x3B57 Offset: 0x3B57 VA: 0x3B57
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TMP_FrameRateCounter$$Awake ----
// C#: void TMPro_Examples_TMP_FrameRateCounter__Awake (TMPro_Examples_TMP_FrameRateCounter_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_FrameRateCounter__Awake
               (TMPro_Examples_TMP_FrameRateCounter_o *__this,MethodInfo *method)

{
  int iVar1;
  Camera_o *pCVar2;
  undefined4 uVar3;
  TextMeshPro_o *pTVar4;
  undefined4 uVar5;
  RuleTile_TilingRuleOutput_Transform RVar6;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664883 == '\0') {
    unnamed_function_1099(&UnityEngine_Application_TypeInfo);
    unnamed_function_1099(&DAT_ram_00569a24);
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056bfac);
    unnamed_function_1099(&DAT_ram_0056bfb8);
    unnamed_function_1099(&StringLiteral_3937 /* "Fonts & Materials/LiberationSans SDF - Overlay" */);
    unnamed_function_1099(&StringLiteral_3971 /* "Frame Counter" */);
    unnamed_function_1099(&StringLiteral_3934 /* "Fonts & Materials/LiberationSans SDF" */);
    DAT_ram_00664883 = '\x01';
  }
  iVar1 = unnamed_function_44619(__this,0);
  if (iVar1 != 0) {
    pCVar2 = (Camera_o *)unnamed_function_52349(0);
    __this->m_camera = pCVar2;
    if (*(int *)(UnityEngine_Application_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Application_TypeInfo);
    }
    unnamed_function_52244(s___Scripting__UnityEngine__Player_ram_0000270d + 2,0);
    uVar3 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
    unnamed_function_44695(uVar3,StringLiteral_3971 /* "Frame Counter" */,0);
    pTVar4 = (TextMeshPro_o *)unnamed_function_73837(uVar3,DAT_ram_00569a24);
    __this->m_TextMeshPro = pTVar4;
    uVar5 = unnamed_function_60803(StringLiteral_3934 /* "Fonts & Materials/LiberationSans SDF" */,DAT_ram_0056bfb8);
    unnamed_function_23023(pTVar4,uVar5,0);
    pTVar4 = __this->m_TextMeshPro;
    uVar5 = unnamed_function_60803(StringLiteral_3937 /* "Fonts & Materials/LiberationSans SDF - Overlay" */,DAT_ram_0056bfac);
    iVar1 = pTVar4->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2e0) * 4))
              (pTVar4,uVar5,*(undefined4 *)(iVar1 + 0x2e4));
    RVar6 = unnamed_function_44683(uVar3,0);
    __this->m_frameCounter_transform = RVar6;
    uVar3 = unnamed_function_44643(__this->m_camera,0);
    unnamed_function_44984(RVar6,uVar3,0);
    RVar6 = __this->m_frameCounter_transform;
    if (DAT_ram_006603e8 == '\0') {
      unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
      DAT_ram_006603e8 = '\x01';
    }
    local_20 = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
    local_18 = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
    local_10 = local_20;
    local_8 = local_18;
    unnamed_function_44971(RVar6,&local_20,0);
    unnamed_function_23085(__this->m_TextMeshPro,0,0);
    unnamed_function_23055(__this->m_TextMeshPro,24.0,0);
    TMPro_Examples_TMP_FrameRateCounter__Set_FrameCounter_Position
              (__this,__this->AnchorPosition,(MethodInfo *)__this);
    __this->last_AnchorPosition = __this->AnchorPosition;
  }
  return;
}

// ---- TMPro.Examples.TMP_FrameRateCounter$$Start ----
// C#: void TMPro_Examples_TMP_FrameRateCounter__Start (TMPro_Examples_TMP_FrameRateCounter_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_FrameRateCounter__Start
               (TMPro_Examples_TMP_FrameRateCounter_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = unnamed_function_44816(0);
  __this->m_Frames = 0;
  __this->m_LastInterval = fVar1;
  return;
}

// ---- TMPro.Examples.TMP_FrameRateCounter$$Update ----
// C#: void TMPro_Examples_TMP_FrameRateCounter__Update (TMPro_Examples_TMP_FrameRateCounter_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_FrameRateCounter__Update
               (TMPro_Examples_TMP_FrameRateCounter_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 param2;
  TextMeshPro_o *param1;
  TMP_FrameRateCounter_FpsCounterAnchorPositions anchor_position;
  string_o *param1_00;
  undefined4 *puVar3;
  float param3;
  float fVar4;
  undefined4 *puVar2;
  
  if (DAT_ram_00664884 == '\0') {
    unnamed_function_1099(&StringLiteral_1341 /* "<color=green>" */);
    unnamed_function_1099(&StringLiteral_1342 /* "<color=red>" */);
    unnamed_function_1099(&StringLiteral_1343 /* "<color=yellow>" */);
    unnamed_function_1099(&StringLiteral_13777 /* "{0:2}</color> <#8080ff>FPS \n<#FF8000>{1:2} <#8080ff>MS" */);
    DAT_ram_00664884 = '\x01';
  }
  anchor_position = __this->AnchorPosition;
  if (anchor_position != __this->last_AnchorPosition) {
    TMPro_Examples_TMP_FrameRateCounter__Set_FrameCounter_Position
              (__this,anchor_position,(MethodInfo *)__this);
    anchor_position = __this->AnchorPosition;
  }
  __this->last_AnchorPosition = anchor_position;
  __this->m_Frames = __this->m_Frames + 1;
  fVar1 = unnamed_function_44816(0);
  if (__this->m_LastInterval + __this->UpdateInterval < fVar1) {
    puVar3 = &StringLiteral_1342 /* "<color=red>" */;
    param3 = (float)__this->m_Frames / (fVar1 - __this->m_LastInterval);
    if (10.0 <= param3) {
      puVar3 = &StringLiteral_1341 /* "<color=green>" */;
    }
    puVar2 = &StringLiteral_1343 /* "<color=yellow>" */;
    if (30.0 <= param3) {
      puVar2 = puVar3;
    }
    param1_00 = (string_o *)*puVar2;
    __this->htmlColorTag = param1_00;
    param1 = __this->m_TextMeshPro;
    param2 = unnamed_function_81364(param1_00,StringLiteral_13777 /* "{0:2}</color> <#8080ff>FPS \n<#FF8000>{1:2} <#8080ff>MS" */,0);
    fVar4 = param3;
    if (param3 <= 1e-05) {
      fVar4 = 1e-05;
    }
    unnamed_function_23208(param1,param2,param3,1000.0 / fVar4,0);
    __this->m_LastInterval = fVar1;
    __this->m_Frames = 0;
  }
  return;
}

// ---- TMPro.Examples.TMP_FrameRateCounter$$Set_FrameCounter_Position ----
// C#: void TMPro_Examples_TMP_FrameRateCounter__Set_FrameCounter_Position (TMPro_Examples_TMP_FrameRateCounter_o* __this, int32_t anchor_position, const MethodInfo* method);

void TMPro_Examples_TMP_FrameRateCounter__Set_FrameCounter_Position
               (TMPro_Examples_TMP_FrameRateCounter_o *__this,
               TMP_FrameRateCounter_FpsCounterAnchorPositions anchor_position,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  RuleTile_TilingRuleOutput_Transform RVar3;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_8 = 0x3f8000003f800000;
  local_10 = 0x3f8000003f800000;
  iVar2 = __this->m_TextMeshPro->_opaque;
  local_78 = 0x3f8000003f800000;
  local_80 = 0x3f8000003f800000;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x310) * 4))
            (__this->m_TextMeshPro,&local_80,*(undefined4 *)(iVar2 + 0x314));
  if (anchor_position == TopLeft) {
    unnamed_function_23071(__this->m_TextMeshPro,0x101,0);
    uVar1 = unnamed_function_23147(__this->m_TextMeshPro,0);
    local_18 = 0x3f80000000000000;
    local_100 = 0x3f80000000000000;
    unnamed_function_44942(uVar1,&local_100,0);
    RVar3 = __this->m_frameCounter_transform;
    local_20 = 0x42c80000;
    local_108 = 0x42c80000;
    local_28 = 0x3f80000000000000;
    local_110 = 0x3f80000000000000;
    unnamed_function_52340(&local_10,__this->m_camera,&local_110,0);
    local_118 = (undefined4)local_8;
    local_120 = local_10;
    unnamed_function_44962(RVar3,&local_120,0);
  }
  else if (anchor_position == BottomLeft) {
    unnamed_function_23071(__this->m_TextMeshPro,&DAT_ram_00000401,0);
    uVar1 = unnamed_function_23147(__this->m_TextMeshPro,0);
    local_30 = 0;
    local_d8 = 0;
    unnamed_function_44942(uVar1,&local_d8,0);
    RVar3 = __this->m_frameCounter_transform;
    local_38 = 0x42c80000;
    local_e0 = 0x42c80000;
    local_40 = 0;
    local_e8 = 0;
    unnamed_function_52340(&local_10,__this->m_camera,&local_e8,0);
    local_f0 = (undefined4)local_8;
    local_f8 = local_10;
    unnamed_function_44962(RVar3,&local_f8,0);
  }
  else if (anchor_position == TopRight) {
    unnamed_function_23071(__this->m_TextMeshPro,0x104,0);
    uVar1 = unnamed_function_23147(__this->m_TextMeshPro,0);
    local_48 = 0x3f8000003f800000;
    local_b0 = 0x3f8000003f800000;
    unnamed_function_44942(uVar1,&local_b0,0);
    RVar3 = __this->m_frameCounter_transform;
    local_50 = 0x42c80000;
    local_b8 = 0x42c80000;
    local_58 = 0x3f8000003f800000;
    local_c0 = 0x3f8000003f800000;
    unnamed_function_52340(&local_10,__this->m_camera,&local_c0,0);
    local_c8 = (undefined4)local_8;
    local_d0 = local_10;
    unnamed_function_44962(RVar3,&local_d0,0);
  }
  else if (anchor_position == BottomRight) {
    unnamed_function_23071(__this->m_TextMeshPro,&DAT_ram_00000404,0);
    uVar1 = unnamed_function_23147(__this->m_TextMeshPro,0);
    local_60 = 0x3f800000;
    local_88 = 0x3f800000;
    unnamed_function_44942(uVar1,&local_88,0);
    RVar3 = __this->m_frameCounter_transform;
    local_68 = 0x42c80000;
    local_90 = 0x42c80000;
    local_70 = 0x3f800000;
    local_98 = 0x3f800000;
    unnamed_function_52340(&local_10,__this->m_camera,&local_98,0);
    local_a0 = (undefined4)local_8;
    local_a8 = local_10;
    unnamed_function_44962(RVar3,&local_a8,0);
  }
  return;
}

// ---- TMPro.Examples.TMP_FrameRateCounter$$.ctor ----
// C#: void TMPro_Examples_TMP_FrameRateCounter___ctor (TMPro_Examples_TMP_FrameRateCounter_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_FrameRateCounter___ctor
               (TMPro_Examples_TMP_FrameRateCounter_o *__this,MethodInfo *method)

{
  __this->AnchorPosition = TopRight;
  __this->UpdateInterval = 5.0;
  unnamed_function_44622(__this,0);
  return;
}

