// Assembly-CSharp :: Intro
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Intro : MonoBehaviour // TypeDefIndex: 5656
{
	// Fields
	[SerializeField]
	private IntroSO[] introSOList; // 0x10
	[SerializeField]
	private Image introImage; // 0x14
	[SerializeField]
	private Image map; // 0x18
	private TextMeshProUGUI introText; // 0x1C
	private Button nextBtn; // 0x20
	private int introIndex; // 0x24
	private TMPWriter tmpWriter; // 0x28

	// Methods

	// RVA: 0x38FD Offset: 0x38FD VA: 0x38FD
	private void Awake() { }

	// RVA: 0x38FE Offset: 0x38FE VA: 0x38FE
	private void OnDestroy() { }

	// RVA: 0x38FF Offset: 0x38FF VA: 0x38FF
	private void Start() { }

	// RVA: 0x3900 Offset: 0x3900 VA: 0x3900
	private void OnFinishWriter(TMPWriter tmpWriter) { }

	// RVA: 0x3901 Offset: 0x3901 VA: 0x3901
	private void OnNextBtnClick() { }

	// RVA: 0x3902 Offset: 0x3902 VA: 0x3902
	private void OnSceneLoaded(Scene scene, LoadSceneMode mode) { }

	[IteratorStateMachine(typeof(Intro.<WaitUntilIntroEnable>d__13))]
	// RVA: 0x3903 Offset: 0x3903 VA: 0x3903
	private IEnumerator WaitUntilIntroEnable() { }

	// RVA: 0x3904 Offset: 0x3904 VA: 0x3904
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3905 Offset: 0x3905 VA: 0x3905
	private void <Start>b__9_0() { }
}

===== C# end =====
*/

// ---- Intro$$Awake ----
// C#: void Intro__Awake (Intro_o* __this, const MethodInfo* method);

void Intro__Awake(Intro_o *__this,MethodInfo *method)

{
  TMPWriter_o *pTVar1;
  TextMeshProUGUI_o *pTVar2;
  HID_Button param1;
  undefined4 param1_00;
  
  if (DAT_ram_006648ec == '\0') {
    unnamed_function_1099(&DAT_ram_00567f64);
    unnamed_function_1099(&DAT_ram_00567f74);
    unnamed_function_1099(&DAT_ram_00567f78);
    DAT_ram_006648ec = '\x01';
  }
  pTVar1 = (TMPWriter_o *)unnamed_function_65372(__this,DAT_ram_00567f74);
  __this->tmpWriter = pTVar1;
  pTVar2 = (TextMeshProUGUI_o *)unnamed_function_65372(__this,DAT_ram_00567f78);
  __this->introText = pTVar2;
  param1 = unnamed_function_65372(__this,DAT_ram_00567f64);
  __this->nextBtn = param1;
  param1_00 = unnamed_function_44644(param1,0);
  unnamed_function_44686(param1_00,0,0);
  unnamed_function_44620(__this->introImage,0,0);
  return;
}

// ---- Intro$$OnDestroy ----
// C#: void Intro__OnDestroy (Intro_o* __this, const MethodInfo* method);

void Intro__OnDestroy(Intro_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int param1;
  undefined4 param1_00;
  
  if (DAT_ram_006648ed == '\0') {
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a754);
    unnamed_function_1099(&DAT_ram_0056a758);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_TMPWriter__TypeInfo);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_TypeInfo);
    unnamed_function_1099(&DAT_ram_00566818);
    DAT_ram_006648ed = '\x01';
  }
  param1 = __this->tmpWriter[0xd]._opaque;
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TMPWriter__TypeInfo);
  unnamed_function_71904(uVar1,__this,DAT_ram_0056a754,0);
  unnamed_function_71923(param1,uVar1,DAT_ram_00566818);
  param1_00 = *(undefined4 *)(__this->nextBtn + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056a758,0);
  unnamed_function_45208(param1_00,uVar1,0);
  uVar1 = unnamed_function_44643(__this,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(uVar1,0,0);
  return;
}

// ---- Intro$$Start ----
// C#: void Intro__Start (Intro_o* __this, const MethodInfo* method);

void Intro__Start(Intro_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_006648ee == '\0') {
    unnamed_function_1099(&DAT_ram_0056a750);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d344);
    unnamed_function_1099(&DAT_ram_0056d380);
    DAT_ram_006648ee = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->map,0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(__this->map,0);
  uVar1 = unnamed_function_44683(uVar1,0);
  local_8 = 0x41000000;
  local_18 = 0x41000000;
  local_10 = 0x4100000041000000;
  local_20 = 0x4100000041000000;
  uVar1 = unnamed_function_13884(uVar1,&local_20,2.5,0);
  uVar1 = unnamed_function_70031(uVar1,1,DAT_ram_0056d380);
  param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1,__this,DAT_ram_0056a750,0);
  unnamed_function_70015(uVar1,param1,DAT_ram_0056d344);
  return;
}

// ---- Intro$$OnFinishWriter ----
// C#: void Intro__OnFinishWriter (Intro_o* __this, TMPEffects_Components_TMPWriter_o* tmpWriter, const MethodInfo* method);

void Intro__OnFinishWriter
               (Intro_o *__this,TMPEffects_Components_TMPWriter_o *tmpWriter,MethodInfo *method)

{
  undefined4 param1;
  
  param1 = unnamed_function_44644(__this->nextBtn,0);
  unnamed_function_44686(param1,1,0);
  return;
}

// ---- Intro$$OnNextBtnClick ----
// C#: void Intro__OnNextBtnClick (Intro_o* __this, const MethodInfo* method);

