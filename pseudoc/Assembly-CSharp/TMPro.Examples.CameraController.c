// Assembly-CSharp :: TMPro.Examples.CameraController
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CameraController : MonoBehaviour // TypeDefIndex: 5755
{
	// Fields
	private Transform cameraTransform; // 0x10
	private Transform dummyTarget; // 0x14
	public Transform CameraTarget; // 0x18
	public float FollowDistance; // 0x1C
	public float MaxFollowDistance; // 0x20
	public float MinFollowDistance; // 0x24
	public float ElevationAngle; // 0x28
	public float MaxElevationAngle; // 0x2C
	public float MinElevationAngle; // 0x30
	public float OrbitalAngle; // 0x34
	public CameraController.CameraModes CameraMode; // 0x38
	public bool MovementSmoothing; // 0x3C
	public bool RotationSmoothing; // 0x3D
	private bool previousSmoothing; // 0x3E
	public float MovementSmoothingValue; // 0x40
	public float RotationSmoothingValue; // 0x44
	public float MoveSensitivity; // 0x48
	private Vector3 currentVelocity; // 0x4C
	private Vector3 desiredPosition; // 0x58
	private float mouseX; // 0x64
	private float mouseY; // 0x68
	private Vector3 moveVector; // 0x6C
	private float mouseWheel; // 0x78
	private const string event_SmoothingValue = "Slider - Smoothing Value";
	private const string event_FollowDistance = "Slider - Camera Zoom";

	// Methods

	// RVA: 0x3AFB Offset: 0x3AFB VA: 0x3AFB
	private void Awake() { }

	// RVA: 0x3AFC Offset: 0x3AFC VA: 0x3AFC
	private void Start() { }

	// RVA: 0x3AFD Offset: 0x3AFD VA: 0x3AFD
	private void LateUpdate() { }

	// RVA: 0x3AFE Offset: 0x3AFE VA: 0x3AFE
	private void GetPlayerInput() { }

	// RVA: 0x3AFF Offset: 0x3AFF VA: 0x3AFF
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.CameraController$$Awake ----
// C#: void TMPro_Examples_CameraController__Awake (TMPro_Examples_CameraController_o* __this, const MethodInfo* method);

void TMPro_Examples_CameraController__Awake
               (TMPro_Examples_CameraController_o *__this,MethodInfo *method)

{
  int iVar1;
  RuleTile_TilingRuleOutput_Transform RVar2;
  undefined4 param1;
  
  if (DAT_ram_0066485f == '\0') {
    unnamed_function_1099(&UnityEngine_Application_TypeInfo);
    DAT_ram_0066485f = '\x01';
  }
  param1 = 0xffffffff;
  iVar1 = unnamed_function_52745(0);
  if (0 < iVar1) {
    param1 = 0x3c;
  }
  if (*(int *)(UnityEngine_Application_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Application_TypeInfo);
  }
  unnamed_function_52244(param1,0);
  if (*(int *)(UnityEngine_Application_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Application_TypeInfo);
  }
  iVar1 = unnamed_function_52245(0);
  if (iVar1 != 8) {
    if (*(int *)(UnityEngine_Application_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Application_TypeInfo);
    }
    iVar1 = unnamed_function_52245(0);
    if (iVar1 != 0xb) goto code_r0x81a26051;
  }
  unnamed_function_12101(0,0);
code_r0x81a26051:
  RVar2 = unnamed_function_44643(__this,0);
  __this->cameraTransform = RVar2;
  __this->previousSmoothing = __this->MovementSmoothing;
  return;
}

// ---- TMPro.Examples.CameraController$$Start ----
// C#: void TMPro_Examples_CameraController__Start (TMPro_Examples_CameraController_o* __this, const MethodInfo* method);

void TMPro_Examples_CameraController__Start
               (TMPro_Examples_CameraController_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  RuleTile_TilingRuleOutput_Transform RVar2;
  
  if (DAT_ram_00664860 == '\0') {
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_2213 /* "Camera Target" */);
    DAT_ram_00664860 = '\x01';
  }
  RVar2 = __this->CameraTarget;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(RVar2,0,0);
  if (iVar1 != 0) {
    param1 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
    unnamed_function_44695(param1,StringLiteral_2213 /* "Camera Target" */,0);
    RVar2 = unnamed_function_44683(param1,0);
    __this->CameraTarget = RVar2;
    __this->dummyTarget = RVar2;
  }
  return;
}

