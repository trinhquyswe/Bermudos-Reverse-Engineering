// Assembly-CSharp :: Bonfire
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Bonfire : MonoBehaviour // TypeDefIndex: 5555
{
	// Fields
	private LayerMask playerLayer; // 0x10
	[SerializeField]
	private SpriteRenderer icon; // 0x14
	[SerializeField]
	private SoundEffectSO restSoundEffect; // 0x18

	// Methods

	// RVA: 0x36EB Offset: 0x36EB VA: 0x36EB
	private void Awake() { }

	// RVA: 0x36EC Offset: 0x36EC VA: 0x36EC
	private void OnEnable() { }

	// RVA: 0x36ED Offset: 0x36ED VA: 0x36ED
	private void OnDisable() { }

	// RVA: 0x36EE Offset: 0x36EE VA: 0x36EE
	private void OnCollisionEnter2D(Collision2D collision) { }

	// RVA: 0x36EF Offset: 0x36EF VA: 0x36EF
	private void OnCollisionExit2D(Collision2D collision) { }

	// RVA: 0x36F0 Offset: 0x36F0 VA: 0x36F0
	public void RestInBonfire() { }

	// RVA: 0x36F1 Offset: 0x36F1 VA: 0x36F1
	private void SaveCheckPointAtBonfire() { }

	// RVA: 0x36F2 Offset: 0x36F2 VA: 0x36F2
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Bonfire$$Awake ----
// C#: void Bonfire__Awake (Bonfire_o* __this, const MethodInfo* method);

void Bonfire__Awake(Bonfire_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664aa1 == '\0') {
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_6075 /* "Player" */);
    DAT_ram_00664aa1 = '\x01';
  }
  iVar1 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar1 + 0x10) = StringLiteral_6075 /* "Player" */;
  iVar1 = unnamed_function_44703(iVar1,0);
  (__this->playerLayer).m_Mask = iVar1;
  param1 = unnamed_function_44644(__this->icon,0);
  unnamed_function_44686(param1,0,0);
  return;
}

// ---- Bonfire$$OnEnable ----
// C#: void Bonfire__OnEnable (Bonfire_o* __this, const MethodInfo* method);

void Bonfire__OnEnable(Bonfire_o *__this,MethodInfo *method)

{
  System_Action_o *value;
  
  if (DAT_ram_00664aa2 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_00567860);
    DAT_ram_00664aa2 = '\x01';
  }
  value = (System_Action_o *)unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(value,__this,DAT_ram_00567860,0);
  StaticEventHandler__add_OnPressRestEvent(value,(MethodInfo *)0x0);
  return;
}

// ---- Bonfire$$OnDisable ----
// C#: void Bonfire__OnDisable (Bonfire_o* __this, const MethodInfo* method);

void Bonfire__OnDisable(Bonfire_o *__this,MethodInfo *method)

{
  System_Action_o *value;
  
  if (DAT_ram_00664aa3 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_00567860);
    DAT_ram_00664aa3 = '\x01';
  }
  value = (System_Action_o *)unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(value,__this,DAT_ram_00567860,0);
  StaticEventHandler__remove_OnPressRestEvent(value,(MethodInfo *)0x0);
  return;
}

// ---- Bonfire$$OnCollisionEnter2D ----
// C#: void Bonfire__OnCollisionEnter2D (Bonfire_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void Bonfire__OnCollisionEnter2D
               (Bonfire_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (__this->playerLayer).m_Mask;
  uVar1 = unnamed_function_16380(collision,0);
  uVar2 = unnamed_function_44684(uVar1,0);
  if (0 < (int)(uVar3 & 1 << (uVar2 & 0x1f))) {
    uVar1 = unnamed_function_44644(__this->icon,0);
    unnamed_function_44686(uVar1,1,0);
  }
  return;
}

// ---- Bonfire$$OnCollisionExit2D ----
// C#: void Bonfire__OnCollisionExit2D (Bonfire_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void Bonfire__OnCollisionExit2D
               (Bonfire_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  undefined4 param1;
  
  param1 = unnamed_function_44644(__this->icon,0);
  unnamed_function_44686(param1,0,0);
  return;
}

// ---- Bonfire$$RestInBonfire ----
// C#: void Bonfire__RestInBonfire (Bonfire_o* __this, const MethodInfo* method);

void Bonfire__RestInBonfire(Bonfire_o *__this,MethodInfo *method)

{
  undefined4 param1;
  int iVar1;
  
  if (DAT_ram_00664aa4 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_00664aa4 = '\x01';
  }
  param1 = unnamed_function_44644(__this->icon,0);
  iVar1 = unnamed_function_44687(param1,0);
  if (iVar1 != 0) {
    StaticEventHandler__CallRestInBonfireEvent((MethodInfo *)0x0);
    Bonfire__SaveCheckPointAtBonfire(__this,(MethodInfo *)__this);
    iVar1 = *(int *)(DAT_ram_00565d6c + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    SoundEffectManager__PlaySoundEffect
              ((SoundEffectManager_o *)**(undefined4 **)(iVar1 + 0x5c),__this->restSoundEffect,
               (MethodInfo *)0x0);
  }
  return;
}

// ---- Bonfire$$SaveCheckPointAtBonfire ----
// C#: void Bonfire__SaveCheckPointAtBonfire (Bonfire_o* __this, const MethodInfo* method);

void Bonfire__SaveCheckPointAtBonfire(Bonfire_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_ram_00664aa5 == '\0') {
    unnamed_function_1099(&DAT_ram_0056c1b0);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&StringLiteral_7311 /* "The Forest" */);
    unnamed_function_1099(&StringLiteral_2641 /* "Checkpoint" */);
    DAT_ram_00664aa5 = '\x01';
  }
  iVar2 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  uVar1 = unnamed_function_60744(*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x18),0);
  unnamed_function_60813(uVar1,StringLiteral_2641 /* "Checkpoint" */,StringLiteral_7311 /* "The Forest" */,DAT_ram_0056c1b0);
  iVar2 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  uVar1 = unnamed_function_60744(*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x18),0);
  unnamed_function_60714(uVar1,0,0);
  uVar1 = unnamed_function_42591(StringLiteral_7311 /* "The Forest" */,0);
  unnamed_function_44558(StringLiteral_2641 /* "Checkpoint" */,uVar1,0);
  unnamed_function_44564(0);
  return;
}

// ---- Bonfire$$.ctor ----
// C#: void Bonfire___ctor (Bonfire_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

