// Assembly-CSharp :: TMPro.Examples.ObjectSpin
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ObjectSpin : MonoBehaviour // TypeDefIndex: 5757
{
	// Fields
	public float SpinSpeed; // 0x10
	public int RotationRange; // 0x14
	private Transform m_transform; // 0x18
	private float m_time; // 0x1C
	private Vector3 m_prevPOS; // 0x20
	private Vector3 m_initial_Rotation; // 0x2C
	private Vector3 m_initial_Position; // 0x38
	private Color32 m_lightColor; // 0x44
	private int frames; // 0x48
	public ObjectSpin.MotionType Motion; // 0x4C

	// Methods

	// RVA: 0x3B00 Offset: 0x3B00 VA: 0x3B00
	private void Awake() { }

	// RVA: 0x3B01 Offset: 0x3B01 VA: 0x3B01
	private void Update() { }

	// RVA: 0x3B02 Offset: 0x3B02 VA: 0x3B02
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.Examples.ObjectSpin$$Awake ----
// C#: void TMPro_Examples_ObjectSpin__Awake (TMPro_Examples_ObjectSpin_o* __this, const MethodInfo* method);

void TMPro_Examples_ObjectSpin__Awake(TMPro_Examples_ObjectSpin_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  RuleTile_TilingRuleOutput_Transform param2;
  undefined4 param1;
  int iVar3;
  float4 local_30;
  float4 local_28;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  undefined1 local_50 [16];
  float4 local_40;
  float4 local_3c;
  float4 local_38;
  float4 local_34;
  float4 local_20;
  float4 local_1c;
  float4 local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  fVar1 = 0.0;
  fVar2 = 0.0;
  if (DAT_ram_00664863 == '\0') {
    unnamed_function_1099(&DAT_ram_00567ec4);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664863 = '\x01';
  }
  param2 = unnamed_function_44643(__this,0);
  __this->m_transform = param2;
  unnamed_function_44965(&local_30,param2,0);
  unnamed_function_8666(&local_10,local_50,0);
  local_58 = (float)local_8 * 57.29578;
  local_1c = (float4)((float)local_c * 57.29578);
  local_20 = (float4)((float)local_10 * 57.29578);
  local_60 = CONCAT44(local_1c,local_20);
  local_18 = (float4)local_58;
  unnamed_function_8681(&local_10,&local_60,0);
  (__this->m_initial_Rotation).z = (float)local_8;
  (__this->m_initial_Rotation).x = (float)local_10;
  (__this->m_initial_Rotation).y = (float)local_c;
  unnamed_function_44960(&local_20,__this->m_transform,0);
  (__this->m_initial_Position).z = (float)local_18;
  (__this->m_initial_Position).x = (float)local_20;
  (__this->m_initial_Position).y = (float)local_1c;
  param1 = unnamed_function_65370(__this,DAT_ram_00567ec4);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar3 = unnamed_function_44679(param1,0,0);
  if (iVar3 == 0) {
    local_28 = 1.0;
    local_28 = 0.0;
  }
  else {
    unnamed_function_52938(&local_30,param1,0);
    fVar1 = local_30;
    fVar2 = local_30;
  }
  local_68 = CONCAT44(local_28,local_28);
  local_70 = CONCAT44(fVar1,fVar2);
  local_40 = fVar2;
  local_3c = fVar1;
  local_38 = local_28;
  local_34 = local_28;
  unnamed_function_8492(&local_30,&local_70,0);
  __this->m_lightColor = (UnityEngine_Color32_o)local_30;
  return;
}

// ---- TMPro.Examples.ObjectSpin$$Update ----
// C#: void TMPro_Examples_ObjectSpin__Update (TMPro_Examples_ObjectSpin_o* __this, const MethodInfo* method);

void TMPro_Examples_ObjectSpin__Update(TMPro_Examples_ObjectSpin_o *__this,MethodInfo *method)

{
  float fVar1;
  RuleTile_TilingRuleOutput_Transform RVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  float local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  float local_38;
  float4 local_30;
  float4 local_2c;
  float4 local_28;
  undefined8 local_20;
  float local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (__this->Motion == Rotation) {
    RVar2 = __this->m_transform;
    fVar5 = __this->SpinSpeed;
    fVar1 = unnamed_function_44879(0);
    unnamed_function_44995(RVar2,0.0,fVar5 * fVar1,0.0,0);
  }
  else if (__this->Motion == BackAndForth) {
    fVar4 = __this->m_time;
    fVar5 = __this->SpinSpeed;
    fVar1 = unnamed_function_44879(0);
    fVar4 = fVar4 + fVar5 * fVar1;
    __this->m_time = fVar4;
    fVar5 = (__this->m_initial_Rotation).y;
    RVar2 = __this->m_transform;
    iVar3 = __this->RotationRange;
    local_38 = (__this->m_initial_Rotation).z * 0.017453292;
    local_10 = (float4)((__this->m_initial_Rotation).x * 0.017453292);
    local_8 = (float4)local_38;
    fVar1 = unnamed_function_12076(fVar4);
    local_c = (float4)((fVar5 + fVar1 * (float)iVar3) * 0.017453292);
    local_40 = CONCAT44(local_c,local_10);
    unnamed_function_8664(&local_20,&local_40,0);
    local_50[0] = local_20;
    unnamed_function_44967(RVar2,local_50,0);
  }
  else {
    fVar4 = __this->m_time;
    fVar5 = __this->SpinSpeed;
    fVar1 = unnamed_function_44879(0);
    fVar4 = fVar4 + fVar5 * fVar1;
    __this->m_time = fVar4;
    RVar2 = __this->m_transform;
    fVar5 = (__this->m_initial_Position).x;
    local_58 = (__this->m_initial_Position).z + 10.0;
    local_2c = (float4)((__this->m_initial_Position).y + 0.0);
    local_28 = (float4)local_58;
    fVar1 = unnamed_function_12075(fVar4 * 0.95);
    local_30 = (float4)(fVar5 + fVar1 * 15.0);
    local_60 = CONCAT44(local_2c,local_30);
    unnamed_function_44962(RVar2,&local_60,0);
    unnamed_function_44960(&local_20,__this->m_transform,0);
    (__this->m_prevPOS).z = local_18;
    (__this->m_prevPOS).x = (float)(undefined4)local_20;
    (__this->m_prevPOS).y = (float)local_20._4_4_;
    __this->frames = __this->frames + 1;
  }
  return;
}

// ---- TMPro.Examples.ObjectSpin$$.ctor ----
// C#: void TMPro_Examples_ObjectSpin___ctor (TMPro_Examples_ObjectSpin_o* __this, const MethodInfo* method);

void TMPro_Examples_ObjectSpin___ctor(TMPro_Examples_ObjectSpin_o *__this,MethodInfo *method)

{
  __this->SpinSpeed = 5.0;
  __this->RotationRange = 0xf;
  unnamed_function_44622(__this,0);
  return;
}

