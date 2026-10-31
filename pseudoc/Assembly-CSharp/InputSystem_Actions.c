// Assembly-CSharp :: InputSystem_Actions
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class InputSystem_Actions : IInputActionCollection2, IInputActionCollection, IEnumerable<InputAction>, IEnumerable, IDisposable // TypeDefIndex: 5638
{
	// Fields
	[CompilerGenerated]
	private readonly InputActionAsset <asset>k__BackingField; // 0x8
	private readonly InputActionMap m_Player; // 0xC
	private List<InputSystem_Actions.IPlayerActions> m_PlayerActionsCallbackInterfaces; // 0x10
	private readonly InputAction m_Player_Move; // 0x14
	private readonly InputAction m_Player_Look; // 0x18
	private readonly InputAction m_Player_Fire; // 0x1C
	private readonly InputAction m_Player_RightClick; // 0x20
	private readonly InputAction m_Player_SpaceClick; // 0x24
	private readonly InputAction m_Player_Beam; // 0x28
	private readonly InputAction m_Player_Rest; // 0x2C
	private readonly InputActionMap m_UI; // 0x30
	private List<InputSystem_Actions.IUIActions> m_UIActionsCallbackInterfaces; // 0x34
	private readonly InputAction m_UI_Navigate; // 0x38
	private readonly InputAction m_UI_Submit; // 0x3C
	private readonly InputAction m_UI_Cancel; // 0x40
	private readonly InputAction m_UI_Point; // 0x44
	private readonly InputAction m_UI_Click; // 0x48
	private readonly InputAction m_UI_ScrollWheel; // 0x4C
	private readonly InputAction m_UI_MiddleClick; // 0x50
	private readonly InputAction m_UI_RightClick; // 0x54
	private readonly InputAction m_UI_TrackedDevicePosition; // 0x58
	private readonly InputAction m_UI_TrackedDeviceOrientation; // 0x5C
	private readonly InputAction m_UI_OpenInventory; // 0x60
	private readonly InputAction m_UI_UseItem; // 0x64
	private readonly InputAction m_UI_MenuInGame; // 0x68
	private int m_KeyboardMouseSchemeIndex; // 0x6C
	private int m_GamepadSchemeIndex; // 0x70
	private int m_TouchSchemeIndex; // 0x74
	private int m_JoystickSchemeIndex; // 0x78
	private int m_XRSchemeIndex; // 0x7C

	// Properties
	public InputActionAsset asset { get; }
	public Nullable<InputBinding> bindingMask { get; set; }
	public Nullable<ReadOnlyArray<InputDevice>> devices { get; set; }
	public ReadOnlyArray<InputControlScheme> controlSchemes { get; }
	public IEnumerable<InputBinding> bindings { get; }
	public InputSystem_Actions.PlayerActions Player { get; }
	public InputSystem_Actions.UIActions UI { get; }
	public InputControlScheme KeyboardMouseScheme { get; }
	public InputControlScheme GamepadScheme { get; }
	public InputControlScheme TouchScheme { get; }
	public InputControlScheme JoystickScheme { get; }
	public InputControlScheme XRScheme { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3859 Offset: 0x3859 VA: 0x3859
	public InputActionAsset get_asset() { }

	// RVA: 0x385A Offset: 0x385A VA: 0x385A
	public void .ctor() { }

	// RVA: 0x385B Offset: 0x385B VA: 0x385B Slot: 1
	protected override void Finalize() { }

	// RVA: 0x385C Offset: 0x385C VA: 0x385C Slot: 17
	public void Dispose() { }

	// RVA: 0x385D Offset: 0x385D VA: 0x385D Slot: 7
	public Nullable<InputBinding> get_bindingMask() { }

	// RVA: 0x385E Offset: 0x385E VA: 0x385E Slot: 8
	public void set_bindingMask(Nullable<InputBinding> value) { }

	// RVA: 0x385F Offset: 0x385F VA: 0x385F Slot: 9
	public Nullable<ReadOnlyArray<InputDevice>> get_devices() { }

	// RVA: 0x3860 Offset: 0x3860 VA: 0x3860 Slot: 10
	public void set_devices(Nullable<ReadOnlyArray<InputDevice>> value) { }

	// RVA: 0x3861 Offset: 0x3861 VA: 0x3861 Slot: 11
	public ReadOnlyArray<InputControlScheme> get_controlSchemes() { }

	// RVA: 0x3862 Offset: 0x3862 VA: 0x3862 Slot: 12
	public bool Contains(InputAction action) { }

	// RVA: 0x3863 Offset: 0x3863 VA: 0x3863 Slot: 15
	public IEnumerator<InputAction> GetEnumerator() { }

	// RVA: 0x3864 Offset: 0x3864 VA: 0x3864 Slot: 16
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x3865 Offset: 0x3865 VA: 0x3865 Slot: 13
	public void Enable() { }

	// RVA: 0x3866 Offset: 0x3866 VA: 0x3866 Slot: 14
	public void Disable() { }

	// RVA: 0x3867 Offset: 0x3867 VA: 0x3867 Slot: 4
	public IEnumerable<InputBinding> get_bindings() { }

	// RVA: 0x3868 Offset: 0x3868 VA: 0x3868 Slot: 5
	public InputAction FindAction(string actionNameOrId, bool throwIfNotFound = False) { }

	// RVA: 0x3869 Offset: 0x3869 VA: 0x3869 Slot: 6
	public int FindBinding(InputBinding bindingMask, out InputAction action) { }

	// RVA: 0x386A Offset: 0x386A VA: 0x386A
	public InputSystem_Actions.PlayerActions get_Player() { }

	// RVA: 0x386B Offset: 0x386B VA: 0x386B
	public InputSystem_Actions.UIActions get_UI() { }

	// RVA: 0x386C Offset: 0x386C VA: 0x386C
	public InputControlScheme get_KeyboardMouseScheme() { }

	// RVA: 0x386D Offset: 0x386D VA: 0x386D
	public InputControlScheme get_GamepadScheme() { }

	// RVA: 0x386E Offset: 0x386E VA: 0x386E
	public InputControlScheme get_TouchScheme() { }

	// RVA: 0x386F Offset: 0x386F VA: 0x386F
	public InputControlScheme get_JoystickScheme() { }

	// RVA: 0x3870 Offset: 0x3870 VA: 0x3870
	public InputControlScheme get_XRScheme() { }
}

===== C# end =====
*/

// ---- InputSystem_Actions$$get_asset ----
// C#: UnityEngine_InputSystem_InputActionAsset_o* InputSystem_Actions__get_asset (InputSystem_Actions_o* __this, const MethodInfo* method);

UnityEngine_InputSystem_InputActionAsset_o *
InputSystem_Actions__get_asset(InputSystem_Actions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputActionAsset_o **)__this->pad_8;
}

