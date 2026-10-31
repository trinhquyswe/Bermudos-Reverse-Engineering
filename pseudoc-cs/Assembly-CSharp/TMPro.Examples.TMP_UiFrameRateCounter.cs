// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TMP_UiFrameRateCounter.c by tools/c2cs.py
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
    private void Awake()
    {
        int iVar1 = default;
        int uVar2 = default;
        RectTransform param1 = default;
        int param2 = default;
        TextMeshProUGUI pTVar3 = default;

        iVar1 = UnityEngine.Behaviour.get_enabled(this,0);
        if (iVar1 != 0) {
            UnityEngine.Application.set_targetFrameRate(1000,0);
            uVar2 = new UnityEngine_GameObject();
            UnityEngine.GameObject.__ctor(uVar2,"Frame Counter",0);
            param1 = (RectTransform)UnityEngine.GameObject.AddComponent<object>(uVar2,DAT_ram_005699e8);
            this.m_frameCounter_transform = param1;
            param2 = UnityEngine.Component.get_transform(this,0);
            UnityEngine.Transform.SetParent(param1,param2,0,0);
            pTVar3 = (TextMeshProUGUI)UnityEngine.GameObject.AddComponent<object>(uVar2,DAT_ram_00569a2c);
            this.m_TextMeshPro = pTVar3;
            uVar2 = UnityEngine.Resources.Load<object>("Fonts & Materials/LiberationSans SDF",DAT_ram_0056bfb8);
            TMPro.TMP_Text.set_font(pTVar3,uVar2,0);
            pTVar3 = this.m_TextMeshPro;
            uVar2 = UnityEngine.Resources.Load<object>("Fonts & Materials/LiberationSans SDF - Overlay",DAT_ram_0056bfac);
            iVar1 = pTVar3._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2e0) * 4) /* virtual */ (pTVar3,uVar2,Raw.Read<int>(iVar1 + 0x2e4));
            TMPro.TMP_Text.set_enableWordWrapping(this.m_TextMeshPro,0,0);
            TMPro.TMP_Text.set_fontSize(this.m_TextMeshPro,36.0,0);
            TMPro.TMP_Text.set_isOverlay(this.m_TextMeshPro,1,0);
            this.Set_FrameCounter_Position(this.AnchorPosition);
            this.last_AnchorPosition = this.AnchorPosition;
        }
    }

    // RVA: 0x3B72 Offset: 0x3B72 VA: 0x3B72
    private void Start()
    {
        float fVar1 = default;

        fVar1 = UnityEngine.Time.get_realtimeSinceStartup(0);
        this.m_Frames = 0;
        this.m_LastInterval = fVar1;
    }

    // RVA: 0x3B73 Offset: 0x3B73 VA: 0x3B73
    private void Update()
    {
        float fVar1 = default;
        int param2 = default;
        TextMeshProUGUI param1 = default;
        TMP_UiFrameRateCounter_FpsCounterAnchorPositions anchor_position = default;
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

    // RVA: 0x3B74 Offset: 0x3B74 VA: 0x3B74
    private void Set_FrameCounter_Position(TMP_UiFrameRateCounter.FpsCounterAnchorPositions anchor_position)
    {
        long local_100 = default;
        long local_f8 = default;
        long local_f0 = default;
        long local_e8 = default;
        long local_e0 = default;
        long local_d8 = default;
        long local_d0 = default;
        long local_c8 = default;
        long local_c0 = default;
        long local_b8 = default;
        long local_b0 = default;
        long local_a8 = default;
        long local_a0 = default;
        long local_98 = default;
        long local_90 = default;
        long local_88 = default;
        long local_80 = default;
        long local_78 = default;
        long local_70 = default;
        long local_68 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        long local_48 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        if (anchor_position == TopLeft) {
            TMPro.TMP_Text.set_alignment(this.m_TextMeshPro,0x101,0);
            local_8 = 0x3f80000000000000;
            local_e8 = 0x3f80000000000000;
            unnamed_function_44942(this.m_frameCounter_transform,&local_e8,0);
            local_10 = 0x3f7d70a43c23d70a;
            local_f0 = 0x3f7d70a43c23d70a;
            unnamed_function_44930(this.m_frameCounter_transform,&local_f0,0);
            local_18 = 0x3f7d70a43c23d70a;
            local_f8 = 0x3f7d70a43c23d70a;
            unnamed_function_44933(this.m_frameCounter_transform,&local_f8,0);
            local_20 = 0x3f80000000000000;
            local_100 = 0x3f80000000000000;
            unnamed_function_44936(this.m_frameCounter_transform,&local_100,0);
        }
        else if (anchor_position == BottomLeft) {
            TMPro.TMP_Text.set_alignment(this.m_TextMeshPro,&DAT_ram_00000401,0);
            local_28 = 0;
            local_c8 = 0;
            unnamed_function_44942(this.m_frameCounter_transform,&local_c8,0);
            local_30 = 0x3c23d70a3c23d70a;
            local_d0 = 0x3c23d70a3c23d70a;
            unnamed_function_44930(this.m_frameCounter_transform,&local_d0,0);
            local_38 = 0x3c23d70a3c23d70a;
            local_d8 = 0x3c23d70a3c23d70a;
            unnamed_function_44933(this.m_frameCounter_transform,&local_d8,0);
            local_40 = 0;
            local_e0 = 0;
            unnamed_function_44936(this.m_frameCounter_transform,&local_e0,0);
        }
        else if (anchor_position == TopRight) {
            TMPro.TMP_Text.set_alignment(this.m_TextMeshPro,0x104,0);
            local_48 = 0x3f8000003f800000;
            local_a8 = 0x3f8000003f800000;
            unnamed_function_44942(this.m_frameCounter_transform,&local_a8,0);
            local_50 = 0x3f7d70a43f7d70a4;
            local_b0 = 0x3f7d70a43f7d70a4;
            unnamed_function_44930(this.m_frameCounter_transform,&local_b0,0);
            local_58 = 0x3f7d70a43f7d70a4;
            local_b8 = 0x3f7d70a43f7d70a4;
            unnamed_function_44933(this.m_frameCounter_transform,&local_b8,0);
            local_60 = 0x3f8000003f800000;
            local_c0 = 0x3f8000003f800000;
            unnamed_function_44936(this.m_frameCounter_transform,&local_c0,0);
        }
        else if (anchor_position == BottomRight) {
            TMPro.TMP_Text.set_alignment(this.m_TextMeshPro,&DAT_ram_00000404,0);
            local_68 = 0x3f800000;
            local_88 = 0x3f800000;
            unnamed_function_44942(this.m_frameCounter_transform,&local_88,0);
            local_70 = 0x3c23d70a3f7d70a4;
            local_90 = 0x3c23d70a3f7d70a4;
            unnamed_function_44930(this.m_frameCounter_transform,&local_90,0);
            local_78 = 0x3c23d70a3f7d70a4;
            local_98 = 0x3c23d70a3f7d70a4;
            unnamed_function_44933(this.m_frameCounter_transform,&local_98,0);
            local_80 = 0x3f800000;
            local_a0 = 0x3f800000;
            unnamed_function_44936(this.m_frameCounter_transform,&local_a0,0);
        }
    }

    // RVA: 0x3B75 Offset: 0x3B75 VA: 0x3B75
    public TMP_UiFrameRateCounter()
    {
        this.AnchorPosition = TopRight;
        this.UpdateInterval = 5.0;
        unnamed_function_44622(this,0);
    }
}
