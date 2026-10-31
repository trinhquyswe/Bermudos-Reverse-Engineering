// Assembly-CSharp :: SettingManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SettingManager : MonoBehaviour // TypeDefIndex: 5660
{
	// Fields
	[SerializeField]
	private Button controlsBtn; // 0x10
	[SerializeField]
	private Button audioBtn; // 0x14
	[SerializeField]
	private Button backBtn; // 0x18
	private TextMeshProUGUI controlsText; // 0x1C
	private TextMeshProUGUI audioText; // 0x20
	[SerializeField]
	private Image controlsPanel; // 0x24
	[SerializeField]
	private Image audioPanel; // 0x28
	private float aplha; // 0x2C
	private float startFontSize; // 0x30

	// Methods

	// RVA: 0x3915 Offset: 0x3915 VA: 0x3915
	private void Awake() { }

	// RVA: 0x3916 Offset: 0x3916 VA: 0x3916
	private void Start() { }

	// RVA: 0x3917 Offset: 0x3917 VA: 0x3917
	private void OnDestroy() { }

	// RVA: 0x3918 Offset: 0x3918 VA: 0x3918
	private void OpenControls() { }

	// RVA: 0x3919 Offset: 0x3919 VA: 0x3919
	private void OpenAudio() { }

	// RVA: 0x391A Offset: 0x391A VA: 0x391A
	private void Effect(TextMeshProUGUI currentText, TextMeshProUGUI previousText) { }

	// RVA: 0x391B Offset: 0x391B VA: 0x391B
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x391C Offset: 0x391C VA: 0x391C
	private void <Start>b__10_0() { }
}

===== C# end =====
*/

// ---- SettingManager$$Awake ----
// C#: void SettingManager__Awake (SettingManager_o* __this, const MethodInfo* method);

void SettingManager__Awake(SettingManager_o *__this,MethodInfo *method)

{
  TextMeshProUGUI_o *pTVar1;
  
  if (DAT_ram_006648fc == '\0') {
    unnamed_function_1099(&DAT_ram_00567f78);
    DAT_ram_006648fc = '\x01';
  }
  pTVar1 = (TextMeshProUGUI_o *)unnamed_function_65372(__this->controlsBtn,DAT_ram_00567f78);
  __this->controlsText = pTVar1;
  pTVar1 = (TextMeshProUGUI_o *)unnamed_function_65372(__this->audioBtn,DAT_ram_00567f78);
  __this->audioText = pTVar1;
  return;
}

// ---- SettingManager$$Start ----
// C#: void SettingManager__Start (SettingManager_o* __this, const MethodInfo* method);

