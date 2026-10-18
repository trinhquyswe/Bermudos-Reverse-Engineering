// MainMenu.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in MainMenu.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class MainMenu : MonoBehaviour
{
	// Fields
	private Button newGameBtn; // 0x10
	private Button continueGameBtn; // 0x14
	private Button settingsBtn; // 0x18
	private Button exitGameBtn; // 0x1C
	private Image SettingPanel; // 0x20
	private Image controlsPanel; // 0x24
	private Image audioPanel; // 0x28
	private Intro intro; // 0x2C
	private SaveFileSetup saveFileSetup; // 0x30
	private bool isfirstTime; // 0x34

	// Methods

	// wasm func86453 -> ram:81a37147  [MainMenu::Awake]
	private void Awake()
	{
			byte uVar1;
			uint uVar2;
			int iVar3;
			uint uVar4;
			byte uStack_2;
			byte uStack_1;

			if (cRam006648f6 == '\0') {
				unnamed_function_1099(0x55a328);
				unnamed_function_1099(0x56ab34);
				unnamed_function_1099(0x56ad60);
				unnamed_function_1099(0x56ad64);
				unnamed_function_1099(0x56ad68);
				unnamed_function_1099(0x56ad6c);
				unnamed_function_1099(0x56c19c);
				unnamed_function_1099(0x55cef8);
				unnamed_function_1099(0x574744);
				cRam006648f6 = '\x01';
			}
			uVar2 = Esper.ESave.SaveFileSetup.GenerateAESTokens(this.saveFileSetup,0);
			iVar3 = unnamed_function_60732(uVar2,uRam00574744,0);
			uVar2 = Esper.ESave.SaveFileSetup.GenerateAESTokens(this.saveFileSetup,0);
			if (iVar3 == 0) {
				unnamed_function_60812(uVar2,uRam00574744,1,uRam0056c19c);
				uVar2 = Esper.ESave.SaveFileSetup.GenerateAESTokens(this.saveFileSetup,0);
				Esper.ESave.SaveFile.SetSetupData(uVar2,0,0);
				this.isfirstTime = 1;
				iVar3 = UnityEngine.PlayerPrefs.GetString_1(uRam00574744,0);
				if (iVar3 == 0) {
					uStack_2 = this.isfirstTime;
					uVar2 = unnamed_function_1113(uRam0055a328,&uStack_2);
					uVar2 = unnamed_function_42591(uVar2,0);
					UnityEngine.PlayerPrefs.GetFloat_1(uRam00574744,uVar2,0);
					UnityEngine.PlayerPrefs.DeleteAll(0);
				}
				else {
					uVar2 = UnityEngine.PlayerPrefs.GetString(uRam00574744,0);
					uVar1 = Newtonsoft.Json.Serialization.JsonTypeReflector.GetCachedAttribute
														(uVar2,uRam0056ab34);
					this.isfirstTime = uVar1;
				}
			}
			else {
				unnamed_function_60812(uVar2,uRam00574744,0,uRam0056c19c);
				uVar2 = Esper.ESave.SaveFileSetup.GenerateAESTokens(this.saveFileSetup,0);
				Esper.ESave.SaveFile.SetSetupData(uVar2,0,0);
				this.isfirstTime = 0;
				iVar3 = UnityEngine.PlayerPrefs.GetString_1(uRam00574744,0);
				if (iVar3 == 0) {
					uStack_1 = this.isfirstTime;
					uVar2 = unnamed_function_1113(uRam0055a328,&uStack_1);
					uVar2 = unnamed_function_42591(uVar2,0);
					UnityEngine.PlayerPrefs.GetFloat_1(uRam00574744,uVar2,0);
					UnityEngine.PlayerPrefs.DeleteAll(0);
				}
				else {
					uVar2 = UnityEngine.PlayerPrefs.GetString(uRam00574744,0);
					uVar1 = Newtonsoft.Json.Serialization.JsonTypeReflector.GetCachedAttribute
														(uVar2,uRam0056ab34);
					this.isfirstTime = uVar1;
				}
			}
			uVar4 = *(uint *)(this.newGameBtn + 0xb4);
			uVar2 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar2,this,uRam0056ad68,0);
			UnityEngine.Events.UnityEvent.ctor(uVar4,uVar2,0);
			uVar4 = *(uint *)(this.continueGameBtn + 0xb4);
			uVar2 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar2,this,uRam0056ad60,0);
			UnityEngine.Events.UnityEvent.ctor(uVar4,uVar2,0);
			uVar4 = *(uint *)(this.settingsBtn + 0xb4);
			uVar2 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar2,this,uRam0056ad6c,0);
			UnityEngine.Events.UnityEvent.ctor(uVar4,uVar2,0);
			uVar4 = *(uint *)(this.exitGameBtn + 0xb4);
			uVar2 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar2,this,uRam0056ad64,0);
			UnityEngine.Events.UnityEvent.ctor(uVar4,uVar2,0);
			return;
	}

	// wasm func86454 -> ram:81a373ef  [MainMenu::Start]
	private void Start()
	{
			int iVar1;
			int iVar2;
			uint uVar3;

			if (cRam006648f7 == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam006648f7 = '\x01';
			}
			iVar2 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar3 = **(uint **)(iVar2 + 0x5c);
			iVar1 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			SoundEffectManager.Start(uVar3,*(uint *)(iVar1 + 0x60),iVar2);
			uVar3 = unnamed_function_44644(this.intro,0);
			unnamed_function_44686(uVar3,1,0);
			return;
	}

	// wasm func86455 -> ram:81a37476  [MainMenu::OnNewGameClick]
	private void OnNewGameClick()
	{
			uint uVar1;
			int iVar2;
			int iVar3;

			if (cRam006648f8 == '\0') {
				unnamed_function_1099(0x56ad5c);
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x565d6c);
				unnamed_function_1099(0x55984c);
				unnamed_function_1099(0x575bb0);
				cRam006648f8 = '\x01';
			}
			if (this.isfirstTime == '\0') {
				if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c4f8);
				}
				UnityEngine.SceneManagement.SceneManager.LoadScene_1(uRam00575bb0,0);
				uVar1 = unnamed_function_95402(uRam0055984c);
				unnamed_function_71914(uVar1,this,uRam0056ad5c,0);
				UnityEngine.SceneManagement.SceneManager.LoadFirstScene_Internal(uVar1,0);
				iVar3 = *(int *)(iRam00565d6c + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				uVar1 = **(uint **)(iVar3 + 0x5c);
				iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
				SoundEffectManager.Start(uVar1,*(uint *)(iVar2 + 0x60),iVar3);
			}
			return;
	}

	// wasm func86456 -> ram:81a3755e  [MainMenu::OnContinueGameClick]
	private void OnContinueGameClick()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;
			uint[] auStack_8 = new uint[2];

			auStack_8[0] = param_2;
			if (cRam006648f9 == '\0') {
				unnamed_function_1099(0x56ad5c);
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x55984c);
				unnamed_function_1099(0x575bb0);
				cRam006648f9 = '\x01';
			}
			uVar1 = UnityEngine.SceneManagement.Scene.IsValid(auStack_8,0);
			iVar2 = System.String.Equals(uVar1,uRam00575bb0,0);
			if ((iVar2 != 0) && (iVar2 = UnityEngine.SceneManagement.Scene.get_name(auStack_8,0), iVar2 != 0)
				 ) {
				iVar2 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				GameManager.Awake(**(uint **)(iVar2 + 0x5c),0);
				uVar1 = unnamed_function_95402(uRam0055984c);
				unnamed_function_71914(uVar1,this,uRam0056ad5c,0);
				if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c4f8);
				}
				UnityEngine.SceneManagement.SceneManager.add_sceneLoaded(uVar1,0);
			}
			return;
	}

	// wasm func86457 -> ram:81a37668  [MainMenu::LoadContineGameScene]
	private void LoadContineGameScene(Scene scene, LoadSceneMode mode)
	{
			uint uVar1;
			int iVar2;
			int iVar3;

			if (cRam006648fa == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam006648fa = '\x01';
			}
			uVar1 = unnamed_function_44644(this.SettingPanel,0);
			unnamed_function_44686(uVar1,1,0);
			uVar1 = unnamed_function_44644(this.controlsPanel,0);
			unnamed_function_44686(uVar1,0,0);
			uVar1 = unnamed_function_44644(this.audioPanel,0);
			unnamed_function_44686(uVar1,0,0);
			iVar3 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			uVar1 = **(uint **)(iVar3 + 0x5c);
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			SoundEffectManager.Start(uVar1,*(uint *)(iVar2 + 0x60),iVar3);
			return;
	}

	// wasm func86458 -> ram:81a37715  [MainMenu::OnSettingsClick]
	private void OnSettingsClick()
	{
			int iVar1;
			int iVar2;
			uint uVar3;

			if (cRam006648fb == '\0') {
				unnamed_function_1099(0x55a090);
				unnamed_function_1099(0x565d6c);
				cRam006648fb = '\x01';
			}
			iVar2 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar3 = **(uint **)(iVar2 + 0x5c);
			iVar1 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			SoundEffectManager.Start(uVar3,*(uint *)(iVar1 + 0x60),iVar2);
			if (*(int *)(iRam0055a090 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a090);
			}
			UnityEngine.Application.Quit(0);
			return;
	}

	// wasm func86459 -> ram:81a377ad  [MainMenu::OnExitGameClick]
	private void OnExitGameClick()
	{
			this.isfirstTime = 1;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func86460 -> ram:81a377bf  [MainMenu::.ctor]
	public MainMenu()
	{
			uint uVar1;

			if (cRam006648fc == '\0') {
				unnamed_function_1099(0x567f78);
				cRam006648fc = '\x01';
			}
			uVar1 = unnamed_function_65372(this.newGameBtn,uRam00567f78);
			this.exitGameBtn = uVar1;
			uVar1 = unnamed_function_65372(this.continueGameBtn,uRam00567f78);
			this.SettingPanel = uVar1;
			return;
	}
}

