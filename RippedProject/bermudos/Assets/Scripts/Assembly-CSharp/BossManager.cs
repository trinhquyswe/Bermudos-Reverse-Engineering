// BossManager.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in BossManager.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class BossManager : MonoBehaviour
{
	// Fields
	private RectTransform backgroundrectTransform; // 0x10
	private GameObject bossUI; // 0x14
	private GameObject boss; // 0x18
	private GameObject bossContainer; // 0x1C
	private GameObject bossHealthBar; // 0x20

	// Methods

	// wasm func86954 -> ram:81a4c9dd  [BossManager::Start]
	private void Start()
	{
			uint uVar1;
			uint uVar2;
			ulong uStack_40;
			ulong uStack_38;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664ab3 == '\0') {
				unnamed_function_1099(0x56b554);
				unnamed_function_1099(0x55be2c);
				cRam00664ab3 = '\x01';
			}
			uVar2 = this.boss;
			if (cRam006603e8 == '\0') {
				unnamed_function_1099(0x55c148);
				cRam006603e8 = '\x01';
			}
			uStack_18 = (*(ulong **)(iRam0055c148 + 0x5c))[1];
			uStack_20 = **(ulong **)(iRam0055c148 + 0x5c);
			uVar1 = UnityEngine.GameObject.AddComponent(this.bossContainer,0);
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			uStack_28 = 0;
			uStack_8 = 0;
			uStack_38 = uStack_18;
			uStack_30 = 0x4170000041600000;
			uStack_40 = uStack_20;
			uStack_10 = 0x4170000041600000;
			UnityEngine.Quaternion.Internal_FromEulerRad(uVar2,&uStack_30,&uStack_40,uVar1,uRam0056b554);
			return;
	}

	// wasm func86950 -> ram:81a4c558  [BossManager::SpawnBoss]
	private void SpawnBoss()
	{
			int iVar1;
			uint uVar2;

			if (cRam00664ab4 == '\0') {
				unnamed_function_1099(0x57be08);
				cRam00664ab4 = '\x01';
			}
			iVar1 = UnityEngine.PlayerPrefs.GetString_1(uRam0057be08,0);
			if (iVar1 == 0) {
				uVar2 = 0;
			}
			else {
				uVar2 = UnityEngine.PlayerPrefs.GetInt(uRam0057be08,0);
			}
			return uVar2;
	}

	// wasm func86956 -> ram:81a4cb35  [BossManager::GetBossState]
	private int GetBossState()
	{
			uint uVar1;

			if (cRam00664ab5 == '\0') {
				unnamed_function_1099(0x55a7d4);
				cRam00664ab5 = '\x01';
			}
			uVar1 = this.backgroundrectTransform;
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar1,0,0);
			return;
	}

	// no recovered body in BossManager.c
	private void OnDestroy()
	{
		// <no recovered body>
	}

	// wasm func86957 -> ram:81a4cb7f  [BossManager::.ctor]
	public BossManager()
	{
			uint uVar1;
			uint uVar2;
			ulong uStack_20;
			uint uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664ab6 == '\0') {
				unnamed_function_1099(0x5678a0);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d344);
				unnamed_function_1099(0x56d380);
				cRam00664ab6 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.AddComponent(this.bossUI,0);
			uStack_8 = 0;
			uStack_18 = 0;
			uStack_10 = 0xc130000042480000;
			uStack_20 = 0xc130000042480000;
			uVar1 = DG.Tweening.ShortcutExtensions.DOMoveZ(uVar1,&uStack_20,0x3f800000,0,0);
			uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar1,0x1b,uRam0056d380);
			uVar2 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar2,this,uRam005678a0,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar1,uVar2,uRam0056d344);
			return;
	}

	// wasm func86958 -> ram:81a4cc52  [BossManager::<Start>b__5_0]
	private void _Start_b__5_0()
	{
			uint uVar1;
			uint uVar2;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			uint uStack_10;
			ulong uStack_8;

			if (cRam00664ab7 == '\0') {
				unnamed_function_1099(0x5678a4);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d344);
				unnamed_function_1099(0x56d37c);
				unnamed_function_1099(0x56d380);
				cRam00664ab7 = '\x01';
			}
			uStack_8 = 0x44fa000045098000;
			uStack_20 = 0x44fa000045098000;
			uVar1 = DG.Tweening.DOTweenModuleUI.DOPivotY
												(this.backgroundrectTransform,&uStack_20,0x3f800000,0,0);
			DG.Tweening.TweenSettingsExtensions.SetEase(uVar1,0x1a,uRam0056d37c);
			uVar1 = UnityEngine.GameObject.AddComponent(this.bossUI,0);
			uStack_10 = 0;
			uStack_28 = 0;
			uStack_18 = 0xc3c1800044e38000;
			uStack_30 = 0xc3c1800044e38000;
			uVar1 = DG.Tweening.ShortcutExtensions.DOMoveZ(uVar1,&uStack_30,0x3f800000,0,0);
			uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar1,0x1a,uRam0056d380);
			uVar2 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar2,this,uRam005678a4,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar1,uVar2,uRam0056d344);
			return;
	}

	// wasm func86959 -> ram:81a4cd76  [BossManager::<Start>b__5_1]
	private void _Start_b__5_1()
	{
			uint uVar1;

			BossManager.Start(this,this);
			uVar1 = unnamed_function_44644(this,0);
			unnamed_function_44686(uVar1,0,0);
			return;
	}

	// wasm func86960 -> ram:81a4cd92  [BossManager::<Start>b__5_2]
	private void _Start_b__5_2()
	{
			uint uVar1;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam00664ab8 == '\0') {
				unnamed_function_1099(0x565ccc);
				unnamed_function_1099(0x579c00);
				unnamed_function_1099(0x570ff8);
				unnamed_function_1099(0x579c04);
				cRam00664ab8 = '\x01';
			}
			UnityEngine.ColorUtility.DoTryParseHtmlColor(uRam00570ff8,this + 0x4c,0);
			uVar1 = unnamed_function_61203(*(uint *)(this + 0x2c),uRam00565ccc);
			UnityEngine.Material.SetInt(uVar1,uRam00579c00,*(uint *)(this + 0x44),0);
			*(uint *)(this + 0x48) = *(uint *)(this + 0x40);
			uVar1 = unnamed_function_61203(*(uint *)(this + 0x2c),uRam00565ccc);
			uStack_8 = *(ulong *)(this + 0x38);
			uStack_10 = *(ulong *)(this + 0x30);
			UnityEngine.Material.SetFloat(uVar1,uRam00579c04,&uStack_10,0);
			return;
	}
}