// ---- TMPro.Examples.CameraController$$LateUpdate ----
// C#: void TMPro_Examples_CameraController__LateUpdate (TMPro_Examples_CameraController_o* __this, const MethodInfo* method);

void TMPro_Examples_CameraController__LateUpdate
               (TMPro_Examples_CameraController_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  int iVar4;
  float fVar5;
  RuleTile_TilingRuleOutput_Transform RVar6;
  float fVar7;
  float fVar8;
  MethodInfo local_170;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  float4 local_108;
  undefined8 local_100;
  float4 local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0 [2];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  float4 local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined4 local_88;
  float4 local_80;
  float4 local_7c;
  float4 local_78;
  float4 local_70;
  float4 local_6c;
  float4 local_68;
  float4 local_60;
  float4 local_5c;
  float4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  float4 local_28;
  undefined8 local_20;
  float4 local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  undefined4 uStack_4;
  
  if (DAT_ram_00664861 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664861 = '\x01';
  }
  TMPro_Examples_CameraController__GetPlayerInput(__this,&local_170);
  RVar6 = __this->CameraTarget;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar4 = unnamed_function_44679(RVar6,0,0);
  if (iVar4 != 0) {
    if (__this->CameraMode == Follow) {
      unnamed_function_44960(&local_10,__this->CameraTarget,0);
      fVar3 = local_8;
      fVar1 = local_10;
      fVar2 = local_c;
      RVar6 = __this->CameraTarget;
      local_88 = 0;
      local_58 = 0.0;
      local_5c = (float4)(__this->OrbitalAngle * 0.017453292);
      local_60 = (float4)(__this->ElevationAngle * 0.017453292);
      local_90 = _local_60;
      unnamed_function_8664(&local_10,&local_90,0);
      local_a8 = -__this->FollowDistance;
      local_30 = 0;
      local_a0[0] = _local_10;
      local_b0 = 0;
      local_28 = (float4)local_a8;
      unnamed_function_8675(&local_60,local_a0,&local_b0,0);
      local_b8 = local_58;
      local_c0 = _local_60;
      unnamed_function_44992(&local_80,RVar6,&local_c0,0);
      (__this->desiredPosition).z = (float)fVar3 + (float)local_78;
      (__this->desiredPosition).y = (float)fVar2 + (float)local_7c;
      (__this->desiredPosition).x = (float)fVar1 + (float)local_80;
    }
    else if (__this->CameraMode == Isometric) {
      unnamed_function_44960(&local_10,__this->CameraTarget,0);
      fVar3 = local_8;
      fVar1 = local_10;
      fVar2 = local_c;
      local_c8 = 0;
      local_58 = 0.0;
      local_5c = (float4)(__this->OrbitalAngle * 0.017453292);
      local_60 = (float4)(__this->ElevationAngle * 0.017453292);
      local_d0 = _local_60;
      unnamed_function_8664(&local_10,&local_d0,0);
      local_e8 = -__this->FollowDistance;
      local_20 = 0;
      local_e0[0] = _local_10;
      local_f0 = 0;
      local_18 = (float4)local_e8;
      unnamed_function_8675(&local_60,local_e0,&local_f0,0);
      (__this->desiredPosition).z = (float)fVar3 + (float)local_58;
      (__this->desiredPosition).y = (float)fVar2 + (float)local_5c;
      (__this->desiredPosition).x = (float)fVar1 + (float)local_60;
    }
    RVar6 = __this->cameraTransform;
    if (__this->MovementSmoothing == false) {
      local_128 = (__this->desiredPosition).z;
      local_130._0_4_ = (__this->desiredPosition).x;
      local_130._4_4_ = (__this->desiredPosition).y;
      unnamed_function_44962(RVar6,&local_130,0);
    }
    else {
      unnamed_function_44960(&local_80,RVar6,0);
      local_48 = (__this->desiredPosition).z;
      local_50._0_4_ = (__this->desiredPosition).x;
      local_50._4_4_ = (__this->desiredPosition).y;
      fVar7 = __this->MovementSmoothingValue;
      fVar5 = unnamed_function_44884(0);
      local_58 = local_78;
      local_8 = (float4)local_48;
      local_5c = local_7c;
      local_60 = local_80;
      _local_10 = local_50;
      fVar8 = unnamed_function_44879(0);
      local_f8 = local_58;
      local_108 = local_8;
      local_100 = _local_60;
      local_110 = _local_10;
      unnamed_function_8596
                (&local_40,&local_100,&local_110,&__this->currentVelocity,fVar7 * fVar5,INFINITY,
                 fVar8,0);
      local_118 = local_38;
      local_120 = local_40;
      unnamed_function_44962(RVar6,&local_120,0);
    }
    RVar6 = __this->cameraTransform;
    if (__this->RotationSmoothing == false) {
      unnamed_function_44998(RVar6,__this->CameraTarget,0);
    }
    else {
      unnamed_function_44965(&local_10,RVar6,0);
      unnamed_function_44960(&local_60,__this->CameraTarget,0);
      fVar3 = local_58;
      fVar1 = local_60;
      fVar2 = local_5c;
      unnamed_function_44960(&local_60,__this->cameraTransform,0);
      local_138 = (float)fVar3 - (float)local_58;
      local_6c = (float4)((float)fVar2 - (float)local_5c);
      local_70 = (float4)((float)fVar1 - (float)local_60);
      local_140 = CONCAT44(local_6c,local_70);
      local_68 = (float4)local_138;
      unnamed_function_8672(&local_60,&local_140,0);
      fVar8 = __this->RotationSmoothingValue;
      fVar5 = unnamed_function_44879(0);
      local_148 = CONCAT44(uStack_4,local_8);
      local_170._28_4_ = uStack_54;
      local_170._24_4_ = local_58;
      local_150 = _local_10;
      local_170._16_8_ = _local_60;
      unnamed_function_8662(&local_80,&local_150,&local_170.field_0x10,fVar8 * fVar5,0);
      unnamed_function_44967(RVar6,&local_170,0);
    }
  }
  return;
}