// ---- InputSystem_Actions$$.ctor ----
// C#: void InputSystem_Actions___ctor (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions___ctor(InputSystem_Actions_o *__this,MethodInfo *method)

{
  List_o *pLVar1;
  undefined4 param1;
  InputActionMap_o *pIVar2;
  InputAction_o *pIVar3;
  
  if (DAT_ram_00664b51 == '\0') {
    unnamed_function_1099(&DAT_ram_005646ec);
    unnamed_function_1099(&DAT_ram_00564704);
    unnamed_function_1099
              (&System_Collections_Generic_List_InputSystem_Actions_IPlayerActions__TypeInfo);
    unnamed_function_1099(&System_Collections_Generic_List_InputSystem_Actions_IUIActions__TypeInfo)
    ;
    unnamed_function_1099(&StringLiteral_5532 /* "Navigate" */);
    unnamed_function_1099(&StringLiteral_6974 /* "Submit" */);
    unnamed_function_1099(&StringLiteral_5448 /* "Move" */);
    unnamed_function_1099(&StringLiteral_2690 /* "Click" */);
    unnamed_function_1099(&StringLiteral_6472 /* "RightClick" */);
    unnamed_function_1099(&StringLiteral_5895 /* "OpenInventory" */);
    unnamed_function_1099(&StringLiteral_13771 /* "{\n    \"name\": \"InputSystem_Actions\",\n    \"maps\": ..." */);
    unnamed_function_1099(&StringLiteral_2268 /* "Cancel" */);
    unnamed_function_1099(&StringLiteral_8068 /* "TrackedDevicePosition" */);
    unnamed_function_1099(&StringLiteral_5366 /* "MiddleClick" */);
    unnamed_function_1099(&StringLiteral_6614 /* "ScrollWheel" */);
    unnamed_function_1099(&StringLiteral_6449 /* "Rest" */);
    unnamed_function_1099(&StringLiteral_6083 /* "Point" */);
    unnamed_function_1099(&StringLiteral_5315 /* "MenuInGame" */);
    unnamed_function_1099(&StringLiteral_8217 /* "UI" */);
    unnamed_function_1099(&StringLiteral_8067 /* "TrackedDeviceOrientation" */);
    unnamed_function_1099(&StringLiteral_6075 /* "Player" */);
    unnamed_function_1099(&StringLiteral_3902 /* "Fire" */);
    unnamed_function_1099(&StringLiteral_1995 /* "Beam" */);
    unnamed_function_1099(&StringLiteral_6790 /* "SpaceClick" */);
    unnamed_function_1099(&StringLiteral_8625 /* "UseItem" */);
    unnamed_function_1099(&StringLiteral_5153 /* "Look" */);
    DAT_ram_00664b51 = '\x01';
  }
  pLVar1 = (List_o *)
           unnamed_function_95402
                     (System_Collections_Generic_List_InputSystem_Actions_IPlayerActions__TypeInfo);
  unnamed_function_5132(pLVar1,DAT_ram_005646ec);
  __this->m_PlayerActionsCallbackInterfaces = pLVar1;
  pLVar1 = (List_o *)
           unnamed_function_95402
                     (System_Collections_Generic_List_InputSystem_Actions_IUIActions__TypeInfo);
  unnamed_function_5132(pLVar1,DAT_ram_00564704);
  __this->m_KeyboardMouseSchemeIndex = -1;
  __this->m_GamepadSchemeIndex = -1;
  __this->m_UIActionsCallbackInterfaces = pLVar1;
  __this->m_TouchSchemeIndex = -1;
  __this->m_JoystickSchemeIndex = -1;
  __this->m_XRSchemeIndex = -1;
  param1 = unnamed_function_48996(StringLiteral_13771 /* "{\n    \"name\": \"InputSystem_Actions\",\n    \"maps\": ..." */,0);
  *(undefined4 *)__this->pad_8 = param1;
  pIVar2 = (InputActionMap_o *)unnamed_function_49000(param1,StringLiteral_6075 /* "Player" */,1,0);
  __this->m_Player = pIVar2;
  pIVar3 = (InputAction_o *)unnamed_function_48989(pIVar2,StringLiteral_5448 /* "Move" */,1,0);
  __this->m_Player_Move = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_Player,StringLiteral_5153 /* "Look" */,1,0);
  __this->m_Player_Look = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_Player,StringLiteral_3902 /* "Fire" */,1,0);
  __this->m_Player_Fire = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_Player,StringLiteral_6472 /* "RightClick" */,1,0);
  __this->m_Player_RightClick = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_Player,StringLiteral_6790 /* "SpaceClick" */,1,0);
  __this->m_Player_SpaceClick = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_Player,StringLiteral_1995 /* "Beam" */,1,0);
  __this->m_Player_Beam = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_Player,StringLiteral_6449 /* "Rest" */,1,0);
  __this->m_Player_Rest = pIVar3;
  pIVar2 = (InputActionMap_o *)
           unnamed_function_49000(*(undefined4 *)__this->pad_8,StringLiteral_8217 /* "UI" */,1,0);
  __this->m_UI = pIVar2;
  pIVar3 = (InputAction_o *)unnamed_function_48989(pIVar2,StringLiteral_5532 /* "Navigate" */,1,0);
  __this->m_UI_Navigate = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_6974 /* "Submit" */,1,0);
  __this->m_UI_Submit = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_2268 /* "Cancel" */,1,0);
  __this->m_UI_Cancel = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_6083 /* "Point" */,1,0);
  __this->m_UI_Point = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_2690 /* "Click" */,1,0);
  __this->m_UI_Click = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_6614 /* "ScrollWheel" */,1,0);
  __this->m_UI_ScrollWheel = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_5366 /* "MiddleClick" */,1,0);
  __this->m_UI_MiddleClick = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_6472 /* "RightClick" */,1,0);
  __this->m_UI_RightClick = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_8068 /* "TrackedDevicePosition" */,1,0);
  __this->m_UI_TrackedDevicePosition = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_8067 /* "TrackedDeviceOrientation" */,1,0);
  __this->m_UI_TrackedDeviceOrientation = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_5895 /* "OpenInventory" */,1,0);
  __this->m_UI_OpenInventory = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_8625 /* "UseItem" */,1,0);
  __this->m_UI_UseItem = pIVar3;
  pIVar3 = (InputAction_o *)unnamed_function_48989(__this->m_UI,StringLiteral_5315 /* "MenuInGame" */,1,0);
  __this->m_UI_MenuInGame = pIVar3;
  return;
}

