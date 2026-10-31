// Assembly-CSharp :: AmmoAnimation
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AmmoAnimation : MonoBehaviour // TypeDefIndex: 5536
{
	// Fields
	private Animator animator; // 0x10
	private Ammo ammo; // 0x14

	// Methods

	// RVA: 0x368B Offset: 0x368B VA: 0x368B
	private void Awake() { }

	// RVA: 0x368C Offset: 0x368C VA: 0x368C
	public void InitializeAmmoAnimation() { }

	// RVA: 0x368D Offset: 0x368D VA: 0x368D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- AmmoAnimation$$Awake ----
// C#: void AmmoAnimation__Awake (AmmoAnimation_o* __this, const MethodInfo* method);

void AmmoAnimation__Awake(AmmoAnimation_o *__this,MethodInfo *method)

{
  Ammo_o *pAVar1;
  Animator_o *pAVar2;
  
  if (DAT_ram_00664a6a == '\0') {
    unnamed_function_1099(&DAT_ram_00567e08);
    unnamed_function_1099(&DAT_ram_00567e18);
    DAT_ram_00664a6a = '\x01';
  }
  pAVar1 = (Ammo_o *)unnamed_function_65370(__this,DAT_ram_00567e08);
  __this->ammo = pAVar1;
  pAVar2 = (Animator_o *)unnamed_function_65370(__this,DAT_ram_00567e18);
  __this->animator = pAVar2;
  return;
}

// ---- AmmoAnimation$$InitializeAmmoAnimation ----
// C#: void AmmoAnimation__InitializeAmmoAnimation (AmmoAnimation_o* __this, const MethodInfo* method);

void AmmoAnimation__InitializeAmmoAnimation(AmmoAnimation_o *__this,MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664a6b == '\0') {
    unnamed_function_1099(&UnityEngine_AnimatorOverrideController_TypeInfo);
    unnamed_function_1099(&StringLiteral_5206 /* "MagickShoot" */);
    DAT_ram_00664a6b = '\x01';
  }
  param2 = unnamed_function_45464(__this->animator,0);
  param1 = unnamed_function_95402(UnityEngine_AnimatorOverrideController_TypeInfo);
  unnamed_function_45471(param1,param2,0);
  unnamed_function_45474(param1,StringLiteral_5206 /* "MagickShoot" */,__this->ammo->ammoDetailsSO->enemyAmmoType,0);
  unnamed_function_45465(__this->animator,param1,0);
  return;
}

// ---- AmmoAnimation$$.ctor ----
// C#: void AmmoAnimation___ctor (AmmoAnimation_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

