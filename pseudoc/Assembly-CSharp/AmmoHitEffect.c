// Assembly-CSharp :: AmmoHitEffect
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AmmoHitEffect : MonoBehaviour // TypeDefIndex: 5538
{
	// Fields
	private ParticleSystem particleSystemHitEffect; // 0x10

	// Methods

	// RVA: 0x368F Offset: 0x368F VA: 0x368F
	private void Awake() { }

	// RVA: 0x3690 Offset: 0x3690 VA: 0x3690
	public void InitialiseAmmoHitEffect(Color ammoHitEffectType) { }

	// RVA: 0x3691 Offset: 0x3691 VA: 0x3691
	public void .ctor() { }
}

===== C# end =====
*/

// ---- AmmoHitEffect$$Awake ----
// C#: void AmmoHitEffect__Awake (AmmoHitEffect_o* __this, const MethodInfo* method);

void AmmoHitEffect__Awake(AmmoHitEffect_o *__this,MethodInfo *method)

{
  ParticleSystem_o *pPVar1;
  
  if (DAT_ram_00664a6c == '\0') {
    unnamed_function_1099(&DAT_ram_00567eec);
    DAT_ram_00664a6c = '\x01';
  }
  pPVar1 = (ParticleSystem_o *)unnamed_function_65370(__this,DAT_ram_00567eec);
  __this->particleSystemHitEffect = pPVar1;
  return;
}

// ---- AmmoHitEffect$$InitialiseAmmoHitEffect ----
// C#: void AmmoHitEffect__InitialiseAmmoHitEffect (AmmoHitEffect_o* __this, UnityEngine_Color_o ammoHitEffectType, const MethodInfo* method);

void AmmoHitEffect__InitialiseAmmoHitEffect
               (AmmoHitEffect_o *__this,Color_o *ammoHitEffectType,MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ParticleSystem_o *local_8 [2];
  
  local_8[0] = __this->particleSystemHitEffect;
  local_40._0_4_ = ammoHitEffectType->b;
  local_40._4_4_ = ammoHitEffectType->a;
  local_48._0_4_ = ammoHitEffectType->r;
  local_48._4_4_ = ammoHitEffectType->g;
  unnamed_function_86814(&local_38,&local_48,0);
  local_50 = local_10;
  local_58 = local_18;
  local_60 = local_20;
  local_68 = local_28;
  local_70 = local_30;
  local_78 = local_38;
  unnamed_function_86787(local_8,&local_78,0);
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,1,0);
  return;
}

// ---- AmmoHitEffect$$.ctor ----
// C#: void AmmoHitEffect___ctor (AmmoHitEffect_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