// ---- InputSystem_Actions$$Finalize ----
// C#: void InputSystem_Actions__Finalize (InputSystem_Actions_o* __this, const MethodInfo* method);

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
               (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *__this,MethodInfo *method)

{
  return;
}

// ---- InputSystem_Actions$$Dispose ----
// C#: void InputSystem_Actions__Dispose (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__Dispose(InputSystem_Actions_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664b52 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664b52 = '\x01';
  }
  param1 = *(undefined4 *)__this->pad_8;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  unnamed_function_44782(param1,0);
  return;
}

// ---- InputSystem_Actions$$get_bindingMask ----
// C#: System_Nullable_InputBinding__o InputSystem_Actions__get_bindingMask (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__get_bindingMask
               (System_Nullable_InputBinding__o *__ret,InputSystem_Actions_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = *(int *)__this->pad_8;
  *(undefined8 *)__ret = *(undefined8 *)(iVar1 + 0x1c);
  *(undefined8 *)(__ret + 10) = *(undefined8 *)(iVar1 + 0x44);
  *(undefined8 *)(__ret + 8) = *(undefined8 *)(iVar1 + 0x3c);
  *(undefined8 *)(__ret + 6) = *(undefined8 *)(iVar1 + 0x34);
  *(undefined8 *)(__ret + 4) = *(undefined8 *)(iVar1 + 0x2c);
  *(undefined8 *)(__ret + 2) = *(undefined8 *)(iVar1 + 0x24);
  return;
}

