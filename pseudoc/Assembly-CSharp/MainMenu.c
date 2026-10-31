// Assembly-CSharp :: MainMenu
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MainMenu : MonoBehaviour // TypeDefIndex: 5658
{
	// Fields
	[SerializeField]
	private Button newGameBtn; // 0x10
	[SerializeField]
	private Button continueGameBtn; // 0x14
	[SerializeField]
	private Button settingsBtn; // 0x18
	[SerializeField]
	private Button exitGameBtn; // 0x1C
	[SerializeField]
	private Image SettingPanel; // 0x20
	[SerializeField]
	private Image controlsPanel; // 0x24
	[SerializeField]
	private Image audioPanel; // 0x28
	[SerializeField]
	private Intro intro; // 0x2C
	private SaveFileSetup saveFileSetup; // 0x30
	private bool isfirstTime; // 0x34

	// Methods

	// RVA: 0x390D Offset: 0x390D VA: 0x390D
	private void Awake() { }

	// RVA: 0x390E Offset: 0x390E VA: 0x390E
	private void Start() { }

	// RVA: 0x390F Offset: 0x390F VA: 0x390F
	private void OnNewGameClick() { }

	// RVA: 0x3910 Offset: 0x3910 VA: 0x3910
	private void OnContinueGameClick() { }

	// RVA: 0x3911 Offset: 0x3911 VA: 0x3911
	private void LoadContineGameScene(Scene scene, LoadSceneMode mode) { }

	// RVA: 0x3912 Offset: 0x3912 VA: 0x3912
	private void OnSettingsClick() { }

	// RVA: 0x3913 Offset: 0x3913 VA: 0x3913
	private void OnExitGameClick() { }

	// RVA: 0x3914 Offset: 0x3914 VA: 0x3914
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MainMenu$$Awake ----
// C#: void MainMenu__Awake (MainMenu_o* __this, const MethodInfo* method);

void MainMenu__Awake(MainMenu_o *__this,MethodInfo *method)

{
  SaveFileSetup_o *pSVar1;
  
  if (DAT_ram_006648f5 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f1c);
    DAT_ram_006648f5 = '\x01';
  }
  pSVar1 = (SaveFileSetup_o *)unnamed_function_65370(__this,DAT_ram_00567f1c);
  __this->saveFileSetup = pSVar1;
  return;
}

// ---- MainMenu$$Start ----
// C#: void MainMenu__Start (MainMenu_o* __this, const MethodInfo* method);

void MainMenu__Start(MainMenu_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_2;
  undefined1 local_1;
  
  if (DAT_ram_006648f6 == '\0') {
    unnamed_function_1099(&bool_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056ab34);
    unnamed_function_1099(&DAT_ram_0056ad60);
    unnamed_function_1099(&DAT_ram_0056ad64);
    unnamed_function_1099(&DAT_ram_0056ad68);
    unnamed_function_1099(&DAT_ram_0056ad6c);
    unnamed_function_1099(&DAT_ram_0056c19c);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_TypeInfo);
    unnamed_function_1099(&StringLiteral_3907 /* "FirstTime" */);
    DAT_ram_006648f6 = '\x01';
  }
  uVar1 = unnamed_function_60744(__this->saveFileSetup,0);
  iVar2 = unnamed_function_60732(uVar1,StringLiteral_3907 /* "FirstTime" */,0);
  uVar1 = unnamed_function_60744(__this->saveFileSetup,0);
  if (iVar2 == 0) {
    unnamed_function_60812(uVar1,StringLiteral_3907 /* "FirstTime" */,1,DAT_ram_0056c19c);
    uVar1 = unnamed_function_60744(__this->saveFileSetup,0);
    unnamed_function_60714(uVar1,0,0);
    __this->isfirstTime = true;
    iVar2 = unnamed_function_44561(StringLiteral_3907 /* "FirstTime" */,0);
    if (iVar2 == 0) {
      local_2 = __this->isfirstTime;
      uVar1 = unnamed_function_1113(bool_TypeInfo,&local_2);
      uVar1 = unnamed_function_42591(uVar1,0);
      unnamed_function_44558(StringLiteral_3907 /* "FirstTime" */,uVar1,0);
      unnamed_function_44564(0);
    }
    else {
      uVar1 = unnamed_function_44560(StringLiteral_3907 /* "FirstTime" */,0);
      uVar1 = unnamed_function_54420(uVar1,DAT_ram_0056ab34);
      __this->isfirstTime = SUB41(uVar1,0);
    }
  }
  else {
    unnamed_function_60812(uVar1,StringLiteral_3907 /* "FirstTime" */,0,DAT_ram_0056c19c);
    uVar1 = unnamed_function_60744(__this->saveFileSetup,0);
    unnamed_function_60714(uVar1,0,0);
    __this->isfirstTime = false;
    iVar2 = unnamed_function_44561(StringLiteral_3907 /* "FirstTime" */,0);
    if (iVar2 == 0) {
      local_1 = __this->isfirstTime;
      uVar1 = unnamed_function_1113(bool_TypeInfo,&local_1);
      uVar1 = unnamed_function_42591(uVar1,0);
      unnamed_function_44558(StringLiteral_3907 /* "FirstTime" */,uVar1,0);
      unnamed_function_44564(0);
    }
    else {
      uVar1 = unnamed_function_44560(StringLiteral_3907 /* "FirstTime" */,0);
      uVar1 = unnamed_function_54420(uVar1,DAT_ram_0056ab34);
      __this->isfirstTime = SUB41(uVar1,0);
    }
  }
  uVar3 = *(undefined4 *)(__this->newGameBtn + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056ad68,0);
  unnamed_function_45206(uVar3,uVar1,0);
  uVar3 = *(undefined4 *)(__this->continueGameBtn + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056ad60,0);
  unnamed_function_45206(uVar3,uVar1,0);
  uVar3 = *(undefined4 *)(__this->settingsBtn + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056ad6c,0);
  unnamed_function_45206(uVar3,uVar1,0);
  uVar3 = *(undefined4 *)(__this->exitGameBtn + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056ad64,0);
  unnamed_function_45206(uVar3,uVar1,0);
  return;
}