void Intro__OnNextBtnClick(Intro_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_006648ef == '\0') {
    unnamed_function_1099(&DAT_ram_0056a75c);
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    unnamed_function_1099(&StringLiteral_5214 /* "MainScene" */);
    DAT_ram_006648ef = '\x01';
  }
  local_8 = 0x3f800000;
  local_10 = 0x3f8000003f800000;
  iVar2 = __this->introImage->_opaque;
  local_18 = 0x3f800000;
  local_20 = 0x3f8000003f800000;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x178) * 4))
            (__this->introImage,&local_20,*(undefined4 *)(iVar2 + 0x17c));
  uVar1 = unnamed_function_44644(__this->nextBtn,0);
  unnamed_function_44686(uVar1,0,0);
  if (__this->introIndex < (int)__this->introSOList->introSprite) {
    unnamed_function_16520
              (__this->introImage,
               *(undefined4 *)
                (*(int *)(__this->introSOList->pad_8 + __this->introIndex * 4 + 8) + 0xc),0);
    if (__this->introImage != (Image_o *)0x0) {
      unnamed_function_63253(__this->introImage,1.0,2.0,0);
    }
    iVar2 = __this->introText->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
              (__this->introText,
               *(undefined4 *)
                (*(int *)(__this->introSOList->pad_8 + __this->introIndex * 4 + 8) + 0x10),
               *(undefined4 *)(iVar2 + 0x2d4));
  }
  else {
    if (*(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    unnamed_function_45267(StringLiteral_5214 /* "MainScene" */,0);
    uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    unnamed_function_71914(uVar1,__this,DAT_ram_0056a75c,0);
    unnamed_function_45260(uVar1,0);
  }
  __this->introIndex = __this->introIndex + 1;
  return;
}

// ---- Intro$$OnSceneLoaded ----
// C#: void Intro__OnSceneLoaded (Intro_o* __this, UnityEngine_SceneManagement_Scene_o scene, int32_t mode, const MethodInfo* method);

void Intro__OnSceneLoaded
               (Intro_o *__this,UnityEngine_SceneManagement_Scene_o *scene,
               UnityEngine_SceneManagement_LoadSceneMode mode,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  UnityEngine_SceneManagement_Scene_o *local_8 [2];
  
  local_8[0] = scene;
  if (DAT_ram_006648f0 == '\0') {
    unnamed_function_1099(&DAT_ram_0056a75c);
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    unnamed_function_1099(&StringLiteral_5214 /* "MainScene" */);
    DAT_ram_006648f0 = '\x01';
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
    GameManager__HandleGameState
              ((GameManager_o *)**(undefined4 **)(iVar2 + 0x5c),Intro,(MethodInfo *)0x0);
    uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    unnamed_function_71914(uVar1,__this,DAT_ram_0056a75c,0);
    if (*(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    unnamed_function_45261(uVar1,0);
  }
  return;
}

// ---- Intro$$WaitUntilIntroEnable ----
// C#: System_Collections_IEnumerator_o* Intro__WaitUntilIntroEnable (Intro_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o * Intro__WaitUntilIntroEnable(Intro_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_006648f1 == '\0') {
    unnamed_function_1099(&Intro__WaitUntilIntroEnable_d__13_TypeInfo);
    DAT_ram_006648f1 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(Intro__WaitUntilIntroEnable_d__13_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- Intro$$.ctor ----
// C#: void Intro___ctor (Intro_o* __this, const MethodInfo* method);

void Intro___ctor(Intro_o *__this,MethodInfo *method)

{
  IntroSO_o *pIVar1;
  
  if (DAT_ram_006648f2 == '\0') {
    unnamed_function_1099(&IntroSO___TypeInfo);
    DAT_ram_006648f2 = '\x01';
  }
  pIVar1 = (IntroSO_o *)unnamed_function_1050(IntroSO___TypeInfo,4);
  __this->introSOList = pIVar1;
  unnamed_function_44622(__this,0);
  return;
}

// ---- Intro$$<Start>b__9_0 ----
// C#: void Intro___Start_b__9_0 (Intro_o* __this, const MethodInfo* method);

void Intro___Start_b__9_0(Intro_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param1;
  
  if (DAT_ram_006648f3 == '\0') {
    unnamed_function_1099(&DAT_ram_0056a754);
    unnamed_function_1099(&DAT_ram_0056a758);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_TMPWriter__TypeInfo);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_TypeInfo);
    unnamed_function_1099(&DAT_ram_00566810);
    DAT_ram_006648f3 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->map,0);
  unnamed_function_44686(uVar1,0,0);
  iVar2 = __this->tmpWriter[0xd]._opaque;
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TMPWriter__TypeInfo);
  unnamed_function_71904(uVar1,__this,DAT_ram_0056a754,0);
  unnamed_function_71922(iVar2,uVar1,DAT_ram_00566810);
  if (DAT_ram_006648f1 == '\0') {
    unnamed_function_1099(&Intro__WaitUntilIntroEnable_d__13_TypeInfo);
    DAT_ram_006648f1 = '\x01';
  }
  iVar2 = unnamed_function_95402(Intro__WaitUntilIntroEnable_d__13_TypeInfo);
  *(Intro_o **)(iVar2 + 0x10) = __this;
  *(undefined4 *)(iVar2 + 8) = 0;
  unnamed_function_44725(__this,iVar2,0);
  param1 = *(undefined4 *)(__this->nextBtn + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056a758,0);
  unnamed_function_45206(param1,uVar1,0);
  unnamed_function_44620(__this->introImage,1,0);
  return;
}

