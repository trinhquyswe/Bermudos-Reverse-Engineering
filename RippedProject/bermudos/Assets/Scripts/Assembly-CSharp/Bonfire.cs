// Bonfire.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Bonfire.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class Bonfire : MonoBehaviour
{
	// Fields
	private LayerMask playerLayer; // 0x10
	private SpriteRenderer icon; // 0x14
	private SoundEffectSO restSoundEffect; // 0x18

	// Methods

	// wasm func86927 -> ram:81a4b834  [Bonfire::Awake]
	private void Awake()
	{
			uint uVar1;

			if (cRam00664aa2 == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x567860);
				cRam00664aa2 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00559fb4);
			unnamed_function_82700(uVar1,this,uRam00567860,0);
			StaticEventHandler.CallItemChangedEvent(uVar1,0);
			return;
	}

	// wasm func86928 -> ram:81a4b883  [Bonfire::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam00664aa3 == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x567860);
				cRam00664aa3 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00559fb4);
			unnamed_function_82700(uVar1,this,uRam00567860,0);
			StaticEventHandler.add_OnPressRestEvent(uVar1,0);
			return;
	}

	// wasm func86929 -> ram:81a4b8d2  [Bonfire::OnDisable]
	private void OnDisable()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;
			uint uVar3;

			uVar3 = this.playerLayer;
			uVar1 = UnityEngine.Collision2D.get_rigidbody(param_2,0);
			uVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
			if (0 < (int)(uVar3 & 1 << (uVar2 & 0x1f))) {
				uVar1 = unnamed_function_44644(this.icon,0);
				unnamed_function_44686(uVar1,1,0);
			}
			return;
	}

	// wasm func86930 -> ram:81a4b907  [Bonfire::OnCollisionEnter2D]
	private void OnCollisionEnter2D(Collision2D collision)
	{
			uint uVar1;

			uVar1 = unnamed_function_44644(this.icon,0);
			unnamed_function_44686(uVar1,0,0);
			return;
	}

	// wasm func86931 -> ram:81a4b91e  [Bonfire::OnCollisionExit2D]
	private void OnCollisionExit2D(Collision2D collision)
	{
			uint uVar1;
			int iVar2;

			if (cRam00664aa4 == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam00664aa4 = '\x01';
			}
			uVar1 = unnamed_function_44644(this.icon,0);
			iVar2 = UnityEngine.GameObject.set_layer(uVar1,0);
			if (iVar2 != 0) {
				StaticEventHandler.remove_OnRestInBonfire(0);
				Bonfire.RestInBonfire(this,this);
				iVar2 = *(int *)(iRam00565d6c + 0x10);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				SoundEffectManager.Start(**(uint **)(iVar2 + 0x5c),this.restSoundEffect,0);
			}
			return;
	}

	// wasm func86932 -> ram:81a4b9ae  [Bonfire::RestInBonfire]
	public void RestInBonfire()
	{
			uint uVar1;
			int iVar2;

			if (cRam00664aa5 == '\0') {
				unnamed_function_1099(0x56c1b0);
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x577c74);
				unnamed_function_1099(0x57337c);
				cRam00664aa5 = '\x01';
			}
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar1 = Esper.ESave.SaveFileSetup.GenerateAESTokens
												(*(uint *)(**(int **)(iVar2 + 0x5c) + 0x18),0);
			Esper.ESave.SaveFile.AddOrUpdateData_5(uVar1,uRam0057337c,uRam00577c74,uRam0056c1b0);
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar1 = Esper.ESave.SaveFileSetup.GenerateAESTokens
												(*(uint *)(**(int **)(iVar2 + 0x5c) + 0x18),0);
			Esper.ESave.SaveFile.SetSetupData(uVar1,0,0);
			uVar1 = unnamed_function_42591(uRam00577c74,0);
			UnityEngine.PlayerPrefs.GetFloat_1(uRam0057337c,uVar1,0);
			UnityEngine.PlayerPrefs.DeleteAll(0);
			return;
	}

	// no recovered body in Bonfire.c
	private void SaveCheckPointAtBonfire()
	{
		// <no recovered body>
	}

	// wasm func86933 -> ram:81a4bac6  [Bonfire::.ctor]
	public Bonfire()
	{
			uint uVar1;

			if (cRam00664aa6 == '\0') {
				unnamed_function_1099(0x567f78);
				unnamed_function_1099(0x567ea8);
				cRam00664aa6 = '\x01';
			}
			uVar1 = unnamed_function_65372(this,uRam00567f78);
			this.icon = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ea8);
			this.playerLayer = uVar1;
			return;
	}
}

