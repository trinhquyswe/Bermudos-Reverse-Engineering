// Assembly-CSharp :: TMPro.Examples.Benchmark02
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Benchmark02 : MonoBehaviour // TypeDefIndex: 5750
{
	// Fields
	public int SpawnType; // 0x10
	public int NumberOfNPC; // 0x14
	public bool IsTextObjectScaleStatic; // 0x18
	private TextMeshProFloatingText floatingText_Script; // 0x1C

	// Methods

	// RVA: 0x3AF4 Offset: 0x3AF4 VA: 0x3AF4
	private void Start() { }

	// RVA: 0x3AF5 Offset: 0x3AF5 VA: 0x3AF5
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.Benchmark02$$Start ----
// C#: void TMPro_Examples_Benchmark02__Start (TMPro_Examples_Benchmark02_o* __this, const MethodInfo* method);

void TMPro_Examples_Benchmark02__Start(TMPro_Examples_Benchmark02_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int *piVar4;
  TMPro_Examples_TextMeshProFloatingText_o *pTVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined4 local_70;
  float4 local_68;
  undefined4 local_64;
  float4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  float4 local_38;
  undefined4 local_34;
  float4 local_30;
  undefined8 local_28;
  float4 local_20;
  undefined4 local_1c;
  float4 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar9 = 0;
  if (DAT_ram_0066485c == '\0') {
    unnamed_function_1099(&DAT_ram_00567f10);
    unnamed_function_1099(&DAT_ram_005699a8);
    unnamed_function_1099(&DAT_ram_00569a28);
    unnamed_function_1099(&DAT_ram_00569a2c);
    unnamed_function_1099(&DAT_ram_00569a24);
    unnamed_function_1099(&DAT_ram_00569a20);
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056bfa0);
    unnamed_function_1099(&StringLiteral_315 /* "!" */);
    unnamed_function_1099(&StringLiteral_3938 /* "Fonts/ARIAL" */);
    DAT_ram_0066485c = '\x01';
  }
  if (0 < __this->NumberOfNPC) {
    do {
      iVar8 = __this->SpawnType;
      if (iVar8 == 0) {
        uVar1 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
        unnamed_function_44697(uVar1,0);
        uVar2 = unnamed_function_44683(uVar1,0);
        fVar3 = unnamed_function_44583(-95.0,95.0,0);
        local_c0 = unnamed_function_44583(-95.0,95.0,0);
        local_1c = 0x3e800000;
        local_c8 = CONCAT44(0x3e800000,fVar3);
        local_20 = (float4)fVar3;
        local_18 = (float4)local_c0;
        unnamed_function_44962(uVar2,&local_c8,0);
        piVar4 = (int *)unnamed_function_73837(uVar1,DAT_ram_00569a24);
        (**(code **)((ulonglong)*(uint *)(*piVar4 + 800) * 4))
                  (piVar4,1,*(undefined4 *)(*piVar4 + 0x324));
        uVar2 = unnamed_function_23147(piVar4,0);
        local_28 = 0x3f000000;
        local_d0 = 0x3f000000;
        unnamed_function_44942(uVar2,&local_d0,0);
        unnamed_function_23071(piVar4,&DAT_ram_00000402,0);
        unnamed_function_23055(piVar4,96.0,0);
        unnamed_function_23098(piVar4,0,0);
        local_8 = 0x3f80000000000000;
        local_10 = 0x3f8000003f800000;
        local_d8 = 0x3f80000000000000;
        local_e0 = 0x3f8000003f800000;
        (**(code **)((ulonglong)*(uint *)(*piVar4 + 0x178) * 4))
                  (piVar4,&local_e0,*(undefined4 *)(*piVar4 + 0x17c));
        (**(code **)((ulonglong)*(uint *)(*piVar4 + 0x2d0) * 4))
                  (piVar4,StringLiteral_315 /* "!" */,*(undefined4 *)(*piVar4 + 0x2d4));
        unnamed_function_23124(piVar4,(uint)__this->IsTextObjectScaleStatic,0);
        pTVar5 = (TMPro_Examples_TextMeshProFloatingText_o *)
                 unnamed_function_73837(uVar1,DAT_ram_00569a28);
        __this->floatingText_Script = pTVar5;
        pTVar5->SpawnType = 0;
        pTVar5->IsTextObjectScaleStatic = __this->IsTextObjectScaleStatic;
      }
      else if (iVar8 == 1) {
        uVar1 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
        unnamed_function_44697(uVar1,0);
        uVar2 = unnamed_function_44683(uVar1,0);
        fVar3 = unnamed_function_44583(-95.0,95.0,0);
        local_a0 = unnamed_function_44583(-95.0,95.0,0);
        local_34 = 0x3e800000;
        local_a8 = CONCAT44(0x3e800000,fVar3);
        local_38 = (float4)fVar3;
        local_30 = (float4)local_a0;
        unnamed_function_44962(uVar2,&local_a8,0);
        uVar2 = unnamed_function_73837(uVar1,DAT_ram_00569a20);
        uVar6 = unnamed_function_60803(StringLiteral_3938 /* "Fonts/ARIAL" */,DAT_ram_0056bfa0);
        unnamed_function_16185(uVar2,uVar6,0);
        uVar6 = unnamed_function_65370(uVar2,DAT_ram_00567f10);
        uVar7 = unnamed_function_16184(uVar2,0);
        uVar7 = unnamed_function_16194(uVar7,0);
        unnamed_function_52795(uVar6,uVar7,0);
        unnamed_function_16187(uVar2,7,0);
        unnamed_function_16186(uVar2,0x60,0);
        local_40 = 0x3f80000000000000;
        local_b0 = 0x3f80000000000000;
        local_48 = 0x3f8000003f800000;
        local_b8 = 0x3f8000003f800000;
        unnamed_function_16190(uVar2,&local_b8,0);
        unnamed_function_16183(uVar2,StringLiteral_315 /* "!" */,0);
        pTVar5 = (TMPro_Examples_TextMeshProFloatingText_o *)
                 unnamed_function_73837(uVar1,DAT_ram_00569a28);
        __this->floatingText_Script = pTVar5;
        pTVar5->SpawnType = 1;
      }
      else if (iVar8 == 2) {
        uVar1 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
        unnamed_function_44697(uVar1,0);
        uVar2 = unnamed_function_73837(uVar1,DAT_ram_005699a8);
        uVar6 = unnamed_function_52349(0);
        unnamed_function_16289(uVar2,uVar6,0);
        uVar2 = unnamed_function_44683(uVar1,0);
        local_50 = 0x3dcccccd;
        local_70 = 0x3dcccccd;
        local_58 = 0x3dcccccd3dcccccd;
        local_78 = 0x3dcccccd3dcccccd;
        unnamed_function_44982(uVar2,&local_78,0);
        uVar2 = unnamed_function_44683(uVar1,0);
        fVar3 = unnamed_function_44583(-95.0,95.0,0);
        local_80 = unnamed_function_44583(-95.0,95.0,0);
        local_64 = 0x40a00000;
        local_88 = CONCAT44(0x40a00000,fVar3);
        local_68 = (float4)fVar3;
        local_60 = (float4)local_80;
        unnamed_function_44962(uVar2,&local_88,0);
        uVar2 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
        unnamed_function_44697(uVar2,0);
        piVar4 = (int *)unnamed_function_73837(uVar2,DAT_ram_00569a2c);
        uVar2 = unnamed_function_23147(piVar4,0);
        uVar6 = unnamed_function_44683(uVar1,0);
        unnamed_function_44985(uVar2,uVar6,0,0);
        local_8 = 0x3f80000000000000;
        local_10 = 0x3f8000003f800000;
        local_90 = 0x3f80000000000000;
        local_98 = 0x3f8000003f800000;
        (**(code **)((ulonglong)*(uint *)(*piVar4 + 0x178) * 4))
                  (piVar4,&local_98,*(undefined4 *)(*piVar4 + 0x17c));
        unnamed_function_23071(piVar4,&DAT_ram_00000402,0);
        unnamed_function_23055(piVar4,96.0,0);
        (**(code **)((ulonglong)*(uint *)(*piVar4 + 0x2d0) * 4))
                  (piVar4,StringLiteral_315 /* "!" */,*(undefined4 *)(*piVar4 + 0x2d4));
        pTVar5 = (TMPro_Examples_TextMeshProFloatingText_o *)
                 unnamed_function_73837(uVar1,DAT_ram_00569a28);
        __this->floatingText_Script = pTVar5;
        pTVar5->SpawnType = 0;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < __this->NumberOfNPC);
  }
  return;
}

// ---- TMPro.Examples.Benchmark02$$.ctor ----
// C#: void TMPro_Examples_Benchmark02___ctor (TMPro_Examples_Benchmark02_o* __this, const MethodInfo* method);

void TMPro_Examples_Benchmark02___ctor(TMPro_Examples_Benchmark02_o *__this,MethodInfo *method)

{
  __this->NumberOfNPC = 0xc;
  unnamed_function_44622(__this,0);
  return;
}

