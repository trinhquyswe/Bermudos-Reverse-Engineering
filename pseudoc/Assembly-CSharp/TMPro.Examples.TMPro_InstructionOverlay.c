// Assembly-CSharp :: TMPro.Examples.TMPro_InstructionOverlay
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TMPro_InstructionOverlay : MonoBehaviour // TypeDefIndex: 5773
{
	// Fields
	public TMPro_InstructionOverlay.FpsCounterAnchorPositions AnchorPosition; // 0x10
	private const string instructions = "Camera Control - <#ffff00>Shift + RMB\n</color>Zoom - <#ffff00>Mouse wheel.";
	private TextMeshPro m_TextMeshPro; // 0x14
	private TextContainer m_textContainer; // 0x18
	private Transform m_frameCounter_transform; // 0x1C
	private Camera m_camera; // 0x20

	// Methods

	// RVA: 0x3B4D Offset: 0x3B4D VA: 0x3B4D
	private void Awake() { }

	// RVA: 0x3B4E Offset: 0x3B4E VA: 0x3B4E
	private void Set_FrameCounter_Position(TMPro_InstructionOverlay.FpsCounterAnchorPositions anchor_position) { }

	// RVA: 0x3B4F Offset: 0x3B4F VA: 0x3B4F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TMPro_InstructionOverlay$$Awake ----
// C#: void TMPro_Examples_TMPro_InstructionOverlay__Awake (TMPro_Examples_TMPro_InstructionOverlay_o* __this, const MethodInfo* method);

void TMPro_Examples_TMPro_InstructionOverlay__Awake
               (TMPro_Examples_TMPro_InstructionOverlay_o *__this,MethodInfo *method)

{
  int iVar1;
  Camera_o *pCVar2;
  undefined4 param1;
  RuleTile_TilingRuleOutput_Transform RVar3;
  undefined4 uVar4;
  TextMeshPro_o *pTVar5;
  TextContainer_o *pTVar6;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664880 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a24);
    unnamed_function_1099(&DAT_ram_00569b20);
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056bfac);
    unnamed_function_1099(&DAT_ram_0056bfb8);
    unnamed_function_1099(&StringLiteral_2210 /* "Camera Control - <#ffff00>Shift + RMB\n</color>Zoom - <#f..." */);
    unnamed_function_1099(&StringLiteral_3937 /* "Fonts & Materials/LiberationSans SDF - Overlay" */);
    unnamed_function_1099(&StringLiteral_3971 /* "Frame Counter" */);
    unnamed_function_1099(&StringLiteral_3934 /* "Fonts & Materials/LiberationSans SDF" */);
    DAT_ram_00664880 = '\x01';
  }
  iVar1 = unnamed_function_44619(__this,0);
  if (iVar1 != 0) {
    pCVar2 = (Camera_o *)unnamed_function_52349(0);
    __this->m_camera = pCVar2;
    param1 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
    unnamed_function_44695(param1,StringLiteral_3971 /* "Frame Counter" */,0);
    RVar3 = unnamed_function_44683(param1,0);
    __this->m_frameCounter_transform = RVar3;
    uVar4 = unnamed_function_44643(__this->m_camera,0);
    unnamed_function_44983(RVar3,uVar4,0);
    RVar3 = __this->m_frameCounter_transform;
    if (DAT_ram_006603e8 == '\0') {
      unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
      DAT_ram_006603e8 = '\x01';
    }
    local_20 = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
    local_18 = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
    local_10 = local_20;
    local_8 = local_18;
    unnamed_function_44971(RVar3,&local_20,0);
    pTVar5 = (TextMeshPro_o *)unnamed_function_73837(param1,DAT_ram_00569a24);
    __this->m_TextMeshPro = pTVar5;
    uVar4 = unnamed_function_60803(StringLiteral_3934 /* "Fonts & Materials/LiberationSans SDF" */,DAT_ram_0056bfb8);
    unnamed_function_23023(pTVar5,uVar4,0);
    pTVar5 = __this->m_TextMeshPro;
    uVar4 = unnamed_function_60803(StringLiteral_3937 /* "Fonts & Materials/LiberationSans SDF - Overlay" */,DAT_ram_0056bfac);
    iVar1 = pTVar5->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2e0) * 4))
              (pTVar5,uVar4,*(undefined4 *)(iVar1 + 0x2e4));
    unnamed_function_23055(__this->m_TextMeshPro,30.0,0);
    unnamed_function_23106(__this->m_TextMeshPro,1,0);
    pTVar6 = (TextContainer_o *)unnamed_function_73836(param1,DAT_ram_00569b20);
    __this->m_textContainer = pTVar6;
    TMPro_Examples_TMPro_InstructionOverlay__Set_FrameCounter_Position
              (__this,__this->AnchorPosition,(MethodInfo *)__this);
    iVar1 = __this->m_TextMeshPro->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
              (__this->m_TextMeshPro,StringLiteral_2210 /* "Camera Control - <#ffff00>Shift + RMB\n</color>Zoom - <#f..." */,*(undefined4 *)(iVar1 + 0x2d4));
  }
  return;
}