// ---- MainMenu$$OnNewGameClick ----
// C#: void MainMenu__OnNewGameClick (MainMenu_o* __this, const MethodInfo* method);

void MainMenu__OnNewGameClick(MainMenu_o *__this,MethodInfo *method)

{
  GameResources_o *pGVar1;
  undefined4 param1;
  int param1_00;
  MethodInfo *method_00;
  SoundEffectManager_o *__this_00;
  
  if (DAT_ram_006648f7 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_006648f7 = '\x01';
  }
  param1_00 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(param1_00 + 0xbd) & 1) == 0) {
    param1_00 = unnamed_function_95087(param1_00);
  }
  method_00 = *(MethodInfo **)(*(int *)(param1_00 + 0x60) + 8);
  if ((method_00[5].field_0x1d & 1) == 0) {
    method_00 = (MethodInfo *)unnamed_function_95087(method_00);
  }
  __this_00 = (SoundEffectManager_o *)**(undefined4 **)&method_00[2].field_0x1c;
  pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
  SoundEffectManager__PlaySoundEffect(__this_00,pGVar1->clickButton,method_00);
  param1 = unnamed_function_44644(__this->intro,0);
  unnamed_function_44686(param1,1,0);
  return;
}

// ---- MainMenu$$OnContinueGameClick ----
// C#: void MainMenu__OnContinueGameClick (MainMenu_o* __this, const MethodInfo* method);

void MainMenu__OnContinueGameClick(MainMenu_o *__this,MethodInfo *method)