// ---- TMPro.Examples.CameraController$$GetPlayerInput ----
// C#: void TMPro_Examples_CameraController__GetPlayerInput (TMPro_Examples_CameraController_o* __this, const MethodInfo* method);

void TMPro_Examples_CameraController__GetPlayerInput
               (TMPro_Examples_CameraController_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined1 auVar2 [8];
  undefined1 auVar3 [8];
  undefined1 auVar4 [8];
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  RuleTile_TilingRuleOutput_Transform RVar9;
  RuleTile_TilingRuleOutput_Transform param1;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 local_228;
  float local_220;
  undefined8 local_218 [2];
  undefined1 local_208 [8];
  undefined4 local_200;
  undefined8 local_1f8 [2];
  undefined1 local_1e8 [8];
  undefined4 local_1e0;
  undefined8 local_1d8 [2];
  undefined8 local_1c8;
  undefined1 local_1c0 [8];
  undefined4 local_1b8;
  undefined1 local_1b0 [8];
  float4 local_1a8;
  float4 local_1a4;
  undefined4 local_1a0;
  float4 local_160;
  float4 local_15c;
  float4 local_158;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  undefined1 auStack_108 [72];
  undefined1 auStack_c0 [72];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [36];
  int local_24;
  
  if (DAT_ram_00664862 == '\0') {
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&UnityEngine_Physics_TypeInfo);
    unnamed_function_1099(&StringLiteral_5446 /* "Mouse Y" */);
    unnamed_function_1099(&StringLiteral_5445 /* "Mouse X" */);
    unnamed_function_1099(&StringLiteral_2213 /* "Camera Target" */);
    unnamed_function_1099(&StringLiteral_5444 /* "Mouse ScrollWheel" */);
    DAT_ram_00664862 = '\x01';
  }
  unnamed_function_486(auStack_48,0,0x44);
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  unnamed_function_486(auStack_c0,0,0x44);
  unnamed_function_486(auStack_108,0,0x44);
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  uVar12 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  (__this->moveVector).z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  (__this->moveVector).x = (float)(int)uVar12;
  (__this->moveVector).y = (float)(int)((ulonglong)uVar12 >> 0x20);
  fVar5 = unnamed_function_12085(StringLiteral_5444 /* "Mouse ScrollWheel" */,0);
  __this->mouseWheel = fVar5;
  iVar6 = unnamed_function_12114(0);
  iVar7 = unnamed_function_12090(0x130,0);
  if (((iVar7 != 0) || (iVar7 = unnamed_function_12090(0x12f,0), iVar7 != 0)) || (0 < iVar6)) {
    __this->mouseWheel = __this->mouseWheel * 10.0;
    iVar7 = unnamed_function_12092(0x69,0);
    if (iVar7 != 0) {
      __this->CameraMode = Isometric;
    }
    iVar7 = unnamed_function_12092(0x66,0);
    if (iVar7 != 0) {
      __this->CameraMode = Follow;
    }
    iVar7 = unnamed_function_12092(0x73,0);
    if (iVar7 != 0) {
      __this->MovementSmoothing = (bool)(__this->MovementSmoothing ^ 1);
    }
    iVar7 = unnamed_function_12093(1,0);
    if (iVar7 != 0) {
      fVar5 = unnamed_function_12085(StringLiteral_5446 /* "Mouse Y" */,0);
      __this->mouseY = fVar5;
      fVar5 = unnamed_function_12085(StringLiteral_5445 /* "Mouse X" */,0);
      __this->mouseX = fVar5;
      fVar13 = __this->mouseY;
      if (0.01 < fVar13 || fVar13 < -0.01) {
        fVar10 = __this->ElevationAngle - fVar13 * __this->MoveSensitivity;
        fVar13 = __this->MaxElevationAngle;
        if (fVar10 <= __this->MaxElevationAngle) {
          fVar13 = fVar10;
        }
        fVar11 = __this->MinElevationAngle;
        if (__this->MinElevationAngle <= fVar10) {
          fVar11 = fVar13;
        }
        __this->ElevationAngle = fVar11;
      }
      if (fVar5 < -0.01 || 0.01 < fVar5) {
        fVar13 = __this->OrbitalAngle + fVar5 * __this->MoveSensitivity;
        __this->OrbitalAngle = fVar13;
        fVar5 = fVar13 + -360.0;
        if (360.0 >= fVar13) {
          fVar5 = fVar13;
        }
        if (fVar5 < 0.0 || 360.0 < fVar13) {
          fVar13 = fVar5 + 360.0;
          if (0.0 <= fVar5) {
            fVar13 = fVar5;
          }
          __this->OrbitalAngle = fVar13;
        }
      }
    }
    if (iVar6 == 1) {
      unnamed_function_12096(&local_150,0,0);
      unnamed_function_485(auStack_48,&local_150,0x44);
      if (local_24 == 1) {
        unnamed_function_12096(&local_150,0,0);
        unnamed_function_485(auStack_48,&local_150,0x44);
        unnamed_function_1360(&local_1a8,auStack_48,0);
        if (0.01 < (float)local_1a4 || (float)local_1a4 < -0.01) {
          fVar13 = __this->ElevationAngle + (float)local_1a4 * -0.1;
          fVar5 = __this->MaxElevationAngle;
          if (fVar13 <= __this->MaxElevationAngle) {
            fVar5 = fVar13;
          }
          fVar10 = __this->MinElevationAngle;
          if (__this->MinElevationAngle <= fVar13) {
            fVar10 = fVar5;
          }
          __this->ElevationAngle = fVar10;
        }
        if ((float)local_1a8 < -0.01 || 0.01 < (float)local_1a8) {
          fVar13 = (float)local_1a8 * 0.1 + __this->OrbitalAngle;
          __this->OrbitalAngle = fVar13;
          fVar5 = fVar13 + -360.0;
          if (360.0 >= fVar13) {
            fVar5 = fVar13;
          }
          if (fVar5 < 0.0 || 360.0 < fVar13) {
            fVar13 = fVar5 + 360.0;
            if (0.0 <= fVar5) {
              fVar13 = fVar5;
            }
            __this->OrbitalAngle = fVar13;
          }
        }
      }
    }
    iVar7 = unnamed_function_12093(0,0);
    if (iVar7 != 0) {
      uVar8 = unnamed_function_52349(0);
      unnamed_function_12103(&local_1a8,0);
      local_1b8 = local_1a0;
      unnamed_function_52347(&local_150,uVar8,local_1c0,0);
      if (*(int *)(UnityEngine_Physics_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Physics_TypeInfo);
      }
      local_1c8 = local_140;
      local_1d8[0] = local_150;
      iVar7 = unnamed_function_15149
                        (local_1d8,&local_78,300.0,
                         s___Scripting__UnityEngine__Player_ram_00005bb1 + 0x4f,0);
      if (iVar7 != 0) {
        uVar8 = unnamed_function_15211(&local_78,0);
        RVar9 = __this->CameraTarget;
        if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
          unnamed_function_94848(UnityEngine_Object_TypeInfo);
        }
        iVar7 = unnamed_function_44710(uVar8,RVar9,0);
        if (iVar7 == 0) {
          RVar9 = unnamed_function_15211(&local_78,0);
          __this->OrbitalAngle = 0.0;
          __this->CameraTarget = RVar9;
          __this->MovementSmoothing = __this->previousSmoothing;
        }
        else {
          __this->OrbitalAngle = 0.0;
        }
      }
    }
    iVar7 = unnamed_function_12093(2,0);
    if (iVar7 != 0) {
      RVar9 = __this->dummyTarget;
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Object_TypeInfo);
      }
      iVar7 = unnamed_function_44710(RVar9,0,0);
      if (iVar7 == 0) {
        RVar9 = __this->CameraTarget;
        param1 = __this->dummyTarget;
        if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
          unnamed_function_94848(UnityEngine_Object_TypeInfo);
        }
        iVar7 = unnamed_function_44679(param1,RVar9,0);
        if (iVar7 != 0) {
          RVar9 = __this->dummyTarget;
          unnamed_function_44960(&local_1a8,__this->CameraTarget,0);
          local_1e0 = local_1a0;
          unnamed_function_44962(RVar9,local_1e8,0);
          RVar9 = __this->dummyTarget;
          unnamed_function_44965(&local_150,__this->CameraTarget,0);
          local_1f8[0] = local_150;
          unnamed_function_44967(RVar9,local_1f8,0);
          __this->CameraTarget = __this->dummyTarget;
          bVar1 = __this->MovementSmoothing;
          __this->MovementSmoothing = false;
          __this->previousSmoothing = bVar1;
        }
      }
      else {
        uVar8 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
        unnamed_function_44695(uVar8,StringLiteral_2213 /* "Camera Target" */,0);
        RVar9 = unnamed_function_44683(uVar8,0);
        __this->dummyTarget = RVar9;
        unnamed_function_44960(&local_1a8,__this->CameraTarget,0);
        local_200 = local_1a0;
        unnamed_function_44962(RVar9,local_208,0);
        RVar9 = __this->dummyTarget;
        unnamed_function_44965(&local_150,__this->CameraTarget,0);
        local_218[0] = local_150;
        unnamed_function_44967(RVar9,local_218,0);
        __this->CameraTarget = __this->dummyTarget;
        bVar1 = __this->MovementSmoothing;
        __this->MovementSmoothing = false;
        __this->previousSmoothing = bVar1;
      }
      fVar5 = unnamed_function_12085(StringLiteral_5446 /* "Mouse Y" */,0);
      __this->mouseY = fVar5;
      fVar5 = unnamed_function_12085(StringLiteral_5445 /* "Mouse X" */,0);
      __this->mouseX = fVar5;
      unnamed_function_45003(&local_150,__this->cameraTransform,fVar5,__this->mouseY,0.0,0);
      (__this->moveVector).z = local_148;
      (__this->moveVector).x = (float)(undefined4)local_150;
      (__this->moveVector).y = (float)local_150._4_4_;
      local_220 = -(__this->moveVector).z;
      local_15c = (float4)-(__this->moveVector).y;
      local_160 = (float4)-(__this->moveVector).x;
      local_228 = CONCAT44(local_15c,local_160);
      local_158 = (float4)local_220;
      unnamed_function_44991(__this->dummyTarget,&local_228,0,0);
    }
    if (iVar6 == 2) {
      unnamed_function_12096(&local_150,0,0);
      unnamed_function_485(auStack_c0,&local_150,0x44);
      unnamed_function_12096(&local_1a8,1,0);
      unnamed_function_485(auStack_108,&local_1a8,0x44);
      unnamed_function_9233(local_1b0,auStack_c0,0);
      auVar2 = local_1b0;
      unnamed_function_1360(local_1b0,auStack_c0,0);
      auVar3 = local_1b0;
      unnamed_function_9233(local_1b0,auStack_108,0);
      auVar4 = local_1b0;
      unnamed_function_1360(local_1b0,auStack_108,0);
      fVar13 = local_1b0._4_4_;
      fVar5 = local_1b0._0_4_;
      if (DAT_ram_006634ad == '\0') {
        unnamed_function_1099(&System_Math_TypeInfo);
        DAT_ram_006634ad = '\x01';
      }
      fVar13 = (auVar2._4_4_ - auVar3._4_4_) - (auVar4._4_4_ - fVar13);
      fVar5 = (auVar2._0_4_ - auVar3._0_4_) - (auVar4._0_4_ - fVar5);
      if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(System_Math_TypeInfo);
      }
      unnamed_function_9233(local_1b0,auStack_c0,0);
      auVar2 = local_1b0;
      unnamed_function_9233(local_1b0,auStack_108,0);
      if (DAT_ram_006634ad == '\0') {
        unnamed_function_1099(&System_Math_TypeInfo);
        DAT_ram_006634ad = '\x01';
      }
      fVar10 = auVar2._4_4_ - local_1b0._4_4_;
      fVar11 = auVar2._0_4_ - local_1b0._0_4_;
      if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(System_Math_TypeInfo);
      }
      fVar5 = SQRT(fVar5 * fVar5 + fVar13 * fVar13) - SQRT(fVar11 * fVar11 + fVar10 * fVar10);
      if (0.01 < fVar5 || fVar5 < -0.01) {
        fVar13 = fVar5 * 0.25 + __this->FollowDistance;
        fVar5 = __this->MaxFollowDistance;
        if (fVar13 <= __this->MaxFollowDistance) {
          fVar5 = fVar13;
        }
        fVar10 = __this->MinFollowDistance;
        if (__this->MinFollowDistance <= fVar13) {
          fVar10 = fVar5;
        }
        __this->FollowDistance = fVar10;
      }
    }
  }
  fVar5 = __this->mouseWheel;
  if (fVar5 < -0.01 || 0.01 < fVar5) {
    fVar13 = __this->FollowDistance + fVar5 * -5.0;
    fVar5 = __this->MaxFollowDistance;
    if (fVar13 <= __this->MaxFollowDistance) {
      fVar5 = fVar13;
    }
    fVar10 = __this->MinFollowDistance;
    if (__this->MinFollowDistance <= fVar13) {
      fVar10 = fVar5;
    }
    __this->FollowDistance = fVar10;
  }
  return;
}

// ---- TMPro.Examples.CameraController$$.ctor ----
// C#: void TMPro_Examples_CameraController___ctor (TMPro_Examples_CameraController_o* __this, const MethodInfo* method);

void TMPro_Examples_CameraController___ctor
               (TMPro_Examples_CameraController_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  
  __this->MoveSensitivity = 2.0;
  __this->MovementSmoothingValue = 25.0;
  __this->RotationSmoothingValue = 5.0;
  __this->MovementSmoothing = true;
  __this->MaxElevationAngle = 85.0;
  __this->MinFollowDistance = 2.0;
  __this->ElevationAngle = 30.0;
  __this->FollowDistance = 30.0;
  __this->MaxFollowDistance = 100.0;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  uVar1 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  (__this->currentVelocity).z =
       *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  (__this->currentVelocity).x = (float)(int)uVar1;
  (__this->currentVelocity).y = (float)(int)((ulonglong)uVar1 >> 0x20);
  unnamed_function_44622(__this,0);
  return;
}

