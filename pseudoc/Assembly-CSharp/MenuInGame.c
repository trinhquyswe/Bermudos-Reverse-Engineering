// Assembly-CSharp :: MenuInGame
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MenuInGame : MonoBehaviour // TypeDefIndex: 5662
{
	// Fields
	[SerializeField]
	private Button exitButton; // 0x10
	[SerializeField]
	private Button resumeButton; // 0x14
	private TextMeshProUGUI exitText; // 0x18
	private TextMeshProUGUI resumeText; // 0x1C
	private TMPWriter exitTMPWriter; // 0x20
	private TMPWriter resumeTMPWriter; // 0x24
	private InputSystem_Actions inputSystem_Actions; // 0x28
	public Ease ease; // 0x2C

	// Methods

	// RVA: 0x3920 Offset: 0x3920 VA: 0x3920
	private void Awake() { }

	// RVA: 0x3921 Offset: 0x3921 VA: 0x3921
	private void OnDestroy() { }

	// RVA: 0x3922 Offset: 0x3922 VA: 0x3922
	private void OpenMenu() { }

	// RVA: 0x3923 Offset: 0x3923 VA: 0x3923
	private void Start() { }

	// RVA: 0x3924 Offset: 0x3924 VA: 0x3924
	private void Exit() { }

	[IteratorStateMachine(typeof(MenuInGame.<WaitMapTransitionEvent>d__13))]
	// RVA: 0x3925 Offset: 0x3925 VA: 0x3925
	private IEnumerator WaitMapTransitionEvent() { }

	// RVA: 0x3926 Offset: 0x3926 VA: 0x3926
	private void ResumeGame() { }

	// RVA: 0x3927 Offset: 0x3927 VA: 0x3927
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3928 Offset: 0x3928 VA: 0x3928
	private void <Awake>b__8_0(InputAction.CallbackContext ctx) { }

	[CompilerGenerated]
	// RVA: 0x3929 Offset: 0x3929 VA: 0x3929
	private void <OnDestroy>b__9_0(InputAction.CallbackContext ctx) { }
}

===== C# end =====
*/

// ---- MenuInGame$$Awake ----
// C#: void MenuInGame__Awake (MenuInGame_o* __this, const MethodInfo* method);

void MenuInGame__Awake(MenuInGame_o *__this,MethodInfo *method)

{
  TextMeshProUGUI_o *pTVar1;
  TMPWriter_o *pTVar2;
  InputSystem_Actions_o *__this_00;
  UnityEngine_InputSystem_InputAction_o *pUVar3;
  undefined4 param1;
  InputSystem_Actions_UIActions_o local_8;
  
  if (DAT_ram_00664903 == '\0') {
    unnamed_function_1099(&System_Action_InputAction_CallbackContext__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567f78);
    unnamed_function_1099(&DAT_ram_00567f34);
    unnamed_function_1099(&InputSystem_Actions_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056af34);
    DAT_ram_00664903 = '\x01';
  }
  pTVar1 = (TextMeshProUGUI_o *)unnamed_function_65372(__this->exitButton,DAT_ram_00567f78);
  __this->exitText = pTVar1;
  pTVar1 = (TextMeshProUGUI_o *)unnamed_function_65372(__this->resumeButton,DAT_ram_00567f78);
  __this->resumeText = pTVar1;
  pTVar2 = (TMPWriter_o *)unnamed_function_65370(__this->exitText,DAT_ram_00567f34);
  __this->exitTMPWriter = pTVar2;
  pTVar2 = (TMPWriter_o *)unnamed_function_65370(__this->resumeText,DAT_ram_00567f34);
  __this->resumeTMPWriter = pTVar2;
  __this_00 = (InputSystem_Actions_o *)unnamed_function_95402(InputSystem_Actions_TypeInfo);
  InputSystem_Actions___ctor(__this_00,(MethodInfo *)0x0);
  __this->inputSystem_Actions = __this_00;
  local_8.klass = __this_00;
  pUVar3 = InputSystem_Actions_UIActions__get_MenuInGame(&local_8,(MethodInfo *)0x0);
  unnamed_function_48914(pUVar3,0);
  local_8.klass = __this->inputSystem_Actions;
  pUVar3 = InputSystem_Actions_UIActions__get_MenuInGame(&local_8,(MethodInfo *)0x0);
  param1 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(param1,__this,DAT_ram_0056af34,0);
  unnamed_function_48903(pUVar3,param1,0);
  return;
}