// ---- InputSystem_Actions$$set_bindingMask ----
// C#: void InputSystem_Actions__set_bindingMask (InputSystem_Actions_o* __this, System_Nullable_InputBinding__o value, const MethodInfo* method);

void InputSystem_Actions__set_bindingMask
               (InputSystem_Actions_o *__this,System_Nullable_InputBinding__o *value,
               MethodInfo *method)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(value + 10);
  local_10 = *(undefined8 *)(value + 8);
  local_18 = *(undefined8 *)(value + 6);
  local_20 = *(undefined8 *)(value + 4);
  local_28 = *(undefined8 *)(value + 2);
  local_30 = *(undefined8 *)value;
  unnamed_function_48981(*(undefined4 *)__this->pad_8,&local_30,0);
  return;
}

// ---- InputSystem_Actions$$get_devices ----
// C#: System_Nullable_ReadOnlyArray_InputDevice___o InputSystem_Actions__get_devices (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__get_devices
               (System_Nullable_ReadOnlyArray_InputDevice___o *__ret,InputSystem_Actions_o *__this,
               MethodInfo *method)

{
  undefined8 local_10;
  undefined8 local_8;
  
  unnamed_function_48983(&local_10,*(undefined4 *)__this->pad_8,0);
  *(undefined8 *)(__ret + 2) = local_8;
  *(undefined8 *)__ret = local_10;
  return;
}

// ---- InputSystem_Actions$$set_devices ----
// C#: void InputSystem_Actions__set_devices (InputSystem_Actions_o* __this, System_Nullable_ReadOnlyArray_InputDevice___o value, const MethodInfo* method);

void InputSystem_Actions__set_devices
               (InputSystem_Actions_o *__this,System_Nullable_ReadOnlyArray_InputDevice___o *value,
               MethodInfo *method)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(value + 2);
  local_10 = *(undefined8 *)value;
  unnamed_function_48985(*(undefined4 *)__this->pad_8,&local_10,0);
  return;
}

// ---- InputSystem_Actions$$get_controlSchemes ----
// C#: UnityEngine_InputSystem_Utilities_ReadOnlyArray_InputControlScheme__o InputSystem_Actions__get_controlSchemes (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__get_controlSchemes
               (UnityEngine_InputSystem_Utilities_ReadOnlyArray_InputControlScheme__o *__ret,
               InputSystem_Actions_o *__this,MethodInfo *method)

