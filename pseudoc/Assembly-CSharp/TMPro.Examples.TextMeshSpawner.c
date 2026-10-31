// Assembly-CSharp :: TMPro.Examples.TextMeshSpawner
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TextMeshSpawner : MonoBehaviour // TypeDefIndex: 5771
{
	// Fields
	public int SpawnType; // 0x10
	public int NumberOfNPC; // 0x14
	public Font TheFont; // 0x18
	private TextMeshProFloatingText floatingText_Script; // 0x1C

	// Methods

	// RVA: 0x3B4A Offset: 0x3B4A VA: 0x3B4A
	private void Awake() { }

	// RVA: 0x3B4B Offset: 0x3B4B VA: 0x3B4B
	private void Start() { }

	// RVA: 0x3B4C Offset: 0x3B4C VA: 0x3B4C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.TextMeshSpawner$$Awake ----
// C#: void TMPro_Examples_TextMeshSpawner__Awake (TMPro_Examples_TextMeshSpawner_o* __this, const MethodInfo* method);

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
               (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *__this,MethodInfo *method)

{
  return;
}

// ---- TMPro.Examples.TextMeshSpawner$$Start ----
// C#: void TMPro_Examples_TextMeshSpawner__Start (TMPro_Examples_TextMeshSpawner_o* __this, const MethodInfo* method);

void TMPro_Examples_TextMeshSpawner__Start
               (TMPro_Examples_TextMeshSpawner_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int *param1_00;
  undefined4 param1_01;
  undefined4 param2;
  TMPro_Examples_TextMeshProFloatingText_o *pTVar5;
  int iVar6;
  int iVar7;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  float local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  undefined8 local_38;
  float4 local_30;
  undefined4 local_2c;
  float4 local_28;
  float4 local_20;
  undefined4 local_1c;
  float4 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar7 = 0;
  if (DAT_ram_0066487f == '\0') {
    unnamed_function_1099(&DAT_ram_00567f10);
    unnamed_function_1099(&DAT_ram_00569a28);
    unnamed_function_1099(&DAT_ram_00569a24);
    unnamed_function_1099(&DAT_ram_00569a20);
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&StringLiteral_315 /* "!" */);
    DAT_ram_0066487f = '\x01';
  }
  if (0 < __this->NumberOfNPC) {
    do {
      iVar6 = __this->SpawnType;
      param1 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
      unnamed_function_44697(param1,0);
      uVar2 = unnamed_function_44683(param1,0);
      fVar3 = unnamed_function_44583(-95.0,95.0,0);
      fVar4 = unnamed_function_44583(-95.0,95.0,0);
      bVar1 = iVar6 == 0;
      if (bVar1) {
        local_1c = 0x3f000000;
        local_70 = CONCAT44(0x3f000000,fVar3);
        local_68 = fVar4;
        local_20 = (float4)fVar3;
        local_18 = (float4)fVar4;
        unnamed_function_44962(uVar2,&local_70,0);
        param1_00 = (int *)unnamed_function_73837(param1,DAT_ram_00569a24);
        unnamed_function_23055(param1_00,96.0,0);
        (**(code **)((ulonglong)*(uint *)(*param1_00 + 0x2d0) * 4))
                  (param1_00,StringLiteral_315 /* "!" */,*(undefined4 *)(*param1_00 + 0x2d4));
        local_8 = 0x3f80000000000000;
        local_10 = 0x3f8000003f800000;
        local_78 = 0x3f80000000000000;
        local_80 = 0x3f8000003f800000;
        (**(code **)((ulonglong)*(uint *)(*param1_00 + 0x178) * 4))
                  (param1_00,&local_80,*(undefined4 *)(*param1_00 + 0x17c));
      }
      else {
        local_2c = 0x3f000000;
        local_50 = CONCAT44(0x3f000000,fVar3);
        local_48 = fVar4;
        local_30 = (float4)fVar3;
        local_28 = (float4)fVar4;
        unnamed_function_44962(uVar2,&local_50,0);
        uVar2 = unnamed_function_73837(param1,DAT_ram_00569a20);
        param1_01 = unnamed_function_65370(uVar2,DAT_ram_00567f10);
        param2 = unnamed_function_16194(__this->TheFont,0);
        unnamed_function_52795(param1_01,param2,0);
        unnamed_function_16185(uVar2,__this->TheFont,0);
        unnamed_function_16187(uVar2,7,0);
        unnamed_function_16186(uVar2,0x60,0);
        local_38 = 0x3f80000000000000;
        local_58 = 0x3f80000000000000;
        local_40 = 0x3f8000003f800000;
        local_60 = 0x3f8000003f800000;
        unnamed_function_16190(uVar2,&local_60,0);
        unnamed_function_16183(uVar2,StringLiteral_315 /* "!" */,0);
      }
      pTVar5 = (TMPro_Examples_TextMeshProFloatingText_o *)
               unnamed_function_73837(param1,DAT_ram_00569a28);
      __this->floatingText_Script = pTVar5;
      pTVar5->SpawnType = (uint)!bVar1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < __this->NumberOfNPC);
  }
  return;
}

// ---- TMPro.Examples.TextMeshSpawner$$.ctor ----
// C#: void TMPro_Examples_TextMeshSpawner___ctor (TMPro_Examples_TextMeshSpawner_o* __this, const MethodInfo* method);

void TMPro_Examples_Benchmark02___ctor(TMPro_Examples_Benchmark02_o *__this,MethodInfo *method)

{
  __this->NumberOfNPC = 0xc;
  unnamed_function_44622(__this,0);
  return;
}

