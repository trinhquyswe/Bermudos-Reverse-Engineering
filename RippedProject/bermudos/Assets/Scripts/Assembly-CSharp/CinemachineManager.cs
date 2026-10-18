// CinemachineManager.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in CinemachineManager.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class CinemachineManager : MonoBehaviour
{
	// Fields
	private CinemachineVirtualCamera cinemachineVirtualCamera; // 0x10
	private CinemachineVirtualCamera zoomCamera; // 0x14
	private CinemachineConfiner2D cinemachineConfiner2D; // 0x18
	private Collider2D mapCollider; // 0x1C

	// Methods

	// wasm func87107 -> ram:81a53025  [CinemachineManager::Awake]
	private void Awake()
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			uint uVar5;

			if (cRam00664b0f == '\0') {
				unnamed_function_1099(0x557a10);
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x567b8c);
				unnamed_function_1099(0x567b90);
				unnamed_function_1099(0x565d78);
				cRam00664b0f = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a10);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam00567b90,0);
			SoundEffectSO.ctor(uVar1,0);
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
			unnamed_function_60038(uVar1,this,uRam00567b8c,0);
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

	// wasm func87108 -> ram:81a5314d  [CinemachineManager::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam00664b10 == '\0') {
				unnamed_function_1099(0x557a10);
				unnamed_function_1099(0x567b90);
				cRam00664b10 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a10);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam00567b90,0);
			StaticEventHandler.add_OnMapChanged(uVar1,0);
			return;
	}

	// wasm func87109 -> ram:81a5319d  [CinemachineManager::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;
			uint uVar3;
			int iVar4;
			int iVar5;

			if (cRam00664b11 == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x567b8c);
				unnamed_function_1099(0x567b88);
				unnamed_function_1099(0x557db8);
				unnamed_function_1099(0x557de0);
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d33c);
				unnamed_function_1099(0x56d378);
				unnamed_function_1099(0x56eb74);
				unnamed_function_1099(0x56eb78);
				unnamed_function_1099(0x55d910);
				cRam00664b11 = '\x01';
			}
			if (param_2 == 0) {
				if (cRam00664b13 == '\0') {
					unnamed_function_1099(0x55d914);
					cRam00664b13 = '\x01';
				}
				iVar1 = unnamed_function_95402(uRam0055d914);
				*(int *)(iVar1 + 0x10) = this;
				*(uint *)(iVar1 + 8) = 0;
				UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
				return;
			}
			if (param_2 == 1) {
				iVar1 = unnamed_function_95402(uRam0055d910);
				*(int *)(iVar1 + 0xc) = this;
				*(uint *)(iVar1 + 8) = *(uint *)(this.zoomCamera + 0x74);
				uVar2 = unnamed_function_95402(uRam00557db8);
				unnamed_function_78188(uVar2,iVar1,uRam0056eb74,0);
				uVar3 = unnamed_function_95402(uRam00557de0);
				unnamed_function_78211(uVar3,iVar1,uRam0056eb78,0);
				if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
					unnamed_function_94848(iRam0055a7d4);
				}
				uVar2 = DG.Tweening.DOTween.ManualUpdate(uVar2,uVar3,0x41070000,0x40a00000,0);
				uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar2,1,uRam0056d378);
				uVar3 = unnamed_function_95402(uRam0055cd74);
				DG.Tweening.Color2.op_Multiply(uVar3,this,uRam00567b88,0);
				DG.Tweening.TweenSettingsExtensions.From_6(uVar2,uVar3,uRam0056d33c);
				return;
			}
			if ((param_2 != 2) && (param_2 == 3)) {
				uVar2 = unnamed_function_44644(this.zoomCamera,0);
				unnamed_function_44686(uVar2,0,0);
				uVar2 = unnamed_function_44644(this.cinemachineVirtualCamera,0);
				unnamed_function_44686(uVar2,1,0);
				iVar1 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
					iVar1 = System.Threading.Monitor.Enter_1(iVar1);
				}
				iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
				if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
					iVar1 = System.Threading.Monitor.Enter_1(iVar1);
				}
				iVar5 = **(int **)(iVar1 + 0x5c);
				uVar3 = *(uint *)(iVar5 + 0x20);
				uVar2 = unnamed_function_95402(uRam005579ec);
				unnamed_function_60038(uVar2,this,uRam00567b8c,0);
				iVar1 = unnamed_function_85160(uVar3,uVar2,0);
				uVar2 = uRam005579ec;
				if (iVar1 == 0) {
					*(uint *)(iVar5 + 0x20) = 0;
					return;
				}
				iVar4 = unnamed_function_1112(iVar1,uRam005579ec);
				if (iVar4 == 0) {
					unnamed_function_1116(iVar1,uVar2);
					do {
						halt_trap();
					} while( true );
				}
				*(int *)(iVar5 + 0x20) = iVar4;
				uVar2 = uRam005579ec;
				iVar5 = unnamed_function_1112(iVar1,uRam005579ec);
				if (iVar5 == 0) {
					unnamed_function_1116(iVar1,uVar2);
					do {
						halt_trap();
					} while( true );
				}
			}
			return;
	}

	// wasm func87111 -> ram:81a53463  [CinemachineManager::GameManager_OnGameStateChange]
	private void GameManager_OnGameStateChange(GameState gameState)
	{
			CinemachineManager.ZoomCam(this,*(uint *)(gameState + 8),this);
			return;
	}

	// wasm func87113 -> ram:81a5350a  [CinemachineManager::StaticEventHandler_OnMapChanged]
	private void StaticEventHandler_OnMapChanged(MapChangedEventArgs mapChangedEventArgs)
	{
			uint uVar1;
			int *piVar2;
			int iVar3;

			if (cRam00664b12 == '\0') {
				unnamed_function_1099(0x565d78);
				cRam00664b12 = '\x01';
			}
			piVar2 = *(int **)(this + 0x10);
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			uVar1 = System.Linq.Enumerable.Count(*(uint *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
			iVar3 = *piVar2;
			(**(code **)((ulong)*(uint *)(iVar3 + 0x1c0) * 4))
								(piVar2,uVar1,*(uint *)(iVar3 + 0x1c4));
			piVar2 = *(int **)(this + 0x14);
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			uVar1 = System.Linq.Enumerable.Count(*(uint *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
			iVar3 = *piVar2;
			(**(code **)((ulong)*(uint *)(iVar3 + 0x1c0) * 4))
								(piVar2,uVar1,*(uint *)(iVar3 + 0x1c4));
			return;
	}

	// wasm func87110 -> ram:81a53426  [CinemachineManager::Start]
	private void Start()
	{
			int iVar1;

			if (cRam00664b13 == '\0') {
				unnamed_function_1099(0x55d914);
				cRam00664b13 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055d914);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func87112 -> ram:81a53474  [CinemachineManager::ZoomCam]
	private IEnumerator ZoomCam()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;

			if (cRam00664b14 == '\0') {
				unnamed_function_1099(0x567e58);
				unnamed_function_1099(0x55be2c);
				cRam00664b14 = '\x01';
			}
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar1 = unnamed_function_44710(param_2,0,0);
			if (iVar1 == 0) {
				uVar2 = UnityEngine.GameObject.get_activeInHierarchy(param_2,uRam00567e58);
				this.mapCollider = uVar2;
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				iVar1 = UnityEngine.Camera.get_targetTexture(uVar2,0,0);
				if (iVar1 != 0) {
					*(uint *)(this.cinemachineConfiner2D + 0x18) = this.mapCollider;
				}
			}
			return;
	}

	// no recovered body in CinemachineManager.c
	private void Confine(Map map)
	{
		// <no recovered body>
	}

	// wasm func87114 -> ram:81a535f8  [CinemachineManager::.ctor]
	public CinemachineManager()
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			uint uVar5;

			if (cRam00664b15 == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x567b8c);
				unnamed_function_1099(0x565d78);
				cRam00664b15 = '\x01';
			}
			uVar1 = unnamed_function_44644(this.zoomCamera,0);
			unnamed_function_44686(uVar1,0,0);
			uVar1 = unnamed_function_44644(this.cinemachineVirtualCamera,0);
			unnamed_function_44686(uVar1,1,0);
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
			unnamed_function_60038(uVar1,this,uRam00567b8c,0);
			iVar3 = unnamed_function_85160(uVar5,uVar1,0);
			uVar1 = uRam005579ec;
			if (iVar3 == 0) {
				*(uint *)(iVar4 + 0x20) = 0;
			}
			else {
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
				if (iVar4 == 0) {
					unnamed_function_1116(iVar3,uVar1);
					do {
						halt_trap();
					} while( true );
				}
			}
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = **(int **)(iVar3 + 0x5c);
			if (cRam00664b1b == '\0') {
				unnamed_function_1099(0x565d58);
				cRam00664b1b = '\x01';
			}
			*(uint *)(iVar3 + 0x1c) = 2;
			unnamed_function_44686(*(uint *)(iVar3 + 0x34),1,0);
			unnamed_function_44686(*(uint *)(iVar3 + 0x38),1,0);
			unnamed_function_44686(*(uint *)(iVar3 + 0x3c),1,0);
			iVar3 = *(int *)(iVar3 + 0x20);
			if (iVar3 != 0) {
				(**(code **)((ulong)*(uint *)(iVar3 + 0xc) * 4))
									(*(uint *)(iVar3 + 0x20),2,*(uint *)(iVar3 + 0x14));
			}
			return;
	}

	// no recovered body in CinemachineManager.c
	private void _GameManager_OnGameStateChange_b__7_2()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func87115 -> ram:81a537c4  [CinemachineManager+<>c__DisplayClass7_0::<GameManager_OnGameStateChange>b__0]
	void CinemachineManager___c__DisplayClass7_0__GameManager_OnGameStateChange_b__0(int param_1, uint param_2)
	{
			*(uint *)(param_1 + 8) = param_2;
			*(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x14) + 0x74) = param_2;
			return;
	}

	// wasm func87116 -> ram:81a537dc  [CinemachineManager+<ZoomCam>d__10::System.IDisposable.Dispose]
	uint CinemachineManager__ZoomCam_d__10_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;

			if (cRam00664b16 == '\0') {
				unnamed_function_1099(0x55d134);
				cRam00664b16 = '\x01';
			}
			if (*(int *)(param_1 + 8) != 0) {
				if (*(int *)(param_1 + 8) == 1) {
					*(uint *)(param_1 + 8) = 0xffffffff;
					uVar1 = unnamed_function_44644(*(uint *)(*(int *)(param_1 + 0x10) + 0x10),0);
					unnamed_function_44686(uVar1,0,0);
				}
				return 0;
			}
			*(uint *)(param_1 + 8) = 0xffffffff;
			uVar1 = unnamed_function_95402(uRam0055d134);
			UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime(uVar1,0x3dcccccd,0)
			;
			*(uint *)(param_1 + 8) = 1;
			*(uint *)(param_1 + 0xc) = uVar1;
			return 1;
	}

	// wasm func87117 -> ram:81a5385f  [CinemachineManager+<ZoomCam>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void CinemachineManager__ZoomCam_d__10_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56eb7c);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87118 -> ram:81a53887  [CinemachineManager+<ZoomCam>d__10::System.Collections.IEnumerator.get_Current]
	void CinemachineManager__ZoomCam_d__10_System_Collections_IEnumerator_get_Current(uint param_1)
	{
			uint uVar1;

			if (cRam00664b17 == '\0') {
				unnamed_function_1099(0x557a44);
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x569994);
				unnamed_function_1099(0x569998);
				cRam00664b17 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a44);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,param_1,uRam00569994,0);
			StaticEventHandler.CallNoteOpenedEvent(uVar1,0);
			uVar1 = unnamed_function_95402(uRam00559fb4);
			unnamed_function_82700(uVar1,param_1,uRam00569998,0);
			StaticEventHandler.CallPressRestEvent(uVar1,0);
			return;
	}
}

