// Assembly-CSharp :: PlayerShadow
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class PlayerShadow : MonoBehaviour // TypeDefIndex: 5584
{
	// Methods

	// RVA: 0x3795 Offset: 0x3795 VA: 0x3795
	public void InitialisePlayerShadow(SpriteRenderer[] playerSpriteRenderers) { }

	// RVA: 0x3796 Offset: 0x3796 VA: 0x3796
	private void EnablePlayerShadow() { }

	// RVA: 0x3797 Offset: 0x3797 VA: 0x3797
	private void DisablePlayerShadow() { }

	// RVA: 0x3798 Offset: 0x3798 VA: 0x3798
	public void InitialiseSprite(SpriteRenderer[] playerSpriteRenderers) { }

	// RVA: 0x3799 Offset: 0x3799 VA: 0x3799
	public void .ctor() { }
}

===== C# end =====
*/

// ---- PlayerShadow$$InitialisePlayerShadow ----
// C#: void PlayerShadow__InitialisePlayerShadow (PlayerShadow_o* __this, UnityEngine_SpriteRenderer_array* playerSpriteRenderers, const MethodInfo* method);

void PlayerShadow__InitialisePlayerShadow
               (PlayerShadow_o *__this,UnityEngine_SpriteRenderer_array *playerSpriteRenderers,
               MethodInfo *method)

{
  undefined4 param1;
  
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,1,0);
  PlayerShadow__InitialiseSprite(__this,playerSpriteRenderers,(MethodInfo *)__this);
  return;
}

// ---- PlayerShadow$$EnablePlayerShadow ----
// C#: void PlayerShadow__EnablePlayerShadow (PlayerShadow_o* __this, const MethodInfo* method);

void PlayerShadow__EnablePlayerShadow(PlayerShadow_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,1,0);
  return;
}

// ---- PlayerShadow$$DisablePlayerShadow ----
// C#: void PlayerShadow__DisablePlayerShadow (PlayerShadow_o* __this, const MethodInfo* method);

void Ammo__DisableAmmo(Ammo_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,0,0);
  return;
}

// ---- PlayerShadow$$InitialiseSprite ----
// C#: void PlayerShadow__InitialiseSprite (PlayerShadow_o* __this, UnityEngine_SpriteRenderer_array* playerSpriteRenderers, const MethodInfo* method);

void PlayerShadow__InitialiseSprite
               (PlayerShadow_o *__this,UnityEngine_SpriteRenderer_array *playerSpriteRenderers,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param2;
  int iVar3;
  int iVar4;
  undefined4 param1;
  int param1_00;
  int iVar5;
  
  iVar5 = 0;
  if (DAT_ram_00664ae9 == '\0') {
    unnamed_function_1099(&DAT_ram_00567fe8);
    DAT_ram_00664ae9 = '\x01';
  }
  iVar1 = unnamed_function_65381(__this,DAT_ram_00567fe8);
  iVar3 = *(int *)(iVar1 + 0xc);
  if ((0 < iVar3) && (iVar4 = playerSpriteRenderers[3]._opaque, 0 < iVar4)) {
    do {
      if (0 < iVar4) {
        param1 = *(undefined4 *)(iVar1 + iVar5 * 4 + 0x10);
        iVar3 = 0;
        do {
          param1_00 = playerSpriteRenderers[iVar3 + 4]._opaque;
          uVar2 = unnamed_function_44768(param1,0);
          param2 = unnamed_function_44768(param1_00,0);
          iVar4 = unnamed_function_81494(uVar2,param2,0);
          if (iVar4 != 0) {
            uVar2 = unnamed_function_45022(param1_00,0);
            unnamed_function_45023(param1,uVar2,0);
          }
          iVar3 = iVar3 + 1;
          iVar4 = playerSpriteRenderers[3]._opaque;
        } while (iVar3 < iVar4);
        iVar3 = *(int *)(iVar1 + 0xc);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}

// ---- PlayerShadow$$.ctor ----
// C#: void PlayerShadow___ctor (PlayerShadow_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

