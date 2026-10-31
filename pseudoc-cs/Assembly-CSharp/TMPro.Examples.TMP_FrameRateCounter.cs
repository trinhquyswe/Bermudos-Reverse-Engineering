// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TMP_FrameRateCounter.c by tools/c2cs.py
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
    private void Awake()
    {
        int iVar1 = default;
        Camera pCVar2 = default;
        int uVar3 = default;
        TextMeshPro pTVar4 = default;
        int uVar5 = default;
        RuleTile_TilingRuleOutput_Transform RVar6 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        iVar1 = UnityEngine.Behaviour.get_enabled(this,0);
        if (iVar1 != 0) {
            pCVar2 = (Camera)UnityEngine.Camera.get_main(0);
            this.m_camera = pCVar2;
            UnityEngine.Application.set_targetFrameRate(s___Scripting__UnityEngine__Player_ram_0000270d + 2,0);
            uVar3 = new UnityEngine_GameObject();
            UnityEngine.GameObject.__ctor(uVar3,"Frame Counter",0);
            pTVar4 = (TextMeshPro)UnityEngine.GameObject.AddComponent<object>(uVar3,DAT_ram_00569a24);
            this.m_TextMeshPro = pTVar4;
            uVar5 = UnityEngine.Resources.Load<object>("Fonts & Materials/LiberationSans SDF",DAT_ram_0056bfb8);
            TMPro.TMP_Text.set_font(pTVar4,uVar5,0);
            pTVar4 = this.m_TextMeshPro;
            uVar5 = UnityEngine.Resources.Load<object>("Fonts & Materials/LiberationSans SDF - Overlay",DAT_ram_0056bfac);
            iVar1 = pTVar4._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2e0) * 4) /* virtual */ (pTVar4,uVar5,Raw.Read<int>(iVar1 + 0x2e4));
            RVar6 = UnityEngine.GameObject.get_transform(uVar3,0);
            this.m_frameCounter_transform = RVar6;
            uVar3 = UnityEngine.Component.get_transform(this.m_camera,0);
            unnamed_function_44984(RVar6,uVar3,0);
            RVar6 = this.m_frameCounter_transform;
            local_20 = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
            local_18 = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
            local_10 = local_20;
            local_8 = local_18;
            unnamed_function_44971(RVar6,&local_20,0);
            TMPro.TMP_Text.set_enableWordWrapping(this.m_TextMeshPro,0,0);
            TMPro.TMP_Text.set_fontSize(this.m_TextMeshPro,24.0,0);
            this.Set_FrameCounter_Position(this.AnchorPosition);
            this.last_AnchorPosition = this.AnchorPosition;
        }
    }

    // RVA: 0x3B54 Offset: 0x3B54 VA: 0x3B54
    private void Start()
    {
        float fVar1 = default;

        fVar1 = UnityEngine.Time.get_realtimeSinceStartup(0);
        this.m_Frames = 0;
        this.m_LastInterval = fVar1;
    }

    // RVA: 0x3B55 Offset: 0x3B55 VA: 0x3B55
    private void Update()
    {
        float fVar1 = default;
        int param2 = default;
        TextMeshPro param1 = default;
        TMP_FrameRateCounter_FpsCounterAnchorPositions anchor_position = default;
        string param1_00 = default;
        object puVar3 = default; // int*
        float param3 = default;
        float fVar4 = default;
        object puVar2 = default; // int*

        anchor_position = this.AnchorPosition;
        if (anchor_position != this.last_AnchorPosition) {
            this.Set_FrameCounter_Position(anchor_position);
            anchor_position = this.AnchorPosition;
        }
        this.last_AnchorPosition = anchor_position;
        this.m_Frames = this.m_Frames + 1;
        fVar1 = UnityEngine.Time.get_realtimeSinceStartup(0);
        if (this.m_LastInterval + this.UpdateInterval < fVar1) {
            puVar3 = &"<color=red>";
            param3 = (float)this.m_Frames / (fVar1 - this.m_LastInterval);
            if (10.0 <= param3) {
                puVar3 = &"<color=green>";
            }
            puVar2 = &"<color=yellow>";
            if (30.0 <= param3) {
                puVar2 = puVar3;
            }
            param1_00 = (string)*puVar2;
            this.htmlColorTag = param1_00;
            param1 = this.m_TextMeshPro;
            param2 = System.String.Concat(param1_00,"{0:2}</color> <#8080ff>FPS \n<#FF8000>{1:2} <#8080ff>MS",0);
            fVar4 = param3;
            if (param3 <= 1e-05) {
                fVar4 = 1e-05;
            }
            TMPro.TMP_Text.SetText(param1,param2,param3,1000.0 / fVar4,0);
            this.m_LastInterval = fVar1;
            this.m_Frames = 0;
        }
    }

    // RVA: 0x3B56 Offset: 0x3B56 VA: 0x3B56
    private void Set_FrameCounter_Position(TMP_FrameRateCounter.FpsCounterAnchorPositions anchor_position)
    {
        int uVar1 = default;
        int iVar2 = default;
        RuleTile_TilingRuleOutput_Transform RVar3 = default;
        long local_120 = default;
        int local_118 = default;
        long local_110 = default;
        int local_108 = default;
        long local_100 = default;
        long local_f8 = default;
        int local_f0 = default;
        long local_e8 = default;
        int local_e0 = default;
        long local_d8 = default;
        long local_d0 = default;
        int local_c8 = default;
        long local_c0 = default;
        int local_b8 = default;
        long local_b0 = default;
        long local_a8 = default;
        int local_a0 = default;
        long local_98 = default;
        int local_90 = default;
        long local_88 = default;
        long local_80 = default;
        long local_78 = default;
        long local_70 = default;
        int local_68 = default;
        long local_60 = default;
        long local_58 = default;
        int local_50 = default;
        long local_48 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        long local_28 = default;
        int local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        local_8 = 0x3f8000003f800000;
        local_10 = 0x3f8000003f800000;
        iVar2 = this.m_TextMeshPro._opaque;
        local_78 = 0x3f8000003f800000;
        local_80 = 0x3f8000003f800000;
        Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x310) * 4) /* virtual */ (this.m_TextMeshPro,&local_80,Raw.Read<int>(iVar2 + 0x314));
        if (anchor_position == TopLeft) {
            TMPro.TMP_Text.set_alignment(this.m_TextMeshPro,0x101,0);
            uVar1 = TMPro.TMP_Text.get_rectTransform(this.m_TextMeshPro,0);
            local_18 = 0x3f80000000000000;
            local_100 = 0x3f80000000000000;
            unnamed_function_44942(uVar1,&local_100,0);
            RVar3 = this.m_frameCounter_transform;
            local_20 = 0x42c80000;
            local_108 = 0x42c80000;
            local_28 = 0x3f80000000000000;
            local_110 = 0x3f80000000000000;
            UnityEngine.Camera.ViewportToWorldPoint(&local_10,this.m_camera,&local_110,0);
            local_118 = (int)local_8;
            local_120 = local_10;
            unnamed_function_44962(RVar3,&local_120,0);
        }
        else if (anchor_position == BottomLeft) {
            TMPro.TMP_Text.set_alignment(this.m_TextMeshPro,&DAT_ram_00000401,0);
            uVar1 = TMPro.TMP_Text.get_rectTransform(this.m_TextMeshPro,0);
            local_30 = 0;
            local_d8 = 0;
            unnamed_function_44942(uVar1,&local_d8,0);
            RVar3 = this.m_frameCounter_transform;
            local_38 = 0x42c80000;
            local_e0 = 0x42c80000;
            local_40 = 0;
            local_e8 = 0;
            UnityEngine.Camera.ViewportToWorldPoint(&local_10,this.m_camera,&local_e8,0);
            local_f0 = (int)local_8;
            local_f8 = local_10;
            unnamed_function_44962(RVar3,&local_f8,0);
        }
        else if (anchor_position == TopRight) {
            TMPro.TMP_Text.set_alignment(this.m_TextMeshPro,0x104,0);
            uVar1 = TMPro.TMP_Text.get_rectTransform(this.m_TextMeshPro,0);
            local_48 = 0x3f8000003f800000;
            local_b0 = 0x3f8000003f800000;
            unnamed_function_44942(uVar1,&local_b0,0);
            RVar3 = this.m_frameCounter_transform;
            local_50 = 0x42c80000;
            local_b8 = 0x42c80000;
            local_58 = 0x3f8000003f800000;
            local_c0 = 0x3f8000003f800000;
            UnityEngine.Camera.ViewportToWorldPoint(&local_10,this.m_camera,&local_c0,0);
            local_c8 = (int)local_8;
            local_d0 = local_10;
            unnamed_function_44962(RVar3,&local_d0,0);
        }
        else if (anchor_position == BottomRight) {
            TMPro.TMP_Text.set_alignment(this.m_TextMeshPro,&DAT_ram_00000404,0);
            uVar1 = TMPro.TMP_Text.get_rectTransform(this.m_TextMeshPro,0);
            local_60 = 0x3f800000;
            local_88 = 0x3f800000;
            unnamed_function_44942(uVar1,&local_88,0);
            RVar3 = this.m_frameCounter_transform;
            local_68 = 0x42c80000;
            local_90 = 0x42c80000;
            local_70 = 0x3f800000;
            local_98 = 0x3f800000;
            UnityEngine.Camera.ViewportToWorldPoint(&local_10,this.m_camera,&local_98,0);
            local_a0 = (int)local_8;
            local_a8 = local_10;
            unnamed_function_44962(RVar3,&local_a8,0);
        }
    }

    // RVA: 0x3B57 Offset: 0x3B57 VA: 0x3B57
    public TMP_FrameRateCounter()
    {
        this.AnchorPosition = TopRight;
        this.UpdateInterval = 5.0;
        unnamed_function_44622(this,0);
    }
}
