// Map.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Map.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class Map : MonoBehaviour
{
	// Fields
	private string mapName; // 0x10
	private float repeatInterval; // 0x14
	private List<Enviroment> enviroments; // 0x18

	// Methods

	// wasm func86489 -> ram:81a38e40  [Map::Start]
	private void Start()
	{
			int iVar1;
			int iVar2;
			uint uVar3;

			if (cRam0066490e == '\0') {
				unnamed_function_1099(0x565d6c);
				unnamed_function_1099(0x576914);
				cRam0066490e = '\x01';
			}
			UnityEngine.MonoBehaviour.Invoke(this,uRam00576914,0);
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
			SoundEffectManager.PlaySoundEffect(uVar3,*(uint *)(iVar1 + 0x68),iVar2);
			return;
	}

	// wasm func86492 -> ram:81a391db  [Map::OnDisable]
	private void OnDisable()
	{
			int iVar1;
			int iVar2;
			uint uVar3;

			if (cRam0066490f == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam0066490f = '\x01';
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
			SoundEffectManager.Start(uVar3,*(uint *)(iVar1 + 100),iVar2);
			return;
	}

	// wasm func86484 -> ram:81a38800  [Map::PlayFlowingWaterSoundEffect]
	private void PlayFlowingWaterSoundEffect()
	{
			int iVar1;
			uint uVar2;

			if (cRam00664910 == '\0') {
				unnamed_function_1099(0x57be08);
				cRam00664910 = '\x01';
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

	// no recovered body in Map.c
	public int GetBossState()
	{
		// <no recovered body>
	}

	// wasm func86493 -> ram:81a3924f  [Map::.ctor]
	public Map()
	{
			bool bVar1;
			int iVar2;
			uint uVar3;
			int *piVar4;
			int iVar5;

			if (cRam00664911 == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x567f78);
				unnamed_function_1099(0x567ea8);
				unnamed_function_1099(0x56ad9c);
				cRam00664911 = '\x01';
			}
			uVar3 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ea8);
			this.mapName = uVar3;
			uVar3 = unnamed_function_65372(this,uRam00567f78);
			this.repeatInterval = uVar3;
			uVar3 = unnamed_function_95402(iRam00559fb4);
			unnamed_function_82700(uVar3,this,uRam0056ad9c,0);
			if (cRam006649a9 == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x55c894);
				cRam006649a9 = '\x01';
			}
			iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 4);
			while ((piVar4 = (int *)unnamed_function_85158(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
						 (iRam00559fb4 == *piVar4))) {
				iVar5 = System.Net.WebOperation.ctor(*(int *)(iRam0055c894 + 0x5c) + 4,piVar4,iVar2);
				bVar1 = iVar2 == iVar5;
				iVar2 = iVar5;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(piVar4,iRam00559fb4);
			do {
				halt_trap();
			} while( true );
	}
}