{
  undefined8 local_10;
  int local_8;
  
  unnamed_function_48977(&local_10,*(undefined4 *)__this->pad_8,0);
  __ret[2]._opaque = local_8;
  *(undefined8 *)__ret = local_10;
  return;
}

// ---- InputSystem_Actions$$Contains ----
// C#: bool InputSystem_Actions__Contains (InputSystem_Actions_o* __this, UnityEngine_InputSystem_InputAction_o* action, const MethodInfo* method);

bool InputSystem_Actions__Contains
               (InputSystem_Actions_o *__this,UnityEngine_InputSystem_InputAction_o *action,
               MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_49013(*(undefined4 *)__this->pad_8,action,0);
  return SUB41(uVar1,0);
}

// ---- InputSystem_Actions$$GetEnumerator ----
// C#: System_Collections_Generic_IEnumerator_InputAction__o* InputSystem_Actions__GetEnumerator (InputSystem_Actions_o* __this, const MethodInfo* method);

System_Collections_Generic_IEnumerator_InputAction__o *
InputSystem_Actions__GetEnumerator(InputSystem_Actions_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerator_InputAction__o *pSVar1;
  
  pSVar1 = (System_Collections_Generic_IEnumerator_InputAction__o *)
           unnamed_function_49014(*(undefined4 *)__this->pad_8,0);
  return pSVar1;
}

// ---- InputSystem_Actions$$System.Collections.IEnumerable.GetEnumerator ----
// C#: System_Collections_IEnumerator_o* InputSystem_Actions__System_Collections_IEnumerable_GetEnumerator (InputSystem_Actions_o* __this, const MethodInfo* method);

System_Collections_Generic_IEnumerator_InputAction__o *
InputSystem_Actions__GetEnumerator(InputSystem_Actions_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerator_InputAction__o *pSVar1;
  
  pSVar1 = (System_Collections_Generic_IEnumerator_InputAction__o *)
           unnamed_function_49014(*(undefined4 *)__this->pad_8,0);
  return pSVar1;
}

// ---- InputSystem_Actions$$Enable ----
// C#: void InputSystem_Actions__Enable (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__Enable(InputSystem_Actions_o *__this,MethodInfo *method)

{
  unnamed_function_49009(*(undefined4 *)__this->pad_8,0);
  return;
}

// ---- InputSystem_Actions$$Disable ----
// C#: void InputSystem_Actions__Disable (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__Disable(InputSystem_Actions_o *__this,MethodInfo *method)

{
  unnamed_function_49011(*(undefined4 *)__this->pad_8,0);
  return;
}

// ---- InputSystem_Actions$$get_bindings ----
// C#: System_Collections_Generic_IEnumerable_InputBinding__o* InputSystem_Actions__get_bindings (InputSystem_Actions_o* __this, const MethodInfo* method);

System_Collections_Generic_IEnumerable_InputBinding__o *
InputSystem_Actions__get_bindings(InputSystem_Actions_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_InputBinding__o *pSVar1;
  
  pSVar1 = (System_Collections_Generic_IEnumerable_InputBinding__o *)
           unnamed_function_48978(*(undefined4 *)__this->pad_8,0);
  return pSVar1;
}

// ---- InputSystem_Actions$$FindAction ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions__FindAction (InputSystem_Actions_o* __this, System_String_o* actionNameOrId, bool throwIfNotFound, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions__FindAction
          (InputSystem_Actions_o *__this,System_String_o *actionNameOrId,bool throwIfNotFound,
          MethodInfo *method)

{
  undefined3 in_register_20000021;
  UnityEngine_InputSystem_InputAction_o *pUVar1;
  
  pUVar1 = (UnityEngine_InputSystem_InputAction_o *)
           unnamed_function_48988
                     (*(undefined4 *)__this->pad_8,actionNameOrId,
                      CONCAT31(in_register_20000021,throwIfNotFound),0);
  return pUVar1;
}

// ---- InputSystem_Actions$$FindBinding ----
// C#: int32_t InputSystem_Actions__FindBinding (InputSystem_Actions_o* __this, UnityEngine_InputSystem_InputBinding_o bindingMask, UnityEngine_InputSystem_InputAction_o** action, const MethodInfo* method);