void SettingManager__Start(SettingManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_ram_006648fd == '\0') {
    unnamed_function_1099(&DAT_ram_0056c438);
    unnamed_function_1099(&DAT_ram_0056c43c);
    unnamed_function_1099(&DAT_ram_0056c434);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_ram_006648fd = '\x01';
  }
  uVar2 = *(undefined4 *)(__this->controlsBtn + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056c43c,0);
  unnamed_function_45206(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(__this->audioBtn + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056c438,0);
  unnamed_function_45206(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(__this->backBtn + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056c434,0);
  unnamed_function_45206(uVar2,uVar1,0);
  __this->aplha = 0.5;
  __this->startFontSize = 10.0;
  return;
}

// ---- SettingManager$$OnDestroy ----
// C#: void SettingManager__OnDestroy (SettingManager_o* __this, const MethodInfo* method);

void SettingManager__OnDestroy(SettingManager_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_006648fe == '\0') {
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    DAT_ram_006648fe = '\x01';
  }
  param1 = unnamed_function_44643(__this,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(param1,0,0);
  return;
}

// ---- SettingManager$$OpenControls ----
// C#: void SettingManager__OpenControls (SettingManager_o* __this, const MethodInfo* method);

void SettingManager__OpenControls(SettingManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  GameResources_o *pGVar2;
  int iVar3;
  SoundEffectManager_o *__this_00;
  
  if (DAT_ram_006648ff == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_006648ff = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->audioPanel,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->controlsPanel,0);
  unnamed_function_44686(uVar1,1,0);
  iVar3 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  __this_00 = (SoundEffectManager_o *)**(undefined4 **)(iVar3 + 0x5c);
  pGVar2 = GameResources__get_Instance((MethodInfo *)0x0);
  SoundEffectManager__PlaySoundEffect(__this_00,pGVar2->clickButton,(MethodInfo *)__this);
  SettingManager__Effect
            (__this,(TMPro_TextMeshProUGUI_o *)__this->controlsText,
             (TMPro_TextMeshProUGUI_o *)__this->audioText,(MethodInfo *)__this);
  return;
}

// ---- SettingManager$$OpenAudio ----
// C#: void SettingManager__OpenAudio (SettingManager_o* __this, const MethodInfo* method);

void SettingManager__OpenAudio(SettingManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  GameResources_o *pGVar2;
  int iVar3;
  SoundEffectManager_o *__this_00;
  
  if (DAT_ram_00664900 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_00664900 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->controlsPanel,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->audioPanel,0);
  unnamed_function_44686(uVar1,1,0);
  iVar3 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  __this_00 = (SoundEffectManager_o *)**(undefined4 **)(iVar3 + 0x5c);
  pGVar2 = GameResources__get_Instance((MethodInfo *)0x0);
  SoundEffectManager__PlaySoundEffect(__this_00,pGVar2->clickButton,(MethodInfo *)__this);
  SettingManager__Effect
            (__this,(TMPro_TextMeshProUGUI_o *)__this->audioText,
             (TMPro_TextMeshProUGUI_o *)__this->controlsText,(MethodInfo *)__this);
  return;
}

// ---- SettingManager$$Effect ----
// C#: void SettingManager__Effect (SettingManager_o* __this, TMPro_TextMeshProUGUI_o* currentText, TMPro_TextMeshProUGUI_o* previousText, const MethodInfo* method);

void SettingManager__Effect
               (SettingManager_o *__this,TMPro_TextMeshProUGUI_o *currentText,
               TMPro_TextMeshProUGUI_o *previousText,MethodInfo *method)

{
  int param2;
  undefined4 uVar1;
  undefined4 param1;
  int iVar2;
  undefined1 local_20 [8];
  undefined8 local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  float4 local_4;
  
  if (DAT_ram_00664901 == '\0') {
    unnamed_function_1099(&DG_Tweening_Core_DOGetter_float__TypeInfo);
    unnamed_function_1099(&DG_Tweening_Core_DOSetter_float__TypeInfo);
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d374);
    unnamed_function_1099(&DAT_ram_0056f9cc);
    unnamed_function_1099(&DAT_ram_0056f9d0);
    unnamed_function_1099(&SettingManager___c__DisplayClass14_0_TypeInfo);
    DAT_ram_00664901 = '\x01';
  }
  param2 = unnamed_function_95402(SettingManager___c__DisplayClass14_0_TypeInfo);
  *(int *)(param2 + 0xc) = (int)currentText;
  unnamed_function_23055(previousText,__this->startFontSize,0);
  iVar2 = __this->audioText->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x170) * 4))
            (&local_10,__this->audioText,*(undefined4 *)(iVar2 + 0x174));
  iVar2 = __this->audioText->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x170) * 4))
            (&local_10,__this->audioText,*(undefined4 *)(iVar2 + 0x174));
  iVar2 = __this->audioText->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x170) * 4))
            (&local_10,__this->audioText,*(undefined4 *)(iVar2 + 0x174));
  local_4 = (float4)__this->aplha;
  local_18 = CONCAT44(local_4,local_8);
  (**(code **)((ulonglong)*(uint *)(previousText->_opaque + 0x178) * 4))
            (previousText,local_20,*(undefined4 *)(previousText->_opaque + 0x17c));
  *(undefined4 *)(param2 + 8) = *(undefined4 *)(*(int *)(param2 + 0xc) + 0x148);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13715(0,0);
  uVar1 = unnamed_function_63251(*(undefined4 *)(param2 + 0xc),1.0,0.5,0);
  unnamed_function_70031(uVar1,0x1d,DAT_ram_0056d374);
  uVar1 = unnamed_function_95402(DG_Tweening_Core_DOGetter_float__TypeInfo);
  unnamed_function_78188(uVar1,param2,DAT_ram_0056f9cc,0);
  param1 = unnamed_function_95402(DG_Tweening_Core_DOSetter_float__TypeInfo);
  unnamed_function_78211(param1,param2,DAT_ram_0056f9d0,0);
  unnamed_function_13678(uVar1,param1,12.5,0.5,0);
  return;
}

// ---- SettingManager$$.ctor ----
// C#: void SettingManager___ctor (SettingManager_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

// ---- SettingManager$$<Start>b__10_0 ----
// C#: void SettingManager___Start_b__10_0 (SettingManager_o* __this, const MethodInfo* method);

void SettingManager___Start_b__10_0(SettingManager_o *__this,MethodInfo *method)

{
  GameResources_o *pGVar1;
  undefined4 param1;
  int param1_00;
  MethodInfo *method_00;
  SoundEffectManager_o *__this_00;
  
  if (DAT_ram_00664902 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_00664902 = '\x01';
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
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,0,0);
  return;
}