// ---- TMPro.Examples.TMPro_InstructionOverlay$$Set_FrameCounter_Position ----
// C#: void TMPro_Examples_TMPro_InstructionOverlay__Set_FrameCounter_Position (TMPro_Examples_TMPro_InstructionOverlay_o* __this, int32_t anchor_position, const MethodInfo* method);

void TMPro_Examples_TMPro_InstructionOverlay__Set_FrameCounter_Position
               (TMPro_Examples_TMPro_InstructionOverlay_o *__this,
               TMPro_InstructionOverlay_FpsCounterAnchorPositions anchor_position,MethodInfo *method
               )

{
  RuleTile_TilingRuleOutput_Transform RVar1;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (anchor_position == TopLeft) {
    unnamed_function_23309(__this->m_textContainer,0,0);
    RVar1 = __this->m_frameCounter_transform;
    local_18 = 0x42c80000;
    local_b8 = 0x42c80000;
    local_20 = 0x3f80000000000000;
    local_c0 = 0x3f80000000000000;
    unnamed_function_52340(&local_10,__this->m_camera,&local_c0,0);
    local_c8 = local_8;
    local_d0 = local_10;
    unnamed_function_44962(RVar1,&local_d0,0);
  }
  else if (anchor_position == BottomLeft) {
    unnamed_function_23309(__this->m_textContainer,6,0);
    RVar1 = __this->m_frameCounter_transform;
    local_28 = 0x42c80000;
    local_98 = 0x42c80000;
    local_30 = 0;
    local_a0 = 0;
    unnamed_function_52340(&local_10,__this->m_camera,&local_a0,0);
    local_a8 = local_8;
    local_b0 = local_10;
    unnamed_function_44962(RVar1,&local_b0,0);
  }
  else if (anchor_position == TopRight) {
    unnamed_function_23309(__this->m_textContainer,2,0);
    RVar1 = __this->m_frameCounter_transform;
    local_38 = 0x42c80000;
    local_78 = 0x42c80000;
    local_40 = 0x3f8000003f800000;
    local_80 = 0x3f8000003f800000;
    unnamed_function_52340(&local_10,__this->m_camera,&local_80,0);
    local_88 = local_8;
    local_90 = local_10;
    unnamed_function_44962(RVar1,&local_90,0);
  }
  else if (anchor_position == BottomRight) {
    unnamed_function_23309(__this->m_textContainer,8,0);
    RVar1 = __this->m_frameCounter_transform;
    local_48 = 0x42c80000;
    local_58 = 0x42c80000;
    local_50 = 0x3f800000;
    local_60 = 0x3f800000;
    unnamed_function_52340(&local_10,__this->m_camera,&local_60,0);
    local_68 = local_8;
    local_70 = local_10;
    unnamed_function_44962(RVar1,&local_70,0);
  }
  return;
}

// ---- TMPro.Examples.TMPro_InstructionOverlay$$.ctor ----
// C#: void TMPro_Examples_TMPro_InstructionOverlay___ctor (TMPro_Examples_TMPro_InstructionOverlay_o* __this, const MethodInfo* method);

void TMPro_Examples_TMPro_InstructionOverlay___ctor
               (TMPro_Examples_TMPro_InstructionOverlay_o *__this,MethodInfo *method)

{
  __this->AnchorPosition = BottomLeft;
  unnamed_function_44622(__this,0);
  return;
}

