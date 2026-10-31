// Assembly-CSharp :: TMPro.Examples.TMP_UiFrameRateCounter
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TMP_UiFrameRateCounter : MonoBehaviour // TypeDefIndex: 5783
{
	// Fields
	public float UpdateInterval; // 0x10
	private float m_LastInterval; // 0x14
	private int m_Frames; // 0x18
	public TMP_UiFrameRateCounter.FpsCounterAnchorPositions AnchorPosition; // 0x1C
	private string htmlColorTag; // 0x20
	private const string fpsLabel = "{0:2}</color> <#8080ff>FPS \n<#FF8000>{1:2} <#8080ff>MS";
	private TextMeshProUGUI m_TextMeshPro; // 0x24
	private RectTransform m_frameCounter_transform; // 0x28
	private TMP_UiFrameRateCounter.FpsCounterAnchorPositions last_AnchorPosition; // 0x2C

	// Methods

	// RVA: 0x3B71 Offset: 0x3B71 VA: 0x3B71
	private void Awake() { }

	// RVA: 0x3B72 Offset: 0x3B72 VA: 0x3B72
	private void Start() { }

	// RVA: 0x3B73 Offset: 0x3B73 VA: 0x3B73
	private void Update() { }

	// RVA: 0x3B74 Offset: 0x3B74 VA: 0x3B74
	private void Set_FrameCounter_Position(TMP_UiFrameRateCounter.FpsCounterAnchorPositions anchor_position) { }

	// RVA: 0x3B75 Offset: 0x3B75 VA: 0x3B75
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TMP_UiFrameRateCounter$$Awake ----
// C#: void TMPro_Examples_TMP_UiFrameRateCounter__Awake (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_UiFrameRateCounter__Awake
               (TMPro_Examples_TMP_UiFrameRateCounter_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  RectTransform_o *param1;
  undefined4 param2;
  TextMeshProUGUI_o *pTVar3;
  
  if (DAT_ram_00664895 == '\0') {
    unnamed_function_1099(&UnityEngine_Application_TypeInfo);
    unnamed_function_1099(&DAT_ram_005699e8);
    unnamed_function_1099(&DAT_ram_00569a2c);
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056bfac);
    unnamed_function_1099(&DAT_ram_0056bfb8);
    unnamed_function_1099(&StringLiteral_3937 /* "Fonts & Materials/LiberationSans SDF - Overlay" */);
    unnamed_function_1099(&StringLiteral_3971 /* "Frame Counter" */);
    unnamed_function_1099(&StringLiteral_3934 /* "Fonts & Materials/LiberationSans SDF" */);
    DAT_ram_00664895 = '\x01';
  }
  iVar1 = unnamed_function_44619(__this,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Application_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Application_TypeInfo);
    }
    unnamed_function_52244(1000,0);
    uVar2 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
    unnamed_function_44695(uVar2,StringLiteral_3971 /* "Frame Counter" */,0);
    param1 = (RectTransform_o *)unnamed_function_73837(uVar2,DAT_ram_005699e8);
    __this->m_frameCounter_transform = param1;
    param2 = unnamed_function_44643(__this,0);
    unnamed_function_44985(param1,param2,0,0);
    pTVar3 = (TextMeshProUGUI_o *)unnamed_function_73837(uVar2,DAT_ram_00569a2c);
    __this->m_TextMeshPro = pTVar3;
    uVar2 = unnamed_function_60803(StringLiteral_3934 /* "Fonts & Materials/LiberationSans SDF" */,DAT_ram_0056bfb8);
    unnamed_function_23023(pTVar3,uVar2,0);
    pTVar3 = __this->m_TextMeshPro;
    uVar2 = unnamed_function_60803(StringLiteral_3937 /* "Fonts & Materials/LiberationSans SDF - Overlay" */,DAT_ram_0056bfac);
    iVar1 = pTVar3->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2e0) * 4))
              (pTVar3,uVar2,*(undefined4 *)(iVar1 + 0x2e4));
    unnamed_function_23085(__this->m_TextMeshPro,0,0);
    unnamed_function_23055(__this->m_TextMeshPro,36.0,0);
    unnamed_function_23106(__this->m_TextMeshPro,1,0);
    TMPro_Examples_TMP_UiFrameRateCounter__Set_FrameCounter_Position
              (__this,__this->AnchorPosition,(MethodInfo *)__this);
    __this->last_AnchorPosition = __this->AnchorPosition;
  }
  return;
}

// ---- TMPro.Examples.TMP_UiFrameRateCounter$$Start ----
// C#: void TMPro_Examples_TMP_UiFrameRateCounter__Start (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_FrameRateCounter__Start
               (TMPro_Examples_TMP_FrameRateCounter_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = unnamed_function_44816(0);
  __this->m_Frames = 0;
  __this->m_LastInterval = fVar1;
  return;
}

