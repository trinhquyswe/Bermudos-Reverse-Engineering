// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TextMeshProFloatingText.c by tools/c2cs.py
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

public class TextMeshProFloatingText : MonoBehaviour // TypeDefIndex: 5770
{
    // Fields
    public Font TheFont; // 0x10
    private GameObject m_floatingText; // 0x14
    private TextMeshPro m_textMeshPro; // 0x18
    private TextMesh m_textMesh; // 0x1C
    private Transform m_transform; // 0x20
    private Transform m_floatingText_Transform; // 0x24
    private Transform m_cameraTransform; // 0x28
    private Vector3 lastPOS; // 0x2C
    private Quaternion lastRotation; // 0x38
    public int SpawnType; // 0x48
    public bool IsTextObjectScaleStatic; // 0x4C
    private static WaitForEndOfFrame k_WaitForEndOfFrame; // 0x0
    private static WaitForSeconds[] k_WaitForSecondsRandom; // 0x4

    // Methods

    // RVA: 0x3B38 Offset: 0x3B38 VA: 0x3B38
    private void Awake()
    {
        RuleTile_TilingRuleOutput_Transform RVar1 = default;
        int uVar2 = default;
        GameObject param1 = default;

        RVar1 = UnityEngine.Component.get_transform(this,0);
        this.m_transform = RVar1;
        uVar2 = UnityEngine.Object.get_name(this,0);
        uVar2 = System.String.Concat(uVar2," floating text",0);
        param1 = (GameObject)new UnityEngine_GameObject();
        UnityEngine.GameObject.__ctor(param1,uVar2,0);
        this.m_floatingText = param1;
        uVar2 = UnityEngine.Camera.get_main(0);
        RVar1 = UnityEngine.Component.get_transform(uVar2,0);
        this.m_cameraTransform = RVar1;
    }

