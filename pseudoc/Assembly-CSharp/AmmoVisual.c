// Assembly-CSharp :: AmmoVisual
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AmmoVisual : MonoBehaviour // TypeDefIndex: 5539
{
	// Fields
	private Ammo ammo; // 0x10
	private Vector2 target; // 0x14

	// Methods

	// RVA: 0x3692 Offset: 0x3692 VA: 0x3692
	private void Awake() { }

	// RVA: 0x3693 Offset: 0x3693 VA: 0x3693
	private void Start() { }

	// RVA: 0x3694 Offset: 0x3694 VA: 0x3694
	private void Update() { }

	// RVA: 0x3695 Offset: 0x3695 VA: 0x3695
	private void UpdateAmmoRotation() { }

	// RVA: 0x3696 Offset: 0x3696 VA: 0x3696
	public void SetTarget(Vector2 target) { }

	// RVA: 0x3697 Offset: 0x3697 VA: 0x3697
	public void .ctor() { }
}

===== C# end =====
*/

// ---- AmmoVisual$$Awake ----
// C#: void AmmoVisual__Awake (AmmoVisual_o* __this, const MethodInfo* method);

void AmmoVisual__Awake(AmmoVisual_o *__this,MethodInfo *method)

{
  Ammo_o *pAVar1;
  
  if (DAT_ram_00664a6d == '\0') {
    unnamed_function_1099(&DAT_ram_00567e08);
    DAT_ram_00664a6d = '\x01';
  }
  pAVar1 = (Ammo_o *)unnamed_function_65370(__this,DAT_ram_00567e08);
  __this->ammo = pAVar1;
  return;
}

// ---- AmmoVisual$$Start ----
// C#: void AmmoVisual__Start (AmmoVisual_o* __this, const MethodInfo* method);

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
               (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *__this,MethodInfo *method)

{
  return;
}

// ---- AmmoVisual$$Update ----
// C#: void AmmoVisual__Update (AmmoVisual_o* __this, const MethodInfo* method);

void AmmoVisual__Update(AmmoVisual_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 param1;
  Ammo_o *param1_00;
  Vector2_o VVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  float4 local_8;
  
  param1_00 = __this->ammo;
  VVar2 = param1_00->ammoMoveDirection;
  fVar1 = unnamed_function_12077(VVar2.y,VVar2.x);
  param1 = unnamed_function_44643(param1_00,0);
  local_28 = fVar1 * 57.29578 * 0.017453292;
  local_30 = 0;
  local_10 = 0;
  local_8 = (float4)local_28;
  unnamed_function_8664(&local_20,&local_30,0);
  local_38 = local_18;
  local_40 = local_20;
  unnamed_function_44967(param1,&local_40,0);
  return;
}

// ---- AmmoVisual$$UpdateAmmoRotation ----
// C#: void AmmoVisual__UpdateAmmoRotation (AmmoVisual_o* __this, const MethodInfo* method);

void AmmoVisual__Update(AmmoVisual_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 param1;
  Ammo_o *param1_00;
  Vector2_o VVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  float4 local_8;
  
  param1_00 = __this->ammo;
  VVar2 = param1_00->ammoMoveDirection;
  fVar1 = unnamed_function_12077(VVar2.y,VVar2.x);
  param1 = unnamed_function_44643(param1_00,0);
  local_28 = fVar1 * 57.29578 * 0.017453292;
  local_30 = 0;
  local_10 = 0;
  local_8 = (float4)local_28;
  unnamed_function_8664(&local_20,&local_30,0);
  local_38 = local_18;
  local_40 = local_20;
  unnamed_function_44967(param1,&local_40,0);
  return;
}

// ---- AmmoVisual$$SetTarget ----
// C#: void AmmoVisual__SetTarget (AmmoVisual_o* __this, UnityEngine_Vector2_o target, const MethodInfo* method);

void AmmoVisual__SetTarget(AmmoVisual_o *__this,Vector2_o *target,MethodInfo *method)

{
  __this->target = *target;
  return;
}

// ---- AmmoVisual$$.ctor ----
// C#: void AmmoVisual___ctor (AmmoVisual_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

