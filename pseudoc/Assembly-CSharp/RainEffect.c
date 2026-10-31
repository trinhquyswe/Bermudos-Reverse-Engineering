// Assembly-CSharp :: RainEffect
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class RainEffect : MonoBehaviour // TypeDefIndex: 5585
{
	// Fields
	private int appearanceRate; // 0x10
	[SerializeField]
	private SoundEffectSO rainEffect; // 0x14

	// Methods

	// RVA: 0x379A Offset: 0x379A VA: 0x379A
	private void Start() { }

	// RVA: 0x379B Offset: 0x379B VA: 0x379B
	private void OnDisable() { }

	// RVA: 0x379C Offset: 0x379C VA: 0x379C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- RainEffect$$Start ----
// C#: void RainEffect__Start (RainEffect_o* __this, const MethodInfo* method);

void RainEffect__Start(RainEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8 [2];
  
  if (DAT_ram_00664aea == '\0') {
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&StringLiteral_5213 /* "MainMenu" */);
    DAT_ram_00664aea = '\x01';
  }
  local_8[0] = 0;
  uVar1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(uVar1,0,0);
  iVar2 = unnamed_function_44584(0,3,0);
  __this->appearanceRate = iVar2;
  if (iVar2 != 0) {
    if (*(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    local_8[0] = unnamed_function_45255(0,0);
    uVar1 = unnamed_function_45228(local_8,0);
    iVar2 = unnamed_function_81494(uVar1,StringLiteral_5213 /* "MainMenu" */,0);
    if (iVar2 == 0) {
      return;
    }
  }
  uVar1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(uVar1,1,0);
  iVar2 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  SoundEffectManager__PlaySoundEffectPersistent
            ((SoundEffectManager_o *)**(undefined4 **)(iVar2 + 0x5c),__this->rainEffect,true,
             (MethodInfo *)0x0);
  return;
}

// ---- RainEffect$$OnDisable ----
// C#: void RainEffect__OnDisable (RainEffect_o* __this, const MethodInfo* method);

void RainEffect__OnDisable(RainEffect_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664aeb == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_00664aeb = '\x01';
  }
  iVar1 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = unnamed_function_95087(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = unnamed_function_95087(iVar1);
  }
  SoundEffectManager__StopSoundEffectLoop
            ((SoundEffectManager_o *)**(undefined4 **)(iVar1 + 0x5c),__this->rainEffect,
             (MethodInfo *)0x0);
  return;
}

// ---- RainEffect$$.ctor ----
// C#: void RainEffect___ctor (RainEffect_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

