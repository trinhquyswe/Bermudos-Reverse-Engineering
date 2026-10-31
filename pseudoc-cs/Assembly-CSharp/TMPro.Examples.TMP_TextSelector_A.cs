// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TMP_TextSelector_A.c by tools/c2cs.py
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

public class TMP_TextSelector_A : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler // TypeDefIndex: 5780
{
    // Fields
    private TextMeshPro m_TextMeshPro; // 0x10
    private Camera m_Camera; // 0x14
    private bool m_isHoveringObject; // 0x18
    private int m_selectedLink; // 0x1C
    private int m_lastCharIndex; // 0x20
    private int m_lastWordIndex; // 0x24

    // Methods

    // RVA: 0x3B61 Offset: 0x3B61 VA: 0x3B61
    private void Awake()
    {
        int param1 = default;
        TextMeshPro pTVar1 = default;
        Camera pCVar2 = default;
        int iVar3 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        pTVar1 = (TextMeshPro)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569b24);
        this.m_TextMeshPro = pTVar1;
        pCVar2 = (Camera)UnityEngine.Camera.get_main(0);
        this.m_Camera = pCVar2;
        iVar3 = this.m_TextMeshPro._opaque;
        Raw.VCall((ulong)Raw.Read<uint>((int)&DAT_ram_00000410 + iVar3) * 4) /* virtual */ (this.m_TextMeshPro,0,0,Raw.Read<int>((int)&DAT_ram_00000414 + iVar3));
    }

    // RVA: 0x3B62 Offset: 0x3B62 VA: 0x3B62
    private void LateUpdate()
    {
        int uVar1 = default;
        int param3 = default;
        int iVar2 = default;
        uint uVar3 = default;
        uint uVar4 = default;
        TextMeshPro pTVar5 = default;
        Camera pCVar6 = default;
        int iVar7 = default;
        int iVar8 = default;
        int iVar9 = default;
        int iVar10 = default;
        long local_e0 = default;
        int local_d8 = default;
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
        int local_80 = default;
        long local_78 = default;
        int local_70 = default;
        long local_68 = default;
        int local_60 = default;
        long local_58 = default;
        long local_50 = default;
        int local_48 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        int local_8 = default;

        local_8 = 0;
        local_10 = 0;
        local_18 = 0;
        local_20 = 0;
        local_28 = 0;
        local_30 = 0;
        local_38 = 0;
        local_40 = 0;
        this.m_isHoveringObject = false;
        uVar1 = TMPro.TMP_Text.get_rectTransform(this.m_TextMeshPro,0);
        UnityEngine.Input.get_mousePosition(&local_50,0);
        param3 = UnityEngine.Camera.get_main(0);
        local_80 = local_48;
        local_88 = local_50;
        iVar2 = TMPro.TMP_TextUtilities.IsIntersectingRectTransform(uVar1,&local_88,param3,0);
        if (iVar2 == 0) {
            if (this.m_isHoveringObject == false) {
                return;
            }
        }
        else {
            this.m_isHoveringObject = true;
        }
        pTVar5 = this.m_TextMeshPro;
        UnityEngine.Input.get_mousePosition(&local_50,0);
        uVar1 = UnityEngine.Camera.get_main(0);
        local_90 = local_48;
        local_98 = local_50;
        iVar2 = TMPro.TMP_TextUtilities.FindIntersectingCharacter(pTVar5,&local_98,uVar1,1,0);
        if (((iVar2 != -1) && (iVar2 != this.m_lastCharIndex)) && ((iVar7 = unnamed_function_12090(0x130,0), iVar7 != 0 || (iVar7 = unnamed_function_12090(0x12f,0), iVar7 != 0)))) {
            this.m_lastCharIndex = iVar2;
            iVar2 = Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x2c) + iVar2 * 0x164;
            iVar8 = Raw.Read<int>(iVar2 + 0x34);
            iVar7 = Raw.Read<int>(iVar2 + 0x48);
            uVar3 = unnamed_function_44584(0,0xff,0);
            uVar4 = unnamed_function_44584(0,0xff,0);
            iVar2 = unnamed_function_44584(0,0xff,0);
            iVar8 = iVar8 * 0x28;
            iVar9 = Raw.Read<int>(iVar8 + Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + 0x2c);
            iVar7 = iVar9 + iVar7 * 4;
            uVar3 = uVar3 & 0xff | (uVar4 & 0xff) << 8 | iVar2 << 0x10 | 0xff000000;
            Raw.Write<uint>(iVar7 + 0x14, uVar3);
            Raw.Write<uint>(iVar7 + 0x10, uVar3);
            Raw.Write<uint>(iVar7 + 0x18, uVar3);
            Raw.Write<uint>(iVar7 + 0x1c, uVar3);
            UnityEngine.Mesh.set_colors32(Raw.Read<int>(Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + iVar8 + 0x10), iVar9,0);
        }
        pTVar5 = this.m_TextMeshPro;
        UnityEngine.Input.get_mousePosition(&local_50,0);
        pCVar6 = this.m_Camera;
        local_a0 = local_48;
        local_a8 = local_50;
        iVar2 = TMPro.TMP_TextUtilities.FindIntersectingLink(pTVar5,&local_a8,pCVar6,0);
        if (iVar2 == -1) {
            if (this.m_selectedLink != -1) {
                this.m_selectedLink = -1;
            }
        }
        else if (iVar2 != this.m_selectedLink) {
            this.m_selectedLink = iVar2;
            iVar2 = Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x34) + iVar2 * 0x1c;
            local_20 = Raw.Read<long>(iVar2 + 0x10);
            local_18 = Raw.Read<long>(iVar2 + 0x18);
            local_10 = Raw.Read<long>(iVar2 + 0x20);
            local_8 = Raw.Read<int>(iVar2 + 0x28);
            uVar1 = TMPro.TMP_Text.get_rectTransform(this.m_TextMeshPro,0);
            UnityEngine.Input.get_mousePosition(&local_50,0);
            local_b0 = local_50;
            pCVar6 = this.m_Camera;
            local_58 = local_b0;
            UnityEngine.RectTransformUtility.ScreenPointToWorldPointInRectangle(uVar1,&local_b0,pCVar6,&local_30,0);
            uVar1 = TMPro.TMP_LinkInfo.GetLinkID(&local_20,0);
            iVar2 = unnamed_function_81494(uVar1,"id_01",0);
            if (iVar2 == 0) {
                unnamed_function_81494(uVar1,"id_02",0);
            }
        }
        pTVar5 = this.m_TextMeshPro;
        UnityEngine.Input.get_mousePosition(&local_50,0);
        uVar1 = UnityEngine.Camera.get_main(0);
        local_b8 = local_48;
        local_c0 = local_50;
        iVar2 = TMPro.TMP_TextUtilities.FindIntersectingWord(pTVar5,&local_c0,uVar1,0);
        if ((iVar2 != -1) && (iVar2 != this.m_lastWordIndex)) {
            this.m_lastWordIndex = iVar2;
            iVar2 = Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x30) + iVar2 * 0x10;
            iVar7 = Raw.Read<int>(iVar2 + 0x1c);
            iVar8 = Raw.Read<int>(iVar2 + 0x14);
            uVar1 = TMPro.TextMeshPro.get_transform(this.m_TextMeshPro,0);
            iVar2 = Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x2c) + iVar8 * 0x164;
            local_c8 = Raw.Read<int>(iVar2 + 0x100);
            local_d0 = Raw.Read<long>(iVar2 + 0xf8);
            local_50 = local_d0;
            local_48 = local_c8;
            UnityEngine.Transform.TransformPoint(&local_68,uVar1,&local_d0,0);
            local_38 = local_60;
            local_40 = local_68;
            uVar1 = UnityEngine.Camera.get_main(0);
            local_d8 = local_38;
            local_e0 = local_40;
            UnityEngine.Camera.WorldToScreenPoint(&local_78,uVar1,&local_e0,0);
            local_38 = local_70;
            local_40 = local_78;
            iVar9 = Raw.Read<int>(Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x40) + 0x2c);
            uVar3 = unnamed_function_44584(0,0xff,0);
            uVar4 = unnamed_function_44584(0,0xff,0);
            iVar2 = unnamed_function_44584(0,0xff,0);
            if (0 < iVar7) {
                uVar3 = uVar3 & 0xff | (uVar4 & 0xff) << 8 | iVar2 << 0x10 | 0xff000000;
                iVar2 = 0;
                do {
                    iVar10 = iVar9 + Raw.Read<int>(Raw.Read<int>(this.m_TextMeshPro[0xa8]._opaque + 0x2c) + (iVar2 + iVar8) * 0x164 + 0x48) * 4;
                    Raw.Write<uint>(iVar10 + 0x14, uVar3);
                    Raw.Write<uint>(iVar10 + 0x10, uVar3);
                    Raw.Write<uint>(iVar10 + 0x18, uVar3);
                    Raw.Write<uint>(iVar10 + 0x1c, uVar3);
                    iVar2 = iVar2 + 1;
                } while (iVar2 != iVar7);
            }
            iVar2 = this.m_TextMeshPro._opaque;
            uVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x328) * 4) /* virtual */ (this.m_TextMeshPro,Raw.Read<int>(iVar2 + 0x32c));
            UnityEngine.Mesh.set_colors32(uVar1,iVar9,0);
        }
    }

    // RVA: 0x3B63 Offset: 0x3B63 VA: 0x3B63 Slot: 4
    public void OnPointerEnter(PointerEventData eventData)
    {
        UnityEngine.Debug.Log("OnPointerEnter()",0);
        this.m_isHoveringObject = true;
    }

    // RVA: 0x3B64 Offset: 0x3B64 VA: 0x3B64 Slot: 5
    public void OnPointerExit(PointerEventData eventData)
    {
        UnityEngine.Debug.Log("OnPointerExit()",0);
        this.m_isHoveringObject = false;
    }

    // RVA: 0x3B65 Offset: 0x3B65 VA: 0x3B65
    public TMP_TextSelector_A()
    {
        this.m_lastWordIndex = -1;
        this.m_selectedLink = -1;
        this.m_lastCharIndex = -1;
        unnamed_function_44622(this,0);
    }
}
