// SoundEffectSO.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in SoundEffectSO.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[CreateAssetMenu(fileName = "SoundEffect_", menuName = "ScriptableObjects/Sounds/SoundEffect")]
public class SoundEffectSO : ScriptableObject
{
	// Fields
	public string soundEffectName; // 0xC
	public GameObject soundPrefab; // 0x10
	public AudioClip soundEffectClip; // 0x14
	public float soundEffectVolume; // 0x18
	public float soundEffectPitch; // 0x1C

	// Methods

	// wasm func86541 -> ram:81a3b70a  [SoundEffectSO::.ctor]
	public SoundEffectSO()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			int iVar5;

			if (cRam006649a6 == '\0') {
				unnamed_function_1099(0x557a10);
				unnamed_function_1099(0x55c894);
				cRam006649a6 = '\x01';
			}
			iVar3 = **(int **)(iRam0055c894 + 0x5c);
			while( true ) {
				iVar4 = 0;
				iVar5 = unnamed_function_85158(iVar3,this,0);
				uVar2 = uRam00557a10;
				if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557a10), iVar4 == 0)) break;
				iVar4 = System.Net.WebOperation.ctor(*(uint *)(iRam0055c894 + 0x5c),iVar4,iVar3);
				bVar1 = iVar3 == iVar4;
				iVar3 = iVar4;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar5,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

