// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TMPro_InstructionOverlay.c by tools/c2cs.py
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
    private void Awake()
    {
        int iVar1 = default;
        Camera pCVar2 = default;
        int param1 = default;
        RuleTile_TilingRuleOutput_Transform RVar3 = default;
        int uVar4 = default;
        TextMeshPro pTVar5 = default;
        TextContainer pTVar6 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        iVar1 = UnityEngine.Behaviour.get_enabled(this,0);
        if (iVar1 != 0) {
            pCVar2 = (Camera)UnityEngine.Camera.get_main(0);
            this.m_camera = pCVar2;
            param1 = new UnityEngine_GameObject();
            UnityEngine.GameObject.__ctor(param1,"Frame Counter",0);
            RVar3 = UnityEngine.GameObject.get_transform(param1,0);
            this.m_frameCounter_transform = RVar3;
            uVar4 = UnityEngine.Component.get_transform(this.m_camera,0);
            UnityEngine.Transform.set_parent(RVar3,uVar4,0);
            RVar3 = this.m_frameCounter_transform;
            local_20 = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
            local_18 = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
            local_10 = local_20;
            local_8 = local_18;
            unnamed_function_44971(RVar3,&local_20,0);
            pTVar5 = (TextMeshPro)UnityEngine.GameObject.AddComponent<object>(param1,DAT_ram_00569a24);
            this.m_TextMeshPro = pTVar5;
            uVar4 = UnityEngine.Resources.Load<object>("Fonts & Materials/LiberationSans SDF",DAT_ram_0056bfb8);
            TMPro.TMP_Text.set_font(pTVar5,uVar4,0);
            pTVar5 = this.m_TextMeshPro;
            uVar4 = UnityEngine.Resources.Load<object>("Fonts & Materials/LiberationSans SDF - Overlay",DAT_ram_0056bfac);
            iVar1 = pTVar5._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2e0) * 4) /* virtual */ (pTVar5,uVar4,Raw.Read<int>(iVar1 + 0x2e4));
            TMPro.TMP_Text.set_fontSize(this.m_TextMeshPro,30.0,0);
            TMPro.TMP_Text.set_isOverlay(this.m_TextMeshPro,1,0);
            pTVar6 = (TextContainer)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569b20);
            this.m_textContainer = pTVar6;
            this.Set_FrameCounter_Position(this.AnchorPosition);
            iVar1 = this.m_TextMeshPro._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2d0) * 4) /* virtual */ (this.m_TextMeshPro,"Camera Control - <#ffff00>Shift + RMB\n</color>Zoom - <#ffff00>Mouse wheel.",Raw.Read<int>(iVar1 + 0x2d4));
        }
    }

    // RVA: 0x3B4E Offset: 0x3B4E VA: 0x3B4E
    private void Set_FrameCounter_Position(TMPro_InstructionOverlay.FpsCounterAnchorPositions anchor_position)
    {
        RuleTile_TilingRuleOutput_Transform RVar1 = default;
        long local_d0 = default;
        int local_c8 = default;
        long local_c0 = default;
        int local_b8 = default;
        long local_b0 = default;
        int local_a8 = default;
        long local_a0 = default;
        int local_98 = default;
        long local_90 = default;
        int local_88 = default;
        long local_80 = default;
        int local_78 = default;
        long local_70 = default;
        int local_68 = default;
        long local_60 = default;
        int local_58 = default;
        long local_50 = default;
        int local_48 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        if (anchor_position == TopLeft) {
            TMPro.TextContainer.set_anchorPosition(this.m_textContainer,0,0);
            RVar1 = this.m_frameCounter_transform;
            local_18 = 0x42c80000;
            local_b8 = 0x42c80000;
            local_20 = 0x3f80000000000000;
            local_c0 = 0x3f80000000000000;
            UnityEngine.Camera.ViewportToWorldPoint(&local_10,this.m_camera,&local_c0,0);
            local_c8 = local_8;
            local_d0 = local_10;
            unnamed_function_44962(RVar1,&local_d0,0);
        }
        else if (anchor_position == BottomLeft) {
            TMPro.TextContainer.set_anchorPosition(this.m_textContainer,6,0);
            RVar1 = this.m_frameCounter_transform;
            local_28 = 0x42c80000;
            local_98 = 0x42c80000;
            local_30 = 0;
            local_a0 = 0;
            UnityEngine.Camera.ViewportToWorldPoint(&local_10,this.m_camera,&local_a0,0);
            local_a8 = local_8;
            local_b0 = local_10;
            unnamed_function_44962(RVar1,&local_b0,0);
        }
        else if (anchor_position == TopRight) {
            TMPro.TextContainer.set_anchorPosition(this.m_textContainer,2,0);
            RVar1 = this.m_frameCounter_transform;
            local_38 = 0x42c80000;
            local_78 = 0x42c80000;
            local_40 = 0x3f8000003f800000;
            local_80 = 0x3f8000003f800000;
            UnityEngine.Camera.ViewportToWorldPoint(&local_10,this.m_camera,&local_80,0);
            local_88 = local_8;
            local_90 = local_10;
            unnamed_function_44962(RVar1,&local_90,0);
        }
        else if (anchor_position == BottomRight) {
            TMPro.TextContainer.set_anchorPosition(this.m_textContainer,8,0);
            RVar1 = this.m_frameCounter_transform;
            local_48 = 0x42c80000;
            local_58 = 0x42c80000;
            local_50 = 0x3f800000;
            local_60 = 0x3f800000;
            UnityEngine.Camera.ViewportToWorldPoint(&local_10,this.m_camera,&local_60,0);
            local_68 = local_8;
            local_70 = local_10;
            unnamed_function_44962(RVar1,&local_70,0);
        }
    }

    // RVA: 0x3B4F Offset: 0x3B4F VA: 0x3B4F
    public TMPro_InstructionOverlay()
    {
        this.AnchorPosition = BottomLeft;
        unnamed_function_44622(this,0);
    }
}