// ---- TMPro.Examples.TMP_UiFrameRateCounter$$Update ----
// C#: void TMPro_Examples_TMP_UiFrameRateCounter__Update (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_UiFrameRateCounter__Update
               (TMPro_Examples_TMP_UiFrameRateCounter_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 param2;
  TextMeshProUGUI_o *param1;
  TMP_UiFrameRateCounter_FpsCounterAnchorPositions anchor_position;
  string_o *param1_00;
  undefined4 *puVar3;
  float param3;
  float fVar4;
  undefined4 *puVar2;
  
  if (DAT_ram_00664896 == '\0') {
    unnamed_function_1099(&StringLiteral_1341 /* "<color=green>" */);
    unnamed_function_1099(&StringLiteral_1342 /* "<color=red>" */);
    unnamed_function_1099(&StringLiteral_1343 /* "<color=yellow>" */);
    unnamed_function_1099(&StringLiteral_13777 /* "{0:2}</color> <#8080ff>FPS \n<#FF8000>{1:2} <#8080ff>MS" */);
    DAT_ram_00664896 = '\x01';
  }
  anchor_position = __this->AnchorPosition;
  if (anchor_position != __this->last_AnchorPosition) {
    TMPro_Examples_TMP_UiFrameRateCounter__Set_FrameCounter_Position
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

// ---- TMPro.Examples.TMP_UiFrameRateCounter$$Set_FrameCounter_Position ----
// C#: void TMPro_Examples_TMP_UiFrameRateCounter__Set_FrameCounter_Position (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, int32_t anchor_position, const MethodInfo* method);

void TMPro_Examples_TMP_UiFrameRateCounter__Set_FrameCounter_Position
               (TMPro_Examples_TMP_UiFrameRateCounter_o *__this,
               TMP_UiFrameRateCounter_FpsCounterAnchorPositions anchor_position,MethodInfo *method)

{
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (anchor_position == TopLeft) {
    unnamed_function_23071(__this->m_TextMeshPro,0x101,0);
    local_8 = 0x3f80000000000000;
    local_e8 = 0x3f80000000000000;
    unnamed_function_44942(__this->m_frameCounter_transform,&local_e8,0);
    local_10 = 0x3f7d70a43c23d70a;
    local_f0 = 0x3f7d70a43c23d70a;
    unnamed_function_44930(__this->m_frameCounter_transform,&local_f0,0);
    local_18 = 0x3f7d70a43c23d70a;
    local_f8 = 0x3f7d70a43c23d70a;
    unnamed_function_44933(__this->m_frameCounter_transform,&local_f8,0);
    local_20 = 0x3f80000000000000;
    local_100 = 0x3f80000000000000;
    unnamed_function_44936(__this->m_frameCounter_transform,&local_100,0);
  }
  else if (anchor_position == BottomLeft) {
    unnamed_function_23071(__this->m_TextMeshPro,&DAT_ram_00000401,0);
    local_28 = 0;
    local_c8 = 0;
    unnamed_function_44942(__this->m_frameCounter_transform,&local_c8,0);
    local_30 = 0x3c23d70a3c23d70a;
    local_d0 = 0x3c23d70a3c23d70a;
    unnamed_function_44930(__this->m_frameCounter_transform,&local_d0,0);
    local_38 = 0x3c23d70a3c23d70a;
    local_d8 = 0x3c23d70a3c23d70a;
    unnamed_function_44933(__this->m_frameCounter_transform,&local_d8,0);
    local_40 = 0;
    local_e0 = 0;
    unnamed_function_44936(__this->m_frameCounter_transform,&local_e0,0);
  }
  else if (anchor_position == TopRight) {
    unnamed_function_23071(__this->m_TextMeshPro,0x104,0);
    local_48 = 0x3f8000003f800000;
    local_a8 = 0x3f8000003f800000;
    unnamed_function_44942(__this->m_frameCounter_transform,&local_a8,0);
    local_50 = 0x3f7d70a43f7d70a4;
    local_b0 = 0x3f7d70a43f7d70a4;
    unnamed_function_44930(__this->m_frameCounter_transform,&local_b0,0);
    local_58 = 0x3f7d70a43f7d70a4;
    local_b8 = 0x3f7d70a43f7d70a4;
    unnamed_function_44933(__this->m_frameCounter_transform,&local_b8,0);
    local_60 = 0x3f8000003f800000;
    local_c0 = 0x3f8000003f800000;
    unnamed_function_44936(__this->m_frameCounter_transform,&local_c0,0);
  }
  else if (anchor_position == BottomRight) {
    unnamed_function_23071(__this->m_TextMeshPro,&DAT_ram_00000404,0);
    local_68 = 0x3f800000;
    local_88 = 0x3f800000;
    unnamed_function_44942(__this->m_frameCounter_transform,&local_88,0);
    local_70 = 0x3c23d70a3f7d70a4;
    local_90 = 0x3c23d70a3f7d70a4;
    unnamed_function_44930(__this->m_frameCounter_transform,&local_90,0);
    local_78 = 0x3c23d70a3f7d70a4;
    local_98 = 0x3c23d70a3f7d70a4;
    unnamed_function_44933(__this->m_frameCounter_transform,&local_98,0);
    local_80 = 0x3f800000;
    local_a0 = 0x3f800000;
    unnamed_function_44936(__this->m_frameCounter_transform,&local_a0,0);
  }
  return;
}

// ---- TMPro.Examples.TMP_UiFrameRateCounter$$.ctor ----
// C#: void TMPro_Examples_TMP_UiFrameRateCounter___ctor (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, const MethodInfo* method);

void TMPro_Examples_TMP_FrameRateCounter___ctor
               (TMPro_Examples_TMP_FrameRateCounter_o *__this,MethodInfo *method)

{
  __this->AnchorPosition = TopRight;
  __this->UpdateInterval = 5.0;
  unnamed_function_44622(__this,0);
  return;
}

