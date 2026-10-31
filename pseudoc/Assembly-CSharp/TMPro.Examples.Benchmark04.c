// Assembly-CSharp :: TMPro.Examples.Benchmark04
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Benchmark04 : MonoBehaviour // TypeDefIndex: 5753
{
	// Fields
	public int SpawnType; // 0x10
	public int MinPointSize; // 0x14
	public int MaxPointSize; // 0x18
	public int Steps; // 0x1C
	private Transform m_Transform; // 0x20

	// Methods

	// RVA: 0x3AF9 Offset: 0x3AF9 VA: 0x3AF9
	private void Start() { }

	// RVA: 0x3AFA Offset: 0x3AFA VA: 0x3AFA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.Benchmark04$$Start ----
// C#: void TMPro_Examples_Benchmark04__Start (TMPro_Examples_Benchmark04_o* __this, const MethodInfo* method);

void TMPro_Examples_Benchmark04__Start(TMPro_Examples_Benchmark04_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  RuleTile_TilingRuleOutput_Transform RVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 param1;
  int *param1_00;
  float param2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float4 local_20;
  float4 local_1c;
  float4 local_18;
  int local_14;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_0066485e == '\0') {
    unnamed_function_1099(&DAT_ram_00569a24);
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&StringLiteral_157 /* " Pts" */);
    unnamed_function_1099(&StringLiteral_7217 /* "Text - " */);
    unnamed_function_1099(&StringLiteral_271 /* " pts - Lorem ipsum dolor sit..." */);
    DAT_ram_0066485e = '\x01';
  }
  RVar3 = unnamed_function_44643(__this,0);
  __this->m_Transform = RVar3;
  uVar4 = unnamed_function_52349(0);
  iVar5 = unnamed_function_52651(0);
  param2 = (float)(iVar5 / 2);
  unnamed_function_52285(uVar4,param2,0);
  iVar6 = unnamed_function_52650(0);
  iVar7 = unnamed_function_52651(0);
  local_14 = __this->MinPointSize;
  iVar5 = __this->MaxPointSize;
  if ((local_14 <= iVar5) && (__this->SpawnType == 0)) {
    fVar2 = 0.0;
    iVar1 = 0;
    while( true ) {
      if (iVar1 == 0) {
        uVar4 = unnamed_function_83644(&local_14,0);
        uVar4 = unnamed_function_81504(StringLiteral_7217 /* "Text - " */,uVar4,StringLiteral_157 /* " Pts" */,0);
        param1 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
        unnamed_function_44695(param1,uVar4,0);
        if (param2 + param2 < fVar2) {
          return;
        }
        uVar4 = unnamed_function_44683(param1,0);
        unnamed_function_44960(&local_10,__this->m_Transform,0);
        local_30 = (float)local_8 + 0.0;
        local_1c = (float4)((param2 * 0.975 - fVar2) + (float)local_c);
        local_20 = (float4)(((float)iVar6 / (float)iVar7) * -param2 * 0.975 + (float)local_10);
        local_38 = CONCAT44(local_1c,local_20);
        local_18 = (float4)local_30;
        unnamed_function_44962(uVar4,&local_38,0);
        param1_00 = (int *)unnamed_function_73837(param1,DAT_ram_00569a24);
        uVar4 = unnamed_function_23147(param1_00,0);
        local_28 = 0x3f00000000000000;
        local_40 = 0x3f00000000000000;
        unnamed_function_44942(uVar4,&local_40,0);
        unnamed_function_23085(param1_00,0,0);
        unnamed_function_23100(param1_00,1,0);
        unnamed_function_23108(param1_00,1,0);
        unnamed_function_23055(param1_00,(float)local_14,0);
        uVar4 = unnamed_function_83644(&local_14,0);
        uVar4 = unnamed_function_81364(uVar4,StringLiteral_271 /* " pts - Lorem ipsum dolor sit..." */,0);
        (**(code **)((ulonglong)*(uint *)(*param1_00 + 0x2d0) * 4))
                  (param1_00,uVar4,*(undefined4 *)(*param1_00 + 0x2d4));
        _local_8 = 0x3f8000003f800000;
        _local_10 = 0x3f8000003f800000;
        local_48 = 0x3f8000003f800000;
        local_50 = 0x3f8000003f800000;
        (**(code **)((ulonglong)*(uint *)(*param1_00 + 0x178) * 4))
                  (param1_00,&local_50,*(undefined4 *)(*param1_00 + 0x17c));
        iVar5 = __this->MaxPointSize;
        fVar2 = fVar2 + (float)local_14;
      }
      local_14 = __this->Steps + local_14;
      if (iVar5 < local_14) break;
      iVar1 = __this->SpawnType;
    }
    return;
  }
  return;
}

// ---- TMPro.Examples.Benchmark04$$.ctor ----
// C#: void TMPro_Examples_Benchmark04___ctor (TMPro_Examples_Benchmark04_o* __this, const MethodInfo* method);

void TMPro_Examples_Benchmark04___ctor(TMPro_Examples_Benchmark04_o *__this,MethodInfo *method)

{
  __this->Steps = 4;
  __this->MinPointSize = 0xc;
  __this->MaxPointSize = 0x40;
  unnamed_function_44622(__this,0);
  return;
}

