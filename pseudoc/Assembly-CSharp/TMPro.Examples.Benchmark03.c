// Assembly-CSharp :: TMPro.Examples.Benchmark03
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Benchmark03 : MonoBehaviour // TypeDefIndex: 5752
{
	// Fields
	public int NumberOfSamples; // 0x10
	public Benchmark03.BenchmarkType Benchmark; // 0x14
	public Font SourceFont; // 0x18

	// Methods

	// RVA: 0x3AF6 Offset: 0x3AF6 VA: 0x3AF6
	private void Awake() { }

	// RVA: 0x3AF7 Offset: 0x3AF7 VA: 0x3AF7
	private void Start() { }

	// RVA: 0x3AF8 Offset: 0x3AF8 VA: 0x3AF8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.Benchmark03$$Awake ----
// C#: void TMPro_Examples_Benchmark03__Awake (TMPro_Examples_Benchmark03_o* __this, const MethodInfo* method);

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
               (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *__this,MethodInfo *method)

{
  return;
}

// ---- TMPro.Examples.Benchmark03$$Start ----
// C#: void TMPro_Examples_Benchmark03__Start (TMPro_Examples_Benchmark03_o* __this, const MethodInfo* method);

void TMPro_Examples_Benchmark03__Start(TMPro_Examples_Benchmark03_o *__this,MethodInfo *method)

{
  int iVar1;
  int param2;
  undefined4 param2_00;
  undefined4 uVar2;
  undefined4 uVar3;
  int *param1;
  Benchmark03_BenchmarkType BVar4;
  Font_o *pFVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  param2 = 0;
  if (DAT_ram_0066485d == '\0') {
    unnamed_function_1099(&DAT_ram_00567f10);
    unnamed_function_1099(&DAT_ram_00569a24);
    unnamed_function_1099(&DAT_ram_00569a20);
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&TMPro_TMP_FontAsset_TypeInfo);
    unnamed_function_1099(&StringLiteral_7224 /* "TextMeshPro/Distance Field" */);
    unnamed_function_1099(&StringLiteral_1514 /* "@" */);
    unnamed_function_1099(&StringLiteral_7227 /* "TextMeshPro/Mobile/Distance Field SSD" */);
    DAT_ram_0066485d = '\x01';
  }
  BVar4 = __this->Benchmark;
  if (BVar4 == TMP_SDF_MOBILE) {
    pFVar5 = __this->SourceFont;
    if (*(int *)(TMPro_TMP_FontAsset_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(TMPro_TMP_FontAsset_TypeInfo);
    }
    param2 = unnamed_function_23640
                       (pFVar5,0x5a,9,s___Scripting__UnityEngine__Animat_ram_00001035 + 0x10,0x100,
                        0x100,1,1,0);
  }
  else if (BVar4 == TMP_SDF__MOBILE_SSD) {
    pFVar5 = __this->SourceFont;
    if (*(int *)(TMPro_TMP_FontAsset_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(TMPro_TMP_FontAsset_TypeInfo);
    }
    param2 = unnamed_function_23640
                       (pFVar5,0x5a,9,s___Scripting__UnityEngine__Animat_ram_00001035 + 0x10,0x100,
                        0x100,1,1,0);
    uVar3 = *(undefined4 *)(param2 + 0x14 /* Benchmark */);
    uVar2 = unnamed_function_52823(StringLiteral_7227 /* "TextMeshPro/Mobile/Distance Field SSD" */,0);
    unnamed_function_52846(uVar3,uVar2,0);
  }
  else if (BVar4 == TMP_SDF) {
    pFVar5 = __this->SourceFont;
    if (*(int *)(TMPro_TMP_FontAsset_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(TMPro_TMP_FontAsset_TypeInfo);
    }
    param2 = unnamed_function_23640
                       (pFVar5,0x5a,9,s___Scripting__UnityEngine__Animat_ram_00001035 + 0x10,0x100,
                        0x100,1,1,0);
    uVar3 = *(undefined4 *)(param2 + 0x14 /* Benchmark */);
    uVar2 = unnamed_function_52823(StringLiteral_7224 /* "TextMeshPro/Distance Field" */,0);
    unnamed_function_52846(uVar3,uVar2,0);
  }
  else if (BVar4 == TMP_BITMAP_MOBILE) {
    pFVar5 = __this->SourceFont;
    if (*(int *)(TMPro_TMP_FontAsset_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(TMPro_TMP_FontAsset_TypeInfo);
    }
    param2 = unnamed_function_23640
                       (pFVar5,0x5a,9,s___Scripting__UnityEngine__WhiteP_ram_0000100b + 10,0x100,
                        0x100,1,1,0);
  }
  if (0 < __this->NumberOfSamples) {
    iVar1 = 0;
    do {
      if (__this->Benchmark < TEXTMESH_BITMAP) {
        uVar2 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
        unnamed_function_44697(uVar2,0);
        uVar3 = unnamed_function_44683(uVar2,0);
        local_18 = 0;
        local_48 = 0;
        local_20 = 0x3f99999a00000000;
        local_50 = 0x3f99999a00000000;
        unnamed_function_44962(uVar3,&local_50,0);
        param1 = (int *)unnamed_function_73837(uVar2,DAT_ram_00569a24);
        unnamed_function_23023(param1,param2,0);
        unnamed_function_23055(param1,128.0,0);
        (**(code **)((ulonglong)*(uint *)(*param1 + 0x2d0) * 4))
                  (param1,StringLiteral_1514 /* "@" */,*(undefined4 *)(*param1 + 0x2d4));
        unnamed_function_23071(param1,0x202,0);
        local_8 = 0x3f80000000000000;
        local_10 = 0x3f8000003f800000;
        local_58 = 0x3f80000000000000;
        local_60 = 0x3f8000003f800000;
        (**(code **)((ulonglong)*(uint *)(*param1 + 0x178) * 4))
                  (param1,&local_60,*(undefined4 *)(*param1 + 0x17c));
        if (__this->Benchmark == TMP_BITMAP_MOBILE) {
          unnamed_function_23055(param1,132.0,0);
        }
      }
      else if (__this->Benchmark == TEXTMESH_BITMAP) {
        uVar2 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
        unnamed_function_44697(uVar2,0);
        uVar3 = unnamed_function_44683(uVar2,0);
        local_28 = 0;
        local_68 = 0;
        local_30 = 0x3f99999a00000000;
        local_70 = 0x3f99999a00000000;
        unnamed_function_44962(uVar3,&local_70,0);
        uVar2 = unnamed_function_73837(uVar2,DAT_ram_00569a20);
        uVar3 = unnamed_function_65370(uVar2,DAT_ram_00567f10);
        param2_00 = unnamed_function_16194(__this->SourceFont,0);
        unnamed_function_52795(uVar3,param2_00,0);
        unnamed_function_16185(uVar2,__this->SourceFont,0);
        unnamed_function_16187(uVar2,4,0);
        unnamed_function_16186(uVar2,0x82,0);
        local_38 = 0x3f80000000000000;
        local_78 = 0x3f80000000000000;
        local_40 = 0x3f8000003f800000;
        local_80 = 0x3f8000003f800000;
        unnamed_function_16190(uVar2,&local_80,0);
        unnamed_function_16183(uVar2,StringLiteral_1514 /* "@" */,0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < __this->NumberOfSamples);
  }
  return;
}

// ---- TMPro.Examples.Benchmark03$$.ctor ----
// C#: void TMPro_Examples_Benchmark03___ctor (TMPro_Examples_Benchmark03_o* __this, const MethodInfo* method);

void TMPro_Examples_Benchmark03___ctor(TMPro_Examples_Benchmark03_o *__this,MethodInfo *method)

{
  __this->NumberOfSamples = 100;
  unnamed_function_44622(__this,0);
  return;
}