    // RVA: 0x3B39 Offset: 0x3B39 VA: 0x3B39
    private void Start()
    {
        object param1 = default; // int*
        TextMeshPro pTVar1 = default;
        int uVar2 = default;
        RuleTile_TilingRuleOutput_Transform RVar3 = default;
        uint uVar4 = default;
        uint uVar5 = default;
        uint uVar6 = default;
        TextMesh pTVar7 = default;
        int uVar8 = default;
        int iVar9 = default;
        object puVar10 = default; // byte*
        long local_90 = default;
        long local_88 = default;
        long local_80 = default;
        float local_78 = default;
        long local_70 = default;
        long local_68 = default;
        long local_60 = default;
        long local_58 = default;
        float local_50 = default;
        float local_48 = default;
        float local_44 = default;
        float local_40 = default;
        int local_3c = default;
        float local_38 = default;
        float local_34 = default;
        float local_30 = default;
        float local_28 = default;
        float local_24 = default;
        float local_20 = default;
        long local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;
        int local_4 = default;

        if (this.SpawnType == 0) {
            pTVar1 = (TextMeshPro)UnityEngine.GameObject.AddComponent<object>(this.m_floatingText,DAT_ram_00569a24);
            this.m_textMeshPro = pTVar1;
            uVar2 = TMPro.TMP_Text.get_rectTransform(pTVar1,0);
            local_18 = 0x4040000040400000;
            local_70 = 0x4040000040400000;
            unnamed_function_44939(uVar2,&local_70,0);
            RVar3 = UnityEngine.GameObject.get_transform(this.m_floatingText,0);
            this.m_floatingText_Transform = RVar3;
            UnityEngine.Transform.get_position(&local_10,this.m_transform,0);
            local_78 = (float)local_8 + 0.0;
            local_24 = (float)((float)local_c + 15.0);
            local_28 = (float)((float)local_10 + 0.0);
            local_80 = CONCAT44(local_24,local_28);
            local_20 = (float)local_78;
            unnamed_function_44962(RVar3,&local_80,0);
            TMPro.TMP_Text.set_alignment(this.m_textMeshPro,0x202,0);
            pTVar1 = this.m_textMeshPro;
            uVar4 = unnamed_function_44584(0,0xff,0);
            uVar5 = unnamed_function_44584(0,0xff,0);
            uVar6 = unnamed_function_44584(0,0xff,0);
            local_8 = (float)((float)(uVar6 & 0xff) / 255.0);
            local_4 = 0x3f800000;
            local_10 = (float)((float)(uVar4 & 0xff) / 255.0);
            local_c = (float)((float)(uVar5 & 0xff) / 255.0);
            iVar9 = pTVar1._opaque;
            local_88 = CONCAT44(0x3f800000,local_8);
            local_90 = CONCAT44(local_c,local_10);
            Raw.VCall((ulong)Raw.Read<uint>(iVar9 + 0x178) * 4) /* virtual */ (pTVar1,&local_90,Raw.Read<int>(iVar9 + 0x17c));
            TMPro.TMP_Text.set_fontSize(this.m_textMeshPro,24.0,0);
            TMPro.TMP_Text.set_enableKerning(this.m_textMeshPro,0,0);
            iVar9 = this.m_textMeshPro._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar9 + 0x2d0) * 4) /* virtual */ (this.m_textMeshPro,Raw.Deref(Raw.Read<object>(string_TypeInfo + 0x5c)), Raw.Read<int>(iVar9 + 0x2d4));
            TMPro.TMP_Text.set_isTextObjectScaleStatic(this.m_textMeshPro,(uint)this.IsTextObjectScaleStatic,0);
            param1 = &TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_TypeInfo;
            if (DAT_ram_0066487a != '\0') goto code_r0x81a29036;
            puVar10 = &DAT_ram_0066487a;
        }
        else {
            if (this.SpawnType != 1) {
                return;
            }
            RVar3 = UnityEngine.GameObject.get_transform(this.m_floatingText,0);
            this.m_floatingText_Transform = RVar3;
            UnityEngine.Transform.get_position(&local_10,this.m_transform,0);
            local_50 = (float)local_8 + 0.0;
            local_34 = (float)((float)local_c + 15.0);
            local_38 = (float)((float)local_10 + 0.0);
            local_58 = CONCAT44(local_34,local_38);
            local_30 = (float)local_50;
            unnamed_function_44962(RVar3,&local_58,0);
            pTVar7 = (TextMesh)UnityEngine.GameObject.AddComponent<object>(this.m_floatingText,DAT_ram_00569a20);
            this.m_textMesh = pTVar7;
            uVar2 = UnityEngine.Resources.Load<object>("Fonts/ARIAL",DAT_ram_0056bfa0);
            UnityEngine.TextMesh.set_font(pTVar7,uVar2,0);
            uVar2 = UnityEngine.Component.GetComponent<object>(this.m_textMesh,DAT_ram_00567f10);
            uVar8 = UnityEngine.TextMesh.get_font(this.m_textMesh,0);
            uVar8 = UnityEngine.Font.get_material(uVar8,0);
            unnamed_function_52795(uVar2,uVar8,0);
            pTVar7 = this.m_textMesh;
            uVar4 = unnamed_function_44584(0,0xff,0);
            uVar5 = unnamed_function_44584(0,0xff,0);
            uVar6 = unnamed_function_44584(0,0xff,0);
            local_40 = (float)((float)(uVar6 & 0xff) / 255.0);
            local_3c = 0x3f800000;
            local_60 = CONCAT44(0x3f800000,local_40);
            local_48 = (float)((float)(uVar4 & 0xff) / 255.0);
            local_44 = (float)((float)(uVar5 & 0xff) / 255.0);
            local_68 = CONCAT44(local_44,local_48);
            unnamed_function_16190(pTVar7,&local_68,0);
            UnityEngine.TextMesh.set_anchor(this.m_textMesh,7,0);
            UnityEngine.TextMesh.set_fontSize(this.m_textMesh,0x18,0);
            param1 = &TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_TypeInfo;
            if (DAT_ram_0066487b != '\0') goto code_r0x81a29036;
            puVar10 = &DAT_ram_0066487b;
        }
        *puVar10 = 1;
        code_r0x81a29036: iVar9 = unnamed_function_95402(*param1);
        Raw.Write<object>(iVar9 + 0x10, this);
        Raw.Write<int>(iVar9 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,iVar9,0);
    }

    [IteratorStateMachine(typeof(TextMeshProFloatingText._DisplayTextMeshProFloatingText_d__15))]
    // RVA: 0x3B3A Offset: 0x3B3A VA: 0x3B3A
    public IEnumerator DisplayTextMeshProFloatingText()
    {
        System.Collections.IEnumerator pSVar1 = default;

        if (DAT_ram_0066487a == '\0') {
            unnamed_function_1099 (& TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_TypeInfo );
        }
        pSVar1 = (System.Collections.IEnumerator) unnamed_function_95402 ( TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_TypeInfo );
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    [IteratorStateMachine(typeof(TextMeshProFloatingText._DisplayTextMeshFloatingText_d__16))]
    // RVA: 0x3B3B Offset: 0x3B3B VA: 0x3B3B
    public IEnumerator DisplayTextMeshFloatingText()
    {
        System.Collections.IEnumerator pSVar1 = default;

        if (DAT_ram_0066487b == '\0') {
            unnamed_function_1099 (&TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_TypeInfo);
        }
        pSVar1 = (System.Collections.IEnumerator) unnamed_function_95402 ( TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_TypeInfo );
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3B3C Offset: 0x3B3C VA: 0x3B3C
    public TextMeshProFloatingText()
    {
        long uVar1 = default;
        long uVar2 = default;

        uVar1 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        this.lastPOS.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        this.lastPOS.x = (float)(int)uVar1;
        this.lastPOS.y = (float)(int)((ulong)uVar1 >> 0x20);
        uVar1 = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        uVar2 = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        this.lastRotation.z = (float)(int)uVar2;
        this.lastRotation.w = (float)(int)((ulong)uVar2 >> 0x20);
        this.lastRotation.x = (float)(int)uVar1;
        this.lastRotation.y = (float)(int)((ulong)uVar1 >> 0x20);
        unnamed_function_44622(this,0);
    }

    // RVA: 0x3B3D Offset: 0x3B3D VA: 0x3B3D
    private static TextMeshProFloatingText()
    {
        int uVar1 = default;
        int iVar2 = default;

        uVar1 = new UnityEngine_WaitForEndOfFrame();
        TMPro.Examples.TextMeshProFloatingText.k_WaitForEndOfFrame = uVar1;
        iVar2 = unnamed_function_1050(UnityEngine_WaitForSeconds___TypeInfo,0x14);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.05,0);
        Raw.Write<int>(iVar2 + 0x10, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.1,0);
        Raw.Write<int>(iVar2 + 0x14, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.15,0);
        Raw.Write<int>(iVar2 + 0x18, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.2,0);
        Raw.Write<int>(iVar2 + 0x1c, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.25,0);
        Raw.Write<int>(iVar2 + 0x20, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.3,0);
        Raw.Write<int>(iVar2 + 0x24, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.35,0);
        Raw.Write<int>(iVar2 + 0x28, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.4,0);
        Raw.Write<int>(iVar2 + 0x2c, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.45,0);
        Raw.Write<int>(iVar2 + 0x30, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.5,0);
        Raw.Write<int>(iVar2 + 0x34, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.55,0);
        Raw.Write<int>(iVar2 + 0x38, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.6,0);
        Raw.Write<int>(iVar2 + 0x3c, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.65,0);
        Raw.Write<int>(iVar2 + 0x40, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.7,0);
        Raw.Write<int>(iVar2 + 0x44, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.75,0);
        Raw.Write<int>(iVar2 + 0x48, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.8,0);
        Raw.Write<int>(iVar2 + 0x4c, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.85,0);
        Raw.Write<int>(iVar2 + 0x50, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.9,0);
        Raw.Write<int>(iVar2 + 0x54, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,0.95,0);
        Raw.Write<int>(iVar2 + 0x58, uVar1);
        uVar1 = new UnityEngine_WaitForSeconds();
        unnamed_function_9208(uVar1,1.0,0);
        Raw.Write<int>(iVar2 + 0x5c, uVar1);
        TMPro.Examples.TextMeshProFloatingText.k_WaitForSecondsRandom = iVar2;
    }
}
