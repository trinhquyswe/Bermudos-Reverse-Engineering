// Assembly-CSharp :: Arrow
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Arrow : MonoBehaviour // TypeDefIndex: 5699
{
	// Fields
	private LineRenderer lineRenderer; // 0x10

	// Methods

	// RVA: 0x39EA Offset: 0x39EA VA: 0x39EA
	private void Awake() { }

	// RVA: 0x39EB Offset: 0x39EB VA: 0x39EB
	public void MakeArrow(Vector2 startPosition, Vector2 endPosition) { }

	// RVA: 0x39EC Offset: 0x39EC VA: 0x39EC
	public void ClearArrow() { }

	// RVA: 0x39ED Offset: 0x39ED VA: 0x39ED
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Arrow$$Awake ----
// C#: void Arrow__Awake (Arrow_o* __this, const MethodInfo* method);

void Arrow__Awake(Arrow_o *__this,MethodInfo *method)

{
  LineRenderer_o *pLVar1;
  
  if (DAT_ram_0066496a == '\0') {
    unnamed_function_1099(&DAT_ram_00567ec8);
    DAT_ram_0066496a = '\x01';
  }
  pLVar1 = (LineRenderer_o *)unnamed_function_65370(__this,DAT_ram_00567ec8);
  __this->lineRenderer = pLVar1;
  return;
}

// ---- Arrow$$MakeArrow ----
// C#: void Arrow__MakeArrow (Arrow_o* __this, UnityEngine_Vector2_o startPosition, UnityEngine_Vector2_o endPosition, const MethodInfo* method);

void Arrow__MakeArrow(Arrow_o *__this,Vector2_o *startPosition,Vector2_o *endPosition,
                     MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Vector2_o VVar10;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  Vector2_o local_60;
  undefined4 local_58;
  float4 local_50;
  float4 local_4c;
  undefined4 local_48;
  float4 local_40;
  float4 local_3c;
  undefined4 local_38;
  float4 local_30;
  float4 local_2c;
  undefined4 local_28;
  float4 local_20;
  float4 local_1c;
  undefined4 local_18;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  VVar10 = *startPosition;
  fVar8 = (*endPosition).y;
  fVar9 = (*endPosition).x;
  if (DAT_ram_006634ad == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_006634ad = '\x01';
  }
  fVar1 = fVar8 - VVar10.y;
  fVar2 = fVar9 - VVar10.x;
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  if (1e-05 < fVar3) {
    fVar4 = fVar2 / fVar3;
    fVar5 = -fVar1 / fVar3;
  }
  else {
    if (DAT_ram_0066482a == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_0066482a = '\x01';
    }
    fVar4 = (*(float **)(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
    fVar5 = **(float **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  }
  if (DAT_ram_006634ad == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_006634ad = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  if (1e-05 < fVar3) {
    fVar6 = fVar1 / fVar3;
    fVar7 = fVar2 / fVar3;
  }
  else {
    if (DAT_ram_0066482a == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_0066482a = '\x01';
    }
    fVar6 = (*(float **)(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
    fVar7 = **(float **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  }
  if (DAT_ram_006634ad == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_006634ad = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar8 = fVar1 + fVar8;
  fVar9 = fVar2 + fVar9;
  if (1e-05 < fVar3) {
    fVar1 = fVar1 / fVar3;
    fVar2 = fVar2 / fVar3;
  }
  else {
    if (DAT_ram_0066482a == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_0066482a = '\x01';
    }
    fVar1 = (*(float **)(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
    fVar2 = **(float **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  }
  unnamed_function_52758(__this->lineRenderer,5,0);
  local_8 = 0;
  local_58 = 0;
  local_60 = VVar10;
  local_10 = VVar10.x;
  local_c = VVar10.y;
  unnamed_function_52759(__this->lineRenderer,0,&local_60,0);
  local_18 = 0;
  local_68 = 0;
  local_70 = CONCAT44(fVar8,fVar9);
  local_20 = (float4)fVar9;
  local_1c = (float4)fVar8;
  unnamed_function_52759(__this->lineRenderer,1,&local_70,0);
  local_28 = 0;
  local_78 = 0;
  local_2c = (float4)(fVar4 + (fVar8 - fVar6));
  local_30 = (float4)(fVar5 + (fVar9 - fVar7));
  local_80 = CONCAT44(local_2c,local_30);
  unnamed_function_52759(__this->lineRenderer,2,&local_80,0);
  local_38 = 0;
  local_88 = 0;
  local_90 = CONCAT44(fVar8,fVar9);
  local_40 = (float4)fVar9;
  local_3c = (float4)fVar8;
  unnamed_function_52759(__this->lineRenderer,3,&local_90,0);
  local_48 = 0;
  local_98 = 0;
  local_4c = (float4)((fVar8 - fVar1) - fVar4);
  local_50 = (float4)((fVar9 - fVar2) - fVar5);
  local_a0 = CONCAT44(local_4c,local_50);
  unnamed_function_52759(__this->lineRenderer,4,&local_a0,0);
  return;
}

// ---- Arrow$$ClearArrow ----
// C#: void Arrow__ClearArrow (Arrow_o* __this, const MethodInfo* method);

void Arrow__ClearArrow(Arrow_o *__this,MethodInfo *method)

{
  unnamed_function_52758(__this->lineRenderer,0,0);
  return;
}

// ---- Arrow$$.ctor ----
// C#: void Arrow___ctor (Arrow_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