void InputSystem_Actions__FindBinding
               (int __ret,InputSystem_Actions_o *__this,
               UnityEngine_InputSystem_InputBinding_o *bindingMask,
               UnityEngine_InputSystem_InputAction_o__o *action,MethodInfo *method)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  InputAction_o *local_8;
  
  local_8 = __this->m_Player_Beam;
  local_10._0_4_ = __this->m_Player_RightClick;
  local_10._4_4_ = __this->m_Player_SpaceClick;
  local_18._0_4_ = __this->m_Player_Look;
  local_18._4_4_ = __this->m_Player_Fire;
  local_20._0_4_ = __this->m_PlayerActionsCallbackInterfaces;
  local_20._4_4_ = __this->m_Player_Move;
  local_28._0_1_ = __this->pad_8[0];
  local_28._1_1_ = __this->pad_8[1];
  local_28._2_1_ = __this->pad_8[2];
  local_28._3_1_ = __this->pad_8[3];
  local_28._4_4_ = __this->m_Player;
  local_30._0_4_ = __this->klass;
  local_30._4_4_ = __this->monitor;
  unnamed_function_48998(*(undefined4 *)(__ret + 8),&local_30,bindingMask,0);
  return;
}

// ---- InputSystem_Actions$$get_Player ----
// C#: InputSystem_Actions_PlayerActions_o InputSystem_Actions__get_Player (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__get_Player
               (InputSystem_Actions_PlayerActions_o *__ret,InputSystem_Actions_o *__this,
               MethodInfo *method)

{
  return;
}

// ---- InputSystem_Actions$$get_UI ----
// C#: InputSystem_Actions_UIActions_o InputSystem_Actions__get_UI (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__get_Player
               (InputSystem_Actions_PlayerActions_o *__ret,InputSystem_Actions_o *__this,
               MethodInfo *method)

{
  return;
}

// ---- InputSystem_Actions$$get_KeyboardMouseScheme ----
// C#: UnityEngine_InputSystem_InputControlScheme_o InputSystem_Actions__get_KeyboardMouseScheme (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__get_KeyboardMouseScheme
               (UnityEngine_InputSystem_InputControlScheme_o *__ret,InputSystem_Actions_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined8 local_30;
  string_o *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664b53 == '\0') {
    unnamed_function_1099(&DAT_ram_0056592c);
    unnamed_function_1099(&StringLiteral_4998 /* "Keyboard&Mouse" */);
    DAT_ram_00664b53 = '\x01';
  }
  if (__this->m_KeyboardMouseSchemeIndex == -1) {
    iVar1 = unnamed_function_49005(*(undefined4 *)__this->pad_8,StringLiteral_4998 /* "Keyboard&Mouse" */,0);
    __this->m_KeyboardMouseSchemeIndex = iVar1;
  }
  unnamed_function_48977(&local_20,*(undefined4 *)__this->pad_8,0);
  local_8 = local_18;
  local_10 = local_20;
  unnamed_function_41729(&local_30,&local_10,__this->m_KeyboardMouseSchemeIndex,DAT_ram_0056592c);
  (__ret->m_DeviceRequirements).m_ControlPath = local_28;
  __ret->m_Name = (string_o *)(undefined4)local_30;
  __ret->m_BindingGroup = (string_o *)local_30._4_4_;
  return;
}

// ---- InputSystem_Actions$$get_GamepadScheme ----
// C#: UnityEngine_InputSystem_InputControlScheme_o InputSystem_Actions__get_GamepadScheme (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__get_GamepadScheme
               (UnityEngine_InputSystem_InputControlScheme_o *__ret,InputSystem_Actions_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined8 local_30;
  string_o *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664b54 == '\0') {
    unnamed_function_1099(&DAT_ram_0056592c);
    unnamed_function_1099(&StringLiteral_4038 /* "Gamepad" */);
    DAT_ram_00664b54 = '\x01';
  }
  if (__this->m_GamepadSchemeIndex == -1) {
    iVar1 = unnamed_function_49005(*(undefined4 *)__this->pad_8,StringLiteral_4038 /* "Gamepad" */,0);
    __this->m_GamepadSchemeIndex = iVar1;
  }
  unnamed_function_48977(&local_20,*(undefined4 *)__this->pad_8,0);
  local_8 = local_18;
  local_10 = local_20;
  unnamed_function_41729(&local_30,&local_10,__this->m_GamepadSchemeIndex,DAT_ram_0056592c);
  (__ret->m_DeviceRequirements).m_ControlPath = local_28;
  __ret->m_Name = (string_o *)(undefined4)local_30;
  __ret->m_BindingGroup = (string_o *)local_30._4_4_;
  return;
}