{
  undefined4 param1;
  GameResources_o *pGVar1;
  int param1_00;
  MethodInfo *method_00;
  SoundEffectManager_o *__this_00;
  
  if (DAT_ram_006648f8 == '\0') {
    unnamed_function_1099(&DAT_ram_0056ad5c);
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    unnamed_function_1099(&StringLiteral_5214 /* "MainScene" */);
    DAT_ram_006648f8 = '\x01';
  }
  if (__this->isfirstTime == false) {
    if (*(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    unnamed_function_45267(StringLiteral_5214 /* "MainScene" */,0);
    param1 = unnamed_function_95402(UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    unnamed_function_71914(param1,__this,DAT_ram_0056ad5c,0);
    unnamed_function_45260(param1,0);
    param1_00 = *(int *)(DAT_ram_00565d6c + 0x10);
    if ((*(byte *)(param1_00 + 0xbd) & 1) == 0) {
      param1_00 = unnamed_function_95087(param1_00);
    }
    method_00 = *(MethodInfo **)(*(int *)(param1_00 + 0x60) + 8);
    if ((method_00[5].field_0x1d & 1) == 0) {
      method_00 = (MethodInfo *)unnamed_function_95087(method_00);
    }
    __this_00 = (SoundEffectManager_o *)**(undefined4 **)&method_00[2].field_0x1c;
    pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
    SoundEffectManager__PlaySoundEffect(__this_00,pGVar1->clickButton,method_00);
  }
  return;
}

// ---- MainMenu$$LoadContineGameScene ----
// C#: void MainMenu__LoadContineGameScene (MainMenu_o* __this, UnityEngine_SceneManagement_Scene_o scene, int32_t mode, const MethodInfo* method);

void MainMenu__LoadContineGameScene
               (MainMenu_o *__this,UnityEngine_SceneManagement_Scene_o *scene,
               UnityEngine_SceneManagement_LoadSceneMode mode,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  UnityEngine_SceneManagement_Scene_o *local_8 [2];
  
  local_8[0] = scene;
  if (DAT_ram_006648f9 == '\0') {
    unnamed_function_1099(&DAT_ram_0056ad5c);
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    unnamed_function_1099(&StringLiteral_5214 /* "MainScene" */);
    DAT_ram_006648f9 = '\x01';
  }
  uVar1 = unnamed_function_45228(local_8,0);
  iVar2 = unnamed_function_81494(uVar1,StringLiteral_5214 /* "MainScene" */,0);
  if ((iVar2 != 0) && (iVar2 = unnamed_function_45230(local_8,0), iVar2 != 0)) {
    iVar2 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = unnamed_function_95087(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = unnamed_function_95087(iVar2);
    }
    GameManager__TransitionToGame
              ((GameManager_o *)**(undefined4 **)(iVar2 + 0x5c),(MethodInfo *)0x0);
    uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    unnamed_function_71914(uVar1,__this,DAT_ram_0056ad5c,0);
    if (*(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    unnamed_function_45261(uVar1,0);
  }
  return;
}

// ---- MainMenu$$OnSettingsClick ----
// C#: void MainMenu__OnSettingsClick (MainMenu_o* __this, const MethodInfo* method);

void MainMenu__OnSettingsClick(MainMenu_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  GameResources_o *pGVar2;
  int param1;
  MethodInfo *method_00;
  SoundEffectManager_o *__this_00;
  
  if (DAT_ram_006648fa == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_006648fa = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->SettingPanel,0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(__this->controlsPanel,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->audioPanel,0);
  unnamed_function_44686(uVar1,0,0);
  param1 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(param1 + 0xbd) & 1) == 0) {
    param1 = unnamed_function_95087(param1);
  }
  method_00 = *(MethodInfo **)(*(int *)(param1 + 0x60) + 8);
  if ((method_00[5].field_0x1d & 1) == 0) {
    method_00 = (MethodInfo *)unnamed_function_95087(method_00);
  }
  __this_00 = (SoundEffectManager_o *)**(undefined4 **)&method_00[2].field_0x1c;
  pGVar2 = GameResources__get_Instance((MethodInfo *)0x0);
  SoundEffectManager__PlaySoundEffect(__this_00,pGVar2->clickButton,method_00);
  return;
}

// ---- MainMenu$$OnExitGameClick ----
// C#: void MainMenu__OnExitGameClick (MainMenu_o* __this, const MethodInfo* method);

void MainMenu__OnExitGameClick(MainMenu_o *__this,MethodInfo *method)

{
  GameResources_o *pGVar1;
  int param1;
  MethodInfo *method_00;
  SoundEffectManager_o *__this_00;
  
  if (DAT_ram_006648fb == '\0') {
    unnamed_function_1099(&UnityEngine_Application_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_006648fb = '\x01';
  }
  param1 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(param1 + 0xbd) & 1) == 0) {
    param1 = unnamed_function_95087(param1);
  }
  method_00 = *(MethodInfo **)(*(int *)(param1 + 0x60) + 8);
  if ((method_00[5].field_0x1d & 1) == 0) {
    method_00 = (MethodInfo *)unnamed_function_95087(method_00);
  }
  __this_00 = (SoundEffectManager_o *)**(undefined4 **)&method_00[2].field_0x1c;
  pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
  SoundEffectManager__PlaySoundEffect(__this_00,pGVar1->clickButton,method_00);
  if (*(int *)(UnityEngine_Application_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Application_TypeInfo);
  }
  unnamed_function_52236(0);
  return;
}

// ---- MainMenu$$.ctor ----
// C#: void MainMenu___ctor (MainMenu_o* __this, const MethodInfo* method);

void MainMenu___ctor(MainMenu_o *__this,MethodInfo *method)

{
  __this->isfirstTime = true;
  unnamed_function_44622(__this,0);
  return;
}

