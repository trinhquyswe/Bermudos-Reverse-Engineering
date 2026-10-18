// InputSystem_Actions.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in InputSystem_Actions.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class InputSystem_Actions : IInputActionCollection2, IInputActionCollection, IEnumerable<InputAction>, IEnumerable, IDisposable
{
	// Fields
	private readonly InputActionAsset _asset_k__BackingField; // 0x8
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
	public InputActionAsset asset
	{
		get
		{
				uint uVar1;

				if (cRam00664b51 == '\0') {
					unnamed_function_1099(0x5646ec);
					unnamed_function_1099(0x564704);
					unnamed_function_1099(0x5592dc);
					unnamed_function_1099(0x5592e0);
					unnamed_function_1099(0x5760a8);
					unnamed_function_1099(0x577730);
					unnamed_function_1099(0x575f58);
					unnamed_function_1099(0x573440);
					unnamed_function_1099(0x576f58);
					unnamed_function_1099(0x576654);
					unnamed_function_1099(0x57e164);
					unnamed_function_1099(0x572da8);
					unnamed_function_1099(0x578848);
					unnamed_function_1099(0x575e10);
					unnamed_function_1099(0x577190);
					unnamed_function_1099(0x576efc);
					unnamed_function_1099(0x576944);
					unnamed_function_1099(0x575d44);
					unnamed_function_1099(0x578a9c);
					unnamed_function_1099(0x578844);
					unnamed_function_1099(0x576924);
					unnamed_function_1099(0x574730);
					unnamed_function_1099(0x572964);
					unnamed_function_1099(0x577450);
					unnamed_function_1099(0x5790fc);
					unnamed_function_1099(0x575abc);
					cRam00664b51 = '\x01';
				}
				uVar1 = unnamed_function_95402(uRam005592dc);
				System.Collections.Generic.List.cctor(uVar1,uRam005646ec);
				this.m_PlayerActionsCallbackInterfaces = uVar1;
				uVar1 = unnamed_function_95402(uRam005592e0);
				System.Collections.Generic.List.cctor(uVar1,uRam00564704);
				this.m_KeyboardMouseSchemeIndex = 0xffffffffffffffff;
				this.m_UIActionsCallbackInterfaces = uVar1;
				this.m_TouchSchemeIndex = 0xffffffffffffffff;
				this.m_XRSchemeIndex = 0xffffffff;
				uVar1 = UnityEngine.InputSystem.InputActionAsset.LoadFromJson(uRam0057e164,0);
				*(uint *)(this + 8) = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionAsset.FindBinding(uVar1,uRam00576924,1,0);
				this.m_Player = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex(uVar1,uRam00575f58,1,0);
				this.m_Player_Move = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_Player,uRam00575abc,1,0);
				this.m_Player_Look = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_Player,uRam00574730,1,0);
				this.m_Player_Fire = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_Player,uRam00576f58,1,0);
				this.m_Player_RightClick = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_Player,uRam00577450,1,0);
				this.m_Player_SpaceClick = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_Player,uRam00572964,1,0);
				this.m_Player_Beam = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_Player,uRam00576efc,1,0);
				this.m_Player_Rest = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionAsset.FindBinding
													(*(uint *)(this + 8),uRam00578a9c,1,0);
				this.m_UI = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex(uVar1,uRam005760a8,1,0);
				this.m_UI_Navigate = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00577730,1,0);
				this.m_UI_Submit = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00572da8,1,0);
				this.m_UI_Cancel = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00576944,1,0);
				this.m_UI_Point = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00573440,1,0);
				this.m_UI_Click = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00577190,1,0);
				this.m_UI_ScrollWheel = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00575e10,1,0);
				this.m_UI_MiddleClick = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00576f58,1,0);
				this.m_UI_RightClick = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00578848,1,0);
				this.m_UI_TrackedDevicePosition = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00578844,1,0);
				this.m_UI_TrackedDeviceOrientation = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00576654,1,0);
				this.m_UI_OpenInventory = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam005790fc,1,0);
				*(uint *)(this + 100) = uVar1;
				uVar1 = UnityEngine.InputSystem.InputActionMap.FindActionIndex
													(this.m_UI,uRam00575d44,1,0);
				this.m_UI_MenuInGame = uVar1;
				return;
		}
	}
	public Nullable<InputBinding> bindingMask
	{
		get
		{
			// <no body recovered in InputSystem_Actions.c>
		}
		set
		{
			// <no body recovered in InputSystem_Actions.c>
		}
	}
	public Nullable<ReadOnlyArray<InputDevice>> devices
	{
		get
		{
			// <no body recovered in InputSystem_Actions.c>
		}
		set
		{
			// <no body recovered in InputSystem_Actions.c>
		}
	}
	public ReadOnlyArray<InputControlScheme> controlSchemes
	{
		get
		{
			// <no body recovered in InputSystem_Actions.c>
		}
	}
	public IEnumerable<InputBinding> bindings
	{
		get
		{
			// <no body recovered in InputSystem_Actions.c>
		}
	}
	public InputSystem_Actions.PlayerActions Player
	{
		get
		{
			// <no body recovered in InputSystem_Actions.c>
		}
	}
	public InputSystem_Actions.UIActions UI
	{
		get
		{
			int param_2 = 0; // IL2CPP hidden slot
				uint uVar1;
				ulong uStack_30;
				uint uStack_28;
				ulong uStack_20;
				uint uStack_18;
				ulong uStack_10;
				uint uStack_8;

				if (cRam00664b53 == '\0') {
					unnamed_function_1099(0x56592c);
					unnamed_function_1099(0x575850);
					cRam00664b53 = '\x01';
				}
				if (*(int *)(param_2 + 0x6c) == -1) {
					uVar1 = UnityEngine.InputSystem.InputActionAsset.FindActionMap_1
														(*(uint *)(param_2 + 8),uRam00575850,0);
					*(uint *)(param_2 + 0x6c) = uVar1;
				}
				unnamed_function_48977(&uStack_20,*(uint *)(param_2 + 8),0);
				uStack_8 = uStack_18;
				uStack_10 = uStack_20;
				unnamed_function_41729(&uStack_30,&uStack_10,*(uint *)(param_2 + 0x6c),uRam0056592c);
				*(uint *)(this + 1) = uStack_28;
				*this = uStack_30;
				return;
		}
	}
	public InputControlScheme KeyboardMouseScheme
	{
		get
		{
			int param_2 = 0; // IL2CPP hidden slot
				uint uVar1;
				ulong uStack_30;
				uint uStack_28;
				ulong uStack_20;
				uint uStack_18;
				ulong uStack_10;
				uint uStack_8;

				if (cRam00664b54 == '\0') {
					unnamed_function_1099(0x56592c);
					unnamed_function_1099(0x574950);
					cRam00664b54 = '\x01';
				}
				if (*(int *)(param_2 + 0x70) == -1) {
					uVar1 = UnityEngine.InputSystem.InputActionAsset.FindActionMap_1
														(*(uint *)(param_2 + 8),uRam00574950,0);
					*(uint *)(param_2 + 0x70) = uVar1;
				}
				unnamed_function_48977(&uStack_20,*(uint *)(param_2 + 8),0);
				uStack_8 = uStack_18;
				uStack_10 = uStack_20;
				unnamed_function_41729(&uStack_30,&uStack_10,*(uint *)(param_2 + 0x70),uRam0056592c);
				*(uint *)(this + 1) = uStack_28;
				*this = uStack_30;
				return;
		}
	}
	public InputControlScheme GamepadScheme
	{
		get
		{
			int param_2 = 0; // IL2CPP hidden slot
				uint uVar1;
				ulong uStack_30;
				uint uStack_28;
				ulong uStack_20;
				uint uStack_18;
				ulong uStack_10;
				uint uStack_8;

				if (cRam00664b55 == '\0') {
					unnamed_function_1099(0x56592c);
					unnamed_function_1099(0x5787a4);
					cRam00664b55 = '\x01';
				}
				if (*(int *)(param_2 + 0x74) == -1) {
					uVar1 = UnityEngine.InputSystem.InputActionAsset.FindActionMap_1
														(*(uint *)(param_2 + 8),uRam005787a4,0);
					*(uint *)(param_2 + 0x74) = uVar1;
				}
				unnamed_function_48977(&uStack_20,*(uint *)(param_2 + 8),0);
				uStack_8 = uStack_18;
				uStack_10 = uStack_20;
				unnamed_function_41729(&uStack_30,&uStack_10,*(uint *)(param_2 + 0x74),uRam0056592c);
				*(uint *)(this + 1) = uStack_28;
				*this = uStack_30;
				return;
		}
	}
	public InputControlScheme TouchScheme
	{
		get
		{
			int param_2 = 0; // IL2CPP hidden slot
				uint uVar1;
				ulong uStack_30;
				uint uStack_28;
				ulong uStack_20;
				uint uStack_18;
				ulong uStack_10;
				uint uStack_8;

				if (cRam00664b56 == '\0') {
					unnamed_function_1099(0x56592c);
					unnamed_function_1099(0x5757cc);
					cRam00664b56 = '\x01';
				}
				if (*(int *)(param_2 + 0x78) == -1) {
					uVar1 = UnityEngine.InputSystem.InputActionAsset.FindActionMap_1
														(*(uint *)(param_2 + 8),uRam005757cc,0);
					*(uint *)(param_2 + 0x78) = uVar1;
				}
				unnamed_function_48977(&uStack_20,*(uint *)(param_2 + 8),0);
				uStack_8 = uStack_18;
				uStack_10 = uStack_20;
				unnamed_function_41729(&uStack_30,&uStack_10,*(uint *)(param_2 + 0x78),uRam0056592c);
				*(uint *)(this + 1) = uStack_28;
				*this = uStack_30;
				return;
		}
	}
	public InputControlScheme JoystickScheme
	{
		get
		{
			int param_2 = 0; // IL2CPP hidden slot
				uint uVar1;
				ulong uStack_30;
				uint uStack_28;
				ulong uStack_20;
				uint uStack_18;
				ulong uStack_10;
				uint uStack_8;

				if (cRam00664b57 == '\0') {
					unnamed_function_1099(0x56592c);
					unnamed_function_1099(0x5794f0);
					cRam00664b57 = '\x01';
				}
				if (*(int *)(param_2 + 0x7c) == -1) {
					uVar1 = UnityEngine.InputSystem.InputActionAsset.FindActionMap_1
														(*(uint *)(param_2 + 8),uRam005794f0,0);
					*(uint *)(param_2 + 0x7c) = uVar1;
				}
				unnamed_function_48977(&uStack_20,*(uint *)(param_2 + 8),0);
				uStack_8 = uStack_18;
				uStack_10 = uStack_20;
				unnamed_function_41729(&uStack_30,&uStack_10,*(uint *)(param_2 + 0x7c),uRam0056592c);
				*(uint *)(this + 1) = uStack_28;
				*this = uStack_30;
				return;
		}
	}
	public InputControlScheme XRScheme
	{
		get
		{
			// <no body recovered in InputSystem_Actions.c>
		}
	}

	// Methods

	// no recovered body in InputSystem_Actions.c
	public InputSystem_Actions()
	{
		// <no recovered body>
	}

	// wasm func87178 -> ram:81a55d91  [InputSystem_Actions::Finalize]
	protected override void Finalize()
	{
			uint uVar1;

			if (cRam00664b52 == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam00664b52 = '\x01';
			}
			uVar1 = *(uint *)(this + 8);
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			unnamed_function_44782(uVar1,0);
			return;
	}

	// no recovered body in InputSystem_Actions.c
	public void Dispose()
	{
		// <no recovered body>
	}

	// no recovered body in InputSystem_Actions.c
	public bool Contains(InputAction action)
	{
		// <no recovered body>
	}

	// no recovered body in InputSystem_Actions.c
	public IEnumerator<InputAction> GetEnumerator()
	{
		// <no recovered body>
	}

	// no recovered body in InputSystem_Actions.c
	private IEnumerator System.Collections.IEnumerable.GetEnumerator()
	{
		// <no recovered body>
	}

	// no recovered body in InputSystem_Actions.c
	public void Enable()
	{
		// <no recovered body>
	}

	// no recovered body in InputSystem_Actions.c
	public void Disable()
	{
		// <no recovered body>
	}

	// no recovered body in InputSystem_Actions.c
	public InputAction FindAction(string actionNameOrId, bool throwIfNotFound = False)
	{
		// <no recovered body>
	}

	// no recovered body in InputSystem_Actions.c
	public int FindBinding(InputBinding bindingMask, out InputAction action)
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86323 -> ram:81a305bc  [InputSystem_Actions+UIActions::SetCallbacks]
	void InputSystem_Actions_UIActions_SetCallbacks(int param_1)
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			uint uVar5;

			if (cRam006648ac == '\0') {
				unnamed_function_1099(0x557a38);
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x567f78);
				unnamed_function_1099(0x569e5c);
				unnamed_function_1099(0x569e60);
				unnamed_function_1099(0x569e64);
				unnamed_function_1099(0x565d78);
				cRam006648ac = '\x01';
			}
			uVar1 = unnamed_function_65372(param_1,uRam00567f78);
			*(uint *)(param_1 + 0x14) = uVar1;
			uVar1 = unnamed_function_95402(uRam00557a38);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,param_1,uRam00569e60,0);
			StaticEventHandler.CallTriggerDashEvent(uVar1,param_1);
			uVar1 = unnamed_function_95402(uRam00557a38);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,param_1,uRam00569e64,0);
			StaticEventHandler.CallHotBarScrollChangedEvent(uVar1,param_1);
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar4 = **(int **)(iVar3 + 0x5c);
			uVar5 = *(uint *)(iVar4 + 0x20);
			uVar1 = unnamed_function_95402(uRam005579ec);
			unnamed_function_60038(uVar1,param_1,uRam00569e5c,0);
			iVar3 = unnamed_function_85158(uVar5,uVar1,0);
			uVar1 = uRam005579ec;
			if (iVar3 == 0) {
				*(uint *)(iVar4 + 0x20) = 0;
				return;
			}
			iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
			if (iVar2 == 0) {
				unnamed_function_1116(iVar3,uVar1);
				do {
					halt_trap();
				} while( true );
			}
			*(int *)(iVar4 + 0x20) = iVar2;
			uVar1 = uRam005579ec;
			iVar4 = unnamed_function_1112(iVar3,uRam005579ec);
			if (iVar4 != 0) {
				return;
			}
			unnamed_function_1116(iVar3,uVar1);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87184 -> ram:81a56139  [InputSystem_Actions+PlayerActions::get_RightClick]
	uint InputSystem_Actions_PlayerActions_get_RightClick(int * param_1)
	{
			return *(uint *)(*param_1 + 0x24);
	}

	// wasm func87186 -> ram:81a56150  [InputSystem_Actions+PlayerActions::op_Implicit]
	void InputSystem_Actions_PlayerActions_op_Implicit(int * param_1, int * param_2)
	{
			int iVar1;
			uint uVar2;
			uint uVar3;
			uint uVar4;
			int iVar5;

			if (cRam00664b58 == '\0') {
				unnamed_function_1099(0x557a90);
				unnamed_function_1099(0x55e188);
				unnamed_function_1099(0x5646f0);
				unnamed_function_1099(0x5646f8);
				cRam00664b58 = '\x01';
			}
			if ((param_2 != (int *)0x0) &&
				 (iVar1 = unnamed_function_67444(*(uint *)(*param_1 + 0x10),param_2,uRam005646f8),
				 iVar5 = iRam005646f0, iVar1 == 0)) {
				iVar1 = *(int *)(*param_1 + 0x10);
				*(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
				uVar3 = *(uint *)(iVar1 + 0xc);
				if (uVar3 < *(uint *)(*(int *)(iVar1 + 8) + 0xc)) {
					*(uint *)(iVar1 + 0xc) = uVar3 + 1;
					*(int **)(*(int *)(iVar1 + 8) + uVar3 * 4 + 0x10) = param_2;
				}
				else {
					System.String.Substring
										(iVar1,param_2,*(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
				}
				uVar4 = *(uint *)(*param_1 + 0x14);
				uVar3 = 0;
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
							goto code_r0x81a56290;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,0);
		code_r0x81a56290:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x14);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
							goto code_r0x81a56331;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,0);
		code_r0x81a56331:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x14);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
							goto code_r0x81a563d2;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,0);
		code_r0x81a563d2:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x18);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
							goto code_r0x81a56473;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,1);
		code_r0x81a56473:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x18);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
							goto code_r0x81a56514;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,1);
		code_r0x81a56514:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x18);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
							goto code_r0x81a565b5;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,1);
		code_r0x81a565b5:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x1c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
							goto code_r0x81a56656;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,2);
		code_r0x81a56656:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x1c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
							goto code_r0x81a566f7;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,2);
		code_r0x81a566f7:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x1c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
							goto code_r0x81a56798;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,2);
		code_r0x81a56798:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x20);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
							goto code_r0x81a56839;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,3);
		code_r0x81a56839:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x20);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
							goto code_r0x81a568da;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,3);
		code_r0x81a568da:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x20);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
							goto code_r0x81a5697b;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,3);
		code_r0x81a5697b:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x24);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
							goto code_r0x81a56a1c;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,4);
		code_r0x81a56a1c:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x24);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
							goto code_r0x81a56abd;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,4);
		code_r0x81a56abd:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x24);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
							goto code_r0x81a56b5e;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,4);
		code_r0x81a56b5e:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x28);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
							goto code_r0x81a56bff;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,5);
		code_r0x81a56bff:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x28);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
							goto code_r0x81a56ca0;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,5);
		code_r0x81a56ca0:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x28);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
							goto code_r0x81a56d41;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,5);
		code_r0x81a56d41:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x2c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
							goto code_r0x81a56de2;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,6);
		code_r0x81a56de2:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x2c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
							goto code_r0x81a56e83;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,6);
		code_r0x81a56e83:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x2c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
							goto code_r0x81a56f28;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e188,6);
		code_r0x81a56f28:
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
			}
			return;
	}

	// wasm func87190 -> ram:81a57cc1  [InputSystem_Actions+PlayerActions::AddCallbacks]
	void InputSystem_Actions_PlayerActions_AddCallbacks(int * param_1, uint param_2)
	{
			int iVar1;

			if (cRam00664b5a == '\0') {
				unnamed_function_1099(0x564700);
				cRam00664b5a = '\x01';
			}
			iVar1 = unnamed_function_67450(*(uint *)(*param_1 + 0x10),param_2,uRam00564700);
			if (iVar1 != 0) {
				unnamed_function_87188(param_1,param_2,param_1);
			}
			return;
	}

	// wasm func87192 -> ram:81a57d51  [InputSystem_Actions+PlayerActions::RemoveCallbacks]
	void InputSystem_Actions_PlayerActions_RemoveCallbacks(int * param_1, uint param_2)
	{
			int iVar1;
			uint uVar2;
			int iVar3;
			int *piVar4;
			byte[] auStack_20 = new byte[8];
			int iStack_18;
			ulong *puStack_14;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam00664b5b == '\0') {
				unnamed_function_1099(0x561710);
				unnamed_function_1099(0x561714);
				unnamed_function_1099(0x561718);
				unnamed_function_1099(0x5646f4);
				unnamed_function_1099(0x5646fc);
				cRam00664b5b = '\x01';
			}
			uStack_8 = 0;
			uStack_10 = 0;
			UnityEngine.ComputeBuffer.Release(&uStack_10,*(uint *)(*param_1 + 0x10),uRam005646fc);
			iStack_18 = 0;
			puStack_14 = &uStack_10;
			do {
				iRam005ddf34 = 0;
				iVar1 = import.env.invoke_iii(0x483,&uStack_10,uRam00561714);
				iVar3 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar3 == 1) {
					uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a57e77;
				}
				if (iVar1 == 0) goto code_r0x81a57ecc;
				iRam005ddf34 = 0;
				import.env.invoke_viii(0x3670,param_1,uStack_8._4_4_,auStack_20);
				iVar3 = iRam005ddf34;
				iRam005ddf34 = 0;
			} while (iVar3 != 1);
			uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
		code_r0x81a57e77:
			iVar3 = import.env.getTempRet0();
			iVar1 = import.env.llvm_eh_typeid_for(0x4a99ec);
			if (iVar3 == iVar1) {
				piVar4 = (int *)import.env.__cxa_begin_catch(uVar2);
				iVar1 = *piVar4;
				iRam005ddf34 = 0;
				iStack_18 = iVar1;
				import.env.invoke_v(0x3a);
				iVar3 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar3 != 1) {
					if (iVar1 != 0) {
						System.Net.CommandStream.ReceiveCommandResponseCallback(iVar1);
						do {
							halt_trap();
						} while( true );
					}
		code_r0x81a57ecc:
					iRam005ddf34 = 0;
					iVar3 = *(int *)(*param_1 + 0x10);
					iVar1 = *(int *)(iVar3 + 0xc);
					*(uint *)(iVar3 + 0xc) = 0;
					*(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
					if (0 < iVar1) {
						unnamed_function_84588(*(uint *)(iVar3 + 8),0,iVar1,0);
					}
					InputSystem_Actions_PlayerActions.op_Implicit(param_1,param_2,auStack_20);
					return;
				}
				uVar2 = import.env.__cxa_find_matching_catch_2();
				import.env.getTempRet0();
			}
			iRam005ddf34 = 0;
			import.env.invoke_ii(0x3671,&iStack_18);
			iVar3 = iRam005ddf34;
			iRam005ddf34 = 0;
			if (iVar3 == 1) {
				import.env.__cxa_find_matching_catch_3(0);
				import.env.getTempRet0();
				unnamed_function_642();
				do {
					halt_trap();
				} while( true );
			}
			import.env.__resumeException(uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87193 -> ram:81a57f6d  [InputSystem_Actions+PlayerActions::UnregisterCallbacks]
	int * InputSystem_Actions_PlayerActions_UnregisterCallbacks(int * param_1)
	{
			if (*param_1 == 0) {
				return param_1;
			}
			System.Net.CommandStream.ReceiveCommandResponseCallback(*param_1);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87195 -> ram:81a57fa3  [InputSystem_Actions+UIActions::get_ScrollWheel]
	uint InputSystem_Actions_UIActions_get_ScrollWheel(int * param_1)
	{
			return *(uint *)(*param_1 + 0x50);
	}

	// wasm func87197 -> ram:81a57fb9  [InputSystem_Actions+UIActions::get_MiddleClick]
	uint InputSystem_Actions_UIActions_get_MiddleClick(int * param_1)
	{
			return *(uint *)(*param_1 + 0x54);
	}

	// wasm func87199 -> ram:81a57fcf  [InputSystem_Actions+UIActions::get_RightClick]
	uint InputSystem_Actions_UIActions_get_RightClick(int * param_1)
	{
			return *(uint *)(*param_1 + 0x58);
	}

	// wasm func87201 -> ram:81a57fe5  [InputSystem_Actions+UIActions::get_TrackedDevicePosition]
	uint InputSystem_Actions_UIActions_get_TrackedDevicePosition(int * param_1)
	{
			return *(uint *)(*param_1 + 0x5c);
	}

	// wasm func87203 -> ram:81a57ffb  [InputSystem_Actions+UIActions::get_TrackedDeviceOrientation]
	uint InputSystem_Actions_UIActions_get_TrackedDeviceOrientation(int * param_1)
	{
			return *(uint *)(*param_1 + 0x60);
	}

	// wasm func87205 -> ram:81a58011  [InputSystem_Actions+UIActions::get_OpenInventory]
	uint InputSystem_Actions_UIActions_get_OpenInventory(int * param_1)
	{
			return *(uint *)(*param_1 + 100);
	}

	// wasm func87207 -> ram:81a58027  [InputSystem_Actions+UIActions::get_UseItem]
	uint InputSystem_Actions_UIActions_get_UseItem(int * param_1)
	{
			return *(uint *)(*param_1 + 0x68);
	}

	// wasm func87209 -> ram:81a5803d  [InputSystem_Actions+UIActions::Get]
	void InputSystem_Actions_UIActions_Get(int * param_1)
	{
			UnityEngine.InputSystem.InputActionMap.FindAction_1(*(uint *)(*param_1 + 0x30),0);
			return;
	}

	// wasm func87211 -> ram:81a5805f  [InputSystem_Actions+UIActions::Enable]
	void InputSystem_Actions_UIActions_Enable(int * param_1)
	{
			unnamed_function_49012(*(uint *)(*param_1 + 0x30),0);
			return;
	}

	// wasm func87213 -> ram:81a58081  [InputSystem_Actions+UIActions::Disable]
	uint InputSystem_Actions_UIActions_Disable(int * param_1)
	{
			uint uVar1;

			uVar1 = UnityEngine.InputSystem.InputActionMap.get_idDontGenerate
												(*(uint *)(*param_1 + 0x30),0);
			return uVar1;
	}

	// wasm func87215 -> ram:81a580a4  [InputSystem_Actions+UIActions::op_Implicit]
	void InputSystem_Actions_UIActions_op_Implicit(int * param_1, int * param_2)
	{
			int iVar1;
			uint uVar2;
			uint uVar3;
			uint uVar4;
			int iVar5;

			if (cRam00664b5c == '\0') {
				unnamed_function_1099(0x557a90);
				unnamed_function_1099(0x55e18c);
				unnamed_function_1099(0x564708);
				unnamed_function_1099(0x564710);
				cRam00664b5c = '\x01';
			}
			if ((param_2 != (int *)0x0) &&
				 (iVar1 = unnamed_function_67444(*(uint *)(*param_1 + 0x34),param_2,uRam00564710),
				 iVar5 = iRam00564708, iVar1 == 0)) {
				iVar1 = *(int *)(*param_1 + 0x34);
				*(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
				uVar3 = *(uint *)(iVar1 + 0xc);
				if (uVar3 < *(uint *)(*(int *)(iVar1 + 8) + 0xc)) {
					*(uint *)(iVar1 + 0xc) = uVar3 + 1;
					*(int **)(*(int *)(iVar1 + 8) + uVar3 * 4 + 0x10) = param_2;
				}
				else {
					System.String.Substring
										(iVar1,param_2,*(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
				}
				uVar4 = *(uint *)(*param_1 + 0x38);
				uVar3 = 0;
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
							goto code_r0x81a581e4;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0);
		code_r0x81a581e4:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x38);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
							goto code_r0x81a58285;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0);
		code_r0x81a58285:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x38);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
							goto code_r0x81a58326;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0);
		code_r0x81a58326:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x3c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
							goto code_r0x81a583c7;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,1);
		code_r0x81a583c7:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x3c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
							goto code_r0x81a58468;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,1);
		code_r0x81a58468:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x3c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
							goto code_r0x81a58509;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,1);
		code_r0x81a58509:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x40);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
							goto code_r0x81a585aa;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,2);
		code_r0x81a585aa:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x40);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
							goto code_r0x81a5864b;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,2);
		code_r0x81a5864b:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x40);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
							goto code_r0x81a586ec;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,2);
		code_r0x81a586ec:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x44);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
							goto code_r0x81a5878d;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,3);
		code_r0x81a5878d:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x44);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
							goto code_r0x81a5882e;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,3);
		code_r0x81a5882e:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x44);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
							goto code_r0x81a588cf;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,3);
		code_r0x81a588cf:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x48);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
							goto code_r0x81a58970;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,4);
		code_r0x81a58970:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x48);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
							goto code_r0x81a58a11;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,4);
		code_r0x81a58a11:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x48);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
							goto code_r0x81a58ab2;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,4);
		code_r0x81a58ab2:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x4c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
							goto code_r0x81a58b53;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,5);
		code_r0x81a58b53:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x4c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
							goto code_r0x81a58bf4;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,5);
		code_r0x81a58bf4:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x4c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
							goto code_r0x81a58c95;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,5);
		code_r0x81a58c95:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x50);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
							goto code_r0x81a58d36;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,6);
		code_r0x81a58d36:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x50);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
							goto code_r0x81a58dd7;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,6);
		code_r0x81a58dd7:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x50);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
							goto code_r0x81a58e78;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,6);
		code_r0x81a58e78:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x54);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
							goto code_r0x81a58f19;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,7);
		code_r0x81a58f19:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x54);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
							goto code_r0x81a58fba;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,7);
		code_r0x81a58fba:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x54);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
							goto code_r0x81a5905b;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,7);
		code_r0x81a5905b:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x58);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
							goto code_r0x81a590fc;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,8);
		code_r0x81a590fc:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x58);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
							goto code_r0x81a5919d;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,8);
		code_r0x81a5919d:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x58);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
							goto code_r0x81a5923e;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,8);
		code_r0x81a5923e:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x5c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
							goto code_r0x81a592df;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,9);
		code_r0x81a592df:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x5c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
							goto code_r0x81a59380;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,9);
		code_r0x81a59380:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x5c);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
							goto code_r0x81a59421;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,9);
		code_r0x81a59421:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x60);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
							goto code_r0x81a594c2;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,10);
		code_r0x81a594c2:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x60);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
							goto code_r0x81a59563;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,10);
		code_r0x81a59563:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x60);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
							goto code_r0x81a59604;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,10);
		code_r0x81a59604:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 100);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
							goto code_r0x81a596a5;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xb);
		code_r0x81a596a5:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 100);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
							goto code_r0x81a59746;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xb);
		code_r0x81a59746:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 100);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
							goto code_r0x81a597e7;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xb);
		code_r0x81a597e7:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x68);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
							goto code_r0x81a59888;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xc);
		code_r0x81a59888:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.get_inProgress(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x68);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
							goto code_r0x81a59929;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xc);
		code_r0x81a59929:
				uVar3 = 0;
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_canceled(uVar4,uVar2,0);
				uVar4 = *(uint *)(*param_1 + 0x68);
				uVar2 = unnamed_function_95402(uRam00557a90);
				iVar5 = *param_2;
				if (*(ushort *)(iVar5 + 0xb6) != 0) {
					do {
						if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
							iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
							goto code_r0x81a599ce;
						}
						uVar3 = uVar3 + 1;
					} while (*(ushort *)(iVar5 + 0xb6) != uVar3);
				}
				iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xc);
		code_r0x81a599ce:
				unnamed_function_60160(uVar2,param_2,*(uint *)(iVar5 + 4),0);
				UnityEngine.InputSystem.InputAction.remove_started(uVar4,uVar2,0);
			}
			return;
	}

	// wasm func87219 -> ram:81a5b2b9  [InputSystem_Actions+UIActions::AddCallbacks]
	void InputSystem_Actions_UIActions_AddCallbacks(int * param_1, uint param_2)
	{
			int iVar1;

			if (cRam00664b5e == '\0') {
				unnamed_function_1099(0x564718);
				cRam00664b5e = '\x01';
			}
			iVar1 = unnamed_function_67450(*(uint *)(*param_1 + 0x34),param_2,uRam00564718);
			if (iVar1 != 0) {
				unnamed_function_87217(param_1,param_2,param_1);
			}
			return;
	}

	// wasm func87221 -> ram:81a5b349  [InputSystem_Actions+UIActions::RemoveCallbacks]
	void InputSystem_Actions_UIActions_RemoveCallbacks(int * param_1, uint param_2)
	{
			int iVar1;
			uint uVar2;
			int iVar3;
			int *piVar4;
			byte[] auStack_20 = new byte[8];
			int iStack_18;
			ulong *puStack_14;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam00664b5f == '\0') {
				unnamed_function_1099(0x56171c);
				unnamed_function_1099(0x561720);
				unnamed_function_1099(0x561724);
				unnamed_function_1099(0x56470c);
				unnamed_function_1099(0x564714);
				cRam00664b5f = '\x01';
			}
			uStack_8 = 0;
			uStack_10 = 0;
			UnityEngine.ComputeBuffer.Release(&uStack_10,*(uint *)(*param_1 + 0x34),uRam00564714);
			iStack_18 = 0;
			puStack_14 = &uStack_10;
			do {
				iRam005ddf34 = 0;
				iVar1 = import.env.invoke_iii(0x483,&uStack_10,uRam00561720);
				iVar3 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar3 == 1) {
					uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a5b46f;
				}
				if (iVar1 == 0) goto code_r0x81a5b4c4;
				iRam005ddf34 = 0;
				import.env.invoke_viii(0x3672,param_1,uStack_8._4_4_,auStack_20);
				iVar3 = iRam005ddf34;
				iRam005ddf34 = 0;
			} while (iVar3 != 1);
			uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
		code_r0x81a5b46f:
			iVar3 = import.env.getTempRet0();
			iVar1 = import.env.llvm_eh_typeid_for(0x4a99ec);
			if (iVar3 == iVar1) {
				piVar4 = (int *)import.env.__cxa_begin_catch(uVar2);
				iVar1 = *piVar4;
				iRam005ddf34 = 0;
				iStack_18 = iVar1;
				import.env.invoke_v(0x3a);
				iVar3 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar3 != 1) {
					if (iVar1 != 0) {
						System.Net.CommandStream.ReceiveCommandResponseCallback(iVar1);
						do {
							halt_trap();
						} while( true );
					}
		code_r0x81a5b4c4:
					iRam005ddf34 = 0;
					iVar3 = *(int *)(*param_1 + 0x34);
					iVar1 = *(int *)(iVar3 + 0xc);
					*(uint *)(iVar3 + 0xc) = 0;
					*(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
					if (0 < iVar1) {
						unnamed_function_84588(*(uint *)(iVar3 + 8),0,iVar1,0);
					}
					InputSystem_Actions_UIActions.op_Implicit(param_1,param_2,auStack_20);
					return;
				}
				uVar2 = import.env.__cxa_find_matching_catch_2();
				import.env.getTempRet0();
			}
			iRam005ddf34 = 0;
			import.env.invoke_ii(0x3673,&iStack_18);
			iVar3 = iRam005ddf34;
			iRam005ddf34 = 0;
			if (iVar3 == 1) {
				import.env.__cxa_find_matching_catch_3(0);
				import.env.getTempRet0();
				unnamed_function_642();
				do {
					halt_trap();
				} while( true );
			}
			import.env.__resumeException(uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87222 -> ram:81a5b565  [InputSystem_Actions+UIActions::UnregisterCallbacks]
	int * InputSystem_Actions_UIActions_UnregisterCallbacks(int * param_1)
	{
			if (*param_1 == 0) {
				return param_1;
			}
			System.Net.CommandStream.ReceiveCommandResponseCallback(*param_1);
			do {
				halt_trap();
			} while( true );
	}
}

