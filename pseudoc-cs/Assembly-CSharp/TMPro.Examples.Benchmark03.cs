// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.Benchmark03.c by tools/c2cs.py
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

public class Benchmark03 : MonoBehaviour // TypeDefIndex: 5752
{
    // Fields
    public int NumberOfSamples; // 0x10
    public Benchmark03.BenchmarkType Benchmark; // 0x14
    public Font SourceFont; // 0x18

    // Methods

    // RVA: 0x3AF6 Offset: 0x3AF6 VA: 0x3AF6
    private void Awake()
    {

    }

    // RVA: 0x3AF7 Offset: 0x3AF7 VA: 0x3AF7
    private void Start()
    {
        int iVar1 = default;
        int param2 = default;
        int param2_00 = default;
        int uVar2 = default;
        int uVar3 = default;
        object param1 = default; // int*
        Benchmark03_BenchmarkType BVar4 = default;
        Font pFVar5 = default;
        long local_80 = default;
        long local_78 = default;
        long local_70 = default;
        int local_68 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        int local_48 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        long local_8 = default;

        param2 = 0;
        BVar4 = this.Benchmark;
        if (BVar4 == TMP_SDF_MOBILE) {
            pFVar5 = this.SourceFont;
            param2 = TMPro.TMP_FontAsset.CreateFontAsset(pFVar5,0x5a,9,s___Scripting__UnityEngine__Animat_ram_00001035 + 0x10,0x100, 0x100,1,1,0);
        }
        else if (BVar4 == TMP_SDF__MOBILE_SSD) {
            pFVar5 = this.SourceFont;
            param2 = TMPro.TMP_FontAsset.CreateFontAsset(pFVar5,0x5a,9,s___Scripting__UnityEngine__Animat_ram_00001035 + 0x10,0x100, 0x100,1,1,0);
            uVar3 = Raw.Read<int>(param2 + 0x14 /* Benchmark */);
            uVar2 = UnityEngine.Shader.Find("TextMeshPro/Mobile/Distance Field SSD",0);
            UnityEngine.Material.set_shader(uVar3,uVar2,0);
        }
        else if (BVar4 == TMP_SDF) {
            pFVar5 = this.SourceFont;
            param2 = TMPro.TMP_FontAsset.CreateFontAsset(pFVar5,0x5a,9,s___Scripting__UnityEngine__Animat_ram_00001035 + 0x10,0x100, 0x100,1,1,0);
            uVar3 = Raw.Read<int>(param2 + 0x14 /* Benchmark */);
            uVar2 = UnityEngine.Shader.Find("TextMeshPro/Distance Field",0);
            UnityEngine.Material.set_shader(uVar3,uVar2,0);
        }
        else if (BVar4 == TMP_BITMAP_MOBILE) {
            pFVar5 = this.SourceFont;
            param2 = TMPro.TMP_FontAsset.CreateFontAsset(pFVar5,0x5a,9,s___Scripting__UnityEngine__WhiteP_ram_0000100b + 10,0x100, 0x100,1,1,0);
        }
        if (0 < this.NumberOfSamples) {
            iVar1 = 0;
            do {
                if (this.Benchmark < TEXTMESH_BITMAP) {
                    uVar2 = new UnityEngine_GameObject();
                    UnityEngine.GameObject.__ctor(uVar2,0);
                    uVar3 = UnityEngine.GameObject.get_transform(uVar2,0);
                    local_18 = 0;
                    local_48 = 0;
                    local_20 = 0x3f99999a00000000;
                    local_50 = 0x3f99999a00000000;
                    unnamed_function_44962(uVar3,&local_50,0);
                    param1 = (object)UnityEngine.GameObject.AddComponent<object>(uVar2,DAT_ram_00569a24);
                    TMPro.TMP_Text.set_font(param1,param2,0);
                    TMPro.TMP_Text.set_fontSize(param1,128.0,0);
                    Raw.VCall((ulong)Raw.Read<uint>(*param1 + 0x2d0) * 4) /* virtual */ (param1,"@",Raw.Read<int>(*param1 + 0x2d4));
                    TMPro.TMP_Text.set_alignment(param1,0x202,0);
                    local_8 = 0x3f80000000000000;
                    local_10 = 0x3f8000003f800000;
                    local_58 = 0x3f80000000000000;
                    local_60 = 0x3f8000003f800000;
                    Raw.VCall((ulong)Raw.Read<uint>(*param1 + 0x178) * 4) /* virtual */ (param1,&local_60,Raw.Read<int>(*param1 + 0x17c));
                    if (this.Benchmark == TMP_BITMAP_MOBILE) {
                        TMPro.TMP_Text.set_fontSize(param1,132.0,0);
                    }
                }
                else if (this.Benchmark == TEXTMESH_BITMAP) {
                    uVar2 = new UnityEngine_GameObject();
                    UnityEngine.GameObject.__ctor(uVar2,0);
                    uVar3 = UnityEngine.GameObject.get_transform(uVar2,0);
                    local_28 = 0;
                    local_68 = 0;
                    local_30 = 0x3f99999a00000000;
                    local_70 = 0x3f99999a00000000;
                    unnamed_function_44962(uVar3,&local_70,0);
                    uVar2 = UnityEngine.GameObject.AddComponent<object>(uVar2,DAT_ram_00569a20);
                    uVar3 = UnityEngine.Component.GetComponent<object>(uVar2,DAT_ram_00567f10);
                    param2_00 = UnityEngine.Font.get_material(this.SourceFont,0);
                    unnamed_function_52795(uVar3,param2_00,0);
                    UnityEngine.TextMesh.set_font(uVar2,this.SourceFont,0);
                    UnityEngine.TextMesh.set_anchor(uVar2,4,0);
                    UnityEngine.TextMesh.set_fontSize(uVar2,0x82,0);
                    local_38 = 0x3f80000000000000;
                    local_78 = 0x3f80000000000000;
                    local_40 = 0x3f8000003f800000;
                    local_80 = 0x3f8000003f800000;
                    unnamed_function_16190(uVar2,&local_80,0);
                    UnityEngine.TextMesh.set_text(uVar2,"@",0);
                }
                iVar1 = iVar1 + 1;
            } while (iVar1 < this.NumberOfSamples);
        }
    }

    // RVA: 0x3AF8 Offset: 0x3AF8 VA: 0x3AF8
    public Benchmark03()
    {
        this.NumberOfSamples = 100;
        unnamed_function_44622(this,0);
    }
}