// ---- MenuInGame$$OnDestroy ----
// C#: void MenuInGame__OnDestroy (MenuInGame_o* __this, const MethodInfo* method);

void MenuInGame__OnDestroy(MenuInGame_o *__this,MethodInfo *method)

{
  UnityEngine_InputSystem_InputAction_o *pUVar1;
  undefined4 uVar2;
  InputSystem_Actions_UIActions_o local_8;
  
  if (DAT_ram_00664904 == '\0') {
    unnamed_function_1099(&System_Action_InputAction_CallbackContext__TypeInfo);
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056af38);
    DAT_ram_00664904 = '\x01';
  }
  local_8.klass = __this->inputSystem_Actions;
  pUVar1 = InputSystem_Actions_UIActions__get_MenuInGame(&local_8,(MethodInfo *)0x0);
  unnamed_function_48915(pUVar1,0);
  local_8.klass = __this->inputSystem_Actions;
  pUVar1 = InputSystem_Actions_UIActions__get_MenuInGame(&local_8,(MethodInfo *)0x0);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar2,__this,DAT_ram_0056af38,0);
  unnamed_function_48904(pUVar1,uVar2,0);
  uVar2 = unnamed_function_44643(__this,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(uVar2,0,0);
  return;
}

// ---- MenuInGame$$OpenMenu ----
// C#: void MenuInGame__OpenMenu (MenuInGame_o* __this, const MethodInfo* method);

void MenuInGame__OpenMenu(MenuInGame_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  float4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664905 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f0c);
    unnamed_function_1099(&DAT_ram_0056d37c);
    unnamed_function_1099(&DAT_ram_0056d380);
    unnamed_function_1099(&DAT_ram_0056d3d8);
    unnamed_function_1099(&DAT_ram_0056d3e0);
    unnamed_function_1099(&StringLiteral_1194 /* "<+char>Exit" */);
    unnamed_function_1099(&StringLiteral_1195 /* "<+char>Resume" */);
    DAT_ram_00664905 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this,0);
  iVar2 = unnamed_function_44687(uVar1,0);
  uVar1 = unnamed_function_44644(__this,0);
  if (iVar2 == 0) {
    unnamed_function_44686(uVar1,1,0);
    unnamed_function_24681(__this->exitTMPWriter,StringLiteral_1194 /* "<+char>Exit" */,0);
    unnamed_function_24681(__this->resumeTMPWriter,StringLiteral_1195 /* "<+char>Resume" */,0);
    uVar1 = unnamed_function_44643(__this,0);
    if (DAT_ram_00664829 == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_00664829 = '\x01';
    }
    local_30 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
    local_28 = *(undefined4 *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
    local_10 = local_30;
    local_8 = local_28;
    unnamed_function_44982(uVar1,&local_30,0);
    uVar1 = unnamed_function_44643(__this,0);
    uVar1 = unnamed_function_13885(uVar1,1.0,0.5,0);
    uVar1 = unnamed_function_70031(uVar1,__this->ease,DAT_ram_0056d380);
    unnamed_function_70051(uVar1,1,DAT_ram_0056d3e0);
    uVar1 = unnamed_function_65370(__this,DAT_ram_00567f0c);
    iVar2 = unnamed_function_52650(0);
    local_14 = 0;
    local_18 = (float4)(float)-iVar2;
    local_38 = (ulonglong)(uint)local_18;
    unnamed_function_44936(uVar1,&local_38,0);
    if (DAT_ram_0066482a == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_0066482a = '\x01';
    }
    local_40 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
    local_20 = local_40;
    uVar1 = unnamed_function_63262(uVar1,&local_40,0.5,0,0);
    uVar1 = unnamed_function_70031(uVar1,__this->ease,DAT_ram_0056d37c);
    unnamed_function_70051(uVar1,1,DAT_ram_0056d3d8);
  }
  else {
    unnamed_function_44686(uVar1,0,0);
  }
  return;
}

