// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.CameraController.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(a)(args)                  virtual call through vtable slot a
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

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
    private void Awake()
    {
        int iVar1 = default;
        RuleTile_TilingRuleOutput_Transform RVar2 = default;
        int param1 = default;

        param1 = 0xffffffff;
        iVar1 = UnityEngine.QualitySettings.get_vSyncCount(0);
        if (0 < iVar1) {
            param1 = 0x3c;
        }
        UnityEngine.Application.set_targetFrameRate(param1,0);
        iVar1 = UnityEngine.Application.get_platform(0);
        if (iVar1 != 8) {
            iVar1 = UnityEngine.Application.get_platform(0);
            if (iVar1 != 0xb) goto code_r0x81a26051;
        }
        UnityEngine.Input.set_simulateMouseWithTouches(0,0);
        code_r0x81a26051: RVar2 = UnityEngine.Component.get_transform(this,0);
        this.cameraTransform = RVar2;
        this.previousSmoothing = this.MovementSmoothing;
    }

    // RVA: 0x3AFC Offset: 0x3AFC VA: 0x3AFC
    private void Start()
    {
        int iVar1 = default;
        int param1 = default;
        RuleTile_TilingRuleOutput_Transform RVar2 = default;

        RVar2 = this.CameraTarget;
        iVar1 = UnityEngine.Object.op_Equality(RVar2,0,0);
        if (iVar1 != 0) {
            param1 = new UnityEngine_GameObject();
            UnityEngine.GameObject.__ctor(param1,"Camera Target",0);
            RVar2 = UnityEngine.GameObject.get_transform(param1,0);
            this.CameraTarget = RVar2;
            this.dummyTarget = RVar2;
        }
    }

    // RVA: 0x3AFD Offset: 0x3AFD VA: 0x3AFD
    private void LateUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        int iVar4 = default;
        float fVar5 = default;
        RuleTile_TilingRuleOutput_Transform RVar6 = default;
        float fVar7 = default;
        float fVar8 = default;
        MethodInfo local_170 = default;
        long local_150 = default;
        long local_148 = default;
        long local_140 = default;
        float local_138 = default;
        long local_130 = default;
        float local_128 = default;
        long local_120 = default;
        int local_118 = default;
        long local_110 = default;
        float local_108 = default;
        long local_100 = default;
        float local_f8 = default;
        long local_f0 = default;
        float local_e8 = default;
        long local_d0 = default;
        int local_c8 = default;
        long local_c0 = default;
        float local_b8 = default;
        long local_b0 = default;
        float local_a8 = default;
        long local_90 = default;
        int local_88 = default;
        float local_80 = default;
        float local_7c = default;
        float local_78 = default;
        float local_70 = default;
        float local_6c = default;
        float local_68 = default;
        float local_60 = default;
        float local_5c = default;
        float local_58 = default;
        int uStack_54 = default;
        long local_50 = default;
        float local_48 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        float local_28 = default;
        long local_20 = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;
        int uStack_4 = default;

        long[] local_e0 = new long[2];
        long[] local_a0 = new long[2];
        this.GetPlayerInput(&local_170);
        RVar6 = this.CameraTarget;
        iVar4 = (RVar6 != null);
        if (iVar4 != 0) {
            if (this.CameraMode == Follow) {
                UnityEngine.Transform.get_position(&local_10,this.CameraTarget,0);
                fVar3 = local_8;
                fVar1 = local_10;
                fVar2 = local_c;
                RVar6 = this.CameraTarget;
                local_88 = 0;
                local_58 = 0.0;
                local_5c = (float)(this.OrbitalAngle * 0.017453292);
                local_60 = (float)(this.ElevationAngle * 0.017453292);
                local_90 = _local_60;
                UnityEngine.Quaternion.Internal_FromEulerRad(&local_10,&local_90,0);
                local_a8 = -this.FollowDistance;
                local_30 = 0;
                local_a0[0] = _local_10;
                local_b0 = 0;
                local_28 = (float)local_a8;
                UnityEngine.Quaternion.op_Multiply(&local_60,local_a0,&local_b0,0);
                local_b8 = local_58;
                local_c0 = _local_60;
                UnityEngine.Transform.TransformDirection(&local_80,RVar6,&local_c0,0);
                this.desiredPosition.z = (float)fVar3 + (float)local_78;
                this.desiredPosition.y = (float)fVar2 + (float)local_7c;
                this.desiredPosition.x = (float)fVar1 + (float)local_80;
            }
            else if (this.CameraMode == Isometric) {
                UnityEngine.Transform.get_position(&local_10,this.CameraTarget,0);
                fVar3 = local_8;
                fVar1 = local_10;
                fVar2 = local_c;
                local_c8 = 0;
                local_58 = 0.0;
                local_5c = (float)(this.OrbitalAngle * 0.017453292);
                local_60 = (float)(this.ElevationAngle * 0.017453292);
                local_d0 = _local_60;
                UnityEngine.Quaternion.Internal_FromEulerRad(&local_10,&local_d0,0);
                local_e8 = -this.FollowDistance;
                local_20 = 0;
                local_e0[0] = _local_10;
                local_f0 = 0;
                local_18 = (float)local_e8;
                UnityEngine.Quaternion.op_Multiply(&local_60,local_e0,&local_f0,0);
                this.desiredPosition.z = (float)fVar3 + (float)local_58;
                this.desiredPosition.y = (float)fVar2 + (float)local_5c;
                this.desiredPosition.x = (float)fVar1 + (float)local_60;
            }
            RVar6 = this.cameraTransform;
            if (this.MovementSmoothing == false) {
                local_128 = this.desiredPosition.z;
                local_130._0_4_ = this.desiredPosition.x;
                local_130._4_4_ = this.desiredPosition.y;
                unnamed_function_44962(RVar6,&local_130,0);
            }
            else {
                UnityEngine.Transform.get_position(&local_80,RVar6,0);
                local_48 = this.desiredPosition.z;
                local_50._0_4_ = this.desiredPosition.x;
                local_50._4_4_ = this.desiredPosition.y;
                fVar7 = this.MovementSmoothingValue;
                fVar5 = UnityEngine.Time.get_fixedDeltaTime(0);
                local_58 = local_78;
                local_8 = (float)local_48;
                local_5c = local_7c;
                local_60 = local_80;
                _local_10 = local_50;
                fVar8 = UnityEngine.Time.get_deltaTime(0);
                local_f8 = local_58;
                local_108 = local_8;
                local_100 = _local_60;
                local_110 = _local_10;
                UnityEngine.Vector3.SmoothDamp(&local_40,&local_100,&local_110,&this.currentVelocity,fVar7 * fVar5,INFINITY, fVar8,0);
                local_118 = local_38;
                local_120 = local_40;
                unnamed_function_44962(RVar6,&local_120,0);
            }
            RVar6 = this.cameraTransform;
            if (this.RotationSmoothing == false) {
                UnityEngine.Transform.LookAt(RVar6,this.CameraTarget,0);
            }
            else {
                UnityEngine.Transform.get_rotation(&local_10,RVar6,0);
                UnityEngine.Transform.get_position(&local_60,this.CameraTarget,0);
                fVar3 = local_58;
                fVar1 = local_60;
                fVar2 = local_5c;
                UnityEngine.Transform.get_position(&local_60,this.cameraTransform,0);
                local_138 = (float)fVar3 - (float)local_58;
                local_6c = (float)((float)fVar2 - (float)local_5c);
                local_70 = (float)((float)fVar1 - (float)local_60);
                local_140 = CONCAT44(local_6c,local_70);
                local_68 = (float)local_138;
                UnityEngine.Quaternion.LookRotation(&local_60,&local_140,0);
                fVar8 = this.RotationSmoothingValue;
                fVar5 = UnityEngine.Time.get_deltaTime(0);
                local_148 = CONCAT44(uStack_4,local_8);
                local_170._28_4_ = uStack_54;
                local_170._24_4_ = local_58;
                local_150 = _local_10;
                local_170._16_8_ = _local_60;
                UnityEngine.Quaternion.Lerp(&local_80,&local_150,&local_170.field_0x10,fVar8 * fVar5,0);
                unnamed_function_44967(RVar6,&local_170,0);
            }
        }
    }

    // RVA: 0x3AFE Offset: 0x3AFE VA: 0x3AFE
    private void GetPlayerInput()
    {
        bool bVar1 = default;
        float fVar5 = default;
        int iVar6 = default;
        int iVar7 = default;
        int uVar8 = default;
        RuleTile_TilingRuleOutput_Transform RVar9 = default;
        RuleTile_TilingRuleOutput_Transform param1 = default;
        float fVar10 = default;
        float fVar11 = default;
        long uVar12 = default;
        float fVar13 = default;
        long local_228 = default;
        float local_220 = default;
        int local_200 = default;
        int local_1e0 = default;
        long local_1c8 = default;
        int local_1b8 = default;
        float local_1a8 = default;
        float local_1a4 = default;
        int local_1a0 = default;
        float local_160 = default;
        float local_15c = default;
        float local_158 = default;
        long local_150 = default;
        float local_148 = default;
        long local_140 = default;
        long local_78 = default;
        long local_70 = default;
        long local_68 = default;
        long local_60 = default;
        long local_58 = default;
        int local_50 = default;
        int local_24 = default;

        byte[] auVar2 = new byte[8];
        byte[] auVar3 = new byte[8];
        byte[] auVar4 = new byte[8];
        long[] local_218 = new long[2];
        byte[] local_208 = new byte[8];
        long[] local_1f8 = new long[2];
        byte[] local_1e8 = new byte[8];
        long[] local_1d8 = new long[2];
        byte[] local_1c0 = new byte[8];
        byte[] local_1b0 = new byte[8];
        byte[] auStack_108 = new byte[72];
        byte[] auStack_c0 = new byte[72];
        byte[] auStack_48 = new byte[36];
        unnamed_function_486(auStack_48,0,0x44);
        local_50 = 0;
        local_58 = 0;
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        unnamed_function_486(auStack_c0,0,0x44);
        unnamed_function_486(auStack_108,0,0x44);
        uVar12 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        this.moveVector.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        this.moveVector.x = (float)(int)uVar12;
        this.moveVector.y = (float)(int)((ulong)uVar12 >> 0x20);
        fVar5 = unnamed_function_12085("Mouse ScrollWheel",0);
        this.mouseWheel = fVar5;
        iVar6 = UnityEngine.Input.get_touchCount(0);
        iVar7 = unnamed_function_12090(0x130,0);
        if (((iVar7 != 0) || (iVar7 = unnamed_function_12090(0x12f,0), iVar7 != 0)) || (0 < iVar6)) {
            this.mouseWheel = this.mouseWheel * 10.0;
            iVar7 = unnamed_function_12092(0x69,0);
            if (iVar7 != 0) {
                this.CameraMode = Isometric;
            }
            iVar7 = unnamed_function_12092(0x66,0);
            if (iVar7 != 0) {
                this.CameraMode = Follow;
            }
            iVar7 = unnamed_function_12092(0x73,0);
            if (iVar7 != 0) {
                this.MovementSmoothing = (bool)(this.MovementSmoothing ^ 1);
            }
            iVar7 = UnityEngine.Input.GetMouseButton(1,0);
            if (iVar7 != 0) {
                fVar5 = unnamed_function_12085("Mouse Y",0);
                this.mouseY = fVar5;
                fVar5 = unnamed_function_12085("Mouse X",0);
                this.mouseX = fVar5;
                fVar13 = this.mouseY;
                if (0.01 < fVar13 || fVar13 < -0.01) {
                    fVar10 = this.ElevationAngle - fVar13 * this.MoveSensitivity;
                    fVar13 = this.MaxElevationAngle;
                    if (fVar10 <= this.MaxElevationAngle) {
                        fVar13 = fVar10;
                    }
                    fVar11 = this.MinElevationAngle;
                    if (this.MinElevationAngle <= fVar10) {
                        fVar11 = fVar13;
                    }
                    this.ElevationAngle = fVar11;
                }
                if (fVar5 < -0.01 || 0.01 < fVar5) {
                    fVar13 = this.OrbitalAngle + fVar5 * this.MoveSensitivity;
                    this.OrbitalAngle = fVar13;
                    fVar5 = fVar13 + -360.0;
                    if (360.0 >= fVar13) {
                        fVar5 = fVar13;
                    }
                    if (fVar5 < 0.0 || 360.0 < fVar13) {
                        fVar13 = fVar5 + 360.0;
                        if (0.0 <= fVar5) {
                            fVar13 = fVar5;
                        }
                        this.OrbitalAngle = fVar13;
                    }
                }
            }
            if (iVar6 == 1) {
                UnityEngine.Input.GetTouch(&local_150,0,0);
                unnamed_function_485(auStack_48,&local_150,0x44);
                if (local_24 == 1) {
                    UnityEngine.Input.GetTouch(&local_150,0,0);
                    unnamed_function_485(auStack_48,&local_150,0x44);
                    unnamed_function_1360(&local_1a8,auStack_48,0);
                    if (0.01 < (float)local_1a4 || (float)local_1a4 < -0.01) {
                        fVar13 = this.ElevationAngle + (float)local_1a4 * -0.1;
                        fVar5 = this.MaxElevationAngle;
                        if (fVar13 <= this.MaxElevationAngle) {
                            fVar5 = fVar13;
                        }
                        fVar10 = this.MinElevationAngle;
                        if (this.MinElevationAngle <= fVar13) {
                            fVar10 = fVar5;
                        }
                        this.ElevationAngle = fVar10;
                    }
                    if ((float)local_1a8 < -0.01 || 0.01 < (float)local_1a8) {
                        fVar13 = (float)local_1a8 * 0.1 + this.OrbitalAngle;
                        this.OrbitalAngle = fVar13;
                        fVar5 = fVar13 + -360.0;
                        if (360.0 >= fVar13) {
                            fVar5 = fVar13;
                        }
                        if (fVar5 < 0.0 || 360.0 < fVar13) {
                            fVar13 = fVar5 + 360.0;
                            if (0.0 <= fVar5) {
                                fVar13 = fVar5;
                            }
                            this.OrbitalAngle = fVar13;
                        }
                    }
                }
            }
            iVar7 = UnityEngine.Input.GetMouseButton(0,0);
            if (iVar7 != 0) {
                uVar8 = UnityEngine.Camera.get_main(0);
                UnityEngine.Input.get_mousePosition(&local_1a8,0);
                local_1b8 = local_1a0;
                UnityEngine.Camera.ScreenPointToRay(&local_150,uVar8,local_1c0,0);
                local_1c8 = local_140;
                local_1d8[0] = local_150;
                iVar7 = UnityEngine.Physics.Raycast(local_1d8,&local_78,300.0, s___Scripting__UnityEngine__Player_ram_00005bb1 + 0x4f,0);
                if (iVar7 != 0) {
                    uVar8 = UnityEngine.RaycastHit.get_transform(&local_78,0);
                    RVar9 = this.CameraTarget;
                    iVar7 = UnityEngine.Object.op_Equality(uVar8,RVar9,0);
                    if (iVar7 == 0) {
                        RVar9 = UnityEngine.RaycastHit.get_transform(&local_78,0);
                        this.OrbitalAngle = 0.0;
                        this.CameraTarget = RVar9;
                        this.MovementSmoothing = this.previousSmoothing;
                    }
                    else {
                        this.OrbitalAngle = 0.0;
                    }
                }
            }
            iVar7 = UnityEngine.Input.GetMouseButton(2,0);
            if (iVar7 != 0) {
                RVar9 = this.dummyTarget;
                iVar7 = UnityEngine.Object.op_Equality(RVar9,0,0);
                if (iVar7 == 0) {
                    RVar9 = this.CameraTarget;
                    param1 = this.dummyTarget;
                    iVar7 = (param1 != RVar9);
                    if (iVar7 != 0) {
                        RVar9 = this.dummyTarget;
                        UnityEngine.Transform.get_position(&local_1a8,this.CameraTarget,0);
                        local_1e0 = local_1a0;
                        unnamed_function_44962(RVar9,local_1e8,0);
                        RVar9 = this.dummyTarget;
                        UnityEngine.Transform.get_rotation(&local_150,this.CameraTarget,0);
                        local_1f8[0] = local_150;
                        unnamed_function_44967(RVar9,local_1f8,0);
                        this.CameraTarget = this.dummyTarget;
                        bVar1 = this.MovementSmoothing;
                        this.MovementSmoothing = false;
                        this.previousSmoothing = bVar1;
                    }
                }
                else {
                    uVar8 = new UnityEngine_GameObject();
                    UnityEngine.GameObject.__ctor(uVar8,"Camera Target",0);
                    RVar9 = UnityEngine.GameObject.get_transform(uVar8,0);
                    this.dummyTarget = RVar9;
                    UnityEngine.Transform.get_position(&local_1a8,this.CameraTarget,0);
                    local_200 = local_1a0;
                    unnamed_function_44962(RVar9,local_208,0);
                    RVar9 = this.dummyTarget;
                    UnityEngine.Transform.get_rotation(&local_150,this.CameraTarget,0);
                    local_218[0] = local_150;
                    unnamed_function_44967(RVar9,local_218,0);
                    this.CameraTarget = this.dummyTarget;
                    bVar1 = this.MovementSmoothing;
                    this.MovementSmoothing = false;
                    this.previousSmoothing = bVar1;
                }
                fVar5 = unnamed_function_12085("Mouse Y",0);
                this.mouseY = fVar5;
                fVar5 = unnamed_function_12085("Mouse X",0);
                this.mouseX = fVar5;
                UnityEngine.Transform.TransformDirection(&local_150,this.cameraTransform,fVar5,this.mouseY,0.0,0);
                this.moveVector.z = local_148;
                this.moveVector.x = (float)(int)local_150;
                this.moveVector.y = (float)local_150._4_4_;
                local_220 = -this.moveVector.z;
                local_15c = (float)-this.moveVector.y;
                local_160 = (float)-this.moveVector.x;
                local_228 = CONCAT44(local_15c,local_160);
                local_158 = (float)local_220;
                UnityEngine.Transform.Translate(this.dummyTarget,&local_228,0,0);
            }
            if (iVar6 == 2) {
                UnityEngine.Input.GetTouch(&local_150,0,0);
                unnamed_function_485(auStack_c0,&local_150,0x44);
                UnityEngine.Input.GetTouch(&local_1a8,1,0);
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
                fVar13 = (auVar2._4_4_ - auVar3._4_4_) - (auVar4._4_4_ - fVar13);
                fVar5 = (auVar2._0_4_ - auVar3._0_4_) - (auVar4._0_4_ - fVar5);
                unnamed_function_9233(local_1b0,auStack_c0,0);
                auVar2 = local_1b0;
                unnamed_function_9233(local_1b0,auStack_108,0);
                fVar10 = auVar2._4_4_ - local_1b0._4_4_;
                fVar11 = auVar2._0_4_ - local_1b0._0_4_;
                fVar5 = Mathf.Sqrt(fVar5 * fVar5 + fVar13 * fVar13) - Mathf.Sqrt(fVar11 * fVar11 + fVar10 * fVar10);
                if (0.01 < fVar5 || fVar5 < -0.01) {
                    fVar13 = fVar5 * 0.25 + this.FollowDistance;
                    fVar5 = this.MaxFollowDistance;
                    if (fVar13 <= this.MaxFollowDistance) {
                        fVar5 = fVar13;
                    }
                    fVar10 = this.MinFollowDistance;
                    if (this.MinFollowDistance <= fVar13) {
                        fVar10 = fVar5;
                    }
                    this.FollowDistance = fVar10;
                }
            }
        }
        fVar5 = this.mouseWheel;
        if (fVar5 < -0.01 || 0.01 < fVar5) {
            fVar13 = this.FollowDistance + fVar5 * -5.0;
            fVar5 = this.MaxFollowDistance;
            if (fVar13 <= this.MaxFollowDistance) {
                fVar5 = fVar13;
            }
            fVar10 = this.MinFollowDistance;
            if (this.MinFollowDistance <= fVar13) {
                fVar10 = fVar5;
            }
            this.FollowDistance = fVar10;
        }
    }

    // RVA: 0x3AFF Offset: 0x3AFF VA: 0x3AFF
    public CameraController()
    {
        long uVar1 = default;

        this.MoveSensitivity = 2.0;
        this.MovementSmoothingValue = 25.0;
        this.RotationSmoothingValue = 5.0;
        this.MovementSmoothing = true;
        this.MaxElevationAngle = 85.0;
        this.MinFollowDistance = 2.0;
        this.ElevationAngle = 30.0;
        this.FollowDistance = 30.0;
        this.MaxFollowDistance = 100.0;
        uVar1 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        this.currentVelocity.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        this.currentVelocity.x = (float)(int)uVar1;
        this.currentVelocity.y = (float)(int)((ulong)uVar1 >> 0x20);
        unnamed_function_44622(this,0);
    }
}
