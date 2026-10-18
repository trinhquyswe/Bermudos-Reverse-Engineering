// GameManager.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in GameManager.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class GameManager : SingletonMonobehaviour<GameManager>
{
	// Fields
	public Player player; // 0x10
	public EnemyManagerDetailsSO[] enemyManagerDetailsSO; // 0x14
	public SaveFileSetup saveFileSetup; // 0x18
	public GameState gameState; // 0x1C
	public Action<GameState> OnGameStateChange; // 0x20
	public Image beginSreen; // 0x24
	private Image wonPanel; // 0x28
	private Image wonScreen; // 0x2C
	private TextMeshProUGUI wonText; // 0x30
	private GameObject healthBar; // 0x34
	private GameObject staminaBar; // 0x38
	private GameObject skillBar; // 0x3C

	// Methods

	// wasm func87119 -> ram:81a5390d  [GameManager::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam00664b18 == '\0') {
				unnamed_function_1099(0x557a44);
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x569994);
				unnamed_function_1099(0x569998);
				cRam00664b18 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a44);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam00569994,0);
			StaticEventHandler.add_OnPlayerChanged(uVar1,0);
			uVar1 = unnamed_function_95402(uRam00559fb4);
			unnamed_function_82700(uVar1,this,uRam00569998,0);
			StaticEventHandler.add_OnRestInBonfire(uVar1,0);
			return;
	}

	// wasm func87120 -> ram:81a53992  [GameManager::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			this.player = *(uint *)(param_2 + 8);
			return;
	}

	// no recovered body in GameManager.c
	private void StaticEventHandler_OnPlayerChanged(OnPlayerChangedEventArgs onPlayerChangedEventArgs)
	{
		// <no recovered body>
	}

	// wasm func87123 -> ram:81a53aba  [GameManager::StaticEventHandler_OnRestInBonfire]
	private void StaticEventHandler_OnRestInBonfire()
	{
			uint uVar1;

			if (cRam00664b19 == '\0') {
				unnamed_function_1099(0x567f1c);
				unnamed_function_1099(0x565d74);
				cRam00664b19 = '\x01';
			}
			SingletonMonobehaviour.ctor(this,uRam00565d74);
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f1c);
			this.saveFileSetup = uVar1;
			return;
	}

	// wasm func87124 -> ram:81a53b05  [GameManager::Awake]
	protected override void Awake()
	{
			uint uVar1;
			int iVar2;
			uint uVar3;
			uint *puVar4;
			ulong uStack_60;
			ulong uStack_58;
			ulong uStack_50;
			uint uStack_48;
			ulong uStack_40;
			uint uStack_38;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			uint uStack_18;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam00664b1a == '\0') {
				unnamed_function_1099(0x569984);
				unnamed_function_1099(0x56c1c8);
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d338);
				unnamed_function_1099(0x56d374);
				unnamed_function_1099(0x579c00);
				unnamed_function_1099(0x577c74);
				unnamed_function_1099(0x573478);
				unnamed_function_1099(0x57337c);
				cRam00664b1a = '\x01';
			}
			uVar1 = Esper.ESave.SaveFileSetup.GenerateAESTokens(this.saveFileSetup,0);
			iVar2 = unnamed_function_60732(uVar1,uRam0057337c,0);
			if (iVar2 != 0) {
				uVar1 = Esper.ESave.SaveFileSetup.GenerateAESTokens(this.saveFileSetup,0);
				uVar1 = Esper.ESave.SaveFile.HasData(uVar1,uRam0057337c,0,uRam0056c1c8);
				iVar2 = System.String.Equals(uVar1,uRam00573478,0);
				if (iVar2 == 0) {
					iVar2 = System.String.Equals(uVar1,uRam00577c74,0);
					if (iVar2 == 0) goto code_r0x81a53cbf;
					uVar1 = System.Linq.Enumerable.Count(this.player,0);
					uStack_40 = *(ulong *)(*(int *)(this.player + 0x58) + 0x18);
					uStack_28 = 0;
					uStack_38 = 0;
					uStack_30 = uStack_40;
					UnityEngine.Transform.ctor(uVar1,&uStack_40,0);
					puVar4 = (uint *)0x577c74;
					iVar2 = *(int *)(iRam0055c4f8 + 0x74);
				}
				else {
					uVar1 = System.Linq.Enumerable.Count(this.player,0);
					uStack_50 = *(ulong *)(*(int *)(this.player + 0x58) + 0x10);
					uStack_18 = 0;
					uStack_48 = 0;
					uStack_20 = uStack_50;
					UnityEngine.Transform.ctor(uVar1,&uStack_50,0);
					puVar4 = (uint *)0x573478;
					iVar2 = *(int *)(iRam0055c4f8 + 0x74);
				}
				if (iVar2 == 0) {
					unnamed_function_94848(iRam0055c4f8);
				}
				UnityEngine.SceneManagement.SceneManager.remove_sceneUnloaded(*puVar4,1,0);
			}
		code_r0x81a53cbf:
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(&uStack_60);
			UnityEngine.Material.SetInt(*(uint *)(iVar2 + 0x2c),uRam00579c00,0,0);
			uStack_8 = 0x3f80000000000000;
			uStack_10 = 0;
			iVar2 = **(int **)(this + 0x24);
			uStack_58 = 0x3f80000000000000;
			uStack_60 = 0;
			(**(code **)((ulong)*(uint *)(iVar2 + 0x178) * 4))
								(*(int **)(this + 0x24),&uStack_60,*(uint *)(iVar2 + 0x17c));
			uVar1 = unnamed_function_44644(this.beginSreen,0);
			unnamed_function_44686(uVar1,1,0);
			uVar1 = DG.Tweening.DOTweenModuleUI.DOColor_1(this.beginSreen,0,0x3fc00000,0);
			uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar1,4,uRam0056d374);
			uVar3 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar3,this,uRam00569984,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar1,uVar3,uRam0056d338);
			return;
	}

	// wasm func86951 -> ram:81a4c5a0  [GameManager::TransitionToGame]
	public void TransitionToGame()
	{
		int param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;

			if (cRam00664b1b == '\0') {
				unnamed_function_1099(0x565d58);
				cRam00664b1b = '\x01';
			}
			this.gameState = param_2;
			if (param_2 == 0) {
				if (cRam00664b1c == '\0') {
					unnamed_function_1099(0x57be08);
					cRam00664b1c = '\x01';
				}
				UnityEngine.PlayerPrefs.TrySetSetString(uRam0057be08,0,0);
				GameManager.Instruct(this,this);
			}
			else if (param_2 != 1) {
				if (param_2 == 2) {
					unnamed_function_44686(this.healthBar,1,0);
					unnamed_function_44686(this.staminaBar,1,0);
					unnamed_function_44686(this.skillBar,1,0);
				}
				else if (param_2 == 3) {
					if (cRam00664b1f == '\0') {
						unnamed_function_1099(0x567f18);
						cRam00664b1f = '\x01';
					}
					uVar1 = UnityEngine.GameObject.get_activeInHierarchy
														(this.player,uRam00567f18);
					UnityEngine.Rigidbody2D.get_mass(uVar1,0x3f000000,0);
				}
				else if (param_2 == 4) {
					if (cRam00664b20 == '\0') {
						unnamed_function_1099(0x567f18);
						cRam00664b20 = '\x01';
					}
					uVar1 = UnityEngine.GameObject.get_activeInHierarchy
														(this.player,uRam00567f18);
					UnityEngine.Rigidbody2D.get_mass(uVar1,0x49742400,0);
					iVar2 = *(int *)(iRam00565d58 + 0x10);
					if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
						iVar2 = System.Threading.Monitor.Enter_1(iVar2);
					}
					iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
					if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
						iVar2 = System.Threading.Monitor.Enter_1(iVar2);
					}
					MusicManager.PlayBackgroundMusic(**(uint **)(iVar2 + 0x5c),0);
					iVar2 = *(int *)(iRam00565d58 + 0x10);
					if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
						iVar2 = System.Threading.Monitor.Enter_1(iVar2);
					}
					iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
					if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
						iVar2 = System.Threading.Monitor.Enter_1(iVar2);
					}
					uVar1 = **(uint **)(iVar2 + 0x5c);
					iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(this);
					MusicManager.StopPlayingBackgroundMusic
										(uVar1,*(uint *)(iVar2 + 0x50),0x3f000000,0x3f000000,0);
				}
				else if (param_2 == 5) {
					if (cRam00664b1c == '\0') {
						unnamed_function_1099(0x57be08);
						cRam00664b1c = '\x01';
					}
					UnityEngine.PlayerPrefs.TrySetSetString(uRam0057be08,1,0);
					GameManager.SaveBossState(this,this);
				}
			}
			iVar2 = this.OnGameStateChange;
			if (iVar2 != 0) {
				(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
									(*(uint *)(iVar2 + 0x20),param_2,*(uint *)(iVar2 + 0x14));
			}
			return;
	}

	// wasm func87125 -> ram:81a53d9e  [GameManager::HandleGameState]
	public void HandleGameState(GameState gameState)
	{
			if (cRam00664b1c == '\0') {
				unnamed_function_1099(0x57be08);
				cRam00664b1c = '\x01';
			}
			UnityEngine.PlayerPrefs.TrySetSetString(uRam0057be08,this,0);
			return;
	}

	// wasm func86953 -> ram:81a4c8c8  [GameManager::SaveBossState]
	private void SaveBossState(int isBossDefeated)
	{
			uint uVar1;
			uint uVar2;
			int iVar3;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam00664b1d == '\0') {
				unnamed_function_1099(0x569988);
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d338);
				unnamed_function_1099(0x5762e0);
				cRam00664b1d = '\x01';
			}
			if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c4f8);
			}
			UnityEngine.SceneManagement.SceneManager.LoadScene_4(uRam005762e0,0);
			uVar1 = unnamed_function_44644(this.wonPanel,0);
			unnamed_function_44686(uVar1,1,0);
			uStack_8 = 0;
			uStack_10 = 0;
			iVar3 = **(int **)(this + 0x28);
			uStack_18 = 0;
			uStack_20 = 0;
			(**(code **)((ulong)*(uint *)(iVar3 + 0x178) * 4))
								(*(int **)(this + 0x28),&uStack_20,*(uint *)(iVar3 + 0x17c));
			uVar1 = DG.Tweening.DOTweenModuleUI.DOColor_1
												(this.wonPanel,0x3f800000,0x3f800000,0);
			uVar2 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar2,this,uRam00569988,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar1,uVar2,uRam0056d338);
			return;
	}

	// wasm func87126 -> ram:81a53dcf  [GameManager::WonScene]
	private void WonScene()
	{
			unnamed_function_44686(this.healthBar,1,0);
			unnamed_function_44686(this.staminaBar,1,0);
			unnamed_function_44686(this.skillBar,1,0);
			return;
	}

	// wasm func86952 -> ram:81a4c7b4  [GameManager::Instruct]
	private void Instruct()
	{
			int iVar1;
			uint uVar2;
			uint uVar3;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam00664b1e == '\0') {
				unnamed_function_1099(0x56997c);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d338);
				unnamed_function_1099(0x579c00);
				cRam00664b1e = '\x01';
			}
			unnamed_function_44686(this.healthBar,0,0);
			unnamed_function_44686(this.staminaBar,0,0);
			unnamed_function_44686(this.skillBar,0,0);
			iVar1 = UnityEngine.MonoBehaviour.InvokeRepeating(this);
			UnityEngine.Material.SetInt(*(uint *)(iVar1 + 0x2c),uRam00579c00,0,0);
			uVar2 = unnamed_function_44644(this.beginSreen,0);
			unnamed_function_44686(uVar2,1,0);
			uStack_8 = 0x3f80000000000000;
			uStack_18 = 0x3f80000000000000;
			uStack_10 = 0;
			uStack_20 = 0;
			uVar2 = DG.Tweening.DOTweenModuleUI.DOFade_1
												(this.beginSreen,&uStack_20,0x40400000,0);
			uVar3 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar3,this,uRam0056997c,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar2,uVar3,uRam0056d338);
			return;
	}

	// wasm func87127 -> ram:81a53df9  [GameManager::Intro]
	public void Intro()
	{
			uint uVar1;

			if (cRam00664b1f == '\0') {
				unnamed_function_1099(0x567f18);
				cRam00664b1f = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy
												(this.player,uRam00567f18);
			UnityEngine.Rigidbody2D.get_mass(uVar1,0x3f000000,0);
			return;
	}

	// wasm func87128 -> ram:81a53e36  [GameManager::Play]
	public void Play()
	{
			uint uVar1;

			if (cRam00664b20 == '\0') {
				unnamed_function_1099(0x567f18);
				cRam00664b20 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy
												(this.player,uRam00567f18);
			UnityEngine.Rigidbody2D.get_mass(uVar1,0x49742400,0);
			return;
	}

	// no recovered body in GameManager.c
	public void EngagedBoss()
	{
		// <no recovered body>
	}

	// wasm func87122 -> ram:81a539ab  [GameManager::Start]
	private void Start()
	{
			int iVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			uint uVar6;
			int iVar7;

			iVar7 = 0;
			if (cRam00664b21 == '\0') {
				unnamed_function_1099(0x55aca4);
				unnamed_function_1099(0x564118);
				unnamed_function_1099(0x56c1a0);
				cRam00664b21 = '\x01';
			}
			iVar3 = this.enemyManagerDetailsSO;
			if (0 < *(int *)(iVar3 + 0xc)) {
				do {
					iVar4 = *(int *)(iVar3 + iVar7 * 4 + 0x10);
					uVar5 = *(uint *)(iVar4 + 0x10);
					uVar6 = *(uint *)(*(int *)(iVar4 + 0x14) + 0xc);
					iVar1 = unnamed_function_95402(uRam0055aca4);
					if (cRam00664afe == '\0') {
						unnamed_function_1099(0x562b48);
						unnamed_function_1099(0x558dfc);
						cRam00664afe = '\x01';
					}
					uVar2 = unnamed_function_95402(uRam00558dfc);
					System.Collections.Generic.List.cctor(uVar2,uRam00562b48);
					*(uint *)(iVar1 + 0x10) = uVar2;
					*(uint *)(iVar1 + 0xc) = uVar6;
					*(uint *)(iVar1 + 8) = uVar5;
					EnemyManagerData.ctor(iVar1,0xffffffff,iVar1);
					uVar5 = Esper.ESave.SaveFileSetup.GenerateAESTokens(this.saveFileSetup,0);
					Esper.ESave.SaveFile.AddOrUpdateData_5
										(uVar5,*(uint *)(iVar4 + 0x18),iVar1,uRam0056c1a0);
					uVar5 = Esper.ESave.SaveFileSetup.GenerateAESTokens(this.saveFileSetup,0);
					Esper.ESave.SaveFile.SetSetupData(uVar5,0,0);
					iVar7 = iVar7 + 1;
				} while (iVar7 < *(int *)(iVar3 + 0xc));
			}
			return;
	}

	// wasm func87129 -> ram:81a53e73  [GameManager::InitializeEnemyManagerData]
	public void InitializeEnemyManagerData()
	{
			if (cRam00664b22 == '\0') {
				unnamed_function_1099(0x565d70);
				cRam00664b22 = '\x01';
			}
			System.Collections.Generic.ShortEnumEqualityComparer.GetHashCode
								(this,uRam00565d70);
			return;
	}

	// wasm func87130 -> ram:81a53ea2  [GameManager::.ctor]
	public GameManager()
	{
			uint uVar1;
			int iVar2;

			uVar1 = unnamed_function_44644(this.beginSreen,0);
			unnamed_function_44686(uVar1,0,0);
			if (cRam00664b1b == '\0') {
				unnamed_function_1099(0x565d58);
				cRam00664b1b = '\x01';
			}
			this.gameState = 3;
			if (cRam00664b1f == '\0') {
				unnamed_function_1099(0x567f18);
				cRam00664b1f = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy
												(this.player,uRam00567f18);
			UnityEngine.Rigidbody2D.get_mass(uVar1,0x3f000000,0);
			iVar2 = this.OnGameStateChange;
			if (iVar2 != 0) {
				(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
									(*(uint *)(iVar2 + 0x20),3,*(uint *)(iVar2 + 0x14));
			}
			return;
	}

	// wasm func87131 -> ram:81a53f36  [GameManager::<TransitionToGame>b__17_0]
	private void _TransitionToGame_b__17_0()
	{
			uint uVar1;
			int iVar2;
			uint uVar3;

			if (cRam00664b23 == '\0') {
				unnamed_function_1099(0x567f34);
				unnamed_function_1099(0x56998c);
				unnamed_function_1099(0x559830);
				unnamed_function_1099(0x566810);
				cRam00664b23 = '\x01';
			}
			uVar1 = unnamed_function_44644(this.wonText,0);
			unnamed_function_44686(uVar1,1,0);
			iVar2 = UnityEngine.GameObject.get_activeInHierarchy
												(this.wonText,uRam00567f34);
			UnityEngine.Events.UnityEventBase.RemoveListener(*(uint *)(iVar2 + 0x34),0);
			uVar3 = *(uint *)(iVar2 + 0x34);
			uVar1 = unnamed_function_95402(uRam00559830);
			unnamed_function_71904(uVar1,this,uRam0056998c,0);
			UnityEngine.Events.UnityEvent.ctor(uVar3,uVar1,uRam00566810);
			return;
	}

	// wasm func87132 -> ram:81a53fd8  [GameManager::<WonScene>b__20_0]
	private void _WonScene_b__20_0()
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664b24 == '\0') {
				unnamed_function_1099(0x569990);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d338);
				cRam00664b24 = '\x01';
			}
			uVar1 = DG.Tweening.DOTweenModuleUI.DOColor(this.wonText,0,0x40400000,0);
			uVar2 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar2,this,uRam00569990,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar1,uVar2,uRam0056d338);
			return;
	}

	// wasm func87133 -> ram:81a5404f  [GameManager::<WonScene>b__20_1]
	private void _WonScene_b__20_1(TMPWriter tMP)
	{
			uint uVar1;
			int iVar2;
			uint uVar3;

			if (cRam00664b25 == '\0') {
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d344);
				unnamed_function_1099(0x56f268);
				unnamed_function_1099(0x55df64);
				cRam00664b25 = '\x01';
			}
			uVar1 = unnamed_function_44644(this.wonText,0);
			unnamed_function_44686(uVar1,0,0);
			uVar1 = unnamed_function_44644(this.wonScreen,0);
			unnamed_function_44686(uVar1,1,0);
			uVar1 = System.Linq.Enumerable.Count(this.wonScreen,0);
			uVar1 = DG.Tweening.ShortcutExtensions.DOScale(uVar1,0,0x40400000,0);
			if (*(int *)(iRam0055df64 + 0x74) == 0) {
				unnamed_function_94848(iRam0055df64);
			}
			iVar2 = *(int *)(*(int *)(iRam0055df64 + 0x5c) + 4);
			if (iVar2 == 0) {
				if (*(int *)(iRam0055df64 + 0x74) == 0) {
					unnamed_function_94848(iRam0055df64);
				}
				uVar3 = **(uint **)(iRam0055df64 + 0x5c);
				iVar2 = unnamed_function_95402(uRam0055cd74);
				DG.Tweening.Color2.op_Multiply(iVar2,uVar3,uRam0056f268,0);
				*(int *)(*(int *)(iRam0055df64 + 0x5c) + 4) = iVar2;
			}
			DG.Tweening.TweenSettingsExtensions.From_6(uVar1,iVar2,uRam0056d344);
			return;
	}

	// wasm func87134 -> ram:81a5415b  [GameManager::<WonScene>b__20_2]
	private void _WonScene_b__20_2()
	{
			uint uVar1;
			int iVar2;
			uint uVar3;

			if (cRam00664b26 == '\0') {
				unnamed_function_1099(0x569980);
				unnamed_function_1099(0x56c1b0);
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d33c);
				unnamed_function_1099(0x579c00);
				unnamed_function_1099(0x573478);
				unnamed_function_1099(0x57337c);
				cRam00664b26 = '\x01';
			}
			if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c4f8);
			}
			UnityEngine.SceneManagement.SceneManager.remove_sceneUnloaded(uRam00573478,1,0);
			uVar1 = Esper.ESave.SaveFileSetup.GenerateAESTokens(this.saveFileSetup,0);
			Esper.ESave.SaveFile.AddOrUpdateData_5(uVar1,uRam0057337c,uRam00573478,uRam0056c1b0);
			uVar1 = Esper.ESave.SaveFileSetup.GenerateAESTokens(this.saveFileSetup,0);
			Esper.ESave.SaveFile.SetSetupData(uVar1,0,0);
			uVar1 = unnamed_function_42591(uRam00573478,0);
			UnityEngine.PlayerPrefs.GetFloat_1(uRam0057337c,uVar1,0);
			UnityEngine.PlayerPrefs.DeleteAll(0);
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(this);
			uVar1 = DG.Tweening.ShortcutExtensions.DOFade_2
												(*(uint *)(iVar2 + 0x2c),0x3f800000,uRam00579c00,0x40000000,0);
			uVar3 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar3,this,uRam00569980,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar1,uVar3,uRam0056d33c);
			return;
	}

	// wasm func87135 -> ram:81a5428e  [GameManager::<Intro>b__22_0]
	private void _Intro_b__22_0()
	{
			uint uVar1;
			int iVar2;

			uVar1 = unnamed_function_44644(this.beginSreen,0);
			unnamed_function_44686(uVar1,0,0);
			if (cRam00664b1b == '\0') {
				unnamed_function_1099(0x565d58);
				cRam00664b1b = '\x01';
			}
			this.gameState = 1;
			iVar2 = this.OnGameStateChange;
			if (iVar2 != 0) {
				(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
									(*(uint *)(iVar2 + 0x20),1,*(uint *)(iVar2 + 0x14));
			}
			return;
	}

	// wasm func87136 -> ram:81a542e7  [GameManager::<Intro>b__22_1]
	private void _Intro_b__22_1()
	{
			uint uVar1;

			if (cRam00664b27 == '\0') {
				unnamed_function_1099(0x55df64);
				cRam00664b27 = '\x01';
			}
			uVar1 = unnamed_function_95402(iRam0055df64);
			**(uint **)(iRam0055df64 + 0x5c) = uVar1;
			return;
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func87137 -> ram:81a54327  [GameManager+<>c::.ctor]
	void GameManager___c__ctor()
	{
			int iVar1;

			if (cRam00664b28 == '\0') {
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x565d58);
				unnamed_function_1099(0x575bac);
				cRam00664b28 = '\x01';
			}
			iVar1 = *(int *)(iRam00565d58 + 0x10);
			if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
				iVar1 = System.Threading.Monitor.Enter_1(iVar1);
			}
			iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
			if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
				iVar1 = System.Threading.Monitor.Enter_1(iVar1);
			}
			MusicManager.Start(**(uint **)(iVar1 + 0x5c),0);
			if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c4f8);
			}
			UnityEngine.SceneManagement.SceneManager.LoadScene_1(uRam00575bac,0);
			return;
	}
}