// ---- MenuInGame$$Start ----
// C#: void MenuInGame__Start (MenuInGame_o* __this, const MethodInfo* method);

void MenuInGame__Start(MenuInGame_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_ram_00664906 == '\0') {
    unnamed_function_1099(&DAT_ram_0056af3c);
    unnamed_function_1099(&DAT_ram_0056af40);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_ram_00664906 = '\x01';
  }
  uVar2 = *(undefined4 *)(__this->exitButton + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056af3c,0);
  unnamed_function_45206(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(__this->resumeButton + 0xb4);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TypeInfo);
  unnamed_function_45204(uVar1,__this,DAT_ram_0056af40,0);
  unnamed_function_45206(uVar2,uVar1,0);
  uVar1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(uVar1,0,0);
  return;
}

// ---- MenuInGame$$Exit ----
// C#: void MenuInGame__Exit (MenuInGame_o* __this, const MethodInfo* method);

void MenuInGame__Exit(MenuInGame_o *__this,MethodInfo *method)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664907 == '\0') {
    unnamed_function_1099(&DAT_ram_00567ea8);
    DAT_ram_00664907 = '\x01';
  }
  if (DAT_ram_006649c9 == '\0') {
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c9 = '\x01';
  }
  iVar3 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x2c);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
  }
  piVar1 = (int *)unnamed_function_65370(__this,DAT_ram_00567ea8);
  local_8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  (**(code **)((ulonglong)*(uint *)(*piVar1 + 0x178) * 4))
            (piVar1,&local_20,*(undefined4 *)(*piVar1 + 0x17c));
  uVar2 = unnamed_function_44644(__this->exitButton,0);
  unnamed_function_44686(uVar2,0,0);
  uVar2 = unnamed_function_44644(__this->resumeButton,0);
  unnamed_function_44686(uVar2,0,0);
  if (DAT_ram_006649ab == '\0') {
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649ab = '\x01';
  }
  iVar3 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 4);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
  }
  if (DAT_ram_00664908 == '\0') {
    unnamed_function_1099(&MenuInGame__WaitMapTransitionEvent_d__13_TypeInfo);
    DAT_ram_00664908 = '\x01';
  }
  iVar3 = unnamed_function_95402(MenuInGame__WaitMapTransitionEvent_d__13_TypeInfo);
  *(undefined4 *)(iVar3 + 8) = 0;
  unnamed_function_44725(__this,iVar3,0);
  return;
}

// ---- MenuInGame$$WaitMapTransitionEvent ----
// C#: System_Collections_IEnumerator_o* MenuInGame__WaitMapTransitionEvent (MenuInGame_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
MenuInGame__WaitMapTransitionEvent(MenuInGame_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664908 == '\0') {
    unnamed_function_1099(&MenuInGame__WaitMapTransitionEvent_d__13_TypeInfo);
    DAT_ram_00664908 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(MenuInGame__WaitMapTransitionEvent_d__13_TypeInfo);
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- MenuInGame$$ResumeGame ----
// C#: void MenuInGame__ResumeGame (MenuInGame_o* __this, const MethodInfo* method);

void MenuInGame__ResumeGame(MenuInGame_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  unnamed_function_44887(1.0,0);
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,0,0);
  return;
}

// ---- MenuInGame$$.ctor ----
// C#: void MenuInGame___ctor (MenuInGame_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

// ---- MenuInGame$$<Awake>b__8_0 ----
// C#: void MenuInGame___Awake_b__8_0 (MenuInGame_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void MenuInGame___Awake_b__8_0
               (MenuInGame_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  MenuInGame__OpenMenu(__this,(MethodInfo *)__this);
  return;
}

// ---- MenuInGame$$<OnDestroy>b__9_0 ----
// C#: void MenuInGame___OnDestroy_b__9_0 (MenuInGame_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void MenuInGame___Awake_b__8_0
               (MenuInGame_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  MenuInGame__OpenMenu(__this,(MethodInfo *)__this);
  return;
}

