// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TMP_TextSelector_B.c by tools/c2cs.py
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
    private void Awake()
    {
        int uVar1 = default;
        TextMeshProUGUI pTVar2 = default;
        Canvas param1 = default;
        int iVar3 = default;
        RectTransform pRVar4 = default;
        Camera pCVar5 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this,0);
        pTVar2 = (TextMeshProUGUI)UnityEngine.GameObject.GetComponent<object>(uVar1,DAT_ram_00569b28);
        this.m_TextMeshPro = pTVar2;
        uVar1 = UnityEngine.Component.get_gameObject(this,0);
        param1 = (Canvas)UnityEngine.GameObject.GetComponentInParent<object>(uVar1,DAT_ram_00569b48);
        this.m_Canvas = param1;
        iVar3 = UnityEngine.Canvas.get_renderMode(param1,0);
        if (iVar3 == 0) {
            pCVar5 = (Camera)0x0;
        }
        else {
            pCVar5 = (Camera)UnityEngine.Canvas.get_worldCamera(this.m_Canvas,0);
        }
        this.m_Camera = pCVar5;
        pRVar4 = this.TextPopup_Prefab_01;
        pRVar4 = (RectTransform)UnityEngine.Object.Instantiate<object>(pRVar4,DAT_ram_0056b524);
        this.m_TextPopup_RectTransform = pRVar4;
        uVar1 = UnityEngine.Component.get_transform(this.m_Canvas,0);
        UnityEngine.Transform.SetParent(pRVar4,uVar1,0,0);
        pTVar2 = (TextMeshProUGUI) UnityEngine.Component.GetComponentInChildren<object>(this.m_TextPopup_RectTransform,DAT_ram_00567f78);
        this.m_TextPopup_TMPComponent = pTVar2;
        uVar1 = UnityEngine.Component.get_gameObject(this.m_TextPopup_RectTransform,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
    }

    // RVA: 0x3B67 Offset: 0x3B67 VA: 0x3B67
    private void OnEnable()
    {
        int param1 = default;
        int param1_00 = default;

        param1_00 = TMPro.TMPro_EventManager.TEXT_CHANGED_EVENT;
        param1 = new System_Action_Object_();
        System.Action<object>.__ctor(param1,this,DAT_ram_0056ce78,0);
        unnamed_function_75545(param1_00,param1,DAT_ram_00561d98);
    }

    // RVA: 0x3B68 Offset: 0x3B68 VA: 0x3B68
    private void OnDisable()
    {
        int param1 = default;
        int param1_00 = default;

        param1_00 = TMPro.TMPro_EventManager.TEXT_CHANGED_EVENT;
        param1 = new System_Action_Object_();
        System.Action<object>.__ctor(param1,this,DAT_ram_0056ce78,0);
        unnamed_function_75546(param1_00,param1,DAT_ram_00561da0);
    }

    // RVA: 0x3B69 Offset: 0x3B69 VA: 0x3B69
    private void ON_TEXT_CHANGED(Object obj)
    {
        int iVar1 = default;
        Mesh pMVar2 = default;
        TextMeshProUGUI param2 = default;

        param2 = this.m_TextMeshPro;
        iVar1 = UnityEngine.Object.op_Equality(obj,param2,0);
        if (iVar1 != 0) {
            pMVar2 = (Mesh)TMPro.TMP_TextInfo.CopyMeshInfoVertexData(this.m_TextMeshPro[0xa8]._opaque,0);
            this.m_cachedMeshInfoVertexData.mesh = pMVar2;
        }
    }

    // RVA: 0x3B6A Offset: 0x3B6A VA: 0x3B6A
    private void LateUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        TextMeshProUGUI pTVar3 = default;
        Camera pCVar4 = default;
        int iVar5 = default;
        object pfVar6 = default; // float*
        object pfVar7 = default; // float*
        object pfVar8 = default; // float*
        object pfVar9 = default; // float*
        RectTransform param1 = default;
        int iVar10 = default;
        int iVar11 = default;
        UnityEngine.Matrix4x4 param2 = default;
        object pfVar12 = default; // float*
        float fVar13 = default;
        object pfVar14 = default; // float*
        float fVar15 = default;
        int iVar16 = default;
        int iVar17 = default;
        object pfVar18 = default; // float*
        object pfVar19 = default; // float*
        int local_200 = default;
        int local_1f8 = default;
        int local_1f4 = default;
        int local_1e8 = default;
        long local_1e0 = default;
        int local_1d8 = default;
        long local_1d0 = default;
        int local_1c8 = default;
        long local_1c0 = default;
        int local_1b8 = default;
        long local_1b0 = default;
        int local_1a8 = default;
        long local_1a0 = default;
        float local_198 = default;
        long local_190 = default;
        long local_188 = default;
        long local_180 = default;
        int local_178 = default;
        int local_168 = default;
        int local_158 = default;
        int local_150 = default;
        long local_148 = default;
        int local_140 = default;
        long local_138 = default;
        int local_130 = default;
        long local_128 = default;
        int local_120 = default;
        long local_118 = default;
        int local_110 = default;
        long local_108 = default;
        int local_100 = default;
        long local_f8 = default;
        int local_f0 = default;
        long local_e8 = default;
        int local_e0 = default;
        long local_d8 = default;
        int local_d0 = default;
        float local_c8 = default;
        float local_c4 = default;
        float local_c0 = default;
        int local_b8 = default;
        int uStack_b4 = default;
        int local_b0 = default;
        int uStack_ac = default;
        long local_a8 = default;
        long local_a0 = default;
        long local_98 = default;
        long local_90 = default;
        long local_88 = default;
        long local_80 = default;
        long local_78 = default;
        long local_70 = default;
        long local_68 = default;
        int local_60 = default;
        MethodInfo local_58 = default;
        long local_38 = default;
        int local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        byte[] local_230 = new byte[32];
        byte[] local_210 = new byte[8];
        byte[] local_208 = new byte[8];
        byte[] local_1f0 = new byte[8];
        byte[] local_170 = new byte[8];
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
        if (this.isHoveringObject == false) {
            if (this.m_lastIndex == -1) {
                return;
            }
            this.RestoreCachedVertexAttributes(this.m_lastIndex);
            this.m_lastIndex = -1;
            return;
        }
        pTVar3 = this.m_TextMeshPro;
        UnityEngine.Input.get_mousePosition(&local_b8,0);
        pCVar4 = this.m_Camera;
        local_168 = local_b0;
        iVar1 = TMPro.TMP_TextUtilities.FindIntersectingCharacter(pTVar3,local_170,pCVar4,1,0);
        iVar5 = this.m_lastIndex;
        if (iVar1 == -1) {
            this.RestoreCachedVertexAttributes(iVar5);
            this.m_lastIndex = -1;
        }
        else if (iVar1 != iVar5) {
            this.RestoreCachedVertexAttributes(iVar5);
            this.m_lastIndex = -1;
            iVar5 = unnamed_function_12090(0x130,0);
            if ((iVar5 != 0) || (iVar5 = unnamed_function_12090(0x12f,0), iVar5 != 0)) {
                this.m_lastIndex = iVar1;
                iVar5 = this.m_TextMeshPro[0xa8]._opaque;
                iVar11 = Raw.Read<int>(iVar5 + 0x2c) + iVar1 * 0x164;
                iVar10 = Raw.Read<int>(iVar11 + 0x34);
                iVar1 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x40) + iVar10 * 0x28 + 0x18);
                iVar11 = Raw.Read<int>(iVar11 + 0x48);
                iVar5 = iVar1 + iVar11 * 0xc;
                pfVar6 = (object)(iVar5 + 0x20);
                pfVar12 = (object)(iVar5 + 0x14);
                pfVar18 = (object)(iVar5 + 0x2c);
                fVar13 = (*pfVar12 + *pfVar18) * 0.5;
                *pfVar6 = *pfVar6 - fVar13;
                pfVar7 = (object)(iVar5 + 0x1c);
                pfVar14 = (object)(iVar5 + 0x10);
                pfVar19 = (object)(iVar5 + 0x28);
                fVar15 = (*pfVar14 + *pfVar19) * 0.5;
                *pfVar7 = *pfVar7 - fVar15;
                *pfVar12 = *pfVar12 - fVar13;
                *pfVar18 = *pfVar18 - fVar13;
                *pfVar19 = *pfVar19 - fVar15;
                *pfVar14 = *pfVar14 - fVar15;
                pfVar8 = (object)(iVar5 + 0x38);
                *pfVar8 = *pfVar8 - fVar13;
                pfVar9 = (object)(iVar5 + 0x34);
                *pfVar9 = *pfVar9 - fVar15;
                local_60 = Raw.Read<int>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
                local_68 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
                local_70 = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
                local_78 = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
                iVar17 = Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c);
                local_198 = Raw.Read<float>(iVar17 + 0x14) * 1.5;
                local_178 = local_60;
                local_188 = local_70;
                local_c4 = (float)(Raw.Read<float>(iVar17 + 0x10) * 1.5);
                local_c8 = (float)(Raw.Read<float>(iVar17 + 0xc) * 1.5);
                local_180 = local_68;
                local_190 = local_78;
                local_1a0 = CONCAT44(local_c4,local_c8);
                local_c0 = (float)local_198;
                UnityEngine.Matrix4x4.TRS(&local_b8,&local_180,&local_190,&local_1a0,0);
                this.m_matrix.m23 = (float)(int)local_80;
                this.m_matrix.m33 = (float)local_80._4_4_;
                this.m_matrix.m03 = (float)(int)local_88;
                this.m_matrix.m13 = (float)local_88._4_4_;
                this.m_matrix.m22 = (float)(int)local_90;
                this.m_matrix.m32 = (float)local_90._4_4_;
                this.m_matrix.m02 = (float)(int)local_98;
                this.m_matrix.m12 = (float)local_98._4_4_;
                this.m_matrix.m21 = (float)(int)local_a0;
                this.m_matrix.m31 = (float)local_a0._4_4_;
                this.m_matrix.m01 = (float)(int)local_a8;
                this.m_matrix.m11 = (float)local_a8._4_4_;
                this.m_matrix.m20 = (float)local_b0;
                this.m_matrix.m30 = (float)uStack_ac;
                this.m_matrix.m00 = (float)local_b8;
                this.m_matrix.m10 = (float)uStack_b4;
                local_1a8 = Raw.Read<int>(iVar5 + 0x18);
                local_1b0 = Raw.Read<long>(pfVar14);
                param2 = &this.m_matrix;
                local_d8 = local_1b0;
                local_d0 = local_1a8;
                UnityEngine.Matrix4x4.MultiplyPoint3x4(&local_e8,param2,&local_1b0,0);
                Raw.Write<int>(iVar5 + 0x18, local_e0);
                Raw.Write<long>(pfVar14, local_e8);
                local_1b8 = Raw.Read<int>(iVar5 + 0x24);
                local_1c0 = Raw.Read<long>(pfVar7);
                local_f8 = local_1c0;
                local_f0 = local_1b8;
                UnityEngine.Matrix4x4.MultiplyPoint3x4(&local_108,param2,&local_1c0,0);
                Raw.Write<int>(iVar5 + 0x24, local_100);
                Raw.Write<long>(pfVar7, local_108);
                local_1c8 = Raw.Read<int>(iVar5 + 0x30);
                local_1d0 = Raw.Read<long>(pfVar19);
                local_118 = local_1d0;
                local_110 = local_1c8;
                UnityEngine.Matrix4x4.MultiplyPoint3x4(&local_128,param2,&local_1d0,0);
                Raw.Write<int>(iVar5 + 0x30, local_120);
                Raw.Write<long>(pfVar19, local_128);
                local_1d8 = Raw.Read<int>(iVar5 + 0x3c);
                local_1e0 = Raw.Read<long>(pfVar9);
                local_138 = local_1e0;
                local_130 = local_1d8;
                UnityEngine.Matrix4x4.MultiplyPoint3x4(&local_148,param2,&local_1e0,0);
                Raw.Write<int>(iVar5 + 0x3c, local_140);
                Raw.Write<long>(pfVar9, local_148);
                *pfVar14 = fVar15 + *pfVar14;
                *pfVar12 = fVar13 + *pfVar12;
                Raw.Write<float>(iVar5 + 0x18, Raw.Read<float>(iVar5 + 0x18) + 0.0);
                *pfVar7 = fVar15 + *pfVar7;
                *pfVar6 = fVar13 + *pfVar6;
                Raw.Write<float>(iVar5 + 0x24, Raw.Read<float>(iVar5 + 0x24) + 0.0);
                *pfVar19 = fVar15 + *pfVar19;
                *pfVar18 = fVar13 + *pfVar18;
                Raw.Write<float>(iVar5 + 0x30, Raw.Read<float>(iVar5 + 0x30) + 0.0);
                *pfVar9 = fVar15 + *pfVar9;
                *pfVar8 = fVar13 + *pfVar8;
                Raw.Write<float>(iVar5 + 0x3c, Raw.Read<float>(iVar5 + 0x3c) + 0.0);
                iVar10 = iVar10 * 0x28;
                iVar5 = Raw.Read<int>(iVar10 + Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + 0x2c) + 0x10;
                Raw.Write<int>(iVar5 + iVar11 * 4, 0xffc0ffff);
                Raw.Write<int>(iVar5 + (iVar11 + 1) * 4, 0xffc0ffff);
                Raw.Write<int>(iVar5 + (iVar11 + 2) * 4, 0xffc0ffff);
                Raw.Write<int>(iVar5 + (iVar11 + 3) * 4, 0xffc0ffff);
                iVar10 = Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + iVar10;
                local_28 = Raw.Read<long>(iVar10 + 0x10);
                local_20 = Raw.Read<long>(iVar10 + 0x18);
                local_18 = Raw.Read<long>(iVar10 + 0x20);
                local_10 = Raw.Read<long>(iVar10 + 0x28);
                local_8 = Raw.Read<long>(iVar10 + 0x30);
                iVar1 = Raw.Read<int>(iVar1 + 0xc);
                TMPro.TMP_MeshInfo.SwapVertexData(&local_28,iVar11,iVar1 + -4,0);
                iVar1 = this.m_TextMeshPro._opaque;
                Raw.VCall((ulong)Raw.Read<uint>(&DAT_ram_00000420 + iVar1) * 4) /* virtual */ (this.m_TextMeshPro,0xff,Raw.Read<int>(&DAT_ram_00000424 + iVar1));
            }
        }
        pTVar3 = this.m_TextMeshPro;
        UnityEngine.Input.get_mousePosition(&local_b8,0);
        pCVar4 = this.m_Camera;
        local_1e8 = local_b0;
        iVar1 = TMPro.TMP_TextUtilities.FindIntersectingWord(pTVar3,local_1f0,pCVar4,0);
        param1 = this.m_TextPopup_RectTransform;
        iVar5 = (param1 != null);
        if ((iVar5 != 0) && (iVar5 = this.m_selectedWord, iVar5 != -1)) {
            if (iVar5 == iVar1 && iVar1 != -1) goto code_r0x81a2ccbf;
            pTVar3 = this.m_TextMeshPro;
            iVar10 = pTVar3[0xa8]._opaque;
            iVar5 = Raw.Read<int>(iVar10 + 0x30) + iVar5 * 0x10;
            iVar11 = Raw.Read<int>(iVar5 + 0x1c);
            if (0 < iVar11) {
                iVar17 = Raw.Read<int>(iVar5 + 0x14);
                iVar5 = 0;
                while( true ) {
                    iVar16 = Raw.Read<int>(iVar10 + 0x2c) + (iVar5 + iVar17) * 0x164;
                    iVar10 = Raw.Read<int>(Raw.Read<int>(iVar10 + 0x40) + Raw.Read<int>(iVar16 + 0x34) * 0x28 + 0x2c) + Raw.Read<int>(iVar16 + 0x48) * 4;
                    local_1f4 = Raw.Read<int>(iVar10 + 0x10);
                    local_150 = local_1f4;
                    TMPro.TMPro_ExtensionMethods.Tint(&local_b8,&local_1f4,1.33333,0);
                    Raw.Write<int>(iVar10 + 0x14, local_b8);
                    Raw.Write<int>(iVar10 + 0x10, local_b8);
                    Raw.Write<int>(iVar10 + 0x18, local_b8);
                    Raw.Write<int>(iVar10 + 0x1c, local_b8);
                    iVar5 = iVar5 + 1;
                    if (iVar11 == iVar5) break;
                    iVar10 = this.m_TextMeshPro[0xa8]._opaque;
                }
                pTVar3 = this.m_TextMeshPro;
            }
            Raw.VCall((ulong)Raw.Read<uint>(&DAT_ram_00000420 + pTVar3._opaque) * 4) /* virtual */ (pTVar3,0xff,Raw.Read<int>(&DAT_ram_00000424 + pTVar3._opaque));
            this.m_selectedWord = -1;
        }
        if ((((iVar1 != -1) && (iVar1 != this.m_selectedWord)) && (iVar5 = unnamed_function_12090(0x130,0), iVar5 == 0)) && (iVar5 = unnamed_function_12090(0x12f,0), iVar5 == 0)) {
            this.m_selectedWord = iVar1;
            pTVar3 = this.m_TextMeshPro;
            iVar5 = pTVar3[0xa8]._opaque;
            iVar1 = Raw.Read<int>(iVar5 + 0x30) + iVar1 * 0x10;
            iVar10 = Raw.Read<int>(iVar1 + 0x1c);
            if (0 < iVar10) {
                iVar11 = Raw.Read<int>(iVar1 + 0x14);
                iVar1 = 0;
                while( true ) {
                    iVar17 = Raw.Read<int>(iVar5 + 0x2c) + (iVar1 + iVar11) * 0x164;
                    iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x40) + Raw.Read<int>(iVar17 + 0x34) * 0x28 + 0x2c) + Raw.Read<int>(iVar17 + 0x48) * 4;
                    local_1f8 = Raw.Read<int>(iVar5 + 0x10);
                    local_158 = local_1f8;
                    TMPro.TMPro_ExtensionMethods.Tint(&local_b8,&local_1f8,0.75,0);
                    Raw.Write<int>(iVar5 + 0x14, local_b8);
                    Raw.Write<int>(iVar5 + 0x10, local_b8);
                    Raw.Write<int>(iVar5 + 0x18, local_b8);
                    Raw.Write<int>(iVar5 + 0x1c, local_b8);
                    iVar1 = iVar1 + 1;
                    if (iVar10 == iVar1) break;
                    iVar5 = this.m_TextMeshPro[0xa8]._opaque;
                }
                pTVar3 = this.m_TextMeshPro;
            }
            Raw.VCall((ulong)Raw.Read<uint>(&DAT_ram_00000420 + pTVar3._opaque) * 4) /* virtual */ (pTVar3,0xff,Raw.Read<int>(&DAT_ram_00000424 + pTVar3._opaque));
        }
        code_r0x81a2ccbf: pTVar3 = this.m_TextMeshPro;
        UnityEngine.Input.get_mousePosition(&local_b8,0);
        pCVar4 = this.m_Camera;
        local_200 = local_b0;
        iVar1 = TMPro.TMP_TextUtilities.FindIntersectingLink(pTVar3,local_208,pCVar4,0);
        if (iVar1 == -1) {
            if (this.m_selectedLink == -1) {
                return;
            }
        }
        else if (iVar1 == this.m_selectedLink) {
            return;
        }
        uVar2 = UnityEngine.Component.get_gameObject(this.m_TextPopup_RectTransform,0);
        UnityEngine.GameObject.SetActive(uVar2,0,0);
        this.m_selectedLink = -1;
        if (iVar1 != -1) {
            this.m_selectedLink = iVar1;
            iVar1 = Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x34) + iVar1 * 0x1c;
            local_58._16_8_ = Raw.Read<long>(iVar1 + 0x10);
            local_58._24_8_ = Raw.Read<long>(iVar1 + 0x18);
            local_38 = Raw.Read<long>(iVar1 + 0x20);
            local_30 = Raw.Read<int>(iVar1 + 0x28);
            uVar2 = TMPro.TMP_Text.get_rectTransform(this.m_TextMeshPro,0);
            UnityEngine.Input.get_mousePosition(&local_b8,0);
            pCVar4 = this.m_Camera;
            UnityEngine.RectTransformUtility.ScreenPointToWorldPointInRectangle(uVar2,local_210,pCVar4,&local_58,0);
            uVar2 = TMPro.TMP_LinkInfo.GetLinkID(&local_58.field_0x10,0);
            iVar1 = unnamed_function_81494(uVar2,"id_01",0);
            if (iVar1 == 0) {
                iVar1 = unnamed_function_81494(uVar2,"id_02",0);
                if (iVar1 != 0) {
                    local_230._24_4_ = local_58._8_4_;
                    local_230._16_4_ = local_58._opaque0;
                    local_230._20_4_ = local_58._opaque1;
                    unnamed_function_44962(this.m_TextPopup_RectTransform,local_230 + 0x10,0);
                    uVar2 = UnityEngine.Component.get_gameObject(this.m_TextPopup_RectTransform,0);
                    UnityEngine.GameObject.SetActive(uVar2,1,0);
                    iVar1 = this.m_TextPopup_TMPComponent._opaque;
                    Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2d0) * 4) /* virtual */ (this.m_TextPopup_TMPComponent,"You have selected link <#ffff00> ID 02", Raw.Read<int>(iVar1 + 0x2d4));
                }
            }
            else {
                local_230._8_4_ = local_58._8_4_;
                local_230._0_4_ = local_58._opaque0;
                local_230._4_4_ = local_58._opaque1;
                unnamed_function_44962(this.m_TextPopup_RectTransform,local_230,0);
                uVar2 = UnityEngine.Component.get_gameObject(this.m_TextPopup_RectTransform,0);
                UnityEngine.GameObject.SetActive(uVar2,1,0);
                iVar1 = this.m_TextPopup_TMPComponent._opaque;
                Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2d0) * 4) /* virtual */ (this.m_TextPopup_TMPComponent,"You have selected link <#ffff00> ID 01",Raw.Read<int>(iVar1 + 0x2d4));
            }
        }
    }

    // RVA: 0x3B6B Offset: 0x3B6B VA: 0x3B6B Slot: 4
    public void OnPointerEnter(PointerEventData eventData)
    {
        this.isHoveringObject = true;
    }

    // RVA: 0x3B6C Offset: 0x3B6C VA: 0x3B6C Slot: 5
    public void OnPointerExit(PointerEventData eventData)
    {
        this.isHoveringObject = false;
    }

    // RVA: 0x3B6D Offset: 0x3B6D VA: 0x3B6D Slot: 6
    public void OnPointerClick(PointerEventData eventData)
    {

    }

    // RVA: 0x3B6E Offset: 0x3B6E VA: 0x3B6E Slot: 7
    public void OnPointerUp(PointerEventData eventData)
    {

    }

    // RVA: 0x3B6F Offset: 0x3B6F VA: 0x3B6F
    private void RestoreCachedVertexAttributes(int index)
    {
        int iVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int iVar5 = default;
        int iVar6 = default;
        object puVar7 = default; // long*
        object puVar8 = default; // long*
        long uVar9 = default;
        int iVar10 = default;
        int iVar11 = default;
        int iVar12 = default;
        int iVar13 = default;
        int iVar14 = default;

        if ((index != -1) && (iVar1 = this.m_TextMeshPro[0xa8]._opaque, index <= Raw.Read<int>(iVar1 + 0xc) + -1)) {
            iVar2 = Raw.Read<int>(iVar1 + 0x2c) + index * 0x164;
            iVar3 = Raw.Read<int>(iVar2 + 0x34);
            iVar4 = iVar3 * 0x28;
            iVar5 = this.m_cachedMeshInfoVertexData.mesh[iVar3 * 10 + 6]._opaque;
            iVar6 = iVar5 + 0x10;
            iVar10 = Raw.Read<int>(iVar2 + 0x48);
            iVar2 = iVar10 * 0xc;
            uVar9 = Raw.Read<long>(iVar6 + iVar2);
            iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x40) + iVar4 + 0x18) + 0x10;
            Raw.Write<int>((object)(iVar1 + iVar2) + 1, Raw.Read<int>((object)(iVar6 + iVar2) + 1));
            Raw.Write<long>(iVar1 + iVar2, uVar9);
            puVar7 = (object)(iVar6 + iVar2 + 0xc);
            uVar9 = *puVar7;
            puVar8 = (object)(iVar2 + 0xc + iVar1);
            Raw.Write<int>(puVar8 + 1, Raw.Read<int>(puVar7 + 1));
            *puVar8 = uVar9;
            puVar7 = (object)(iVar6 + iVar2 + 0x18);
            uVar9 = *puVar7;
            puVar8 = (object)(iVar2 + 0x18 + iVar1);
            Raw.Write<int>(puVar8 + 1, Raw.Read<int>(puVar7 + 1));
            *puVar8 = uVar9;
            puVar7 = (object)(iVar6 + iVar2 + 0x24);
            uVar9 = *puVar7;
            puVar8 = (object)(iVar2 + 0x24 + iVar1);
            Raw.Write<int>(puVar8 + 1, Raw.Read<int>(puVar7 + 1));
            *puVar8 = uVar9;
            iVar2 = Raw.Read<int>(Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x2c) + 0x10;
            iVar11 = this.m_cachedMeshInfoVertexData.mesh[iVar3 * 10 + 0xb]._opaque + 0x10;
            Raw.Write<int>(iVar2 + iVar10 * 4, Raw.Read<int>(iVar11 + iVar10 * 4));
            iVar12 = (iVar10 + 1) * 4;
            Raw.Write<int>(iVar2 + iVar12, Raw.Read<int>(iVar11 + iVar12));
            iVar12 = (iVar10 + 2) * 4;
            Raw.Write<int>(iVar2 + iVar12, Raw.Read<int>(iVar11 + iVar12));
            iVar12 = (iVar10 + 3) * 4;
            Raw.Write<int>(iVar2 + iVar12, Raw.Read<int>(iVar11 + iVar12));
            iVar2 = Raw.Read<int>(Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x24) + 0x10;
            iVar11 = iVar10 * 8;
            iVar12 = this.m_cachedMeshInfoVertexData.mesh[iVar3 * 10 + 9]._opaque + 0x10;
            Raw.Write<long>(iVar2 + iVar11, Raw.Read<long>(iVar12 + iVar11));
            iVar13 = (iVar10 + 1) * 8;
            Raw.Write<long>(iVar2 + iVar13, Raw.Read<long>(iVar12 + iVar13));
            iVar14 = (iVar10 + 2) * 8;
            Raw.Write<long>(iVar2 + iVar14, Raw.Read<long>(iVar12 + iVar14));
            iVar10 = (iVar10 + 3) * 8;
            Raw.Write<long>(iVar2 + iVar10, Raw.Read<long>(iVar12 + iVar10));
            iVar2 = Raw.Read<int>(Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x28) + 0x10;
            iVar12 = this.m_cachedMeshInfoVertexData.mesh[iVar3 * 10 + 10]._opaque + 0x10;
            Raw.Write<long>(iVar2 + iVar11, Raw.Read<long>(iVar12 + iVar11));
            Raw.Write<long>(iVar13 + iVar2, Raw.Read<long>(iVar12 + iVar13));
            Raw.Write<long>(iVar2 + iVar14, Raw.Read<long>(iVar12 + iVar14));
            Raw.Write<long>(iVar2 + iVar10, Raw.Read<long>(iVar12 + iVar10));
            iVar5 = Raw.Read<int>(iVar5 + 0xc) / 4;
            iVar2 = iVar5 * 4;
            iVar10 = iVar2 + -4;
            puVar7 = (object)(iVar6 + iVar10 * 0xc);
            uVar9 = *puVar7;
            puVar8 = (object)(iVar10 * 0xc + iVar1);
            Raw.Write<int>(puVar8 + 1, Raw.Read<int>(puVar7 + 1));
            *puVar8 = uVar9;
            iVar5 = iVar5 * 0x30;
            puVar7 = (object)(iVar6 + iVar5 + -0x24);
            uVar9 = *puVar7;
            puVar8 = (object)(iVar5 + -0x24 + iVar1);
            Raw.Write<int>(puVar8 + 1, Raw.Read<int>(puVar7 + 1));
            *puVar8 = uVar9;
            puVar7 = (object)(iVar6 + iVar5 + -0x18);
            uVar9 = *puVar7;
            puVar8 = (object)(iVar5 + -0x18 + iVar1);
            Raw.Write<int>(puVar8 + 1, Raw.Read<int>(puVar7 + 1));
            *puVar8 = uVar9;
            puVar7 = (object)(iVar6 + iVar5 + -0xc);
            uVar9 = *puVar7;
            puVar8 = (object)(iVar5 + -0xc + iVar1);
            Raw.Write<int>(puVar8 + 1, Raw.Read<int>(puVar7 + 1));
            *puVar8 = uVar9;
            iVar1 = Raw.Read<int>(Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x2c) + 0x10;
            iVar5 = this.m_cachedMeshInfoVertexData.mesh[iVar3 * 10 + 0xb]._opaque + 0x10;
            Raw.Write<int>(iVar1 + iVar10 * 4, Raw.Read<int>(iVar5 + iVar10 * 4));
            iVar6 = (iVar2 + -3) * 4;
            Raw.Write<int>(iVar1 + iVar6, Raw.Read<int>(iVar6 + iVar5));
            iVar6 = (iVar2 + -2) * 4;
            Raw.Write<int>(iVar1 + iVar6, Raw.Read<int>(iVar5 + iVar6));
            iVar6 = (iVar2 + -1) * 4;
            Raw.Write<int>(iVar1 + iVar6, Raw.Read<int>(iVar6 + iVar5));
            iVar1 = Raw.Read<int>(Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x24) + 0x10;
            iVar10 = iVar10 * 8;
            iVar5 = this.m_cachedMeshInfoVertexData.mesh[iVar3 * 10 + 9]._opaque + 0x10;
            Raw.Write<long>(iVar1 + iVar10, Raw.Read<long>(iVar5 + iVar10));
            iVar6 = (iVar2 + -3) * 8;
            Raw.Write<long>(iVar1 + iVar6, Raw.Read<long>(iVar6 + iVar5));
            iVar11 = (iVar2 + -2) * 8;
            Raw.Write<long>(iVar1 + iVar11, Raw.Read<long>(iVar11 + iVar5));
            iVar2 = (iVar2 + -1) * 8;
            Raw.Write<long>(iVar1 + iVar2, Raw.Read<long>(iVar2 + iVar5));
            iVar1 = Raw.Read<int>(Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + iVar4 + 0x28) + 0x10;
            iVar3 = this.m_cachedMeshInfoVertexData.mesh[iVar3 * 10 + 10]._opaque + 0x10;
            Raw.Write<long>(iVar1 + iVar10, Raw.Read<long>(iVar3 + iVar10));
            Raw.Write<long>(iVar6 + iVar1, Raw.Read<long>(iVar3 + iVar6));
            Raw.Write<long>(iVar11 + iVar1, Raw.Read<long>(iVar3 + iVar11));
            Raw.Write<long>(iVar2 + iVar1, Raw.Read<long>(iVar3 + iVar2));
            iVar1 = this.m_TextMeshPro._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(&DAT_ram_00000420 + iVar1) * 4) /* virtual */ (this.m_TextMeshPro,0xff,Raw.Read<int>(&DAT_ram_00000424 + iVar1));
        }
    }

    // RVA: 0x3B70 Offset: 0x3B70 VA: 0x3B70
    public TMP_TextSelector_B()
    {
        this.m_lastIndex = -1;
        this.m_selectedWord = -1;
        this.m_selectedLink = -1;
        unnamed_function_44622(this,0);
    }
}