// ---- InputSystem_Actions$$get_TouchScheme ----
// C#: UnityEngine_InputSystem_InputControlScheme_o InputSystem_Actions__get_TouchScheme (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__get_TouchScheme
               (UnityEngine_InputSystem_InputControlScheme_o *__ret,InputSystem_Actions_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined8 local_30;
  string_o *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664b55 == '\0') {
    unnamed_function_1099(&DAT_ram_0056592c);
    unnamed_function_1099(&StringLiteral_8027 /* "Touch" */);
    DAT_ram_00664b55 = '\x01';
  }
  if (__this->m_TouchSchemeIndex == -1) {
    iVar1 = unnamed_function_49005(*(undefined4 *)__this->pad_8,StringLiteral_8027 /* "Touch" */,0);
    __this->m_TouchSchemeIndex = iVar1;
  }
  unnamed_function_48977(&local_20,*(undefined4 *)__this->pad_8,0);
  local_8 = local_18;
  local_10 = local_20;
  unnamed_function_41729(&local_30,&local_10,__this->m_TouchSchemeIndex,DAT_ram_0056592c);
  (__ret->m_DeviceRequirements).m_ControlPath = local_28;
  __ret->m_Name = (string_o *)(undefined4)local_30;
  __ret->m_BindingGroup = (string_o *)local_30._4_4_;
  return;
}

// ---- InputSystem_Actions$$get_JoystickScheme ----
// C#: UnityEngine_InputSystem_InputControlScheme_o InputSystem_Actions__get_JoystickScheme (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__get_JoystickScheme
               (UnityEngine_InputSystem_InputControlScheme_o *__ret,InputSystem_Actions_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined8 local_30;
  string_o *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664b56 == '\0') {
    unnamed_function_1099(&DAT_ram_0056592c);
    unnamed_function_1099(&StringLiteral_4965 /* "Joystick" */);
    DAT_ram_00664b56 = '\x01';
  }
  if (__this->m_JoystickSchemeIndex == -1) {
    iVar1 = unnamed_function_49005(*(undefined4 *)__this->pad_8,StringLiteral_4965 /* "Joystick" */,0);
    __this->m_JoystickSchemeIndex = iVar1;
  }
  unnamed_function_48977(&local_20,*(undefined4 *)__this->pad_8,0);
  local_8 = local_18;
  local_10 = local_20;
  unnamed_function_41729(&local_30,&local_10,__this->m_JoystickSchemeIndex,DAT_ram_0056592c);
  (__ret->m_DeviceRequirements).m_ControlPath = local_28;
  __ret->m_Name = (string_o *)(undefined4)local_30;
  __ret->m_BindingGroup = (string_o *)local_30._4_4_;
  return;
}

// ---- InputSystem_Actions$$get_XRScheme ----
// C#: UnityEngine_InputSystem_InputControlScheme_o InputSystem_Actions__get_XRScheme (InputSystem_Actions_o* __this, const MethodInfo* method);

void InputSystem_Actions__get_XRScheme
               (UnityEngine_InputSystem_InputControlScheme_o *__ret,InputSystem_Actions_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined8 local_30;
  string_o *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664b57 == '\0') {
    unnamed_function_1099(&DAT_ram_0056592c);
    unnamed_function_1099(&StringLiteral_8878 /* "XR" */);
    DAT_ram_00664b57 = '\x01';
  }
  if (__this->m_XRSchemeIndex == -1) {
    iVar1 = unnamed_function_49005(*(undefined4 *)__this->pad_8,StringLiteral_8878 /* "XR" */,0);
    __this->m_XRSchemeIndex = iVar1;
  }
  unnamed_function_48977(&local_20,*(undefined4 *)__this->pad_8,0);
  local_8 = local_18;
  local_10 = local_20;
  unnamed_function_41729(&local_30,&local_10,__this->m_XRSchemeIndex,DAT_ram_0056592c);
  (__ret->m_DeviceRequirements).m_ControlPath = local_28;
  __ret->m_Name = (string_o *)(undefined4)local_30;
  __ret->m_BindingGroup = (string_o *)local_30._4_4_;
  return;
}

