// Assembly-CSharp :: RestUI
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class RestUI : MonoBehaviour // TypeDefIndex: 5556
{
	// Fields
	private Image restImage; // 0x10
	private TextMeshProUGUI restText; // 0x14

	// Methods

	// RVA: 0x36F3 Offset: 0x36F3 VA: 0x36F3
	private void Awake() { }

	// RVA: 0x36F4 Offset: 0x36F4 VA: 0x36F4
	private void Start() { }

	// RVA: 0x36F5 Offset: 0x36F5 VA: 0x36F5
	private void OnEnable() { }

	// RVA: 0x36F6 Offset: 0x36F6 VA: 0x36F6
	private void OnDestroy() { }

	// RVA: 0x36F7 Offset: 0x36F7 VA: 0x36F7
	private void ShowRestUI() { }

	// RVA: 0x36F8 Offset: 0x36F8 VA: 0x36F8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x36F9 Offset: 0x36F9 VA: 0x36F9
	private void <ShowRestUI>b__6_0() { }
}

===== C# end =====
*/

// ---- RestUI$$Awake ----
// C#: void RestUI__Awake (RestUI_o* __this, const MethodInfo* method);

void RestUI__Awake(RestUI_o *__this,MethodInfo *method)

{
  TextMeshProUGUI_o *pTVar1;
  Image_o *pIVar2;
  
  if (DAT_ram_00664aa6 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f78);
    unnamed_function_1099(&DAT_ram_00567ea8);
    DAT_ram_00664aa6 = '\x01';
  }
  pTVar1 = (TextMeshProUGUI_o *)unnamed_function_65372(__this,DAT_ram_00567f78);
  __this->restText = pTVar1;
  pIVar2 = (Image_o *)unnamed_function_65370(__this,DAT_ram_00567ea8);
  __this->restImage = pIVar2;
  return;
}

// ---- RestUI$$Start ----
// C#: void RestUI__Start (RestUI_o* __this, const MethodInfo* method);

void RestUI__Start(RestUI_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_44644(__this->restImage,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->restText,0);
  unnamed_function_44686(uVar1,0,0);
  return;
}

// ---- RestUI$$OnEnable ----
// C#: void RestUI__OnEnable (RestUI_o* __this, const MethodInfo* method);

void RestUI__OnEnable(RestUI_o *__this,MethodInfo *method)

{
  System_Action_o *value;
  
  if (DAT_ram_00664aa7 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056bfd4);
    DAT_ram_00664aa7 = '\x01';
  }
  value = (System_Action_o *)unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(value,__this,DAT_ram_0056bfd4,0);
  StaticEventHandler__add_OnRestInBonfire(value,(MethodInfo *)0x0);
  return;
}

// ---- RestUI$$OnDestroy ----
// C#: void RestUI__OnDestroy (RestUI_o* __this, const MethodInfo* method);

void RestUI__OnDestroy(RestUI_o *__this,MethodInfo *method)

{
  System_Action_o *value;
  
  if (DAT_ram_00664aa8 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056bfd4);
    DAT_ram_00664aa8 = '\x01';
  }
  value = (System_Action_o *)unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(value,__this,DAT_ram_0056bfd4,0);
  StaticEventHandler__remove_OnRestInBonfire(value,(MethodInfo *)0x0);
  return;
}

// ---- RestUI$$ShowRestUI ----
// C#: void RestUI__ShowRestUI (RestUI_o* __this, const MethodInfo* method);

void RestUI__ShowRestUI(RestUI_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_ram_00664aa9 == '\0') {
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056bfd0);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d374);
    DAT_ram_00664aa9 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->restImage,0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(__this->restText,0);
  unnamed_function_44686(uVar1,1,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  uVar1 = unnamed_function_13702(0);
  uVar2 = unnamed_function_63251(__this->restText,1.0,1.0,0);
  uVar2 = unnamed_function_70031(uVar2,4,DAT_ram_0056d374);
  uVar2 = unnamed_function_13904(uVar1,uVar2,0);
  uVar3 = unnamed_function_63253(__this->restImage,0.6,1.0,0);
  uVar3 = unnamed_function_70031(uVar3,4,DAT_ram_0056d374);
  unnamed_function_13905(uVar2,uVar3,0);
  uVar2 = unnamed_function_63251(__this->restText,0.0,1.0,0);
  uVar2 = unnamed_function_70031(uVar2,4,DAT_ram_0056d374);
  uVar1 = unnamed_function_13904(uVar1,uVar2,0);
  uVar2 = unnamed_function_63253(__this->restImage,0.0,1.0,0);
  uVar2 = unnamed_function_70031(uVar2,4,DAT_ram_0056d374);
  uVar1 = unnamed_function_13905(uVar1,uVar2,0);
  uVar2 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(uVar2,__this,DAT_ram_0056bfd0,0);
  unnamed_function_14057(uVar1,uVar2,0);
  return;
}

// ---- RestUI$$.ctor ----
// C#: void RestUI___ctor (RestUI_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

// ---- RestUI$$<ShowRestUI>b__6_0 ----
// C#: void RestUI___ShowRestUI_b__6_0 (RestUI_o* __this, const MethodInfo* method);

void RestUI__Start(RestUI_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_44644(__this->restImage,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->restText,0);
  unnamed_function_44686(uVar1,0,0);
  return;
}

